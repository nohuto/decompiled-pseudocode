/*
 * XREFs of sub_18001219C @ 0x18001219C
 * Callers:
 *     sub_180011EE8 @ 0x180011EE8 (sub_180011EE8.c)
 *     sub_180073B08 @ 0x180073B08 (sub_180073B08.c)
 *     sub_1800CB8A0 @ 0x1800CB8A0 (sub_1800CB8A0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180010C50 @ 0x180010C50 (sub_180010C50.c)
 *     sub_180012284 @ 0x180012284 (sub_180012284.c)
 */

__int64 __fastcall sub_18001219C(_QWORD *a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rbx

  v4 = (__int64)(a1[1] - *a1) >> 4;
  v5 = sub_180010C50(*a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  sub_180012284(*a1, a1[1], v6);
  return sub_180012F40(a1, v6, v4, *a2);
}
