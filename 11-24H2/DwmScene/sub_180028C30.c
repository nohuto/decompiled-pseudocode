/*
 * XREFs of sub_180028C30 @ 0x180028C30
 * Callers:
 *     sub_180028FCC @ 0x180028FCC (sub_180028FCC.c)
 *     sub_1800290E4 @ 0x1800290E4 (sub_1800290E4.c)
 *     sub_18006D0AC @ 0x18006D0AC (sub_18006D0AC.c)
 * Callees:
 *     sub_180029360 @ 0x180029360 (sub_180029360.c)
 */

__int64 __fastcall sub_180028C30(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_180029360(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
