/*
 * XREFs of CmFcpManagerRetryUsageNotificationsWorker @ 0x1407E5070
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140A360EC (CmFcpManagerDrainUsageNotifications.c)
 */

void __fastcall CmFcpManagerRetryUsageNotificationsWorker(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rsi
  __int64 v8; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a2 + 400);
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire(a2 + 400, 0LL);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, (__int64)v5, (__int64)v3);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  LOBYTE(v6) = 1;
  *(_BYTE *)(a2 + 409) = 0;
  CmFcpManagerDrainUsageNotifications(a2, v6);
  LOBYTE(v8) = 1;
  CmFcpManagerDrainUsageNotifications(a2, v8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
}
