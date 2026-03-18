/*
 * XREFs of EtwpFlushCoverage @ 0x1407AB348
 * Callers:
 *     EtwShutdown @ 0x1407A67D0 (EtwShutdown.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwpCoverageFlushPending @ 0x140A9F020 (EtwpCoverageFlushPending.c)
 */

void EtwpFlushCoverage()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&EtwpCoverageLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpCoverageLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&EtwpCoverageLock, (__int64)v1, (__int64)&EtwpCoverageLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
  if ( EtwpCoverageContext )
    EtwpCoverageFlushPending(EtwpCoverageContext);
  EtwpCoverageLockOwner = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  KeLeaveCriticalRegion();
}
