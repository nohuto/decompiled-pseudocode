/*
 * XREFs of sub_1800D1320 @ 0x1800D1320
 * Callers:
 *     sub_1800D15C0 @ 0x1800D15C0 (sub_1800D15C0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001D7D4 @ 0x18001D7D4 (sub_18001D7D4.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 */

__int64 __fastcall sub_1800D1320(__int64 *a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rbx

  v4 = (a1[1] - *a1) >> 5;
  v5 = sub_18001D7D4(*a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  sub_18001DD3C(*a1, a1[1], v6);
  return sub_18001E404((__int64)a1, v6, v4, *a2);
}
