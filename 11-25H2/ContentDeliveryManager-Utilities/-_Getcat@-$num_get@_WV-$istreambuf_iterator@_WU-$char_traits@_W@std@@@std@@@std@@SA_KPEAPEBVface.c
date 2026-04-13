/*
 * XREFs of ?_Getcat@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18009E090
 * Callers:
 *     ??$use_facet@V?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18009D310 (--$use_facet@V-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAAE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x18004B090 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x18004C738 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ?c_str@locale@std@@QEBAPEBDXZ @ 0x18005BE88 (-c_str@locale@std@@QEBAPEBDXZ.c)
 */

__int64 __fastcall std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getcat(_QWORD *a1, std::locale *a2)
{
  char v4; // si
  _DWORD *v5; // rbx
  char *v6; // rax
  void *v8[14]; // [rsp+20h] [rbp-78h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = operator new(0x10uLL);
    if ( v5 )
    {
      v6 = (char *)std::locale::c_str(a2);
      std::_Locinfo::_Locinfo((std::_Locinfo *)v8, v6);
      v4 = 1;
      v5[2] = 0;
      *(_QWORD *)v5 = &std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::`vftable';
    }
    else
    {
      v5 = 0LL;
    }
    *a1 = v5;
    if ( (v4 & 1) != 0 )
      std::_Locinfo::~_Locinfo(v8);
  }
  return 4LL;
}
