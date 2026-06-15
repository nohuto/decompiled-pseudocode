/*
 * XREFs of ?_Getcat@?$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1801488C0
 * Callers:
 *     ??$use_facet@V?$collate@G@std@@@std@@YAAEBV?$collate@G@0@AEBVlocale@0@@Z @ 0x180143C6C (--$use_facet@V-$collate@G@std@@@std@@YAAEBV-$collate@G@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??0?$collate@G@std@@QEAA@AEBV_Locinfo@1@_K@Z @ 0x180144040 (--0-$collate@G@std@@QEAA@AEBV_Locinfo@1@_K@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1801441EC (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?name@locale@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180149728 (-name@locale@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::collate<unsigned short>::_Getcat(struct _Collvec **a1, __int64 a2)
{
  char v4; // bl
  struct _Collvec *v5; // rsi
  __int64 v6; // rax
  std::_Locinfo *v7; // rax
  struct _Collvec *v8; // rax
  _BYTE v10[104]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v11[32]; // [rsp+98h] [rbp-40h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = (struct _Collvec *)operator new(0x20uLL);
    if ( v5 )
    {
      v6 = std::locale::name(a2, v11);
      if ( *(_QWORD *)(v6 + 24) > 0xFuLL )
        v6 = *(_QWORD *)v6;
      v7 = (std::_Locinfo *)std::_Locinfo::_Locinfo((std::_Locinfo *)v10, (const char *)v6);
      v4 = 3;
      v8 = std::collate<unsigned short>::collate<unsigned short>(v5, v7);
    }
    else
    {
      v8 = 0LL;
    }
    *a1 = v8;
    if ( (v4 & 2) != 0 )
    {
      v4 &= ~2u;
      std::_Locinfo::~_Locinfo((std::_Locinfo *)v10);
    }
    if ( (v4 & 1) != 0 )
      std::string::~string((__int64)v11);
  }
  return 1LL;
}
