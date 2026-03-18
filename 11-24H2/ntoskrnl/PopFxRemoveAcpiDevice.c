/*
 * XREFs of PopFxRemoveAcpiDevice @ 0x1405D1D18
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x1405DC790 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

void __fastcall PopFxRemoveAcpiDevice(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rax
  signed __int8 v5; // cf
  _QWORD *v6; // rdi
  __int64 v7; // r8
  _QWORD *v8; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxDeviceListLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&PopFxDeviceListLock, (__int64)v4, (__int64)&PopFxDeviceListLock);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = *(_QWORD *)(a2 + 200);
  if ( *(_QWORD *)(v7 + 8) != a2 + 200 || (v8 = *(_QWORD **)(a2 + 208), *v8 != a2 + 200) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegion();
}
