/*
 * XREFs of ?_Getcat@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800B3628
 * Callers:
 *     ??$use_facet@V?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800B2F88 (--$use_facet@V-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004564 (--2@YAPEAX_K@Z.c)
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x18004B294 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x18004C938 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ?c_str@locale@std@@QEBAPEBDXZ @ 0x18005C364 (-c_str@locale@std@@QEBAPEBDXZ.c)
 *     ??0?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEAA@AEBV_Locinfo@1@_K@Z @ 0x1800B3064 (--0-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@QEAA@AEBV_Locinfo@1@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getcat(__int64 *a1, std::locale *a2)
{
  char v4; // bl
  void *v5; // rsi
  char *v6; // rax
  std::_Locinfo *v7; // rax
  __int64 v8; // rax
  void *v10[17]; // [rsp+20h] [rbp-88h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = operator new(0x60uLL);
    if ( v5 )
    {
      v6 = (char *)std::locale::c_str(a2);
      v7 = std::_Locinfo::_Locinfo((std::_Locinfo *)v10, v6);
      v4 = 1;
      v8 = std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>(
             (__int64)v5,
             (__int64)v7,
             0);
    }
    else
    {
      v8 = 0LL;
    }
    *a1 = v8;
    if ( (v4 & 1) != 0 )
      std::_Locinfo::~_Locinfo(v10);
  }
  return 5LL;
}
