/*
 * XREFs of PopFxArmResidentTimer @ 0x140483290
 * Callers:
 *     PopFxResidentTimeoutRoutine @ 0x1403B4720 (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x1403B4888 (PopFxIdleComponent.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x14049A3F0 (PopFxResidentTimeoutDpcRoutine.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeSetCoalescableTimer @ 0x140334000 (KeSetCoalescableTimer.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall PopFxArmResidentTimer(char a1)
{
  KIRQL v2; // di

  v2 = ExAcquireSpinLockExclusive(&PopFxResidentTimerLock);
  if ( a1 )
    PopFxResidentTimerArmed = 0;
  if ( !PopFxResidentTimerArmed && PopFxResidentComponentCount > 0 )
  {
    PopFxResidentTimerArmed = 1;
    KeSetCoalescableTimer(
      &PopFxResidentTimer,
      (LARGE_INTEGER)(-10000LL * (unsigned int)PopFxActiveIdleTimeout),
      0,
      (unsigned int)PopFxActiveIdleTimeout >> 1,
      &PopFxResidentDpc);
  }
  ExReleaseSpinLockExclusive(&PopFxResidentTimerLock, v2);
}
