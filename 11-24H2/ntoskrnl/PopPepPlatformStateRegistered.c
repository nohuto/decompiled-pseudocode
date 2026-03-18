/*
 * XREFs of PopPepPlatformStateRegistered @ 0x1405DBD18
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1405D12F8 (PopFxEnablePlatformStates.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x140246D40 (ExReleaseSpinLockShared.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140315390 (PopPepUpdateIdleStateRefCount.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PopFxDereferenceDevice @ 0x140376880 (PopFxDereferenceDevice.c)
 *     PopFxTryReferenceDevice @ 0x140377BF0 (PopFxTryReferenceDevice.c)
 *     PoFxIdleDevice @ 0x1403D76E4 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x140496080 (PopFxActivateDevice.c)
 *     PopPepInitializeVetoMasks @ 0x1404BD99C (PopPepInitializeVetoMasks.c)
 *     PopPepInitializeDebuggerMasks @ 0x1405DBAF4 (PopPepInitializeDebuggerMasks.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     PopPepInitializeConstraintOverrides @ 0x140763DBC (PopPepInitializeConstraintOverrides.c)
 */

__int64 __fastcall PopPepPlatformStateRegistered(unsigned int a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rbx
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __int64 i; // rsi
  KIRQL v8; // al
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  _QWORD *v13; // rdi
  char v14; // [rsp+78h] [rbp+10h] BYREF

  v1 = a1;
  result = _InterlockedCompareExchange64(&PopPepPlatformState, PpmPlatformStates + 64, 0LL);
  if ( !result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = KeAbPreAcquire((__int64)&PopPepDeviceListLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&PopPepDeviceListLock, 0, v4, (__int64)&PopPepDeviceListLock);
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
        v12 = *(_QWORD *)(i + 32);
        if ( *(_QWORD *)(v12 + 48) )
        {
          if ( (int)PopFxTryReferenceDevice(*(_QWORD *)(i + 32), 2) >= 0 )
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
            KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
            PopFxActivateDevice(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 32LL), 0, 0);
            PopPepInitializeVetoMasks(i, v1);
            PoFxIdleDevice(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 32LL));
            v13 = KeAbPreAcquire((__int64)&PopPepDeviceListLock, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(
                (signed __int64 *)&PopPepDeviceListLock,
                0,
                v13,
                (__int64)&PopPepDeviceListLock);
            if ( v13 )
              *((_BYTE *)v13 + 10) = 1;
            PopFxDereferenceDevice(v12, 2);
          }
        }
        else if ( (*(_DWORD *)(v12 + 864) & 2) != 0 )
        {
          PopPepInitializeDebuggerMasks(i, v1, v10, v11);
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    KeLeaveCriticalRegion();
    PopPepUpdateIdleStateRefCount((1 << v1) - 1, 0, 0, 0LL);
    v14 = 1;
    return ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_REGISTERED, &v14, 1LL);
  }
  return result;
}
