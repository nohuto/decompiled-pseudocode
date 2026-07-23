/*
 * XREFs of CcHasGlobalTelemetryChanged @ 0x1404ADC14
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x140A6A690 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     <none>
 */

char CcHasGlobalTelemetryChanged()
{
  char result; // al

  result = 0;
  if ( qword_140F8E700 || qword_140F8E708 || qword_140F8E710 || qword_140F8E718 || qword_140F8E720 )
    return 1;
  return result;
}
