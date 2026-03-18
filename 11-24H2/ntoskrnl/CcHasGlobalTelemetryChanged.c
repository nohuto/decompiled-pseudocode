/*
 * XREFs of CcHasGlobalTelemetryChanged @ 0x1404B33A4
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x140A71200 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     <none>
 */

char CcHasGlobalTelemetryChanged()
{
  char result; // al

  result = 0;
  if ( qword_140F8E520 || qword_140F8E528 || qword_140F8E530 || qword_140F8E538 || qword_140F8E540 )
    return 1;
  return result;
}
