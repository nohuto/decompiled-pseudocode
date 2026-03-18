/*
 * XREFs of SmPartitionJobPaired @ 0x1407977B4
 * Callers:
 *     PspSetJobMemoryPartition @ 0x140777E54 (PspSetJobMemoryPartition.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

void __fastcall SmPartitionJobPaired(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rsi

  v2 = *(_QWORD *)(a1 + 24);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire(v2 + 2152, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 2152), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 2152), (__int64)v5, v2 + 2152);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  *(_QWORD *)(v2 + 2104) = a2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 2152), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 2152));
  KeAbPostRelease(v2 + 2152);
  KeLeaveCriticalRegion();
}
