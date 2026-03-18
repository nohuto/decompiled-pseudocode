/*
 * XREFs of MiGetPfnPriority @ 0x140230FB0
 * Callers:
 *     MiUnlinkStandbyPfn @ 0x14020EBB4 (MiUnlinkStandbyPfn.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiIdentifyPfn @ 0x140221170 (MiIdentifyPfn.c)
 *     MmSetPfnListInfo @ 0x140221CC4 (MmSetPfnListInfo.c)
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MiCombineWithStandbyExisting @ 0x140224A84 (MiCombineWithStandbyExisting.c)
 *     MiStandbyPageContentsIntact @ 0x140225484 (MiStandbyPageContentsIntact.c)
 *     MiWsleFree @ 0x14022FD60 (MiWsleFree.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140231A30 (MiUpdatePfnForPrefetchByPte.c)
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiSharedInsertPfnChainInList @ 0x14023EE90 (MiSharedInsertPfnChainInList.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 *     MiRestoreTransitionPte @ 0x14024EBD8 (MiRestoreTransitionPte.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402A2C38 (MiDeprioritizeVirtualAddresses.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiStoreCheckCandidatePage @ 0x1402CA054 (MiStoreCheckCandidatePage.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiDuplicateCloneLeaf @ 0x1402D08F8 (MiDuplicateCloneLeaf.c)
 *     MiDecommitSharedPageTail @ 0x140340E30 (MiDecommitSharedPageTail.c)
 *     MiPfnShareCountIsZero @ 0x140342440 (MiPfnShareCountIsZero.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiResetAccessBitPteWorker @ 0x14037CC0C (MiResetAccessBitPteWorker.c)
 *     MiTrimThisWsle @ 0x140388394 (MiTrimThisWsle.c)
 *     MiUpdatePrefetchPriority @ 0x1403898E0 (MiUpdatePrefetchPriority.c)
 *     MiCombineWithExisting @ 0x14038A898 (MiCombineWithExisting.c)
 *     MiSkipStandbyEntries @ 0x1403EDC90 (MiSkipStandbyEntries.c)
 *     MiUpdateOldPteWorker @ 0x140441E30 (MiUpdateOldPteWorker.c)
 *     MiQueryPfn @ 0x140449A30 (MiQueryPfn.c)
 *     MiUpdatePageAttributeStamp @ 0x140476CA0 (MiUpdatePageAttributeStamp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnPriority(unsigned __int64 a1)
{
  unsigned int v1; // eax
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rcx

  v1 = *(_DWORD *)(a1 + 32);
  if ( (v1 & 0x8000000) == 0 )
    return HIBYTE(v1) & 7;
  if ( a1 >= 0xFFFFDE0000000000uLL
    && a1 < 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL
    && ((v3 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4), v3 < qword_140E358C0)
     || v3 >= qword_140E358C0 + 2048)
    && ((BYTE2(v1) & 7) == 6
     || byte_140E3C8A6
     && (v4 = v3 >> 9, *(_BYTE *)(qword_140E3CF00 + 2 * v4))
     && *(_BYTE *)(qword_140E3CF00 + 2 * v4) != 10) )
  {
    return HIBYTE(v1) & 7;
  }
  else
  {
    return 5LL;
  }
}
