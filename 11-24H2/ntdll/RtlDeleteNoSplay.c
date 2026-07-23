/*
 * XREFs of RtlDeleteNoSplay @ 0x1800B7900
 * Callers:
 *     <none>
 * Callees:
 *     RtlSubtreePredecessor @ 0x1800B7B50 (RtlSubtreePredecessor.c)
 *     SwapSplayLinks @ 0x1800B7B80 (SwapSplayLinks.c)
 */

void __cdecl RtlDeleteNoSplay(PRTL_SPLAY_LINKS Links, PRTL_SPLAY_LINKS *Root)
{
  _RTL_SPLAY_LINKS *LeftChild; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS *v6; // rax
  __int64 v7; // rdx
  _RTL_SPLAY_LINKS *v8; // rax
  __int64 v9; // rdx

  if ( Links->LeftChild && Links->RightChild )
  {
    v6 = RtlSubtreePredecessor(Links);
    if ( Links->Parent == Links )
      *Root = v6;
    SwapSplayLinks(v6, Links);
  }
  LeftChild = Links->LeftChild;
  if ( LeftChild || (LeftChild = Links->RightChild) != 0LL )
  {
    Parent = Links->Parent;
    if ( Links->Parent == Links )
    {
      LeftChild->Parent = LeftChild;
      *Root = LeftChild;
    }
    else
    {
      v7 = 8LL;
      if ( Parent->LeftChild != Links )
        v7 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent + v7) = LeftChild;
      LeftChild->Parent = Links->Parent;
    }
  }
  else
  {
    v8 = Links->Parent;
    if ( Links->Parent == Links )
    {
      *Root = 0LL;
    }
    else
    {
      v9 = 8LL;
      if ( v8->LeftChild != Links )
        v9 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&v8->Parent + v9) = 0LL;
    }
  }
}
