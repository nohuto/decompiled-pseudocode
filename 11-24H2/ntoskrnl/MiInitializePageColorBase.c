/*
 * XREFs of MiInitializePageColorBase @ 0x140342940
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x14021C6C4 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140263DE4 (MiGetLargePageDemoteAsNeeded.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiInitializeColorBase @ 0x14026DA0C (MiInitializeColorBase.c)
 *     MiMakeOutswappedPageResident @ 0x1402EF6F4 (MiMakeOutswappedPageResident.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiCreateSharedZeroPages @ 0x140342A48 (MiCreateSharedZeroPages.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiAllocateMdlPagesByLists @ 0x140395080 (MiAllocateMdlPagesByLists.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403EF7D8 (MiInitializeNewUltraHugeContext.c)
 *     MiGetPageForHeader @ 0x1403F2A54 (MiGetPageForHeader.c)
 *     MiPruneStandbyPages @ 0x1403F7714 (MiPruneStandbyPages.c)
 *     MiReplenishUltraPageTables @ 0x1404129EC (MiReplenishUltraPageTables.c)
 *     MiMapPageFileHash @ 0x140425FA8 (MiMapPageFileHash.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14043BAD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiGetUltraMdlContext @ 0x1404930EC (MiGetUltraMdlContext.c)
 *     MmAllocateNonChargedSecurePages @ 0x140498780 (MmAllocateNonChargedSecurePages.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     MiGetClusterPage @ 0x1404CBFA4 (MiGetClusterPage.c)
 *     MiGetSingleHugeRangeToZero @ 0x1404EE3F4 (MiGetSingleHugeRangeToZero.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiHugePageOperation @ 0x140686CF0 (MiHugePageOperation.c)
 *     MiDefragmentSlabWorker @ 0x140687F90 (MiDefragmentSlabWorker.c)
 *     MmAllocateSecureKernelPages @ 0x140689BF4 (MmAllocateSecureKernelPages.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1406942A8 (MiComputeCacheAttributeSpeeds.c)
 *     MmAllocateMemoryRanges @ 0x1407EB700 (MmAllocateMemoryRanges.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FBE14 (MiAllocatePartitionPhysicalPages.c)
 *     MiInitializeScrubPacket @ 0x1407FDE50 (MiInitializeScrubPacket.c)
 *     MiCreateZeroThreadContext @ 0x1407FF9F4 (MiCreateZeroThreadContext.c)
 *     MmRelocatePfnList @ 0x1408F754C (MmRelocatePfnList.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateTopLevelPage @ 0x140A51BBC (MiAllocateTopLevelPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140A5F8D4 (MiDoneWithThisPageGetAnother.c)
 *     MiAllocateDriverPage @ 0x140A62088 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8536C (MmAllocateIndependentPagesEx.c)
 *     MiCombineIdenticalPages @ 0x140A97650 (MiCombineIdenticalPages.c)
 *     MiInitializeForkMaps @ 0x140AB6CF8 (MiInitializeForkMaps.c)
 *     MmInitializeProcessor @ 0x140B64108 (MmInitializeProcessor.c)
 *     MiAllocateDummyPage @ 0x140C50D68 (MiAllocateDummyPage.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5641C (MmInitializeImageViewExtensionCfg.c)
 *     MiInitializeCacheFlushing @ 0x140C5C468 (MiInitializeCacheFlushing.c)
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
  v8 = qword_140E38D50 + 57216LL * IdealGlobalNode;
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
