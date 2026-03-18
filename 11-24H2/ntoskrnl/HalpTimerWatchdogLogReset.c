/*
 * XREFs of HalpTimerWatchdogLogReset @ 0x1406FE804
 * Callers:
 *     HalpTimerInitSystem @ 0x14053AFA0 (HalpTimerInitSystem.c)
 * Callees:
 *     DbgPrint @ 0x1402CB260 (DbgPrint.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     HalpTimerWatchdogGeneratedLastReset @ 0x1406FE7E0 (HalpTimerWatchdogGeneratedLastReset.c)
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
