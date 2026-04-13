/*
 * XREFs of ?_Reserve@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAX_K@Z @ 0x18005BA08
 * Callers:
 *     ?push_back@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18005E1D4 (-push_back@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800047E4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Reallocate@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAX_K@Z @ 0x18005B944 (-_Reallocate@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator.c)
 */

void __fastcall std::vector<std::wstring>::_Reserve(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rcx

  v2 = a1[1];
  if ( !((a1[2] - v2) >> 5) )
  {
    v3 = (v2 - *a1) >> 5;
    if ( v3 == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v4 = v3 + 1;
    v5 = (a1[2] - *a1) >> 5;
    v6 = 0LL;
    if ( 0x7FFFFFFFFFFFFFFLL - (v5 >> 1) >= v5 )
      v6 = v5 + (v5 >> 1);
    if ( v6 >= v4 )
      v4 = v6;
    std::vector<std::wstring>::_Reallocate(a1, v4);
  }
}
