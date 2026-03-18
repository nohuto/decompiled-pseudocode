/*
 * XREFs of FsRtlResetLargeMcb @ 0x1404C1D90
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 */

void __stdcall FsRtlResetLargeMcb(PLARGE_MCB Mcb, BOOLEAN SelfSynchronized)
{
  struct _FAST_MUTEX *GuardedMutex; // rcx

  if ( SelfSynchronized )
  {
    Mcb->BaseMcb.PairCount = 0;
  }
  else
  {
    ExAcquireFastMutex(Mcb->GuardedMutex);
    GuardedMutex = Mcb->GuardedMutex;
    Mcb->BaseMcb.PairCount = 0;
    KeReleaseGuardedMutex(GuardedMutex);
  }
}
