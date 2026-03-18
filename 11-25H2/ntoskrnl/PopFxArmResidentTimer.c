/*
 * XREFs of PopFxArmResidentTimer @ 0x1403A4B70
 * Callers:
 *     PopFxIdleComponent @ 0x14034C3F8 (PopFxIdleComponent.c)
 *     PopFxResidentTimeoutRoutine @ 0x1403A5C00 (PopFxResidentTimeoutRoutine.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x1403AA4D0 (PopFxResidentTimeoutDpcRoutine.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     KeSetCoalescableTimer @ 0x1402ECF90 (KeSetCoalescableTimer.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
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
