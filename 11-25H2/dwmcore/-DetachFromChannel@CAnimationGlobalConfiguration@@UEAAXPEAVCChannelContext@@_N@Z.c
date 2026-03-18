/*
 * XREFs of ?DetachFromChannel@CAnimationGlobalConfiguration@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18029EB50
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Erase@PEAVCChannelContext@@@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBQEAVCChannelContext@@@Z @ 0x180297BD4 (--$_Erase@PEAVCChannelContext@@@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGloba.c)
 */

void __fastcall CAnimationGlobalConfiguration::DetachFromChannel(
        CAnimationGlobalConfiguration *this,
        struct CChannelContext *a2)
{
  __int64 v2; // rax
  struct CChannelContext *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 3);
  v4 = a2;
  std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::_Erase<CChannelContext *>(
    *(_QWORD *)(v2 + 824) + 456LL,
    (__int64)&v4);
  *((_BYTE *)this + 80) &= ~1u;
}
