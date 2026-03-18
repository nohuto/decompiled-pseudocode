/*
 * XREFs of ExGenRandom @ 0x14041A540
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x140209AF0 (MiGetBackgroundHugePageToZero.c)
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x14021061C (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     KeStartThread @ 0x1403B3660 (KeStartThread.c)
 *     RtlRandomEx @ 0x14041A510 (RtlRandomEx.c)
 *     ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x1404A5B9C (-KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFI.c)
 *     CcBcbProfiler @ 0x140507CE0 (CcBcbProfiler.c)
 *     IopInitializeInMemoryDumpData @ 0x14059488C (IopInitializeInMemoryDumpData.c)
 *     RtlpCreateHeapEncoding @ 0x1405EB6F8 (RtlpCreateHeapEncoding.c)
 *     RtlHpGlobalsInitialize @ 0x1405F265C (RtlHpGlobalsInitialize.c)
 *     MiBuildDynamicRegion @ 0x14067936C (MiBuildDynamicRegion.c)
 *     sub_140694D80 @ 0x140694D80 (sub_140694D80.c)
 *     sub_1406FC4F0 @ 0x1406FC4F0 (sub_1406FC4F0.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B1F9C (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x1407B28D8 (EtwpCovSampStrideSamplerInitialize.c)
 *     CmpCmdInit @ 0x1407D5788 (CmpCmdInit.c)
 *     MiInitializePartitionFreeZeroLists @ 0x1407ECDEC (MiInitializePartitionFreeZeroLists.c)
 *     MiGenerateSecureCookie @ 0x1407EDAC4 (MiGenerateSecureCookie.c)
 *     MiCreateZeroThreadContext @ 0x1407FF2B0 (MiCreateZeroThreadContext.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiSelectImageBase @ 0x1408F67EC (MiSelectImageBase.c)
 *     MiInitializeProcessTopDownEntropy @ 0x1408F8FC0 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1408F9084 (MiInitializeProcessBottomUpEntropy.c)
 *     PspNotifyThreadCreation @ 0x1408FEC38 (PspNotifyThreadCreation.c)
 *     PspPrepareSystemDllInitBlock @ 0x1409084EC (PspPrepareSystemDllInitBlock.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409C3660 (MiAllocateNewSubAllocatedRegion.c)
 *     sub_1409E11D8 @ 0x1409E11D8 (sub_1409E11D8.c)
 *     PspSetupUserStack @ 0x1409E5B08 (PspSetupUserStack.c)
 *     PspWow64InitThreadGuestx86 @ 0x1409E6378 (PspWow64InitThreadGuestx86.c)
 *     RtlRandom @ 0x140A4F590 (RtlRandom.c)
 *     MiProcessLoadConfigForDriver @ 0x140A6587C (MiProcessLoadConfigForDriver.c)
 *     MiSelectOverflowDllBase @ 0x140A86F18 (MiSelectOverflowDllBase.c)
 *     MiReserveDriverPtes @ 0x140AB636C (MiReserveDriverPtes.c)
 *     MmInitializeProcessor @ 0x140B62038 (MmInitializeProcessor.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 *     CcInitializeCacheManager @ 0x140C15A88 (CcInitializeCacheManager.c)
 *     PspTlsInitialize @ 0x140C35E00 (PspTlsInitialize.c)
 *     ExpInitSystemPhase0 @ 0x140C408C8 (ExpInitSystemPhase0.c)
 *     ExInitializePoolTracker @ 0x140C4246C (ExInitializePoolTracker.c)
 *     ExpTimerInitialization @ 0x140C42C88 (ExpTimerInitialization.c)
 *     ExpInitializePrivatePools @ 0x140C44008 (ExpInitializePrivatePools.c)
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 *     MiInitializeBootDefaults @ 0x140C4E26C (MiInitializeBootDefaults.c)
 *     MiInitializeSharedUserData @ 0x140C4E594 (MiInitializeSharedUserData.c)
 *     MiInitializeNonPagedPool @ 0x140C53CA4 (MiInitializeNonPagedPool.c)
 *     MiAddSubRegionEntropy @ 0x140C54574 (MiAddSubRegionEntropy.c)
 *     MiAssignHalEntropy @ 0x140C5460C (MiAssignHalEntropy.c)
 *     MiAssignSystemVa @ 0x140C54738 (MiAssignSystemVa.c)
 *     MiAssignTopLevelRanges @ 0x140C54828 (MiAssignTopLevelRanges.c)
 *     MiInitializeRelocations @ 0x140C58D1C (MiInitializeRelocations.c)
 *     MiInitializeSystemPtes @ 0x140C59F78 (MiInitializeSystemPtes.c)
 *     MiInitializeUltraSpace @ 0x140C5C4D0 (MiInitializeUltraSpace.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
 *     MiInitializeTopLevelBitmap @ 0x140C672E0 (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExGenRandom(int a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // ecx
  char *v4; // r9
  int v5; // edx
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // ebx
  unsigned int v10; // ebx
  unsigned int i; // eax
  __int64 v15; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpLFGRngLock, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExpLFGRngLock);
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ExpLFGRngLock);
  }
  if ( (_DWORD)v1 == 1 && ExpRemainingLeftoverBootRngData )
  {
    v15 = (unsigned int)(ExpRemainingLeftoverBootRngData - 1);
    v9 = ExpLeftoverBootRngData[v15];
    --ExpRemainingLeftoverBootRngData;
    memset(&ExpLeftoverBootRngData[v15], 0, sizeof(_DWORD));
  }
  else
  {
    v3 = 0;
    v4 = (char *)&ExpLFGRngState + 228 * v1;
    v5 = *((_DWORD *)v4 + 55);
    v6 = *((_DWORD *)v4 + 56);
    if ( v5 != 54 )
      v3 = v5 + 1;
    v7 = v3;
    v8 = 0LL;
    if ( v6 != 54 )
      v8 = (unsigned int)(v6 + 1);
    v9 = *(_DWORD *)&v4[4 * v7] - *(_DWORD *)&v4[4 * v8];
    *(_DWORD *)&v4[4 * v7] = v9;
    *((_DWORD *)v4 + 55) = v7;
    *((_DWORD *)v4 + 56) = v8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64(&ExpLFGRngLock, 0LL);
  else
    KiReleaseSpinLockInstrumented(&ExpLFGRngLock, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v10 = ExpRNGAuxiliarySeed ^ v9;
  if ( _bittest64(&KeFeatureBits, 0x20u) )
  {
    for ( i = 0; i < 0xA; ++i )
    {
      __asm { rdrand  edx }
      if ( _CF )
      {
        v10 ^= _EDX;
        return v10;
      }
    }
  }
  return v10;
}
