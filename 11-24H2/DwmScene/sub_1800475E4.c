/*
 * XREFs of sub_1800475E4 @ 0x1800475E4
 * Callers:
 *     sub_180047778 @ 0x180047778 (sub_180047778.c)
 *     sub_180049C28 @ 0x180049C28 (sub_180049C28.c)
 * Callees:
 *     sub_180029334 @ 0x180029334 (sub_180029334.c)
 */

__int64 __fastcall sub_1800475E4(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_180029334(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
