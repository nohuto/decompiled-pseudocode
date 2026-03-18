/*
 * XREFs of HalpTimerWatchdogResetCountdown @ 0x14033A1F0
 * Callers:
 *     HalpTimerClockIpiRoutine @ 0x1403394D0 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerClockInterrupt @ 0x14033ADE0 (HalpTimerClockInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055EBC0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x14055EF40 (HalpTimerWatchdogPreResetInterrupt.c)
 * Callees:
 *     HalpSetTimer @ 0x1403BC5B0 (HalpSetTimer.c)
 *     HalpTimerWatchdogWakeSetDueTime @ 0x1404C3D24 (HalpTimerWatchdogWakeSetDueTime.c)
 */

__int64 HalpTimerWatchdogResetCountdown()
{
  __int64 result; // rax
  char v1; // [rsp+40h] [rbp+8h] BYREF

  if ( HalpWatchdogTimer )
  {
    if ( HalpTimerWatchdogArmed )
    {
      HalpSetTimer(HalpWatchdogTimer, 3, HalpTimerWatchdogTimeout, 1, (__int64)&v1);
      HalpTimerWatchdogLastReset = MEMORY[0xFFFFF78000000008];
      return HalpTimerWatchdogWakeSetDueTime();
    }
  }
  return result;
}
