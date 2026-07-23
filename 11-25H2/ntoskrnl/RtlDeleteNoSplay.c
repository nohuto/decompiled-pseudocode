/*
 * XREFs of RtlDeleteNoSplay @ 0x1403756F0
 * Callers:
 *     FsRtlPrivateInsertSharedLock @ 0x140374828 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x140376460 (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlUninitializeFileLock @ 0x1403D22C0 (FsRtlUninitializeFileLock.c)
 *     FsRtlPruneTunnelCache @ 0x140939D18 (FsRtlPruneTunnelCache.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140A3F650 (FsRtlDeleteKeyFromTunnelCache.c)
 * Callees:
 *     RtlSubtreePredecessor @ 0x140373B40 (RtlSubtreePredecessor.c)
 *     SwapSplayLinks @ 0x140373B68 (SwapSplayLinks.c)
 */

void __stdcall RtlDeleteNoSplay(PRTL_SPLAY_LINKS Links, PRTL_SPLAY_LINKS *Root)
{
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  _RTL_SPLAY_LINKS *Parent; // rax
  _RTL_SPLAY_LINKS *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  _RTL_SPLAY_LINKS *v9; // rax

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
