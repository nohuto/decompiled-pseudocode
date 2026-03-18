/*
 * XREFs of HalpTimerWatchdogGeneratedLastReset @ 0x1406F29F0
 * Callers:
 *     HalpTimerWatchdogLogReset @ 0x1406F2A14 (HalpTimerWatchdogLogReset.c)
 * Callees:
 *     <none>
 */

char HalpTimerWatchdogGeneratedLastReset()
{
  char result; // al

  result = HalpWatchdogTimer;
  if ( HalpWatchdogTimer )
    return (*(_DWORD *)(HalpWatchdogTimer + 224) & 0x40000) != 0;
  return result;
}
