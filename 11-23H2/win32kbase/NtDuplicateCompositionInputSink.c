/*
 * XREFs of NtDuplicateCompositionInputSink @ 0x1C0231BC0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C02358A4 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall NtDuplicateCompositionInputSink(__int64 a1, __int64 a2)
{
  MicrosoftTelemetryAssertTriggeredMsgKM("API is being deprecated. Caller should switch to DuplicateHandle", a2);
  return 3221225659LL;
}
