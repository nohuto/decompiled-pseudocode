/*
 * XREFs of MiInitSystem @ 0x140C4DC40
 * Callers:
 *     MmInitSystem @ 0x140BDE2E8 (MmInitSystem.c)
 * Callees:
 *     PsSetPagePriorityThread @ 0x1402098B8 (PsSetPagePriorityThread.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MmUnlockPagableImageSection @ 0x1402C7030 (MmUnlockPagableImageSection.c)
 *     MiEnumerateSystemImages @ 0x1402C7380 (MiEnumerateSystemImages.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     MiIssueFlushTbEntire @ 0x1403AFDC8 (MiIssueFlushTbEntire.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     ExecuteHotpatchTestBootFunction @ 0x140520FE8 (ExecuteHotpatchTestBootFunction.c)
 *     VslInitializeSecurePool @ 0x14058D6EC (VslInitializeSecurePool.c)
 *     KdSetDbgPrintBufferSize @ 0x1405AFF54 (KdSetDbgPrintBufferSize.c)
 *     ExInitializePagedHeaps @ 0x140659CEC (ExInitializePagedHeaps.c)
 *     MxInstallMoreMemory @ 0x14066C6F0 (MxInstallMoreMemory.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140678930 (MiInitializeWorkingSetManagerParameters.c)
 *     MiSetSlabAllocatorPolicy @ 0x1406888A4 (MiSetSlabAllocatorPolicy.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiUpdateSharedUserDataNumberOfPages @ 0x1407EA1D0 (MiUpdateSharedUserDataNumberOfPages.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x1407EDA2C (MmConfigurePrefetchSeekThreshold.c)
 *     MiGenerateSecureCookie @ 0x1407EDAC4 (MiGenerateSecureCookie.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1407F08B0 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiInitializeMemoryEvents @ 0x1407FFF3C (MiInitializeMemoryEvents.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x140A22450 (PsCreateSystemThread.c)
 *     MmLockPagableDataSection @ 0x140A5CF50 (MmLockPagableDataSection.c)
 *     PsInitializeQuotaSystem @ 0x140C35B68 (PsInitializeQuotaSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x140C4DAE8 (MiAddLoaderHalIoMappings.c)
 *     MiInitializeBootProcess @ 0x140C4E3F8 (MiInitializeBootProcess.c)
 *     MiInitializeSharedUserData @ 0x140C4E594 (MiInitializeSharedUserData.c)
 *     MiAllocateDummyPage @ 0x140C4EBD8 (MiAllocateDummyPage.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140C50900 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiSectionInitialization @ 0x140C53724 (MiSectionInitialization.c)
 *     MiInitializeMirroring @ 0x140C539B0 (MiInitializeMirroring.c)
 *     MiInitializeCrashDumpPtes @ 0x140C53FC0 (MiInitializeCrashDumpPtes.c)
 *     MiInitializeSystemSpaceMap @ 0x140C54128 (MiInitializeSystemSpaceMap.c)
 *     MmInitializeImageViewExtension @ 0x140C541D0 (MmInitializeImageViewExtension.c)
 *     MiInitializeModifiedWriterParameters @ 0x140C551FC (MiInitializeModifiedWriterParameters.c)
 *     MiInitializeKernelScp @ 0x140C55860 (MiInitializeKernelScp.c)
 *     MiInitializeHotPatches @ 0x140C567D0 (MiInitializeHotPatches.c)
 *     MiInitializeBootKernelShadowStacks @ 0x140C57048 (MiInitializeBootKernelShadowStacks.c)
 *     MiCreateEnclaveRegions @ 0x140C57EDC (MiCreateEnclaveRegions.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C584A0 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiInitializeRelocations @ 0x140C58D1C (MiInitializeRelocations.c)
 *     MiInitializeCfg @ 0x140C58EE4 (MiInitializeCfg.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140C593CC (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140C59424 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiInitializeCacheFlushing @ 0x140C5A2D8 (MiInitializeCacheFlushing.c)
 *     MiInitializeTbFlushing @ 0x140C5A77C (MiInitializeTbFlushing.c)
 *     MiInitializeApiSets @ 0x140C5B068 (MiInitializeApiSets.c)
 *     MiInitializeLoadedModuleList @ 0x140C5B318 (MiInitializeLoadedModuleList.c)
 *     MiInitializeSystemImageRegion @ 0x140C5B698 (MiInitializeSystemImageRegion.c)
 *     MiRegisterForHardwareAcceleratorChanges @ 0x140C5C138 (MiRegisterForHardwareAcceleratorChanges.c)
 */

