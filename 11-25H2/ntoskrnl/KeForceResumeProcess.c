/*
 * XREFs of KeForceResumeProcess @ 0x1404A9118
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x14065E730 (MiReAcquireCommitFailWorker.c)
 *     PspTerminateProcess @ 0x14091D668 (PspTerminateProcess.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 *     PsFreezeProcess @ 0x140AC7BE0 (PsFreezeProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiThawSingleThread @ 0x1402F2184 (KiThawSingleThread.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiReleaseProcessLockExclusive @ 0x1403AE69C (KiReleaseProcessLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KeForceResumeProcess(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD **v2; // rsi
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbp
  volatile LONG *v5; // r14
  __int64 v6; // rdx
  _QWORD *i; // rbx

  v1 = a1;
  v2 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (volatile LONG *)(v1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v1 + 64));
  if ( *(_DWORD *)(v1 + 336) + ((*(_DWORD *)(v1 + 136) >> 3) & 1) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 136), 3u);
    *(_DWORD *)(v1 + 336) = 0;
    for ( i = *v2; i != v2; i = (_QWORD *)*i )
      KiThawSingleThread((__int64)CurrentPrcb, (__int64)(i - 95), 1, 1);
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    KiExitDispatcher(CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  }
  else
  {
    LOBYTE(v6) = CurrentIrql;
    KiReleaseProcessLockExclusive(v1, v6);
  }
}
