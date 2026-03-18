/*
 * XREFs of GetScrollbarTypeString @ 0x140292720
 * Callers:
 *     xxxSetScrollBar @ 0x140032F08 (xxxSetScrollBar.c)
 *     xxxShowScrollBar @ 0x1401C8C38 (xxxShowScrollBar.c)
 *     GetWndSBParmsCrossProcess @ 0x140219F38 (GetWndSBParmsCrossProcess.c)
 *     NtUserSBGetParms @ 0x140245070 (NtUserSBGetParms.c)
 *     _SBGetParms @ 0x1402586CC (_SBGetParms.c)
 *     xxxSBTrackInit @ 0x1402E6E60 (xxxSBTrackInit.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetScrollbarTypeString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return "SB_HORZ";
  v1 = a1 - 1;
  if ( !v1 )
    return "SB_VERT";
  v2 = v1 - 1;
  if ( !v2 )
    return "SB_CTL";
  if ( v2 == 1 )
    return "SB_BOTH";
  return "UNKNOWN";
}
