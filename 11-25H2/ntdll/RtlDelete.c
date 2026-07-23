/*
 * XREFs of RtlDelete @ 0x1800C4270
 * Callers:
 *     RtlpTpIoDllLoaded @ 0x1800C3F68 (RtlpTpIoDllLoaded.c)
 *     RtlDeleteElementGenericTable @ 0x1800C41A0 (RtlDeleteElementGenericTable.c)
 *     PfxRemovePrefix @ 0x18013A510 (PfxRemovePrefix.c)
 * Callees:
 *     RtlSubtreePredecessor @ 0x1800C4320 (RtlSubtreePredecessor.c)
 *     SwapSplayLinks @ 0x1800C4350 (SwapSplayLinks.c)
 *     RtlSplay @ 0x1800C48C0 (RtlSplay.c)
 */

PRTL_SPLAY_LINKS __cdecl RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS *v4; // rcx
  PRTL_SPLAY_LINKS v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx

  if ( Links->LeftChild && Links->RightChild )
  {
    v5 = RtlSubtreePredecessor(Links);
    SwapSplayLinks(v5, Links);
  }
  result = Links->LeftChild;
  if ( result || (result = Links->RightChild) != 0LL )
  {
    Parent = Links->Parent;
    if ( Links->Parent == Links )
    {
      result->Parent = result;
      return result;
    }
    v7 = 8LL;
    if ( Parent->LeftChild != Links )
      v7 = 16LL;
    *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent + v7) = result;
    v4 = Links->Parent;
    result->Parent = Links->Parent;
    return RtlSplay(v4);
  }
  v4 = Links->Parent;
  if ( Links->Parent != Links )
  {
    v6 = 8LL;
    if ( v4->LeftChild != Links )
      v6 = 16LL;
    *(_RTL_SPLAY_LINKS **)((char *)&v4->Parent + v6) = 0LL;
    return RtlSplay(v4);
  }
  return result;
}
