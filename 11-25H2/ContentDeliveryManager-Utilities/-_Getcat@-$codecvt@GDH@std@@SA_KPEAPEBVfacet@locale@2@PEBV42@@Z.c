/*
 * XREFs of ?_Getcat@?$codecvt@GDH@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180069950
 * Callers:
 *     ??$use_facet@V?$codecvt@GDH@std@@@std@@YAAEBV?$codecvt@GDH@0@AEBVlocale@0@@Z @ 0x18000EF9C (--$use_facet@V-$codecvt@GDH@std@@@std@@YAAEBV-$codecvt@GDH@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x18004B090 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x18004C738 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ?c_str@locale@std@@QEBAPEBDXZ @ 0x18005BE88 (-c_str@locale@std@@QEBAPEBDXZ.c)
 *     ??0?$codecvt@GDH@std@@QEAA@AEBV_Locinfo@1@_K@Z @ 0x1800669D8 (--0-$codecvt@GDH@std@@QEAA@AEBV_Locinfo@1@_K@Z.c)
 */

__int64 __fastcall std::codecvt<unsigned short,char,int>::_Getcat(__int64 *a1, std::locale *a2)
{
  char v4; // bl
  void *v5; // rsi
  char *v6; // rax
  std::_Locinfo *v7; // rax
  __int64 v8; // rax
  void *v10[14]; // [rsp+20h] [rbp-78h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = operator new(0x40uLL);
    if ( v5 )
    {
      v6 = (char *)std::locale::c_str(a2);
      v7 = std::_Locinfo::_Locinfo((std::_Locinfo *)v10, v6);
      v4 = 1;
      v8 = std::codecvt<unsigned short,char,int>::codecvt<unsigned short,char,int>((__int64)v5, (__int64)v7, 0);
    }
    else
    {
      v8 = 0LL;
    }
    *a1 = v8;
    if ( (v4 & 1) != 0 )
      std::_Locinfo::~_Locinfo(v10);
  }
  return 2LL;
}
