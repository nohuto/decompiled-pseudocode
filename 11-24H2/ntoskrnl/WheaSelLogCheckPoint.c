/*
 * XREFs of WheaSelLogCheckPoint @ 0x1407C6C10
 * Callers:
 *     IopWheaSelLogCheckPoint @ 0x1405927F0 (IopWheaSelLogCheckPoint.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     WheaSelLogInitialize @ 0x140C461E0 (WheaSelLogInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     IpmiHwContextInitialized @ 0x1406A0770 (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x1406A0E10 (IpmiLibAddSelCheckpointRecord.c)
 */

__int64 WheaSelLogCheckPoint()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rax
  signed __int8 v2; // cf
  char *v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&WheaIpmiContextLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&WheaIpmiContextLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&WheaIpmiContextLock, v1, (__int64)&WheaIpmiContextLock);
  if ( v3 )
    v3[10] = 1;
  if ( !IpmiHwContextInitialized((__int64)&WheaIpmiContext) || WheaIpmiHwLogLocked )
    v5 = -1073741823;
  else
    v5 = IpmiLibAddSelCheckpointRecord(v4);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheaIpmiContextLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheaIpmiContextLock);
  KeAbPostRelease((ULONG_PTR)&WheaIpmiContextLock);
  KeLeaveCriticalRegion();
  return v5;
}
