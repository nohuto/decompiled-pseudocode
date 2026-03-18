/*
 * XREFs of WheaSelLogCheckPoint @ 0x1407C67B0
 * Callers:
 *     IopWheaSelLogCheckPoint @ 0x1405957C0 (IopWheaSelLogCheckPoint.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     WheaSelLogInitialize @ 0x140C44090 (WheaSelLogInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     IpmiHwContextInitialized @ 0x14069F66C (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x14069FD0C (IpmiLibAddSelCheckpointRecord.c)
 */

__int64 WheaSelLogCheckPoint()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&WheaIpmiContextLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&WheaIpmiContextLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&WheaIpmiContextLock, (__int64)v1, (__int64)&WheaIpmiContextLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
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
