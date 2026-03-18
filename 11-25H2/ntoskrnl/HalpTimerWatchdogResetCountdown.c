/*
 * XREFs of HalpTimerWatchdogResetCountdown @ 0x140278F80
 * Callers:
 *     HalpTimerClockIpiRoutine @ 0x140278260 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerClockInterrupt @ 0x140279B10 (HalpTimerClockInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055C2C0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x14055C640 (HalpTimerWatchdogPreResetInterrupt.c)
 * Callees:
 *     HalpSetTimer @ 0x14028F6F0 (HalpSetTimer.c)
 *     HalpTimerWatchdogWakeSetDueTime @ 0x1404C5644 (HalpTimerWatchdogWakeSetDueTime.c)
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
