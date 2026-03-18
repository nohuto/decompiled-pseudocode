/*
 * XREFs of HalpTimerWatchdogLogReset @ 0x1406F2A14
 * Callers:
 *     HalpTimerInitSystem @ 0x1405387F0 (HalpTimerInitSystem.c)
 * Callees:
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     DbgPrint @ 0x1403A9600 (DbgPrint.c)
 *     HalpTimerWatchdogGeneratedLastReset @ 0x1406F29F0 (HalpTimerWatchdogGeneratedLastReset.c)
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
