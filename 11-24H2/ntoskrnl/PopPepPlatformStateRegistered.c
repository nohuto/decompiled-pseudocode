/*
 * XREFs of PopPepPlatformStateRegistered @ 0x1405D8BE8
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1405CEA18 (PopFxEnablePlatformStates.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     PoFxIdleDevice @ 0x1402F11C4 (PoFxIdleDevice.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopFxTryReferenceDevice @ 0x1403A6408 (PopFxTryReferenceDevice.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403A6EB0 (PopPepUpdateIdleStateRefCount.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     PopFxActivateDevice @ 0x140490A10 (PopFxActivateDevice.c)
 *     PopPepInitializeVetoMasks @ 0x1404B8B0C (PopPepInitializeVetoMasks.c)
 *     PopPepInitializeDebuggerMasks @ 0x1405D89C4 (PopPepInitializeDebuggerMasks.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     PopPepInitializeConstraintOverrides @ 0x140763780 (PopPepInitializeConstraintOverrides.c)
 */

int __fastcall PopPepPlatformStateRegistered(unsigned int a1)
{
  __int64 v1; // rbp
  signed __int64 v2; // rax
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rbx
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __int64 i; // rsi
  KIRQL v8; // al
  int v9; // ebx
  __int64 v10; // rbx
  char *v11; // rdi
  char Buffer; // [rsp+78h] [rbp+10h] BYREF

  v1 = a1;
  v2 = _InterlockedCompareExchange64(&PopPepPlatformState, PpmPlatformStates + 64, 0LL);
  if ( !v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = (char *)KeAbPreAcquire((__int64)&PopPepDeviceListLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&PopPepDeviceListLock, 0, v4, (__int64)&PopPepDeviceListLock);
    if ( v4 )
      v4[10] = 1;
    PopPepInitializeConstraintOverrides();
    if ( (_DWORD)v1 )
    {
      v5 = (_DWORD *)(PopPepPlatformState + 384);
      v6 = v1;
      do
      {
        *v5 = 1073741825;
        v5 += 112;
        --v6;
      }
      while ( v6 );
    }
    for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
    {
      v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(i + 64));
      v9 = *(_DWORD *)(i + 172);
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(i + 64), v8);
      if ( v9 == 1 )
      {
        v10 = *(_QWORD *)(i + 32);
        if ( *(_QWORD *)(v10 + 48) )
        {
          if ( (int)PopFxTryReferenceDevice(*(_QWORD *)(i + 32), 2) >= 0 )
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
            KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
            PopFxActivateDevice(*(_QWORD *)(*(_QWORD *)(v10 + 48) + 32LL), 0, 0);
            PopPepInitializeVetoMasks(i, v1);
            PoFxIdleDevice(*(_QWORD *)(*(_QWORD *)(v10 + 48) + 32LL));
            v11 = (char *)KeAbPreAcquire((__int64)&PopPepDeviceListLock, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(
                (signed __int64 *)&PopPepDeviceListLock,
                0,
                v11,
                (__int64)&PopPepDeviceListLock);
            if ( v11 )
              v11[10] = 1;
            PopFxDereferenceDevice(v10, 2);
          }
        }
        else if ( (*(_DWORD *)(v10 + 864) & 2) != 0 )
        {
          PopPepInitializeDebuggerMasks(i, v1);
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    KeLeaveCriticalRegion();
    PopPepUpdateIdleStateRefCount((1 << v1) - 1, 0, 0, 0LL);
    Buffer = 1;
    LODWORD(v2) = ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_REGISTERED, &Buffer, 1u, 0LL, 0LL, 0, 0);
  }
  return v2;
}
