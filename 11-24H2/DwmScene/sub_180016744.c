/*
 * XREFs of sub_180016744 @ 0x180016744
 * Callers:
 *     sub_180016990 @ 0x180016990 (sub_180016990.c)
 *     sub_18006D694 @ 0x18006D694 (sub_18006D694.c)
 *     sub_180073D34 @ 0x180073D34 (sub_180073D34.c)
 *     sub_180078A28 @ 0x180078A28 (sub_180078A28.c)
 *     sub_180082970 @ 0x180082970 (sub_180082970.c)
 * Callees:
 *     sub_180016C14 @ 0x180016C14 (sub_180016C14.c)
 */

__int64 __fastcall sub_180016744(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_180016C14(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
