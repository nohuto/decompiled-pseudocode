/*
 * XREFs of ?_Buy_raw@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x18024C2A8
 * Callers:
 *     ?_Clear_and_reserve_geometric@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x18024953C (-_Clear_and_reserve_geometric@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

SIZE_T __fastcall std::vector<unsigned char>::_Buy_raw(__int64 *a1, SIZE_T a2)
{
  __int64 v4; // rax
  SIZE_T result; // rax

  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(a2);
  *a1 = v4;
  a1[1] = v4;
  result = a2 + v4;
  a1[2] = result;
  return result;
}
