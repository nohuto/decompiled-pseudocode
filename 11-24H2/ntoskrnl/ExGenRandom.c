/*
 * XREFs of ExGenRandom @ 0x14040A540
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x1403310D0 (MiGetBackgroundHugePageToZero.c)
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x14033997C (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 *     RtlRandomEx @ 0x14040A510 (RtlRandomEx.c)
 *     ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x1404A092C (-KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFI.c)
 *     CcBcbProfiler @ 0x1405055A0 (CcBcbProfiler.c)
 *     IopInitializeInMemoryDumpData @ 0x1405918B0 (IopInitializeInMemoryDumpData.c)
 *     RtlpCreateHeapEncoding @ 0x1405E8C68 (RtlpCreateHeapEncoding.c)
 *     RtlHpGlobalsInitialize @ 0x1405EFC9C (RtlHpGlobalsInitialize.c)
 *     MiBuildDynamicRegion @ 0x14067A54C (MiBuildDynamicRegion.c)
 *     sub_140695E50 @ 0x140695E50 (sub_140695E50.c)
 *     sub_1406FA130 @ 0x1406FA130 (sub_1406FA130.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B23EC (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x1407B2D28 (EtwpCovSampStrideSamplerInitialize.c)
 *     CmpCmdInit @ 0x1407D5C78 (CmpCmdInit.c)
 *     MiInitializePartitionFreeZeroLists @ 0x1407ED3BC (MiInitializePartitionFreeZeroLists.c)
 *     MiGenerateSecureCookie @ 0x1407EE094 (MiGenerateSecureCookie.c)
 *     MiCreateZeroThreadContext @ 0x1407FF9F4 (MiCreateZeroThreadContext.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408DD544 (MiAllocateNewSubAllocatedRegion.c)
 *     PspPrepareSystemDllInitBlock @ 0x1408DFC08 (PspPrepareSystemDllInitBlock.c)
 *     MiInitializeProcessTopDownEntropy @ 0x14091B89C (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x14091B960 (MiInitializeProcessBottomUpEntropy.c)
 *     PspNotifyThreadCreation @ 0x140921518 (PspNotifyThreadCreation.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     sub_1409DAF88 @ 0x1409DAF88 (sub_1409DAF88.c)
 *     PspSetupUserStack @ 0x1409E0398 (PspSetupUserStack.c)
 *     PspWow64InitThreadGuestx86 @ 0x1409E0C08 (PspWow64InitThreadGuestx86.c)
 *     RtlRandom @ 0x140A46340 (RtlRandom.c)
 *     MiReserveDriverPtes @ 0x140A555D0 (MiReserveDriverPtes.c)
 *     MiProcessLoadConfigForDriver @ 0x140A5E04C (MiProcessLoadConfigForDriver.c)
 *     MiSelectOverflowDllBase @ 0x140A81C68 (MiSelectOverflowDllBase.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 *     MiSelectImageBase @ 0x140AEB020 (MiSelectImageBase.c)
 *     MmInitializeProcessor @ 0x140B64108 (MmInitializeProcessor.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 *     CcInitializeCacheManager @ 0x140C17A88 (CcInitializeCacheManager.c)
 *     PspTlsInitialize @ 0x140C37F40 (PspTlsInitialize.c)
 *     ExpInitSystemPhase0 @ 0x140C42A18 (ExpInitSystemPhase0.c)
 *     ExInitializePoolTracker @ 0x140C445BC (ExInitializePoolTracker.c)
 *     ExpTimerInitialization @ 0x140C44DD8 (ExpTimerInitialization.c)
 *     ExpInitializePrivatePools @ 0x140C46158 (ExpInitializePrivatePools.c)
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 *     MiInitializeBootDefaults @ 0x140C503FC (MiInitializeBootDefaults.c)
 *     MiInitializeSharedUserData @ 0x140C50724 (MiInitializeSharedUserData.c)
 *     MiInitializeNonPagedPool @ 0x140C55E34 (MiInitializeNonPagedPool.c)
 *     MiAddSubRegionEntropy @ 0x140C56704 (MiAddSubRegionEntropy.c)
 *     MiAssignHalEntropy @ 0x140C5679C (MiAssignHalEntropy.c)
 *     MiAssignSystemVa @ 0x140C568C8 (MiAssignSystemVa.c)
 *     MiAssignTopLevelRanges @ 0x140C569B8 (MiAssignTopLevelRanges.c)
 *     MiInitializeRelocations @ 0x140C5AEAC (MiInitializeRelocations.c)
 *     MiInitializeSystemPtes @ 0x140C5C108 (MiInitializeSystemPtes.c)
 *     MiInitializeUltraSpace @ 0x140C5E660 (MiInitializeUltraSpace.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 *     MiInitializeTopLevelBitmap @ 0x140C6945C (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExGenRandom(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned int v6; // ecx
  char *v7; // r9
  int v8; // edx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // ebx
  unsigned int v13; // ebx
  unsigned int i; // eax
  __int64 v18; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpLFGRngLock, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExpLFGRngLock, a2, a3, a4);
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ExpLFGRngLock);
  }
  if ( (_DWORD)v4 == 1 && ExpRemainingLeftoverBootRngData )
  {
    v18 = (unsigned int)(ExpRemainingLeftoverBootRngData - 1);
    v12 = ExpLeftoverBootRngData[v18];
    --ExpRemainingLeftoverBootRngData;
    memset(&ExpLeftoverBootRngData[v18], 0, sizeof(_DWORD));
  }
  else
  {
    v6 = 0;
    v7 = (char *)&ExpLFGRngState + 228 * v4;
    v8 = *((_DWORD *)v7 + 55);
    v9 = *((_DWORD *)v7 + 56);
    if ( v8 != 54 )
      v6 = v8 + 1;
    v10 = v6;
    v11 = 0LL;
    if ( v9 != 54 )
      v11 = (unsigned int)(v9 + 1);
    v12 = *(_DWORD *)&v7[4 * v10] - *(_DWORD *)&v7[4 * v11];
    *(_DWORD *)&v7[4 * v10] = v12;
    *((_DWORD *)v7 + 55) = v10;
    *((_DWORD *)v7 + 56) = v11;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64(&ExpLFGRngLock, 0LL);
  else
    KiReleaseSpinLockInstrumented(&ExpLFGRngLock, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v13 = ExpRNGAuxiliarySeed ^ v12;
  if ( _bittest64(&KeFeatureBits, 0x20u) )
  {
    for ( i = 0; i < 0xA; ++i )
    {
      __asm { rdrand  edx }
      if ( _CF )
      {
        v13 ^= _EDX;
        return v13;
      }
    }
  }
  return v13;
}
