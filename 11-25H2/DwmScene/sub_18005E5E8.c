/*
 * XREFs of sub_18005E5E8 @ 0x18005E5E8
 * Callers:
 *     sub_18005DD30 @ 0x18005DD30 (sub_18005DD30.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18005E5E8(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  a1[1] = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  return a1;
}
