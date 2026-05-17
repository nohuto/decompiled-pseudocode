/*
 * XREFs of MicrosoftTelemetryAssertTriggeredUM @ 0x18010D860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredUM(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int64 result; // rax

  if ( *(_DWORD *)a1 == 11 )
    return MicrosoftTelemetryAssertTriggeredWorker(a1, a2, a3);
  return result;
}
