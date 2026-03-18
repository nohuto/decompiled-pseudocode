/*
 * XREFs of PopThermalEventTransitionTimerCallback @ 0x1405D3CE0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403CB4D8 (PopDeepSleepClearDisengageReason.c)
 */

void PopThermalEventTransitionTimerCallback()
{
  KIRQL v0; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
  if ( byte_140F0AC18 )
  {
    PopDeepSleepClearDisengageReason(0xAu);
    dword_140F0AB8C = -1;
    byte_140F0AC18 = 0;
  }
  KeReleaseSpinLock(&PopThermalEventTransitionContext, v0);
}
