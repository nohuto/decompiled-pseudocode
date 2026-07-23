/*
 * XREFs of CmFcpManagerRetryUsageNotificationsWorker @ 0x1407E5640
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140A2B5FC (CmFcpManagerDrainUsageNotifications.c)
 */

void __fastcall CmFcpManagerRetryUsageNotificationsWorker(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rdi
  char *v5; // rax
  __int64 v6; // rdx
  char *v7; // rsi
  __int64 v8; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a2 + 400);
  --CurrentThread->KernelApcDisable;
  v5 = (char *)KeAbPreAcquire(a2 + 400, 0LL);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v5, (__int64)v3);
  if ( v7 )
    v7[10] = 1;
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
