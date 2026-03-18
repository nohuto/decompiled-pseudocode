/*
 * XREFs of DestroyThreadsTimers @ 0x1C003C800
 * Callers:
 *     <none>
 * Callees:
 *     FreeTimer @ 0x1C0040360 (FreeTimer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 DestroyThreadsTimers()
{
  return gtmrListHead;
}
