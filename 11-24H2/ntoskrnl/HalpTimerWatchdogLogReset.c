/*
 * XREFs of HalpTimerWatchdogLogReset @ 0x1406FC444
 * Callers:
 *     HalpTimerInitSystem @ 0x1405387E0 (HalpTimerInitSystem.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     HalpTimerWatchdogGeneratedLastReset @ 0x1406FC420 (HalpTimerWatchdogGeneratedLastReset.c)
 */

char HalpTimerWatchdogLogReset()
{
  char result; // al

  result = HalpTimerWatchdogGeneratedLastReset();
  if ( result )
  {
    if ( HalpDiagnosticEventsRegistered )
    {
      EtwWrite(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_WATCHDOG_TRIGGERED, 0LL, 0, 0LL);
      return DbgPrint("System was rebooted due to system watchdog timeout.\n");
    }
  }
  return result;
}
