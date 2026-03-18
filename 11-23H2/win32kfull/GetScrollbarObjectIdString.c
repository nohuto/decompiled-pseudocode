/*
 * XREFs of GetScrollbarObjectIdString @ 0x1C013D120
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C00E16CC (xxxGetScrollBarInfo.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetScrollbarObjectIdString(int a1)
{
  const char *result; // rax

  if ( a1 == -6 )
    return "OBJID_HSCROLL";
  if ( a1 == -5 )
    return "OBJID_VSCROLL";
  result = "OBJID_CLIENT";
  if ( a1 != -4 )
    return "UNKNOWN";
  return result;
}
