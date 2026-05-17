/*
 * XREFs of MicrosoftTelemetryAssertTriggeredUM @ 0x1801102E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredUM(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)a1 == 11 )
    return MicrosoftTelemetryAssertTriggeredWorker(a1);
  return result;
}
