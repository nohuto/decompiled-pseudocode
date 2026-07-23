/*
 * XREFs of CmFcManagerDrainAllFeatureUsageNotifications @ 0x1407E457C
 * Callers:
 *     CmFcShutdownSystem @ 0x1407D60D4 (CmFcShutdownSystem.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140A2B5FC (CmFcpManagerDrainUsageNotifications.c)
 */

void CmFcManagerDrainAllFeatureUsageNotifications()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rax
  __int64 v2; // rdx
  signed __int8 v3; // cf
  char *v4; // rdi
  __int64 v5; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&stru_140EF72D0, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF72D0, 0LL);
  v4 = v1;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF72D0, v1, (__int64)&stru_140EF72D0);
  if ( v4 )
    v4[10] = 1;
  LOBYTE(v2) = 1;
  CmFcpManagerDrainUsageNotifications(CmFcSystemManager, v2);
  LOBYTE(v5) = 1;
  CmFcpManagerDrainUsageNotifications(CmFcSystemManager, v5);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF72D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF72D0);
  KeAbPostRelease((ULONG_PTR)&stru_140EF72D0);
  KeLeaveCriticalRegion();
}
