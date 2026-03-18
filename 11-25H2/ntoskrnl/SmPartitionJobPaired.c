/*
 * XREFs of SmPartitionJobPaired @ 0x1407883E4
 * Callers:
 *     PspSetJobMemoryPartition @ 0x140768374 (PspSetJobMemoryPartition.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void __fastcall SmPartitionJobPaired(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rax
  __int64 *v6; // rsi

  v2 = *(_QWORD *)(a1 + 24);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire(v2 + 2152, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 2152), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 2152), v5, v2 + 2152);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  *(_QWORD *)(v2 + 2104) = a2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 2152), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 2152));
  KeAbPostRelease(v2 + 2152);
  KeLeaveCriticalRegion();
}
