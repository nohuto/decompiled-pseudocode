/*
 * XREFs of MiGetPfnPriority @ 0x140335630
 * Callers:
 *     MiDecommitSharedPageTail @ 0x140206290 (MiDecommitSharedPageTail.c)
 *     MiDecommitFreePage @ 0x1402068E0 (MiDecommitFreePage.c)
 *     MiUnlinkStandbyPfn @ 0x140210560 (MiUnlinkStandbyPfn.c)
 *     MiTrimThisWsle @ 0x140213460 (MiTrimThisWsle.c)
 *     MiSharedInsertPfnChainInList @ 0x140225270 (MiSharedInsertPfnChainInList.c)
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     MiWsleFree @ 0x140248D20 (MiWsleFree.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiPfnShareCountIsZero @ 0x14024D700 (MiPfnShareCountIsZero.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MiResetAccessBitPteWorker @ 0x1402941D8 (MiResetAccessBitPteWorker.c)
 *     MiCombineWithExisting @ 0x140294840 (MiCombineWithExisting.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiStoreCheckCandidatePage @ 0x1402FC214 (MiStoreCheckCandidatePage.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiIdentifyPfn @ 0x1403113F0 (MiIdentifyPfn.c)
 *     MmSetPfnListInfo @ 0x140311F44 (MmSetPfnListInfo.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140334220 (MiUpdatePfnForPrefetchByPte.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiDuplicateCloneLeaf @ 0x14038FAFC (MiDuplicateCloneLeaf.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403DB1C8 (MiDeprioritizeVirtualAddresses.c)
 *     MiUpdatePrefetchPriority @ 0x1403DCA60 (MiUpdatePrefetchPriority.c)
 *     MiSkipStandbyEntries @ 0x1403E76A0 (MiSkipStandbyEntries.c)
 *     MiUpdatePageAttributeStamp @ 0x1403F034C (MiUpdatePageAttributeStamp.c)
 *     MiCombineWithStandbyExisting @ 0x1403F1098 (MiCombineWithStandbyExisting.c)
 *     MiStandbyPageContentsIntact @ 0x1403F1E24 (MiStandbyPageContentsIntact.c)
 *     MiUpdateOldPteWorker @ 0x1404385C0 (MiUpdateOldPteWorker.c)
 *     MiQueryPfn @ 0x14043F858 (MiQueryPfn.c)
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
    && a1 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
    && ((v3 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4), v3 < qword_140E35C40)
     || v3 >= qword_140E35C40 + 2048)
    && ((BYTE2(v1) & 7) == 6
     || byte_140E3CC26
     && (v4 = v3 >> 9, *(_BYTE *)(qword_140E3D280 + 2 * v4))
     && *(_BYTE *)(qword_140E3D280 + 2 * v4) != 10) )
  {
    return HIBYTE(v1) & 7;
  }
  else
  {
    return 5LL;
  }
}
