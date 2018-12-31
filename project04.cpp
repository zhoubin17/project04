/*
练习3.17
从cin读入一组词，并把他们存入一个vector对象，设法把所有的词都改为大写

完成时间：2018.12.31
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> vString;     // 创建了一个类型为string的vector对象
    string s;
    char cont = 'y';
    cout << "请输入第一个词：" << endl;
    while(cin >> s)
    {
        vString.push_back(s);      // 向vector对象（vString）中添加元素
        cout << "您要继续吗（y or n）?" << endl;
        cin >> cont;
        if(cont != 'y' && cont != 'Y')
            break;
        cout << "请输入下一个词：" << endl;
    }
    cout << "转换后的结果是：" << endl;
    for (auto &mem : vString)   // 使用范围for循环语句遍历vString中的每一个元素
    {
        for(auto &c : mem)      // 使用范围for循环语句遍历mem中的每一个字符
            c = toupper(c);     // toupper()函数改为大写字母形式
        cout << mem << endl;
    }

    return 0;
}