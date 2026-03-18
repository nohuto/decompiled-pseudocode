/*
 * XREFs of RtlDelete @ 0x1403738D0
 * Callers:
 *     FsRtlFastUnlockSingleExclusive @ 0x140372900 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingle @ 0x140372BA0 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x140373210 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x140376460 (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14045B2D4 (FsRtlPrivateFastUnlockAll.c)
 *     RtlDeleteElementGenericTable @ 0x14045BAD0 (RtlDeleteElementGenericTable.c)
 *     PfxRemovePrefix @ 0x1407705E0 (PfxRemovePrefix.c)
 *     FsRtlPruneTunnelCache @ 0x140939D18 (FsRtlPruneTunnelCache.c)
 *     RtlRemoveUnicodePrefix @ 0x140A2ECD0 (RtlRemoveUnicodePrefix.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140A3F650 (FsRtlDeleteKeyFromTunnelCache.c)
 * Callees:
 *     RtlSubtreePredecessor @ 0x140373B40 (RtlSubtreePredecessor.c)
 *     SwapSplayLinks @ 0x140373B68 (SwapSplayLinks.c)
 *     RtlSplay @ 0x1403751F0 (RtlSplay.c)
 */

PRTL_SPLAY_LINKS __stdcall RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS *v4; // rcx
  __int64 v5; // rdx
  PRTL_SPLAY_LINKS v6; // rax
  __int64 v7; // rdx

  if ( Links->LeftChild && Links->RightChild )
  {
    v6 = RtlSubtreePredecessor(Links);
    SwapSplayLinks(v6, Links);
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
  }
  else
  {
    v4 = Links->Parent;
    if ( Links->Parent == Links )
      return result;
    v5 = 8LL;
    if ( v4->LeftChild != Links )
      v5 = 16LL;
    *(_RTL_SPLAY_LINKS **)((char *)&v4->Parent + v5) = 0LL;
  }
  return RtlSplay(v4);
}
