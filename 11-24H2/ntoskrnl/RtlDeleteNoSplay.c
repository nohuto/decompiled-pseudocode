/*
 * XREFs of RtlDeleteNoSplay @ 0x14024AE90
 * Callers:
 *     FsRtlPrivateInsertSharedLock @ 0x140248CD8 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x1403DF5B8 (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlUninitializeFileLock @ 0x1403DF750 (FsRtlUninitializeFileLock.c)
 *     FsRtlPruneTunnelCache @ 0x1409323F0 (FsRtlPruneTunnelCache.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140A43B50 (FsRtlDeleteKeyFromTunnelCache.c)
 * Callees:
 *     RtlSubtreePredecessor @ 0x14024AB10 (RtlSubtreePredecessor.c)
 *     SwapSplayLinks @ 0x14024AB38 (SwapSplayLinks.c)
 */

void __stdcall RtlDeleteNoSplay(PRTL_SPLAY_LINKS Links, PRTL_SPLAY_LINKS *Root)
{
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  _RTL_SPLAY_LINKS *Parent; // rax
  _RTL_SPLAY_LINKS *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  RTL_SPLAY_LINKS *v9; // rax

  if ( Links->LeftChild && Links->RightChild )
  {
    v9 = RtlSubtreePredecessor(Links);
    if ( Links->Parent == Links )
      *Root = v9;
    SwapSplayLinks(v9, Links);
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
      v8 = 8LL;
      if ( Parent->LeftChild != Links )
        v8 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent + v8) = LeftChild;
      LeftChild->Parent = Links->Parent;
    }
  }
  else
  {
    v6 = Links->Parent;
    if ( Links->Parent == Links )
    {
      *Root = 0LL;
    }
    else
    {
      v7 = 8LL;
      if ( v6->LeftChild != Links )
        v7 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&v6->Parent + v7) = 0LL;
    }
  }
}
