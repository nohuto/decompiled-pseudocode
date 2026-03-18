/*
 * XREFs of PopPepArmIdleTimer @ 0x1403785FC
 * Callers:
 *     PopPepGetComponentPreferedIdleState @ 0x140316D90 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepIdleTimeoutRoutine @ 0x140452AB0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x14049A7E0 (PopPepIdleTimeoutDpcRoutine.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeSetCoalescableTimer @ 0x140334000 (KeSetCoalescableTimer.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall PopPepArmIdleTimer(char a1)
{
  KIRQL v2; // di

  if ( PopPepIdleStateTimeout )
  {
    v2 = ExAcquireSpinLockExclusive(&PopPepIdleTimerLock);
    if ( a1 )
      PopPepIdleTimerArmed = 0;
    if ( !PopPepIdleTimerArmed && PopPepPoweredIdleComponentCount > 0 )
    {
      PopPepIdleTimerArmed = 1;
      KeSetCoalescableTimer(
        &PopPepIdleTimer,
        (LARGE_INTEGER)(-10000LL * PopPepIdleStateTimeout),
        0,
        PopPepIdleStateTimeout,
        &PopPepIdleDpc);
    }
    ExReleaseSpinLockExclusive(&PopPepIdleTimerLock, v2);
  }
}
