/*
 * XREFs of FsRtlRemoveNodeFromTunnel @ 0x1403DF5B8
 * Callers:
 *     FsRtlPruneTunnelCache @ 0x1409323F0 (FsRtlPruneTunnelCache.c)
 * Callees:
 *     RtlDelete @ 0x14024A8A0 (RtlDelete.c)
 *     RtlDeleteNoSplay @ 0x14024AE90 (RtlDeleteNoSplay.c)
 *     FsRtlFreeTunnelNode @ 0x1403DF654 (FsRtlFreeTunnelNode.c)
 */

__int64 __fastcall FsRtlRemoveNodeFromTunnel(__int64 a1, RTL_SPLAY_LINKS *a2, __int64 a3, _BYTE *a4)
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
