/*
 * XREFs of EtwpCoverageFlushWorkItemCallback @ 0x14079B890
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EtwpCoverageReset @ 0x14079BA4C (EtwpCoverageReset.c)
 *     EtwpCoverageFlushPending @ 0x140A99E48 (EtwpCoverageFlushPending.c)
 */

void __fastcall EtwpCoverageFlushWorkItemCallback(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rsi

  *(_DWORD *)(EtwpCoverageNonPagedContext + 12) = 0;
  if ( (a1[9] & 1) != 0 )
    EtwpCoverageReset(a1, 4LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&EtwpCoverageLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpCoverageLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&EtwpCoverageLock, v3, (__int64)&EtwpCoverageLock);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(*(_QWORD *)a1 + 16LL) >= a1[7] )
    EtwpCoverageFlushPending(a1);
  EtwpCoverageLockOwner = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  KeLeaveCriticalRegion();
}
