/*
 * XREFs of MiInitSystem @ 0x140C4FDD0
 * Callers:
 *     MmInitSystem @ 0x140BE02E8 (MmInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MmUnlockPagableImageSection @ 0x1402BBBB0 (MmUnlockPagableImageSection.c)
 *     MiEnumerateSystemImages @ 0x1402BBF00 (MiEnumerateSystemImages.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PsSetPagePriorityThread @ 0x140330E98 (PsSetPagePriorityThread.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     MiIssueFlushTbEntire @ 0x14039E5D8 (MiIssueFlushTbEntire.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     ExecuteHotpatchTestBootFunction @ 0x14051E8B8 (ExecuteHotpatchTestBootFunction.c)
 *     VslInitializeSecurePool @ 0x14058A9DC (VslInitializeSecurePool.c)
 *     KdSetDbgPrintBufferSize @ 0x1405ACEC4 (KdSetDbgPrintBufferSize.c)
 *     ExInitializePagedHeaps @ 0x14065838C (ExInitializePagedHeaps.c)
 *     MxInstallMoreMemory @ 0x14066D8C0 (MxInstallMoreMemory.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140679B10 (MiInitializeWorkingSetManagerParameters.c)
 *     MiSetSlabAllocatorPolicy @ 0x1406899D4 (MiSetSlabAllocatorPolicy.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiUpdateSharedUserDataNumberOfPages @ 0x1407EA7A0 (MiUpdateSharedUserDataNumberOfPages.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x1407EDFFC (MmConfigurePrefetchSeekThreshold.c)
 *     MiGenerateSecureCookie @ 0x1407EE094 (MiGenerateSecureCookie.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1407F0E80 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiInitializeMemoryEvents @ 0x14080067C (MiInitializeMemoryEvents.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1408F8C00 (PsCreateSystemThread.c)
 *     MmLockPagableDataSection @ 0x140A54770 (MmLockPagableDataSection.c)
 *     PsInitializeQuotaSystem @ 0x140C37CA8 (PsInitializeQuotaSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x140C4FC84 (MiAddLoaderHalIoMappings.c)
 *     MiInitializeBootProcess @ 0x140C50588 (MiInitializeBootProcess.c)
 *     MiInitializeSharedUserData @ 0x140C50724 (MiInitializeSharedUserData.c)
 *     MiAllocateDummyPage @ 0x140C50D68 (MiAllocateDummyPage.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140C52A90 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiSectionInitialization @ 0x140C558B4 (MiSectionInitialization.c)
 *     MiInitializeMirroring @ 0x140C55B40 (MiInitializeMirroring.c)
 *     MiInitializeCrashDumpPtes @ 0x140C56150 (MiInitializeCrashDumpPtes.c)
 *     MiInitializeSystemSpaceMap @ 0x140C562B8 (MiInitializeSystemSpaceMap.c)
 *     MmInitializeImageViewExtension @ 0x140C56360 (MmInitializeImageViewExtension.c)
 *     MiInitializeModifiedWriterParameters @ 0x140C5738C (MiInitializeModifiedWriterParameters.c)
 *     MiInitializeKernelScp @ 0x140C579F0 (MiInitializeKernelScp.c)
 *     MiInitializeHotPatches @ 0x140C58960 (MiInitializeHotPatches.c)
 *     MiInitializeBootKernelShadowStacks @ 0x140C591D8 (MiInitializeBootKernelShadowStacks.c)
 *     MiCreateEnclaveRegions @ 0x140C5A06C (MiCreateEnclaveRegions.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C5A630 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiInitializeRelocations @ 0x140C5AEAC (MiInitializeRelocations.c)
 *     MiInitializeCfg @ 0x140C5B074 (MiInitializeCfg.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140C5B55C (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140C5B5B4 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiInitializeCacheFlushing @ 0x140C5C468 (MiInitializeCacheFlushing.c)
 *     MiInitializeTbFlushing @ 0x140C5C90C (MiInitializeTbFlushing.c)
 *     MiInitializeApiSets @ 0x140C5D1F8 (MiInitializeApiSets.c)
 *     MiInitializeLoadedModuleList @ 0x140C5D4A8 (MiInitializeLoadedModuleList.c)
 *     MiInitializeSystemImageRegion @ 0x140C5D828 (MiInitializeSystemImageRegion.c)
 *     MiRegisterForHardwareAcceleratorChanges @ 0x140C5E2C8 (MiRegisterForHardwareAcceleratorChanges.c)
 */

