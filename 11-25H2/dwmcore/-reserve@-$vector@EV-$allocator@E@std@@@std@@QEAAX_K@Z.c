/*
 * XREFs of ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x18005B40C
 * Callers:
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18005B4B0 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1802B0CAC (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 *     DebugInspectSysMemSurface_NoOpt @ 0x1802B8294 (DebugInspectSysMemSurface_NoOpt.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18025984C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned char>::reserve(_QWORD *a1, SIZE_T a2)
{
  char *result; // rax
  __int64 v5; // rbp
  char *v6; // rsi

  result = (char *)(a1[2] - *a1);
  if ( a2 > (unsigned __int64)result )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength();
    v5 = a1[1] - *a1;
    v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(a2);
    memmove_0(v6, (const void *)*a1, a1[1] - *a1);
    if ( *a1 )
      std::_Deallocate<16,0>(*a1, a1[2] - *a1);
    *a1 = v6;
    a1[1] = &v6[v5];
    result = &v6[a2];
    a1[2] = &v6[a2];
  }
  return result;
}
