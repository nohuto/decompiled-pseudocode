/*
 * XREFs of PoFxStartDevicePowerManagement @ 0x1404AB730
 * Callers:
 *     HalpTimerInitPowerManagement @ 0x140547B68 (HalpTimerInitPowerManagement.c)
 *     HalpDmaInitPowerManagement @ 0x140551CA0 (HalpDmaInitPowerManagement.c)
 *     HalpInterruptInitPowerManagement @ 0x1405563B8 (HalpInterruptInitPowerManagement.c)
 *     DifPoFxStartDevicePowerManagementWrapper @ 0x140638140 (DifPoFxStartDevicePowerManagementWrapper.c)
 *     PoFxEnableDStateReporting @ 0x14074D470 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterDebugger @ 0x140C33028 (PoFxRegisterDebugger.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 *     PoFxIdleComponent @ 0x1403B4850 (PoFxIdleComponent.c)
 *     PoFxActivateComponent @ 0x1403B6160 (PoFxActivateComponent.c)
 *     PopFxIncrementDeviceSleepCount @ 0x140490E70 (PopFxIncrementDeviceSleepCount.c)
 *     PopFxActivateDevice @ 0x140496080 (PopFxActivateDevice.c)
 *     PopFxReinitializeAccountingInstance @ 0x1404A66AC (PopFxReinitializeAccountingInstance.c)
 *     PopPepDeviceStarted @ 0x1404AB8C4 (PopPepDeviceStarted.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140756340 (PopDiagTraceFxDeviceStartPowerManagement.c)
 */

void __fastcall PoFxStartDevicePowerManagement(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rbp
  char v8; // bp
  unsigned int i; // r14d
  KIRQL v10; // al
  int v11; // edx
  KIRQL v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rbp
  KIRQL v15; // r15
  unsigned int v16; // eax
  __int64 v17; // r14
  unsigned int j; // ebp
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(BugCheckParameter2 + 48);
  if ( !PopFxBasicAccountingDisabled )
  {
    for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 868); ++i )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * i) + 200LL;
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14);
      if ( !PopFxBasicAccountingDisabled )
      {
        PopFxReinitializeAccountingInstance(v14, 1);
        *(_QWORD *)(v14 + 24) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v14 + 8) = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v14, v15);
    }
  }
  PopPepDeviceStarted(*(_QWORD *)(BugCheckParameter2 + 56));
  if ( *(_QWORD *)(BugCheckParameter2 + 64) )
  {
    v19 = *(_QWORD *)(BugCheckParameter2 + 72);
    guard_dispatch_icall_no_overrides(18LL, &v19, v4, v5);
  }
  if ( v2 )
  {
    v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88));
    v11 = *(_DWORD *)(v2 + 120);
    v12 = v10;
    if ( (*(_DWORD *)(BugCheckParameter2 + 864) & 1) != 0 )
    {
      if ( v11 )
        *(_DWORD *)(v2 + 120) = 0;
    }
    else if ( v11 )
    {
      v16 = *(_DWORD *)(BugCheckParameter2 + 868);
      v17 = *(unsigned int *)(v2 + 120);
      do
      {
        for ( j = 0; j < v16; ++j )
        {
          PoFxActivateComponent(BugCheckParameter2, j, 2);
          v16 = *(_DWORD *)(BugCheckParameter2 + 868);
        }
        --v17;
      }
      while ( v17 );
    }
    _InterlockedOr((volatile signed __int32 *)(v2 + 296), 4u);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88), v12);
    PopDiagTraceFxDeviceStartPowerManagement(v2);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxDeviceListLock, 0, v7, (__int64)&PopFxDeviceListLock);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v8 = PopFxEnableShutdownActiveBias;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    v13 = *(_QWORD *)(v2 + 32);
    PopFxActivateDevice(v13, 0, 0);
    PopFxIncrementDeviceSleepCount(v13);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 868) )
  {
    do
      PoFxIdleComponent(BugCheckParameter2, v1++);
    while ( v1 < *(_DWORD *)(BugCheckParameter2 + 868) );
  }
}
