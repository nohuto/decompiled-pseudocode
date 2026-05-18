/*
 * XREFs of sub_180078528 @ 0x180078528
 * Callers:
 *     sub_180078610 @ 0x180078610 (sub_180078610.c)
 *     sub_180094DCC @ 0x180094DCC (sub_180094DCC.c)
 * Callees:
 *     sub_1800261B0 @ 0x1800261B0 (sub_1800261B0.c)
 */

__int64 __fastcall sub_180078528(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_1800261B0(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
