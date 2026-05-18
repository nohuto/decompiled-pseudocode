/*
 * XREFs of sub_18003D454 @ 0x18003D454
 * Callers:
 *     sub_18003CB18 @ 0x18003CB18 (sub_18003CB18.c)
 *     sub_18003CFE0 @ 0x18003CFE0 (sub_18003CFE0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18003CF64 @ 0x18003CF64 (sub_18003CF64.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003D454(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v3 = sub_18003CF64(1uLL);
  a1[1] = std::_Allocate<16,std::_Default_allocate_traits,0>(v3);
  return a1;
}
