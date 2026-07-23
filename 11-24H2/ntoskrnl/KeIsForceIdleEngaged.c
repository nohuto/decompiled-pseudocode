/*
 * XREFs of KeIsForceIdleEngaged @ 0x1404049E0
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14031A580 (KiCallInterruptServiceRoutine.c)
 *     KiResetForceIdle @ 0x1404048A4 (KiResetForceIdle.c)
 *     KiForceIdleInterruptNotify @ 0x140404948 (KiForceIdleInterruptNotify.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B6AE0 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
