/*
 * XREFs of PsGetProcessStartKey @ 0x140447F60
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x1408EF7A4 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpInitStateChangeInfo @ 0x1408F0924 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessStarted @ 0x140A2FF1C (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x140A3AE58 (EtwpWriteAppStateChangeWithStats.c)
 *     NtTerminateProcess @ 0x140ACF260 (NtTerminateProcess.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1656) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
