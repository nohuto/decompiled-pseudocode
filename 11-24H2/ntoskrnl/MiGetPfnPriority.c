/*
 * XREFs of MiGetPfnPriority @ 0x1402141E0
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140215E80 (MiUpdatePfnForPrefetchByPte.c)
 *     MiWsleFree @ 0x14021BFD0 (MiWsleFree.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiPfnShareCountIsZero @ 0x1402209B0 (MiPfnShareCountIsZero.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiStoreCheckCandidatePage @ 0x140229014 (MiStoreCheckCandidatePage.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiUnlinkStandbyPfn @ 0x1402363D0 (MiUnlinkStandbyPfn.c)
 *     MiDecommitSharedPageTail @ 0x14023E140 (MiDecommitSharedPageTail.c)
 *     MiDecommitFreePage @ 0x14023E790 (MiDecommitFreePage.c)
 *     MiTrimThisWsle @ 0x140242F50 (MiTrimThisWsle.c)
 *     MiSharedInsertPfnChainInList @ 0x14026FCE0 (MiSharedInsertPfnChainInList.c)
 *     MiRestoreTransitionPte @ 0x140271094 (MiRestoreTransitionPte.c)
 *     MiInsertPagesInList @ 0x140271500 (MiInsertPagesInList.c)
 *     MiMakePageAvoidRead @ 0x1402EF168 (MiMakePageAvoidRead.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MiCombineWithExisting @ 0x1402F92E0 (MiCombineWithExisting.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiIdentifyPfn @ 0x140307510 (MiIdentifyPfn.c)
 *     MmSetPfnListInfo @ 0x140308064 (MmSetPfnListInfo.c)
 *     MiCombineWithStandbyExisting @ 0x140313D4C (MiCombineWithStandbyExisting.c)
 *     MiStandbyPageContentsIntact @ 0x140314AD4 (MiStandbyPageContentsIntact.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MiDuplicateCloneLeaf @ 0x140396854 (MiDuplicateCloneLeaf.c)
 *     MiSkipStandbyEntries @ 0x1403F46B0 (MiSkipStandbyEntries.c)
 *     MiUpdateOldPteWorker @ 0x1403FA800 (MiUpdateOldPteWorker.c)
 *     MiResetAccessBitPteWorker @ 0x1403FB050 (MiResetAccessBitPteWorker.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403FD5B4 (MiDeprioritizeVirtualAddresses.c)
 *     MiUpdatePrefetchPriority @ 0x1403FE3E8 (MiUpdatePrefetchPriority.c)
 *     MiQueryPfn @ 0x140447088 (MiQueryPfn.c)
 *     MiUpdatePageAttributeStamp @ 0x1404767D4 (MiUpdatePageAttributeStamp.c)
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
    && a1 < 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL
    && ((v3 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4), v3 < qword_140E35B00)
     || v3 >= qword_140E35B00 + 2048)
    && ((BYTE2(v1) & 7) == 6
     || byte_140E3CAE6
     && (v4 = v3 >> 9, *(_BYTE *)(qword_140E3D140 + 2 * v4))
     && *(_BYTE *)(qword_140E3D140 + 2 * v4) != 10) )
  {
    return HIBYTE(v1) & 7;
  }
  else
  {
    return 5LL;
  }
}
