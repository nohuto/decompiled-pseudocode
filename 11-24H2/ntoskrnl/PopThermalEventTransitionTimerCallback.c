/*
 * XREFs of PopThermalEventTransitionTimerCallback @ 0x1405D1460
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402B9FF0 (PopDeepSleepClearDisengageReason.c)
 */

void PopThermalEventTransitionTimerCallback()
{
  KIRQL v0; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
  if ( byte_140F0AF18 )
  {
    PopDeepSleepClearDisengageReason(0xAu);
    dword_140F0AE8C = -1;
    byte_140F0AF18 = 0;
  }
  KeReleaseSpinLock(&PopThermalEventTransitionContext, v0);
}
