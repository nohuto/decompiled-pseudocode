/*
 * XREFs of KeIsForceIdleEngaged @ 0x14040C350
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 *     KiResetForceIdle @ 0x14040C2A4 (KiResetForceIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B94A0 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
