/*
 * XREFs of MiSetPfnContainingFrame @ 0x1402E6800
 * Callers:
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiInitializeHardFaultPfn @ 0x1402E6618 (MiInitializeHardFaultPfn.c)
 *     MiReplacePageOfProtoPool @ 0x1402E73F0 (MiReplacePageOfProtoPool.c)
 *     MiReplacePageTablePage @ 0x140311CD4 (MiReplacePageTablePage.c)
 *     MiInitializeTransitionPfn @ 0x14031359C (MiInitializeTransitionPfn.c)
 *     MmInSwapProcess @ 0x140338A94 (MmInSwapProcess.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiInitializePfnForOtherProcess @ 0x140396C84 (MiInitializePfnForOtherProcess.c)
 *     MiDeleteSectionCluster @ 0x1403A0124 (MiDeleteSectionCluster.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1403EF1A0 (MiExclusiveInsertPfnChainInList.c)
 *     MiDemoteCombinedPte @ 0x1403FABBC (MiDemoteCombinedPte.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiInitializeMdlSinglePage @ 0x1404132BC (MiInitializeMdlSinglePage.c)
 *     MiInitializeMdlPfn @ 0x140413588 (MiInitializeMdlPfn.c)
 *     MiSetPfnOwnedAndActive @ 0x14045B630 (MiSetPfnOwnedAndActive.c)
 *     MiBuildForkPageTable @ 0x1404A304C (MiBuildForkPageTable.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1404AD520 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiClearDriverTablePtes @ 0x1404F2870 (MiClearDriverTablePtes.c)
 *     MiInitializeAwePfn @ 0x1404F5F48 (MiInitializeAwePfn.c)
 *     MiMakeLargePageTable @ 0x1404F8168 (MiMakeLargePageTable.c)
 *     MiInitializeNewPfns @ 0x14066BBD4 (MiInitializeNewPfns.c)
 *     MiCreatePfnTemplate @ 0x14066C510 (MiCreatePfnTemplate.c)
 *     MiUpdateLargePageSectionPfns @ 0x140673088 (MiUpdateLargePageSectionPfns.c)
 *     MiReturnBadPagesToBadList @ 0x140674474 (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     MiChangePagingFileMaximum @ 0x140679DB0 (MiChangePagingFileMaximum.c)
 *     MiAddExpansionNonPagedPool @ 0x14067C9FC (MiAddExpansionNonPagedPool.c)
 *     MmMapDriverTablePage @ 0x14067D94C (MmMapDriverTablePage.c)
 *     MiClearAweLargePageMetadata @ 0x1406818A0 (MiClearAweLargePageMetadata.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiAllocateTopLevelPage @ 0x140A5A2FC (MiAllocateTopLevelPage.c)
 *     MiAllocateDummyPage @ 0x140C4EBD8 (MiAllocateDummyPage.c)
 *     MiSwitchToPfns @ 0x140C51F10 (MiSwitchToPfns.c)
 *     MxInsertEnclaveBootPages @ 0x140C581C4 (MxInsertEnclaveBootPages.c)
 *     MiInitializeDecayPfns @ 0x140C5C2D8 (MiInitializeDecayPfns.c)
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
