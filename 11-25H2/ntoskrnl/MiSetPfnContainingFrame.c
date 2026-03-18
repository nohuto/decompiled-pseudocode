/*
 * XREFs of MiSetPfnContainingFrame @ 0x14033BD00
 * Callers:
 *     MiDeleteSectionCluster @ 0x140229404 (MiDeleteSectionCluster.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiInitializePfnForOtherProcess @ 0x1402D0D28 (MiInitializePfnForOtherProcess.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MmInSwapProcess @ 0x1402F1540 (MmInSwapProcess.c)
 *     MiInitializeHardFaultPfn @ 0x140339E34 (MiInitializeHardFaultPfn.c)
 *     MiReplacePageOfProtoPool @ 0x14033AFCC (MiReplacePageOfProtoPool.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1403E65C4 (MiExclusiveInsertPfnChainInList.c)
 *     MiReplacePageTablePage @ 0x14040B438 (MiReplacePageTablePage.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiInitializeMdlSinglePage @ 0x140416814 (MiInitializeMdlSinglePage.c)
 *     MiInitializeMdlPfn @ 0x140416AE0 (MiInitializeMdlPfn.c)
 *     MiInitializeTransitionPfn @ 0x140453E64 (MiInitializeTransitionPfn.c)
 *     MiSetPfnOwnedAndActive @ 0x14045C318 (MiSetPfnOwnedAndActive.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1404AC0B0 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiClearDriverTablePtes @ 0x1404EE8A0 (MiClearDriverTablePtes.c)
 *     MiMakeLargePageTable @ 0x1404F59B4 (MiMakeLargePageTable.c)
 *     MiInitializeAwePfn @ 0x1404F76C0 (MiInitializeAwePfn.c)
 *     MiInitializeNewPfns @ 0x140660094 (MiInitializeNewPfns.c)
 *     MiCreatePfnTemplate @ 0x1406609D0 (MiCreatePfnTemplate.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406675D8 (MiUpdateLargePageSectionPfns.c)
 *     MiReturnBadPagesToBadList @ 0x140668A14 (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406690F0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiChangePagingFileMaximum @ 0x14066E504 (MiChangePagingFileMaximum.c)
 *     MiAddExpansionNonPagedPool @ 0x14067123C (MiAddExpansionNonPagedPool.c)
 *     MmMapDriverTablePage @ 0x14067213C (MmMapDriverTablePage.c)
 *     MiClearAweLargePageMetadata @ 0x140676080 (MiClearAweLargePageMetadata.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MiAllocateTopLevelPage @ 0x140A480DC (MiAllocateTopLevelPage.c)
 *     MiAllocateDummyPage @ 0x140C3D9A8 (MiAllocateDummyPage.c)
 *     MiSwitchToPfns @ 0x140C40CE0 (MiSwitchToPfns.c)
 *     MxInsertEnclaveBootPages @ 0x140C46EE4 (MxInsertEnclaveBootPages.c)
 *     MiInitializeDecayPfns @ 0x140C4AF58 (MiInitializeDecayPfns.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnContainingFrame(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r8
  signed __int64 result; // rax
  signed __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(a1 + 40),
             a2 ^ (a2 ^ v2) & 0xFFFFFF0000000000uLL,
             v2);
  if ( v2 != result )
  {
    do
    {
      v5 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 a2 ^ (a2 ^ result) & 0xFFFFFF0000000000uLL,
                 result);
    }
    while ( v5 != result );
  }
  return result;
}
