/*
 * XREFs of sub_18006939C @ 0x18006939C
 * Callers:
 *     sub_1800693BC @ 0x1800693BC (sub_1800693BC.c)
 *     sub_180069494 @ 0x180069494 (sub_180069494.c)
 * Callees:
 *     sub_18003CF64 @ 0x18003CF64 (sub_18003CF64.c)
 */

__int64 __fastcall sub_18006939C(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_18003CF64(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
