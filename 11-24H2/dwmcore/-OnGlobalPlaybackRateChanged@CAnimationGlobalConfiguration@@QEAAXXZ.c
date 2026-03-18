/*
 * XREFs of ?OnGlobalPlaybackRateChanged@CAnimationGlobalConfiguration@@QEAAXXZ @ 0x180293250
 * Callers:
 *     ?SetGlobalPlaybackRate@?$CAnimationGlobalConfigurationGeneratedT@VCAnimationGlobalConfiguration@@VCResource@@@@QEAAJM@Z @ 0x1802789B0 (-SetGlobalPlaybackRate@-$CAnimationGlobalConfigurationGeneratedT@VCAnimationGlobalConfiguration@.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEAVCChannelContext@@$$V@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@PEAX@std@@_N@1@AEBQEAVCChannelContext@@@Z @ 0x18028C7F8 (--$_Try_emplace@AEBQEAVCChannelContext@@$$V@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@PEAVCAn.c)
 */

void __fastcall CAnimationGlobalConfiguration::OnGlobalPlaybackRateChanged(CAnimationGlobalConfiguration *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 80) & 1) == 0 )
  {
    v3 = *((_QWORD *)this + 7);
    *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::_Try_emplace<CChannelContext * const &,>(
                             (float *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 456LL),
                             (__int64)v2,
                             &v3)
              + 24LL) = this;
    *((_BYTE *)this + 80) |= 1u;
  }
  CResource::OnPropertyChanged(this);
}
