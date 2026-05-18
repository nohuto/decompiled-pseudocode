/*
 * XREFs of sub_180011FB4 @ 0x180011FB4
 * Callers:
 *     sub_180036A00 @ 0x180036A00 (sub_180036A00.c)
 *     sub_180082A00 @ 0x180082A00 (sub_180082A00.c)
 * Callees:
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 */

__int64 __fastcall sub_180011FB4(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_180012170(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
