/*
 * XREFs of SmPartitionJobPaired @ 0x1407978C4
 * Callers:
 *     PspSetJobMemoryPartition @ 0x140778014 (PspSetJobMemoryPartition.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall SmPartitionJobPaired(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // rax
  char *v5; // rax
  char *v6; // rsi

  v2 = *(_QWORD *)(a1 + 24);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (char *)KeAbPreAcquire(v2 + 2152, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 2152), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 2152), v5, v2 + 2152);
  if ( v6 )
    v6[10] = 1;
  *(_QWORD *)(v2 + 2104) = a2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 2152), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 2152));
  KeAbPostRelease(v2 + 2152);
  KeLeaveCriticalRegion();
}
