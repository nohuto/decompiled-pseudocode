/*
 * XREFs of PopPepRemoveDevice @ 0x1404C1AE8
 * Callers:
 *     PopPepUnregisterDevice @ 0x140A72A18 (PopPepUnregisterDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void __fastcall PopPepRemoveDevice(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rsi
  __int64 v6; // rdx
  __int64 *v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&PopPepDeviceListLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&PopPepDeviceListLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&PopPepDeviceListLock, v3, (__int64)&PopPepDeviceListLock);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( PopPepLastCheckedDevice == a1 )
    PopPepLastCheckedDevice = (__int64 *)*a1;
  v6 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v7 = (__int64 *)a1[1], (__int64 *)*v7 != a1) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KeLeaveCriticalRegion();
}
