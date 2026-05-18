/*
 * XREFs of sub_180054140 @ 0x180054140
 * Callers:
 *     sub_1800543DC @ 0x1800543DC (sub_1800543DC.c)
 *     sub_180054650 @ 0x180054650 (sub_180054650.c)
 *     sub_18007EA6C @ 0x18007EA6C (sub_18007EA6C.c)
 * Callees:
 *     sub_18002D5B0 @ 0x18002D5B0 (sub_18002D5B0.c)
 */

__int64 __fastcall sub_180054140(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_18002D5B0(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
