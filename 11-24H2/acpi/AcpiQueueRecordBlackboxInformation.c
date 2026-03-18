/*
 * XREFs of AcpiQueueRecordBlackboxInformation @ 0x1400548B0
 * Callers:
 *     FreeContext @ 0x14000AF70 (FreeContext.c)
 *     AmliWatchdogTimeoutAction @ 0x14006A24C (AmliWatchdogTimeoutAction.c)
 * Callees:
 *     <none>
 */

char AcpiQueueRecordBlackboxInformation()
{
  char v0; // cl

  v0 = 0;
  if ( _InterlockedIncrement(&dword_140089B40) == 1 )
  {
    ExQueueWorkItem(&AcpiRecordBlackboxWorkItem, DelayedWorkQueue);
    return 1;
  }
  return v0;
}
