/*
 * XREFs of MiInitSystem @ 0x140C3C930
 * Callers:
 *     MmInitSystem @ 0x140BCD2E8 (MmInitSystem.c)
 * Callees:
 *     PsSetPagePriorityThread @ 0x14020E16C (PsSetPagePriorityThread.c)
 *     MiIssueFlushTbEntire @ 0x14026F7B8 (MiIssueFlushTbEntire.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MmUnlockPagableImageSection @ 0x14036DFD0 (MmUnlockPagableImageSection.c)
 *     MiEnumerateSystemImages @ 0x14036E320 (MiEnumerateSystemImages.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     ExecuteHotpatchTestBootFunction @ 0x14051E868 (ExecuteHotpatchTestBootFunction.c)
 *     VslInitializeSecurePool @ 0x140589FCC (VslInitializeSecurePool.c)
 *     KdSetDbgPrintBufferSize @ 0x1405AC5C4 (KdSetDbgPrintBufferSize.c)
 *     ExInitializePagedHeaps @ 0x14064DE4C (ExInitializePagedHeaps.c)
 *     MxInstallMoreMemory @ 0x140660BB0 (MxInstallMoreMemory.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14066D024 (MiInitializeWorkingSetManagerParameters.c)
 *     MiSetSlabAllocatorPolicy @ 0x14067D014 (MiSetSlabAllocatorPolicy.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiActOnLargeKernelHalPages @ 0x1407D7B40 (MiActOnLargeKernelHalPages.c)
 *     MiUpdateSharedUserDataNumberOfPages @ 0x1407DA310 (MiUpdateSharedUserDataNumberOfPages.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x1407DDB8C (MmConfigurePrefetchSeekThreshold.c)
 *     MiGenerateSecureCookie @ 0x1407DDC24 (MiGenerateSecureCookie.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1407E0A10 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiInitializeMemoryEvents @ 0x1407F007C (MiInitializeMemoryEvents.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x140A17730 (PsCreateSystemThread.c)
 *     MmLockPagableDataSection @ 0x140A5F0D0 (MmLockPagableDataSection.c)
 *     KeGetTbSize @ 0x140C1836C (KeGetTbSize.c)
 *     PsInitializeQuotaSystem @ 0x140C2489C (PsInitializeQuotaSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x140C3C7E4 (MiAddLoaderHalIoMappings.c)
 *     MiInitializeBootProcess @ 0x140C3D150 (MiInitializeBootProcess.c)
 *     MiInitializeSharedUserData @ 0x140C3D30C (MiInitializeSharedUserData.c)
 *     MiAllocateDummyPage @ 0x140C3D9A8 (MiAllocateDummyPage.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140C3F6D0 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiSectionInitialization @ 0x140C424F4 (MiSectionInitialization.c)
 *     MiInitializeMirroring @ 0x140C42780 (MiInitializeMirroring.c)
 *     MiInitializeSystemSpaceMap @ 0x140C42EB0 (MiInitializeSystemSpaceMap.c)
 *     MmInitializeImageViewExtension @ 0x140C42F58 (MmInitializeImageViewExtension.c)
 *     MiInitializeKernelScp @ 0x140C44578 (MiInitializeKernelScp.c)
 *     MiInitializeHotPatches @ 0x140C454F0 (MiInitializeHotPatches.c)
 *     MiInitializeBootKernelShadowStacks @ 0x140C45D68 (MiInitializeBootKernelShadowStacks.c)
 *     MiCreateEnclaveRegions @ 0x140C46BFC (MiCreateEnclaveRegions.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C471C0 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiInitializeRelocations @ 0x140C47A3C (MiInitializeRelocations.c)
 *     MiInitializeCfg @ 0x140C47C04 (MiInitializeCfg.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140C480EC (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiInitializeCacheFlushing @ 0x140C48FA8 (MiInitializeCacheFlushing.c)
 *     MiInitializeTbFlush @ 0x140C492CC (MiInitializeTbFlush.c)
 *     MiInitializeApiSets @ 0x140C49CDC (MiInitializeApiSets.c)
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 *     MiInitializeSystemImageRegion @ 0x140C4A30C (MiInitializeSystemImageRegion.c)
 *     MiRegisterForHardwareAcceleratorChanges @ 0x140C4ADB8 (MiRegisterForHardwareAcceleratorChanges.c)
 */

