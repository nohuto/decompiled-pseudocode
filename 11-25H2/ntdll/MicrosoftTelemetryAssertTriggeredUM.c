/*
 * XREFs of MicrosoftTelemetryAssertTriggeredUM @ 0x1801102E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MicrosoftTelemetryAssertTriggeredUM(ULONGLONG a1)
{
  if ( *(_DWORD *)a1 == 11 )
    MicrosoftTelemetryAssertTriggeredWorker(a1);
}
