/*
 * XREFs of sub_180078688 @ 0x180078688
 * Callers:
 *     sub_180078770 @ 0x180078770 (sub_180078770.c)
 *     sub_180094F2C @ 0x180094F2C (sub_180094F2C.c)
 * Callees:
 *     sub_180026310 @ 0x180026310 (sub_180026310.c)
 */

__int64 __fastcall sub_180078688(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_180026310(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
