/*
 * XREFs of RtlSubtreePredecessor @ 0x140373B40
 * Callers:
 *     RtlDelete @ 0x1403738D0 (RtlDelete.c)
 *     RtlDeleteNoSplay @ 0x1403756F0 (RtlDeleteNoSplay.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlSubtreePredecessor(PRTL_SPLAY_LINKS Links)
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
