/*
 * XREFs of GetScrollbarCodeString @ 0x1C013D354
 * Callers:
 *     xxxShowScrollBar @ 0x1C0231730 (xxxShowScrollBar.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetScrollbarCodeString(int a1)
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
