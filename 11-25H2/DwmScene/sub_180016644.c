/*
 * XREFs of sub_180016644 @ 0x180016644
 * Callers:
 *     sub_180016890 @ 0x180016890 (sub_180016890.c)
 *     sub_18006D534 @ 0x18006D534 (sub_18006D534.c)
 *     sub_180073BD4 @ 0x180073BD4 (sub_180073BD4.c)
 *     sub_1800788C8 @ 0x1800788C8 (sub_1800788C8.c)
 *     sub_180082810 @ 0x180082810 (sub_180082810.c)
 * Callees:
 *     sub_180016B14 @ 0x180016B14 (sub_180016B14.c)
 */

__int64 __fastcall sub_180016644(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_180016B14(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
