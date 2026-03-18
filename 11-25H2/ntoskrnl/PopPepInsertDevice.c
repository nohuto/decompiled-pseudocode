/*
 * XREFs of PopPepInsertDevice @ 0x1404C1A08
 * Callers:
 *     PopPepRegisterDevice @ 0x140A929B0 (PopPepRegisterDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void __fastcall PopPepInsertDevice(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rax
  signed __int8 v5; // cf
  __int64 *v6; // rsi
  __int64 **v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&PopPepDeviceListLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&PopPepDeviceListLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&PopPepDeviceListLock, v4, (__int64)&PopPepDeviceListLock);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  if ( PopPepLastCheckedDevice == &PopPepDeviceList )
    PopPepLastCheckedDevice = a2;
  v7 = (__int64 **)qword_140F06458;
  if ( *(__int64 **)qword_140F06458 != &PopPepDeviceList )
    __fastfail(3u);
  *a2 = (__int64)&PopPepDeviceList;
  a2[1] = (__int64)v7;
  *v7 = a2;
  qword_140F06458 = (__int64)a2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KeLeaveCriticalRegion();
}
