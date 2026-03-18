/*
 * XREFs of PsGetProcessStartKey @ 0x140452EB0
 * Callers:
 *     EtwpWriteUserEvent @ 0x140920F90 (EtwpWriteUserEvent.c)
 *     NtTerminateProcess @ 0x14093B030 (NtTerminateProcess.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14094B234 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpInitStateChangeInfo @ 0x14094C3B4 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessStarted @ 0x14094E248 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x140A452AC (EtwpWriteAppStateChangeWithStats.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1656) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
