/*
 * XREFs of RtlDelete @ 0x1402E4AE0
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x14027DC3C (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402E3B00 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingle @ 0x1402E3DA0 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402E4400 (FsRtlFastUnlockSingleShared.c)
 *     RtlDeleteElementGenericTable @ 0x1402E51B0 (RtlDeleteElementGenericTable.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x1403BF2A8 (FsRtlRemoveNodeFromTunnel.c)
 *     PfxRemovePrefix @ 0x14077F760 (PfxRemovePrefix.c)
 *     FsRtlPruneTunnelCache @ 0x140934530 (FsRtlPruneTunnelCache.c)
 *     RtlRemoveUnicodePrefix @ 0x140A28450 (RtlRemoveUnicodePrefix.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140A393E0 (FsRtlDeleteKeyFromTunnelCache.c)
 * Callees:
 *     RtlSplay @ 0x1402E38E0 (RtlSplay.c)
 *     RtlSubtreePredecessor @ 0x1402E4D50 (RtlSubtreePredecessor.c)
 *     SwapSplayLinks @ 0x1402E4D78 (SwapSplayLinks.c)
 */

PRTL_SPLAY_LINKS __stdcall RtlDelete(PRTL_SPLAY_LINKS Links)
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
