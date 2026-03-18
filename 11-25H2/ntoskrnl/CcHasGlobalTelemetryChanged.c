/*
 * XREFs of CcHasGlobalTelemetryChanged @ 0x1404B3264
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x140A6F330 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     <none>
 */

char CcHasGlobalTelemetryChanged()
{
  char result; // al

  result = 0;
  if ( qword_140F8DD60 || qword_140F8DD68 || qword_140F8DD70 || qword_140F8DD78 || qword_140F8DD80 )
    return 1;
  return result;
}