__int64 (__fastcall *__fastcall MiInitSystem(int a1, __int64 a2))(__int64 a1)
{
  __int64 (__fastcall *result)(__int64); // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  __int64 v9; // rax
  _KPROCESS *Process; // rcx
  unsigned int v11; // esi
  PKSTART_ROUTINE *v12; // r14
  HANDLE ThreadHandle; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v14[6]; // [rsp+48h] [rbp-50h] BYREF

  v14[0] = KeBalanceSetManager;
  v14[1] = KeSwapProcessOrStack;
  v14[2] = MiRebuildLargePagesThread;
  v14[3] = MiZeroPageThread;
  v14[4] = MiDereferenceSegmentThread;
  result = MiMappedPageWriter;
  v14[5] = MiMappedPageWriter;
  ThreadHandle = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x400u);
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
      *(_DWORD *)(MmWriteableSharedUserData + 580) = 0x200000;
      if ( (MiFlags & 0x4000) != 0 && (int)VslInitializeSecurePool(qword_140E38CC8, qword_140E38CD0) < 0 )
        MxInstallMoreMemory(35);
      if ( !(unsigned int)MiSectionInitialization() )
        MxInstallMoreMemory(36);
      if ( (int)MiInitializeCfg() < 0 )
        MxInstallMoreMemory(37);
      if ( !(unsigned int)MiCreateEnclaveRegions(a2) )
        MxInstallMoreMemory(39);
      qword_140E2FF48 = 0LL;
      MiInitializeCacheFlushing();
      if ( !MiInitializeMemoryEvents(&MiSystemPartition) )
        MxInstallMoreMemory(41);
      if ( !(unsigned int)MiInitializeModifiedWriterParameters() )
        MxInstallMoreMemory(50);
      MiComputeMemoryNodeProcessorAssignments();
      LOWORD(stru_140E2FFE8.Header.Lock) = 0;
      qword_140E37588 = (__int64)&qword_140E37580;
      qword_140E37580 = (__int64)&qword_140E37580;
      stru_140E2FFE8.Header.Size = 6;
      stru_140E2FFE8.Header.WaitListHead.Blink = &stru_140E2FFE8.Header.WaitListHead;
      stru_140E2FFE8.Header.WaitListHead.Flink = &stru_140E2FFE8.Header.WaitListHead;
      MxDeferredBootAddMemoryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))MiHotAddBootDeferredDescriptors;
      stru_140E2FFE8.Header.SignalState = 0;
      MxDeferredBootAddMemoryWorkItem.Parameter = 0LL;
      MxDeferredBootAddMemoryWorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&MxDeferredBootAddMemoryWorkItem, NormalWorkQueue);
      v11 = 0;
      v12 = (PKSTART_ROUTINE *)v14;
      do
      {
        if ( PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *v12, &MiSystemPartition) < 0 )
          MxInstallMoreMemory(43);
        ObCloseHandle(ThreadHandle, 0);
        ++v11;
        ++v12;
      }
      while ( v11 < 6 );
      MiEnumerateSystemImages((__int64)MiWriteProtectSystemImages, 0LL, 0);
      _InterlockedDecrement(&dword_140E37504);
      result = (__int64 (__fastcall *)(__int64))MiInitializeApiSets(a2);
      if ( (int)result < 0 )
        MxInstallMoreMemory(45);
    }
    else if ( a1 == 2 )
    {
      qword_140E37588 = (__int64)&qword_140E37580;
      qword_140E37580 = (__int64)&qword_140E37580;
      MiRegisterForHardwareAcceleratorChanges();
      MiEnumerateSystemImages((__int64)MiUnlockBootPageSections, 0LL, 0);
      MiFlushStrongCodeDriverLoadFailures();
      return (__int64 (__fastcall *)(__int64))MiFlushDeferredRetpolineImageLoadEvents();
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    MiInitializeCrashDumpPtes();
    _InterlockedIncrement(&dword_140E37504);
    if ( !(unsigned int)MiInitializeWorkingSetManagerParameters((__int64)&MiSystemPartition) )
      MxInstallMoreMemory(23);
    if ( (int)ExInitializePagedHeaps() < 0 )
      MxInstallMoreMemory(24);
    if ( !PsInitializeQuotaSystem(0) )
      MxInstallMoreMemory(25);
    qword_140E2DBC0 = MiGenerateSecureCookie();
    Seed = 305419896;
    ExecuteHotpatchTestBootFunction();
    if ( !(unsigned int)MiInitializeSharedUserData() )
      MxInstallMoreMemory(26);
    if ( (int)MiInitializeBootProcess() < 0 )
      MxInstallMoreMemory(27);
    MiIssueFlushTbEntire(2LL, 0xFFFFFFFFLL, v4);
    MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
    MiAddLoaderHalIoMappings(qword_140E38CF8, qword_140E38CF8 + qword_140E38D00 - 1);
    if ( KdPrintBufferAllocateSize )
      KdSetDbgPrintBufferSize(KdPrintBufferAllocateSize);
    MiSetSlabAllocatorPolicy((__int64)&MiSystemPartition);
    if ( !(unsigned int)MiInitializeHotPatches(a2) )
      MxInstallMoreMemory(28);
    MmInitializeImageViewExtension(0LL);
    if ( (int)MiInitializeKernelScp() < 0 )
      MxInstallMoreMemory(29);
    v8 = ExGenRandom(1, v5, v6, v7);
    qword_140E2EEB8 = v8;
    dword_140E2EEC0 = 8 * (v8 & 3) + 8;
    qword_141008878 = KeQueryPerformanceCounter(0LL).QuadPart;
    if ( (unsigned int)dword_140FC5258 > 2 )
      dword_140FC5258 = 0;
    if ( (MiFlags & 4) != 0 && (int)MiCreateSlabAllocationsFromKernelHal() < 0 )
      MxInstallMoreMemory(30);
    if ( (int)MiCreateSlabAllocationsFromLoaderBlock(a2) < 0 )
      MxInstallMoreMemory(31);
    MiInitializeSystemSpaceMap();
    qword_140E2D748 = 0LL;
    qword_140E2FF68 = 0LL;
    qword_140E2FF78 = 0LL;
    qword_141008880 = KeQueryPerformanceCounter(0LL).QuadPart;
    MiInitializeBootKernelShadowStacks(a2);
    if ( !(unsigned int)MiInitializeSystemImageRegion(a2) )
      MxInstallMoreMemory(32);
    MiInitializeLoadedModuleList(a2);
    qword_141008888 = KeQueryPerformanceCounter(0LL).QuadPart;
    MiUpdateSharedUserDataNumberOfPages();
    *(_DWORD *)(MmWriteableSharedUserData + 580) = 0;
    MiFlags |= 0x800000uLL;
    qword_140E39180[0] = 0LL;
    MmConfigurePrefetchSeekThreshold(32);
    PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
    MiEnumerateSystemImages((__int64)MiEnablePagingOfDriver, 0LL, 0);
    ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
    MmUnlockPagableImageSection(ExPageLockHandle);
    qword_140E37478 = MiAllocateDummyPage();
    qword_140E37470 = 48 * qword_140E37478 - 0x220000000000LL;
    v9 = MiReservePtes((__int64)&qword_140E376A8, 1u);
    MmBadPointer = (PVOID)v9;
    if ( !v9 )
      MxInstallMoreMemory(33);
    MmBadPointer = (PVOID)(v9 << 25 >> 16);
    if ( !(unsigned int)MiInitializeRelocations() )
      MxInstallMoreMemory(34);
    qword_141008898 = KeQueryPerformanceCounter(0LL).QuadPart;
    MiInitializeTbFlushing();
    qword_1410088A0 = KeQueryPerformanceCounter(0LL).QuadPart;
    result = (__int64 (__fastcall *)(__int64))MiInitializeMirroring();
    if ( !(_DWORD)result )
      MxInstallMoreMemory(44);
  }
  return result;
}
