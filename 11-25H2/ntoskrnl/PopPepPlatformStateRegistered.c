/*
 * XREFs of PopPepPlatformStateRegistered @ 0x1405D6B38
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1405CCB48 (PopFxEnablePlatformStates.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403578B4 (PopPepUpdateIdleStateRefCount.c)
 *     PopFxDereferenceDevice @ 0x1403589F8 (PopFxDereferenceDevice.c)
 *     PopFxTryReferenceDevice @ 0x1403596E8 (PopFxTryReferenceDevice.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 *     PoFxIdleDevice @ 0x140477718 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x14047D560 (PopFxActivateDevice.c)
 *     PopPepInitializeVetoMasks @ 0x1404BF148 (PopPepInitializeVetoMasks.c)
 *     PopPepInitializeDebuggerMasks @ 0x1405D6914 (PopPepInitializeDebuggerMasks.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     PopPepInitializeConstraintOverrides @ 0x1407542FC (PopPepInitializeConstraintOverrides.c)
 */

int __fastcall PopPepPlatformStateRegistered(unsigned int a1)
{
  __int64 v1; // rbp
  signed __int64 v2; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rbx
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __int64 i; // rsi
  KIRQL v8; // al
  int v9; // ebx
  __int64 v10; // rbx
  __int64 *v11; // rdi
  char Buffer; // [rsp+78h] [rbp+10h] BYREF

  v1 = a1;
  v2 = _InterlockedCompareExchange64(&PopPepPlatformState, PpmPlatformStates + 64, 0LL);
  if ( !v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = KeAbPreAcquire((__int64)&PopPepDeviceListLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&PopPepDeviceListLock,
        0,
        v4,
        (unsigned __int64)&PopPepDeviceListLock);
    if ( v4 )
      *((_BYTE *)v4 + 10) = 1;
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
            v11 = KeAbPreAcquire((__int64)&PopPepDeviceListLock, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(
                (signed __int64 *)&PopPepDeviceListLock,
                0,
                v11,
                (unsigned __int64)&PopPepDeviceListLock);
            if ( v11 )
              *((_BYTE *)v11 + 10) = 1;
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