__int64 (__fastcall *__fastcall MiInitSystem(int a1, __int64 a2))(__int64 a1)
{
  __int64 (__fastcall *result)(__int64); // rax
  __int64 v4; // r8
  unsigned int v5; // eax
  __int64 v6; // rax
  _KPROCESS *Process; // rcx
  unsigned int v8; // esi
  PKSTART_ROUTINE *v9; // r14
  HANDLE ThreadHandle; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v11[6]; // [rsp+48h] [rbp-50h] BYREF

  v11[0] = KeBalanceSetManager;
  v11[1] = KeSwapProcessOrStack;
  v11[2] = MiRebuildLargePagesThread;
  v11[3] = MiZeroPageThread;
  v11[4] = MiDereferenceSegmentThread;
  result = MiMappedPageWriter;
  v11[5] = MiMappedPageWriter;
  ThreadHandle = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x400u);
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
      *(_DWORD *)(MmWriteableSharedUserData + 580) = 0x200000;
      if ( (MiFlags & 0x4000) != 0 && (int)VslInitializeSecurePool(qword_140E38B88, qword_140E38B90) < 0 )
        MxInstallMoreMemory(35);
      if ( !(unsigned int)MiSectionInitialization() )
        MxInstallMoreMemory(36);
      if ( (int)MiInitializeCfg() < 0 )
        MxInstallMoreMemory(37);
      if ( !(unsigned int)MiCreateEnclaveRegions(a2) )
        MxInstallMoreMemory(39);
      qword_140E2FE08 = 0LL;
      MiInitializeCacheFlushing();
      if ( !MiInitializeMemoryEvents(&MiSystemPartition) )
        MxInstallMoreMemory(41);
      if ( !(unsigned int)MiInitializeModifiedWriterParameters() )
        MxInstallMoreMemory(50);
      MiComputeMemoryNodeProcessorAssignments();
      LOWORD(stru_140E2FEA8.Header.Lock) = 0;
      qword_140E37448 = (__int64)&qword_140E37440;
      qword_140E37440 = (__int64)&qword_140E37440;
      stru_140E2FEA8.Header.Size = 6;
      stru_140E2FEA8.Header.WaitListHead.Blink = &stru_140E2FEA8.Header.WaitListHead;
      stru_140E2FEA8.Header.WaitListHead.Flink = &stru_140E2FEA8.Header.WaitListHead;
      MxDeferredBootAddMemoryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))MiHotAddBootDeferredDescriptors;
      stru_140E2FEA8.Header.SignalState = 0;
      MxDeferredBootAddMemoryWorkItem.Parameter = 0LL;
      MxDeferredBootAddMemoryWorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&MxDeferredBootAddMemoryWorkItem, NormalWorkQueue);
      v8 = 0;
      v9 = (PKSTART_ROUTINE *)v11;
      do
      {
        if ( PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *v9, &MiSystemPartition) < 0 )
          MxInstallMoreMemory(43);
        ObCloseHandle(ThreadHandle, 0);
        ++v8;
        ++v9;
      }
      while ( v8 < 6 );
      MiEnumerateSystemImages((__int64)MiWriteProtectSystemImages, 0LL, 0LL);
      _InterlockedDecrement(&dword_140E373C4);
      result = (__int64 (__fastcall *)(__int64))MiInitializeApiSets(a2);
      if ( (int)result < 0 )
        MxInstallMoreMemory(45);
    }
    else if ( a1 == 2 )
    {
      qword_140E37448 = (__int64)&qword_140E37440;
      qword_140E37440 = (__int64)&qword_140E37440;
      MiRegisterForHardwareAcceleratorChanges();
      MiEnumerateSystemImages((__int64)MiUnlockBootPageSections, 0LL, 0LL);
      MiFlushStrongCodeDriverLoadFailures();
      return (__int64 (__fastcall *)(__int64))MiFlushDeferredRetpolineImageLoadEvents();
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    MiInitializeCrashDumpPtes();
    _InterlockedIncrement(&dword_140E373C4);
    if ( !(unsigned int)MiInitializeWorkingSetManagerParameters((__int64)&MiSystemPartition) )
      MxInstallMoreMemory(23);
    if ( (int)ExInitializePagedHeaps() < 0 )
      MxInstallMoreMemory(24);
    if ( !PsInitializeQuotaSystem(0) )
      MxInstallMoreMemory(25);
    qword_140E2DA80 = MiGenerateSecureCookie();
    Seed = 305419896;
    ExecuteHotpatchTestBootFunction();
    if ( !(unsigned int)MiInitializeSharedUserData() )
      MxInstallMoreMemory(26);
    if ( (int)MiInitializeBootProcess() < 0 )
      MxInstallMoreMemory(27);
    MiIssueFlushTbEntire(2LL, 0xFFFFFFFFLL, v4);
    MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
    MiAddLoaderHalIoMappings(qword_140E38BB8, qword_140E38BB8 + qword_140E38BC0 - 1);
    if ( KdPrintBufferAllocateSize )
      KdSetDbgPrintBufferSize(KdPrintBufferAllocateSize);
    MiSetSlabAllocatorPolicy((__int64)&MiSystemPartition);
    if ( !(unsigned int)MiInitializeHotPatches(a2) )
      MxInstallMoreMemory(28);
    MmInitializeImageViewExtension(0LL);
    if ( (int)MiInitializeKernelScp() < 0 )
      MxInstallMoreMemory(29);
    v5 = ExGenRandom(1);
    qword_140E2ED78 = v5;
    dword_140E2ED80 = 8 * (v5 & 3) + 8;
    qword_141007878 = KeQueryPerformanceCounter(0LL).QuadPart;
    if ( (unsigned int)dword_140FC4258 > 2 )
      dword_140FC4258 = 0;
    if ( (MiFlags & 4) != 0 && (int)MiCreateSlabAllocationsFromKernelHal() < 0 )
      MxInstallMoreMemory(30);
    if ( (int)MiCreateSlabAllocationsFromLoaderBlock(a2) < 0 )
      MxInstallMoreMemory(31);
    MiInitializeSystemSpaceMap();
    qword_140E2D608 = 0LL;
    qword_140E2FE28 = 0LL;
    qword_140E2FE38 = 0LL;
    qword_141007880 = KeQueryPerformanceCounter(0LL).QuadPart;
    MiInitializeBootKernelShadowStacks(a2);
    if ( !(unsigned int)MiInitializeSystemImageRegion(a2) )
      MxInstallMoreMemory(32);
    MiInitializeLoadedModuleList(a2);
    qword_141007888 = KeQueryPerformanceCounter(0LL).QuadPart;
    MiUpdateSharedUserDataNumberOfPages();
    *(_DWORD *)(MmWriteableSharedUserData + 580) = 0;
    MiFlags |= 0x800000uLL;
    qword_140E39040[0] = 0LL;
    MmConfigurePrefetchSeekThreshold(32);
    PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
    MiEnumerateSystemImages((__int64)MiEnablePagingOfDriver, 0LL, 0LL);
    ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
    MmUnlockPagableImageSection(ExPageLockHandle);
    qword_140E37338 = MiAllocateDummyPage();
    qword_140E37330 = 48 * qword_140E37338 - 0x220000000000LL;
    v6 = MiReservePtes((__int64)&qword_140E37568, 1u);
    MmBadPointer = (PVOID)v6;
    if ( !v6 )
      MxInstallMoreMemory(33);
    MmBadPointer = (PVOID)(v6 << 25 >> 16);
    if ( !(unsigned int)MiInitializeRelocations() )
      MxInstallMoreMemory(34);
    qword_141007898 = KeQueryPerformanceCounter(0LL).QuadPart;
    MiInitializeTbFlushing();
    qword_1410078A0 = KeQueryPerformanceCounter(0LL).QuadPart;
    result = (__int64 (__fastcall *)(__int64))MiInitializeMirroring();
    if ( !(_DWORD)result )
      MxInstallMoreMemory(44);
  }
  return result;
}
