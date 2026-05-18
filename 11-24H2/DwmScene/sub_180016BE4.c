/*
 * XREFs of sub_180016BE4 @ 0x180016BE4
 * Callers:
 *     sub_180016764 @ 0x180016764 (sub_180016764.c)
 * Callees:
 *     sub_180011AFC @ 0x180011AFC (sub_180011AFC.c)
 */

__int64 __fastcall sub_180016BE4(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180011AFC();
  return 4 * a1;
}
