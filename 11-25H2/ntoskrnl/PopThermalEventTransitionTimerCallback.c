/*
 * XREFs of PopThermalEventTransitionTimerCallback @ 0x1405CF2D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopDeepSleepClearDisengageReason @ 0x140354F38 (PopDeepSleepClearDisengageReason.c)
 */

void PopThermalEventTransitionTimerCallback()
{
  KIRQL v0; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
  if ( byte_140F0A678 )
  {
    PopDeepSleepClearDisengageReason(0xAu);
    dword_140F0A5EC = -1;
    byte_140F0A678 = 0;
  }
  KeReleaseSpinLock(&PopThermalEventTransitionContext, v0);
}
