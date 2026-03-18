/*
 * XREFs of GetObjectIdString @ 0x1402E0004
 * Callers:
 *     GetWndScrollBarInfoCrossProcess @ 0x1402149C4 (GetWndScrollBarInfoCrossProcess.c)
 *     xxxGetScrollBarInfo @ 0x140256A64 (xxxGetScrollBarInfo.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetObjectIdString(int a1)
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
