/*
 * XREFs of ExGenRandom @ 0x14041CDD0
 * Callers:
 *     KeStartThread @ 0x14026AE04 (KeStartThread.c)
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x1403AE6F4 (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     MiGetBackgroundHugePageToZero @ 0x14041C6E0 (MiGetBackgroundHugePageToZero.c)
 *     RtlRandomEx @ 0x14041CDA0 (RtlRandomEx.c)
 *     ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x1404A51A8 (-KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFI.c)
 *     CcBcbProfiler @ 0x140505560 (CcBcbProfiler.c)
 *     IopInitializeInMemoryDumpData @ 0x14059108C (IopInitializeInMemoryDumpData.c)
 *     RtlpCreateHeapEncoding @ 0x1405DF3C8 (RtlpCreateHeapEncoding.c)
 *     RtlHpGlobalsInitialize @ 0x1405E630C (RtlHpGlobalsInitialize.c)
 *     MiBuildDynamicRegion @ 0x14066DAC0 (MiBuildDynamicRegion.c)
 *     sub_140689930 @ 0x140689930 (sub_140689930.c)
 *     sub_1406F0690 @ 0x1406F0690 (sub_1406F0690.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407A2BCC (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x1407A3508 (EtwpCovSampStrideSamplerInitialize.c)
 *     CmpCmdInit @ 0x1407C603C (CmpCmdInit.c)
 *     MiInitializePartitionFreeZeroLists @ 0x1407DCF4C (MiInitializePartitionFreeZeroLists.c)
 *     MiGenerateSecureCookie @ 0x1407DDC24 (MiGenerateSecureCookie.c)
 *     MiCreateZeroThreadContext @ 0x1407EF3FC (MiCreateZeroThreadContext.c)
 *     PspPrepareSystemDllInitBlock @ 0x14083C848 (PspPrepareSystemDllInitBlock.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408F9D30 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiInitializeProcessTopDownEntropy @ 0x1409054EC (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1409055B0 (MiInitializeProcessBottomUpEntropy.c)
 *     PspNotifyThreadCreation @ 0x14090B188 (PspNotifyThreadCreation.c)
 *     MiSelectImageBase @ 0x1409401DC (MiSelectImageBase.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     sub_1409E22F8 @ 0x1409E22F8 (sub_1409E22F8.c)
 *     PspSetupUserStack @ 0x1409EB438 (PspSetupUserStack.c)
 *     PspWow64InitThreadGuestx86 @ 0x1409EBB00 (PspWow64InitThreadGuestx86.c)
 *     RtlRandom @ 0x140A4CA70 (RtlRandom.c)
 *     MiReserveDriverPtes @ 0x140A5B530 (MiReserveDriverPtes.c)
 *     MiProcessLoadConfigForDriver @ 0x140A631A4 (MiProcessLoadConfigForDriver.c)
 *     MiSelectOverflowDllBase @ 0x140A82678 (MiSelectOverflowDllBase.c)
 *     MmInitializeProcessor @ 0x140B51F08 (MmInitializeProcessor.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 *     CcInitializeCacheManager @ 0x140C049F8 (CcInitializeCacheManager.c)
 *     PspTlsInitialize @ 0x140C24B34 (PspTlsInitialize.c)
 *     ExpInitSystemPhase0 @ 0x140C2F5EC (ExpInitSystemPhase0.c)
 *     ExInitializePoolTracker @ 0x140C3115C (ExInitializePoolTracker.c)
 *     ExpTimerInitialization @ 0x140C319BC (ExpTimerInitialization.c)
 *     ExpInitializePrivatePools @ 0x140C32D3C (ExpInitializePrivatePools.c)
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 *     MiInitializeBootDefaults @ 0x140C3CFC4 (MiInitializeBootDefaults.c)
 *     MiInitializeSharedUserData @ 0x140C3D30C (MiInitializeSharedUserData.c)
 *     MiInitializeNonPagedPool @ 0x140C42A74 (MiInitializeNonPagedPool.c)
 *     MiAddSubRegionEntropy @ 0x140C432FC (MiAddSubRegionEntropy.c)
 *     MiAssignHalEntropy @ 0x140C43394 (MiAssignHalEntropy.c)
 *     MiAssignSystemVa @ 0x140C434C0 (MiAssignSystemVa.c)
 *     MiAssignTopLevelRanges @ 0x140C435B0 (MiAssignTopLevelRanges.c)
 *     MiInitializeRelocations @ 0x140C47A3C (MiInitializeRelocations.c)
 *     MiInitializeSystemPtes @ 0x140C48C48 (MiInitializeSystemPtes.c)
 *     MiInitializeUltraSpace @ 0x140C4B150 (MiInitializeUltraSpace.c)
 *     ObInitSystem @ 0x140C4FF98 (ObInitSystem.c)
 *     MiInitializeTopLevelBitmap @ 0x140C55658 (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
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
