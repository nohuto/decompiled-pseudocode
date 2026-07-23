/*
 * XREFs of CmFcManagerDrainAllFeatureUsageNotifications @ 0x1407D474C
 * Callers:
 *     CmFcShutdownSystem @ 0x1407C6490 (CmFcShutdownSystem.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140A3082C (CmFcpManagerDrainUsageNotifications.c)
 */

void CmFcManagerDrainAllFeatureUsageNotifications()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rax
  __int64 v2; // rdx
  signed __int8 v3; // cf
  __int64 *v4; // rdi
  __int64 v5; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&stru_140EF6CF0, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF6CF0, 0LL);
  v4 = v1;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF6CF0, v1, (__int64)&stru_140EF6CF0);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  LOBYTE(v2) = 1;
  CmFcpManagerDrainUsageNotifications(CmFcSystemManager, v2);
  LOBYTE(v5) = 1;
  CmFcpManagerDrainUsageNotifications(CmFcSystemManager, v5);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6CF0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6CF0);
  KeAbPostRelease((ULONG_PTR)&stru_140EF6CF0);
  KeLeaveCriticalRegion();
}
