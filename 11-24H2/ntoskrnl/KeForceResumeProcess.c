/*
 * XREFs of KeForceResumeProcess @ 0x1404A1E44
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x14066B420 (MiReAcquireCommitFailWorker.c)
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 *     PspTerminateProcess @ 0x1408F4E40 (PspTerminateProcess.c)
 *     PsFreezeProcess @ 0x140ACF964 (PsFreezeProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiThawSingleThread @ 0x1402DD1F8 (KiThawSingleThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiReleaseProcessLockExclusive @ 0x1403A2318 (KiReleaseProcessLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
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
    KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  }
  else
  {
    LOBYTE(v6) = CurrentIrql;
    KiReleaseProcessLockExclusive(v1, v6);
  }
}
