/*
 * XREFs of MiInitializePageColorBase @ 0x1402EF8B0
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiPruneStandbyPages @ 0x140225F84 (MiPruneStandbyPages.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiCreateSharedZeroPages @ 0x1402EED80 (MiCreateSharedZeroPages.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiGetPageForHeader @ 0x1403133D4 (MiGetPageForHeader.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MiInitializeColorBase @ 0x1403A671C (MiInitializeColorBase.c)
 *     MiReplenishUltraPageTables @ 0x1403C6DB8 (MiReplenishUltraPageTables.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1403D4F80 (MiGetLargePageDemoteAsNeeded.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403F98CC (MiInitializeNewUltraHugeContext.c)
 *     MiAllocateMdlPagesByLists @ 0x140412C40 (MiAllocateMdlPagesByLists.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x140413798 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiMapPageFileHash @ 0x140486688 (MiMapPageFileHash.c)
 *     MiGetUltraMdlContext @ 0x14049878C (MiGetUltraMdlContext.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049D980 (MmAllocateNonChargedSecurePages.c)
 *     MiMakeOutswappedPageResident @ 0x1404A8280 (MiMakeOutswappedPageResident.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     MiGetClusterPage @ 0x1404D2DE4 (MiGetClusterPage.c)
 *     MiGetSingleHugeRangeToZero @ 0x1404F0954 (MiGetSingleHugeRangeToZero.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiHugePageOperation @ 0x140685BC0 (MiHugePageOperation.c)
 *     MiDefragmentSlabWorker @ 0x140686E60 (MiDefragmentSlabWorker.c)
 *     MmAllocateSecureKernelPages @ 0x140688AC4 (MmAllocateSecureKernelPages.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1406931D8 (MiComputeCacheAttributeSpeeds.c)
 *     MmAllocateMemoryRanges @ 0x1407EB130 (MmAllocateMemoryRanges.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
 *     MiInitializeScrubPacket @ 0x1407FD6E0 (MiInitializeScrubPacket.c)
 *     MiCreateZeroThreadContext @ 0x1407FF2B0 (MiCreateZeroThreadContext.c)
 *     MmRelocatePfnList @ 0x140932988 (MmRelocatePfnList.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateTopLevelPage @ 0x140A5A2FC (MiAllocateTopLevelPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140A66AF0 (MiDoneWithThisPageGetAnother.c)
 *     MiAllocateDriverPage @ 0x140A68CD8 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140A88F6C (MmAllocateIndependentPagesEx.c)
 *     MiCombineIdenticalPages @ 0x140A9C0E0 (MiCombineIdenticalPages.c)
 *     MiInitializeForkMaps @ 0x140ABBCD8 (MiInitializeForkMaps.c)
 *     MmInitializeProcessor @ 0x140B62038 (MmInitializeProcessor.c)
 *     MiAllocateDummyPage @ 0x140C4EBD8 (MiAllocateDummyPage.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5428C (MmInitializeImageViewExtensionCfg.c)
 *     MiInitializeCacheFlushing @ 0x140C5A2D8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     <none>
 */

char __fastcall MiInitializePageColorBase(__int64 a1, char a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPRCB *CurrentPrcb; // r11
  unsigned int IdealGlobalNode; // eax
  __int64 v8; // r8
  unsigned __int8 i; // r8
  char result; // al
  __int64 v11; // rdi

  if ( a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    IdealGlobalNode = a3 - 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( a1 && (*(_DWORD *)(a1 + 184) & 0xF) == 0 && CurrentThread->ApcStateIndex == 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      IdealGlobalNode = CurrentThread->ApcState.Process->IdealGlobalNode;
    }
    else
    {
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[CurrentThread->IdealProcessor];
      IdealGlobalNode = CurrentPrcb->NodeColor;
    }
  }
  v8 = qword_140E38C10 + 57216LL * IdealGlobalNode;
  if ( (*(_DWORD *)(v8 + 15184) & 1) != 0 )
  {
    v11 = v8 + 15237;
    for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; ++i )
    {
      if ( *(_BYTE *)(i + v11) == 1 )
        goto LABEL_8;
    }
    for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; ++i )
    {
      if ( *(_BYTE *)(i + v11) == 2 )
        goto LABEL_8;
    }
  }
  i = 0;
LABEL_8:
  *(_DWORD *)(a4 + 8) = (i & 1 | (2 * (IdealGlobalNode & 0x3F | ((a2 & 3 | 4) << 7)))) << 8;
  if ( !a1 || (result = *(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
    result = (_BYTE)CurrentPrcb + 80;
    *(_QWORD *)a4 = &CurrentPrcb->PageColor;
  }
  else
  {
    *(_QWORD *)a4 = a1;
  }
  return result;
}
