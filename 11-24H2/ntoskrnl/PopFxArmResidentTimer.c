/*
 * XREFs of PopFxArmResidentTimer @ 0x14047E3D0
 * Callers:
 *     PopFxResidentTimeoutDpcRoutine @ 0x140314FB0 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopFxResidentTimeoutRoutine @ 0x1403A8BF0 (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x1403A8D58 (PopFxIdleComponent.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
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
