/*
 * XREFs of sub_18003D5B4 @ 0x18003D5B4
 * Callers:
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 *     sub_18003D140 @ 0x18003D140 (sub_18003D140.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18003D0C4 @ 0x18003D0C4 (sub_18003D0C4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003D5B4(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v3 = sub_18003D0C4(1uLL);
  a1[1] = std::_Allocate<16,std::_Default_allocate_traits,0>(v3);
  return a1;
}
