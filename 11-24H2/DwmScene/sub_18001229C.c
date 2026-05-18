/*
 * XREFs of sub_18001229C @ 0x18001229C
 * Callers:
 *     sub_180011FE8 @ 0x180011FE8 (sub_180011FE8.c)
 *     sub_180073C68 @ 0x180073C68 (sub_180073C68.c)
 *     sub_1800CBA00 @ 0x1800CBA00 (sub_1800CBA00.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180010D50 @ 0x180010D50 (sub_180010D50.c)
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 */

__int64 __fastcall sub_18001229C(_QWORD *a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rbx

  v4 = (__int64)(a1[1] - *a1) >> 4;
  v5 = sub_180010D50(*a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  sub_180012384(*a1, a1[1], v6);
  return sub_180013040(a1, v6, v4, *a2);
}
