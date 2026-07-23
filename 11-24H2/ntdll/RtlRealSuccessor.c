/*
 * XREFs of RtlRealSuccessor @ 0x1800B8330
 * Callers:
 *     RtlEnumerateGenericTable @ 0x1800B7890 (RtlEnumerateGenericTable.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlRealSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *j; // rdx
  _RTL_SPLAY_LINKS *i; // rcx

  result = Links->RightChild;
  if ( result )
  {
    for ( i = result->LeftChild; i; i = i->LeftChild )
      result = i;
  }
  else
  {
    for ( j = Links->Parent; j->RightChild == Links; j = j->Parent )
      Links = j;
    result = 0LL;
    if ( j->LeftChild == Links )
      return j;
  }
  return result;
}
