/*
 * XREFs of CmFcManagerDrainAllFeatureUsageNotifications @ 0x1407E402C
 * Callers:
 *     CmFcShutdownSystem @ 0x1407D5BE4 (CmFcShutdownSystem.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140A360EC (CmFcpManagerDrainUsageNotifications.c)
 */

void CmFcManagerDrainAllFeatureUsageNotifications()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rax
  __int64 v2; // rdx
  signed __int8 v3; // cf
  _QWORD *v4; // rdi
  __int64 v5; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&stru_140EF7090, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF7090, 0LL);
  v4 = v1;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&stru_140EF7090, (__int64)v1, (__int64)&stru_140EF7090);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  LOBYTE(v2) = 1;
  CmFcpManagerDrainUsageNotifications(CmFcSystemManager, v2);
  LOBYTE(v5) = 1;
  CmFcpManagerDrainUsageNotifications(CmFcSystemManager, v5);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF7090, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF7090);
  KeAbPostRelease((ULONG_PTR)&stru_140EF7090);
  KeLeaveCriticalRegion();
}
