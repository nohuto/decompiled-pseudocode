/*
 * XREFs of RtlSubtreePredecessor @ 0x1800C4320
 * Callers:
 *     RtlDeleteNoSplay @ 0x1800C40D0 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x1800C4270 (RtlDelete.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlSubtreePredecessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *i; // rcx

  result = Links->LeftChild;
  if ( result )
  {
    for ( i = result->RightChild; i; i = i->RightChild )
      result = i;
  }
  return result;
}
