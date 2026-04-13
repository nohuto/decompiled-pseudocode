/*
 * XREFs of ??0?$codecvt@GDH@std@@QEAA@AEBV_Locinfo@1@_K@Z @ 0x1800669D8
 * Callers:
 *     ?_Getcat@?$codecvt@GDH@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180069950 (-_Getcat@-$codecvt@GDH@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 * Callees:
 *     _Getcvt @ 0x180005EF8 (_Getcvt.c)
 */

__int64 __fastcall std::codecvt<unsigned short,char,int>::codecvt<unsigned short,char,int>(
        __int64 a1,
        __int64 a2,
        int a3)
{
  _Cvtvec *v4; // rax
  __int128 v5; // xmm0
  __int64 result; // rax
  _Cvtvec v7; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)a1 = &std::codecvt<unsigned short,char,int>::`vftable';
  v4 = Getcvt(&v7);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&v4->_Page;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&v4->_Isleadbyte[4];
  v5 = *(_OWORD *)&v4->_Isleadbyte[20];
  result = a1;
  *(_OWORD *)(a1 + 48) = v5;
  return result;
}