__int64 (__fastcall *__fastcall MiInitSystem(int a1, __int64 a2))(__int64 a1)
{
  __int64 (__fastcall *result)(__int64); // rax
  unsigned int v4; // eax
  int j; // edi
  __int64 v6; // rax
  unsigned int TbSize; // eax
  unsigned int v8; // ebx
  _KPROCESS *Process; // rcx
  int v10; // eax
  char v11; // al
  unsigned int i; // ebp
  HANDLE ThreadHandle; // [rsp+40h] [rbp-58h] BYREF
  PKSTART_ROUTINE v14[6]; // [rsp+48h] [rbp-50h]

  v14[0] = (PKSTART_ROUTINE)KeBalanceSetManager;
  v14[1] = (PKSTART_ROUTINE)KeSwapProcessOrStack;
  v14[2] = (PKSTART_ROUTINE)MiRebuildLargePagesThread;
  v14[3] = (PKSTART_ROUTINE)MiZeroPageThread;
  v14[4] = (PKSTART_ROUTINE)MiDereferenceSegmentThread;
  result = MiMappedPageWriter;
  v14[5] = (PKSTART_ROUTINE)MiMappedPageWriter;
  ThreadHandle = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x400u);
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
      *(_DWORD *)(MmWriteableSharedUserData + 580) = 0x200000;
      if ( (MiFlags & 0x4000) != 0 && (int)VslInitializeSecurePool(qword_140E38948, qword_140E38950) < 0 )
        MxInstallMoreMemory(35);
      if ( !(unsigned int)MiSectionInitialization() )
        MxInstallMoreMemory(36);
      if ( (int)MiInitializeCfg() < 0 )
        MxInstallMoreMemory(37);
      if ( !(unsigned int)MiCreateEnclaveRegions(a2) )
        MxInstallMoreMemory(39);
      qword_140E2FBC8 = 0LL;
      MiInitializeCacheFlushing();
      if ( !MiInitializeMemoryEvents(&MiSystemPartition) )
        MxInstallMoreMemory(41);
      v10 = dword_140FC41FC;
      if ( (unsigned int)dword_140FC41FC <= 0x40 )
      {
        if ( !dword_140FC41FC )
          v10 = 1;
      }
      else
      {
        v10 = 64;
      }
      dword_140FC41FC = v10 << 8;
      v11 = dword_140FC41F0;
      if ( (dword_140FC41F0 & 0xFFFFFFF8) != 0 )
      {
        v11 = 0;
        dword_140FC41F0 = 0;
      }
      if ( (v11 & 4) != 0 )
      {
        dword_140E3704C = 16;
        dword_140E37050 = 8;
      }
      else
      {
        dword_140E3704C = 4;
      }
      MiComputeMemoryNodeProcessorAssignments();
      LOWORD(stru_140E2FC68.Header.Lock) = 0;
      qword_140E37208 = (__int64)&qword_140E37200;
      qword_140E37200 = (__int64)&qword_140E37200;
      stru_140E2FC68.Header.Size = 6;
      stru_140E2FC68.Header.WaitListHead.Blink = &stru_140E2FC68.Header.WaitListHead;
      stru_140E2FC68.Header.WaitListHead.Flink = &stru_140E2FC68.Header.WaitListHead;
      MxDeferredBootAddMemoryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))MiHotAddBootDeferredDescriptors;
      stru_140E2FC68.Header.SignalState = 0;
      MxDeferredBootAddMemoryWorkItem.Parameter = 0LL;
      MxDeferredBootAddMemoryWorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&MxDeferredBootAddMemoryWorkItem, NormalWorkQueue);
      for ( i = 0; i < 6; ++i )
      {
        if ( PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, v14[i], &MiSystemPartition) < 0 )
          MxInstallMoreMemory(43);
        ObCloseHandle(ThreadHandle, 0);
      }
      MiEnumerateSystemImages((__int64)MiWriteProtectSystemImages, 0LL, 0);
      _InterlockedAdd(&dword_140E37184, 0xFFFFFFFF);
      result = (__int64 (__fastcall *)(__int64))MiInitializeApiSets(a2);
      if ( (int)result < 0 )
        MxInstallMoreMemory(45);
    }
    else if ( a1 == 2 )
    {
      qword_140E37208 = (__int64)&qword_140E37200;
      qword_140E37200 = (__int64)&qword_140E37200;
      MiRegisterForHardwareAcceleratorChanges();
      MiEnumerateSystemImages((__int64)MiUnlockBootPageSections, 0LL, 0);
      MiFlushStrongCodeDriverLoadFailures();
      return (__int64 (__fastcall *)(__int64))MiFlushDeferredRetpolineImageLoadEvents();
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    qword_140E2FE78 = MiReservePtes((__int64)&qword_140E37328, 0x20u);
    _InterlockedAdd(&dword_140E37184, 1u);
    if ( !(unsigned int)MiInitializeWorkingSetManagerParameters((__int64)&MiSystemPartition) )
      MxInstallMoreMemory(23);
    if ( (int)ExInitializePagedHeaps() < 0 )
      MxInstallMoreMemory(24);
    if ( !PsInitializeQuotaSystem(0) )
      MxInstallMoreMemory(25);
    qword_140E2D840 = MiGenerateSecureCookie();
    Seed = 305419896;
    ExecuteHotpatchTestBootFunction();
    if ( !(unsigned int)MiInitializeSharedUserData() )
      MxInstallMoreMemory(26);
    if ( (int)MiInitializeBootProcess() < 0 )
      MxInstallMoreMemory(27);
    MiIssueFlushTbEntire(2LL, -1);
    MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
    MiAddLoaderHalIoMappings(qword_140E38978, qword_140E38978 + qword_140E38980 - 1);
    if ( KdPrintBufferAllocateSize )
      KdSetDbgPrintBufferSize(KdPrintBufferAllocateSize);
    MiSetSlabAllocatorPolicy((__int64)&MiSystemPartition);
    if ( !(unsigned int)MiInitializeHotPatches(a2) )
      MxInstallMoreMemory(28);
    MmInitializeImageViewExtension(0LL);
    if ( (int)MiInitializeKernelScp() < 0 )
      MxInstallMoreMemory(29);
    v4 = ExGenRandom(1);
    qword_140E2EB38 = v4;
    dword_140E2EB40 = 8 * (v4 & 3) + 8;
    qword_141007878 = KeQueryPerformanceCounter(0LL).QuadPart;
    if ( (unsigned int)dword_140FC4248 > 2 )
      dword_140FC4248 = 0;
    if ( (MiFlags & 4) != 0 )
    {
      for ( j = 0; !j; j = 1 )
      {
        if ( (int)MiActOnLargeKernelHalPages(*(char **)(*((_QWORD *)&MiState + 448) + 48LL)) < 0 )
          MxInstallMoreMemory(30);
      }
      if ( (MiFlags & 0x4000) != 0 )
        _InterlockedOr(&dword_140E389C4, 8u);
    }
    if ( (int)MiCreateSlabAllocationsFromLoaderBlock(a2) < 0 )
      MxInstallMoreMemory(31);
    MiInitializeSystemSpaceMap();
    qword_140E2D3C8 = 0LL;
    qword_140E2FBE8 = 0LL;
    qword_140E2FBF8 = 0LL;
    qword_141007880 = KeQueryPerformanceCounter(0LL).QuadPart;
    MiInitializeBootKernelShadowStacks(a2);
    if ( !(unsigned int)MiInitializeSystemImageRegion(a2) )
      MxInstallMoreMemory(32);
    MiInitializeLoadedModuleList(a2);
    qword_141007888 = KeQueryPerformanceCounter(0LL).QuadPart;
    MiUpdateSharedUserDataNumberOfPages();
    *(_DWORD *)(MmWriteableSharedUserData + 580) = 0;
    MiFlags |= 0x800000uLL;
    qword_140E38E00[0] = 0LL;
    MmConfigurePrefetchSeekThreshold(32);
    PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
    MiEnumerateSystemImages((__int64)MiEnablePagingOfDriver, 0LL, 0);
    ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
    MmUnlockPagableImageSection(ExPageLockHandle);
    qword_140E370F8 = MiAllocateDummyPage();
    qword_140E370F0 = 48 * qword_140E370F8 - 0x220000000000LL;
    v6 = MiReservePtes((__int64)&qword_140E37328, 1u);
    MmBadPointer = (PVOID)v6;
    if ( !v6 )
      MxInstallMoreMemory(33);
    MmBadPointer = (PVOID)(v6 << 25 >> 16);
    if ( !(unsigned int)MiInitializeRelocations() )
      MxInstallMoreMemory(34);
    qword_141007898 = KeQueryPerformanceCounter(0LL).QuadPart;
    TbSize = KeGetTbSize();
    qword_140E2D990 = -1LL;
    v8 = TbSize;
    if ( !TbSize )
      v8 = 2048;
    MiInitializeTbFlush(v8);
    if ( qword_140E2D990 == v8 && v8 != 2048 )
    {
      qword_140E2D990 = -1LL;
      MiInitializeTbFlush(2048LL);
    }
    qword_1410078A0 = KeQueryPerformanceCounter(0LL).QuadPart;
    result = (__int64 (__fastcall *)(__int64))MiInitializeMirroring();
    if ( !(_DWORD)result )
      MxInstallMoreMemory(44);
  }
  return result;
}
