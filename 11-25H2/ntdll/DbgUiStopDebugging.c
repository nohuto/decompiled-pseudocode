/*
 * XREFs of DbgUiStopDebugging @ 0x180134720
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1801344D0 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiStopDebugging(HANDLE Process)
{
  return ZwRemoveProcessDebug(Process, NtCurrentTeb()->DbgSsReserved[1]);
}
