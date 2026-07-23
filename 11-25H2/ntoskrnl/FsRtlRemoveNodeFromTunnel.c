/*
 * XREFs of FsRtlRemoveNodeFromTunnel @ 0x140376460
 * Callers:
 *     FsRtlPruneTunnelCache @ 0x140939D18 (FsRtlPruneTunnelCache.c)
 * Callees:
 *     RtlDelete @ 0x1403738D0 (RtlDelete.c)
 *     RtlDeleteNoSplay @ 0x1403756F0 (RtlDeleteNoSplay.c)
 *     FsRtlFreeTunnelNode @ 0x140377AD4 (FsRtlFreeTunnelNode.c)
 */

__int64 __fastcall FsRtlRemoveNodeFromTunnel(__int64 a1, _RTL_SPLAY_LINKS *a2, __int64 a3, _BYTE *a4)
{
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // rcx

  if ( a4 && *a4 )
  {
    *(_QWORD *)(a1 + 56) = RtlDelete(a2);
    *a4 = 0;
  }
  else
  {
    RtlDeleteNoSplay(a2, (PRTL_SPLAY_LINKS *)(a1 + 56));
  }
  Parent = a2[1].Parent;
  if ( Parent->LeftChild != &a2[1] || (LeftChild = a2[1].LeftChild, LeftChild->Parent != &a2[1]) )
    __fastfail(3u);
  LeftChild->Parent = Parent;
  Parent->LeftChild = LeftChild;
  --*(_WORD *)(a1 + 80);
  return FsRtlFreeTunnelNode(a2);
}
