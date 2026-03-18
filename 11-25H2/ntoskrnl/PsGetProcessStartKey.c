/*
 * XREFs of PsGetProcessStartKey @ 0x140454D00
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x1408BE0D4 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpInitStateChangeInfo @ 0x1409202A8 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x140920B7C (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpWriteProcessStarted @ 0x1409221D8 (EtwpWriteProcessStarted.c)
 *     EtwpWriteUserEvent @ 0x1409245D0 (EtwpWriteUserEvent.c)
 *     NtTerminateProcess @ 0x140A6C390 (NtTerminateProcess.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1656) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
