/*
 * XREFs of PopThermalEventTransitionEnableDeepSleep @ 0x1404F77C4
 * Callers:
 *     NtInitiatePowerAction @ 0x140752F10 (NtInitiatePowerAction.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402B9FF0 (PopDeepSleepClearDisengageReason.c)
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
 */

void __fastcall PopThermalEventTransitionEnableDeepSleep(int a1)
{
  KIRQL v1; // bl
  __int64 v2; // r8
  __int64 v3; // r9

  if ( (unsigned int)(a1 - 3) <= 3 )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
    KeCancelTimer2((__int64)&unk_140F0AE90, 0LL, v2, v3);
    byte_140F0AF18 = 0;
    PopDeepSleepClearDisengageReason(0xAu);
    KeReleaseSpinLock(&PopThermalEventTransitionContext, v1);
  }
}
