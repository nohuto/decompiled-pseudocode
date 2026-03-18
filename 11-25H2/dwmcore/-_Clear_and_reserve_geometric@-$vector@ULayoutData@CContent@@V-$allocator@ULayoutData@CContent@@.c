/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAX_K@Z @ 0x18029FD9C
 * Callers:
 *     ??$_Assign_counted_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@_K@Z @ 0x18029F108 (--$_Assign_counted_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@U.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801022BC (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18025984C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x18029FD54 (-_Calculate_growth@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 */

_QWORD *__fastcall std::vector<CContent::LayoutData>::_Clear_and_reserve_geometric(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  SIZE_T size_of; // rax
  __int64 v5; // rax
  _QWORD *result; // rax

  if ( a2 > 0x666666666666666LL )
    std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength();
  v3 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, a2);
  if ( *a1 )
  {
    std::_Deallocate<16,0>((_QWORD *)*a1, 8 * ((a1[2] - *a1) >> 3));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  size_of = std::_Get_size_of_n<40>(v3);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = (_QWORD *)(v5 + 40 * v3);
  a1[2] = (__int64)result;
  return result;
}
