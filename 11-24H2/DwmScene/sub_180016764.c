/*
 * XREFs of sub_180016764 @ 0x180016764
 * Callers:
 *     sub_18001A8DC @ 0x18001A8DC (sub_18001A8DC.c)
 *     sub_180078B14 @ 0x180078B14 (sub_180078B14.c)
 *     sub_18007ACC8 @ 0x18007ACC8 (sub_18007ACC8.c)
 *     sub_180084ED8 @ 0x180084ED8 (sub_180084ED8.c)
 *     sub_180094E48 @ 0x180094E48 (sub_180094E48.c)
 *     sub_1800CCE8C @ 0x1800CCE8C (sub_1800CCE8C.c)
 * Callees:
 *     sub_180016BE4 @ 0x180016BE4 (sub_180016BE4.c)
 */

__int64 __fastcall sub_180016764(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_180016BE4(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
