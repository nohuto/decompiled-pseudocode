/*
 * XREFs of Microsoft_Windows_Networking_Correlation_EtwEnableCallback @ 0x1400EBBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Microsoft_Windows_Networking_Correlation_EtwEnableCallback(
        LPCGUID SourceId,
        __int32 ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  _InterlockedExchange(&Microsoft_Windows_Networking_CorrelationEnabled, ControlCode);
  _InterlockedExchange(&Microsoft_Windows_Networking_CorrelationTraceActivityPayload, (MatchAnyKeyword >> 3) & 1);
}
