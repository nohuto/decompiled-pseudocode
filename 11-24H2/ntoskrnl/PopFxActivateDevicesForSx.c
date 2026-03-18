/*
 * XREFs of PopFxActivateDevicesForSx @ 0x140495F64
 * Callers:
 *     PopFxPrepareDevicesForShutdown @ 0x1404F501C (PopFxPrepareDevicesForShutdown.c)
 *     PoBroadcastSystemState @ 0x140B64C6C (PoBroadcastSystemState.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PopFxActivateDevice @ 0x140496080 (PopFxActivateDevice.c)
 */

void __fastcall PopFxActivateDevicesForSx(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbx
  ULONG_PTR i; // rbx
  __int64 v5; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxDeviceListLock, 0, v3, (__int64)&PopFxDeviceListLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    v5 = *(_QWORD *)(i + 48);
    if ( v5 && *(unsigned __int8 *)(v5 + 216) < a1 && (*(_DWORD *)(i + 864) & 1) == 0 )
    {
      PopFxActivateDevice(*(_QWORD *)(v5 + 32), 0LL, 0LL);
      _InterlockedOr((volatile signed __int32 *)(v5 + 296), 0x1000u);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegion();
}
