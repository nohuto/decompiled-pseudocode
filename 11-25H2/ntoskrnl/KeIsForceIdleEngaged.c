/*
 * XREFs of KeIsForceIdleEngaged @ 0x140404640
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 *     KiResetForceIdle @ 0x140404598 (KiResetForceIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B5660 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
