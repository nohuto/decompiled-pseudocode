/*
 * XREFs of sub_1800694FC @ 0x1800694FC
 * Callers:
 *     sub_18006951C @ 0x18006951C (sub_18006951C.c)
 *     sub_1800695F4 @ 0x1800695F4 (sub_1800695F4.c)
 * Callees:
 *     sub_18003D0C4 @ 0x18003D0C4 (sub_18003D0C4.c)
 */

__int64 __fastcall sub_1800694FC(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_18003D0C4(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
