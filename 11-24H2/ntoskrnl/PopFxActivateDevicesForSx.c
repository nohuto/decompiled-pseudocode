/*
 * XREFs of PopFxActivateDevicesForSx @ 0x1404908F4
 * Callers:
 *     PopFxPrepareDevicesForShutdown @ 0x1404F291C (PopFxPrepareDevicesForShutdown.c)
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopFxActivateDevice @ 0x140490A10 (PopFxActivateDevice.c)
 */

void __fastcall PopFxActivateDevicesForSx(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rbx
  ULONG_PTR i; // rbx
  __int64 v5; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxDeviceListLock, 0, v3, (__int64)&PopFxDeviceListLock);
  if ( v3 )
    v3[10] = 1;
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
