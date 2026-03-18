/*
 * XREFs of PopBootStatUnlock @ 0x1406F5680
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     RtlUnlockBootStatusData @ 0x140A3F7A0 (RtlUnlockBootStatusData.c)
 */

__int64 PopBootStatUnlock()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&PopBootStatLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&PopBootStatLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&PopBootStatLock, (__int64)v1, (__int64)&PopBootStatLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  RtlUnlockBootStatusData(0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
  KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
  KeLeaveCriticalRegion();
  return 0LL;
}
