/*
 * XREFs of sub_180078548 @ 0x180078548
 * Callers:
 *     sub_180078770 @ 0x180078770 (sub_180078770.c)
 *     sub_18007C9B4 @ 0x18007C9B4 (sub_18007C9B4.c)
 * Callees:
 *     sub_18002752C @ 0x18002752C (sub_18002752C.c)
 */

__int64 __fastcall sub_180078548(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_18002752C(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
