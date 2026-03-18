/*
 * XREFs of MiInitializePageColorBase @ 0x14023A610
 * Callers:
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiZeroInParallelWorker @ 0x140224150 (MiZeroInParallelWorker.c)
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiCreateSharedZeroPages @ 0x14023B000 (MiCreateSharedZeroPages.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MiPruneStandbyPages @ 0x1402C622C (MiPruneStandbyPages.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiMapPageFileHash @ 0x1402D1A18 (MiMapPageFileHash.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiInitializeColorBase @ 0x14038F9B8 (MiInitializeColorBase.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140392A30 (MiGetLargePageDemoteAsNeeded.c)
 *     MiMakeOutswappedPageResident @ 0x14040F088 (MiMakeOutswappedPageResident.c)
 *     MiAllocateMdlPagesByLists @ 0x1404161A0 (MiAllocateMdlPagesByLists.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x140416F94 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiGetSingleHugeRangeToZero @ 0x14041CAF8 (MiGetSingleHugeRangeToZero.c)
 *     MiReplenishUltraPageTables @ 0x140436CB8 (MiReplenishUltraPageTables.c)
 *     MiGetPageForHeader @ 0x140453C9C (MiGetPageForHeader.c)
 *     MiGetUltraMdlContext @ 0x140498B1C (MiGetUltraMdlContext.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049E89C (MmAllocateNonChargedSecurePages.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MiGetClusterPage @ 0x1404D2FFC (MiGetClusterPage.c)
 *     MiHugePageOperation @ 0x14067A330 (MiHugePageOperation.c)
 *     MiDefragmentSlabWorker @ 0x14067B5D0 (MiDefragmentSlabWorker.c)
 *     MmAllocateSecureKernelPages @ 0x14067D234 (MmAllocateSecureKernelPages.c)
 *     MiInitializeNewUltraHugeContext @ 0x1406841C4 (MiInitializeNewUltraHugeContext.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140687D78 (MiComputeCacheAttributeSpeeds.c)
 *     MmAllocateMemoryRanges @ 0x1407DB290 (MmAllocateMemoryRanges.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407EB814 (MiAllocatePartitionPhysicalPages.c)
 *     MiInitializeScrubPacket @ 0x1407ED850 (MiInitializeScrubPacket.c)
 *     MiCreateZeroThreadContext @ 0x1407EF3FC (MiCreateZeroThreadContext.c)
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateTopLevelPage @ 0x140A480DC (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140A69E40 (MiAllocateDriverPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140A6ED60 (MiDoneWithThisPageGetAnother.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 *     MiCombineIdenticalPages @ 0x140A961D0 (MiCombineIdenticalPages.c)
 *     MiInitializeForkMaps @ 0x140AB7B44 (MiInitializeForkMaps.c)
 *     MmRelocatePfnList @ 0x140ABD000 (MmRelocatePfnList.c)
 *     MmInitializeProcessor @ 0x140B51F08 (MmInitializeProcessor.c)
 *     MiAllocateDummyPage @ 0x140C3D9A8 (MiAllocateDummyPage.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C43014 (MmInitializeImageViewExtensionCfg.c)
 *     MiInitializeCacheFlushing @ 0x140C48FA8 (MiInitializeCacheFlushing.c)
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
  v8 = qword_140E389D0 + 57216LL * IdealGlobalNode;
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
