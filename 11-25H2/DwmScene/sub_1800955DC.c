/*
 * XREFs of sub_1800955DC @ 0x1800955DC
 * Callers:
 *     sub_18009536C @ 0x18009536C (sub_18009536C.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18002752C @ 0x18002752C (sub_18002752C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800955DC(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v3 = sub_18002752C(1uLL);
  a1[1] = std::_Allocate<16,std::_Default_allocate_traits,0>(v3);
  return a1;
}
