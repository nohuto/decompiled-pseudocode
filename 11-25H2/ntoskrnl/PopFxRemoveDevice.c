/*
 * XREFs of PopFxRemoveDevice @ 0x1405CD564
 * Callers:
 *     PopFxUnregisterDevice @ 0x140A72854 (PopFxUnregisterDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void __fastcall PopFxRemoveDevice(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rax
  signed __int8 v5; // cf
  __int64 *v6; // rsi
  __int64 v7; // rdx
  _QWORD *v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxDeviceListLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&PopFxDeviceListLock, v4, (__int64)&PopFxDeviceListLock);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v8 = (_QWORD *)a2[1], (_QWORD *)*v8 != a2) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegion();
}
