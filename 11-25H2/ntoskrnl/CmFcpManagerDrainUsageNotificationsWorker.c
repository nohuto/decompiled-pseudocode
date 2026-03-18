/*
 * XREFs of CmFcpManagerDrainUsageNotificationsWorker @ 0x140A30780
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140A3082C (CmFcpManagerDrainUsageNotifications.c)
 */

void __fastcall CmFcpManagerDrainUsageNotificationsWorker(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rdi
  __int64 *v5; // rax
  __int64 *v6; // rsi

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a2 + 400);
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire(a2 + 400, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v5, (__int64)v3);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  CmFcpManagerDrainUsageNotifications(a2, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
}
