/*
 * XREFs of sub_180047484 @ 0x180047484
 * Callers:
 *     sub_180047618 @ 0x180047618 (sub_180047618.c)
 *     sub_180049AC8 @ 0x180049AC8 (sub_180049AC8.c)
 * Callees:
 *     sub_1800291D4 @ 0x1800291D4 (sub_1800291D4.c)
 */

__int64 __fastcall sub_180047484(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_1800291D4(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
