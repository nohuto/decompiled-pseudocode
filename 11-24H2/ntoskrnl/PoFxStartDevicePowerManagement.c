/*
 * XREFs of PoFxStartDevicePowerManagement @ 0x1404A5D50
 * Callers:
 *     HalpTimerInitPowerManagement @ 0x140545428 (HalpTimerInitPowerManagement.c)
 *     HalpDmaInitPowerManagement @ 0x14054F5E0 (HalpDmaInitPowerManagement.c)
 *     HalpInterruptInitPowerManagement @ 0x140553CF8 (HalpInterruptInitPowerManagement.c)
 *     DifPoFxStartDevicePowerManagementWrapper @ 0x140636700 (DifPoFxStartDevicePowerManagementWrapper.c)
 *     PoFxEnableDStateReporting @ 0x14074B7A0 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterDebugger @ 0x140C35168 (PoFxRegisterDebugger.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     PoFxActivateComponent @ 0x1402AE460 (PoFxActivateComponent.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopFxReinitializeAccountingInstance @ 0x1403A5DA8 (PopFxReinitializeAccountingInstance.c)
 *     PoFxIdleComponent @ 0x1403A8D20 (PoFxIdleComponent.c)
 *     PopFxIncrementDeviceSleepCount @ 0x14048BAFC (PopFxIncrementDeviceSleepCount.c)
 *     PopFxActivateDevice @ 0x140490A10 (PopFxActivateDevice.c)
 *     PopPepDeviceStarted @ 0x1404A5EE4 (PopPepDeviceStarted.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x1407547C0 (PopDiagTraceFxDeviceStartPowerManagement.c)
 */

void __fastcall PoFxStartDevicePowerManagement(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char *v5; // rbp
  char v6; // bp
  unsigned int i; // r14d
  KIRQL v8; // al
  int v9; // edx
  KIRQL v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rbp
  KIRQL v13; // r15
  unsigned int v14; // eax
  __int64 v15; // r14
  unsigned int j; // ebp
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(BugCheckParameter2 + 48);
  if ( !PopFxBasicAccountingDisabled )
  {
    for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 868); ++i )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * i) + 200LL;
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12);
      if ( !PopFxBasicAccountingDisabled )
      {
        PopFxReinitializeAccountingInstance(v12, 1);
        *(_QWORD *)(v12 + 24) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v12 + 8) = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v12, v13);
    }
  }
  PopPepDeviceStarted(*(_QWORD *)(BugCheckParameter2 + 56));
  if ( *(_QWORD *)(BugCheckParameter2 + 64) )
  {
    v17 = *(_QWORD *)(BugCheckParameter2 + 72);
    guard_dispatch_icall_no_overrides(18LL, &v17);
  }
  if ( v2 )
  {
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88));
    v9 = *(_DWORD *)(v2 + 120);
    v10 = v8;
    if ( (*(_DWORD *)(BugCheckParameter2 + 864) & 1) != 0 )
    {
      if ( v9 )
        *(_DWORD *)(v2 + 120) = 0;
    }
    else if ( v9 )
    {
      v14 = *(_DWORD *)(BugCheckParameter2 + 868);
      v15 = *(unsigned int *)(v2 + 120);
      do
      {
        for ( j = 0; j < v14; ++j )
        {
          PoFxActivateComponent(BugCheckParameter2, j, 2);
          v14 = *(_DWORD *)(BugCheckParameter2 + 868);
        }
        --v15;
      }
      while ( v15 );
    }
    _InterlockedOr((volatile signed __int32 *)(v2 + 296), 4u);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88), v10);
    PopDiagTraceFxDeviceStartPowerManagement(v2);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (char *)KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxDeviceListLock, 0, v5, (__int64)&PopFxDeviceListLock);
  if ( v5 )
    v5[10] = 1;
  v6 = PopFxEnableShutdownActiveBias;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegion();
  if ( v6 )
  {
    v11 = *(_QWORD *)(v2 + 32);
    PopFxActivateDevice(v11, 0, 0);
    PopFxIncrementDeviceSleepCount(v11);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 868) )
  {
    do
      PoFxIdleComponent(BugCheckParameter2, v1++);
    while ( v1 < *(_DWORD *)(BugCheckParameter2 + 868) );
  }
}
