/*
 * XREFs of DbgUiStopDebugging @ 0x180130E70
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x180130C20 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiStopDebugging(HANDLE Process)
{
  return ZwRemoveProcessDebug(Process, NtCurrentTeb()->DbgSsReserved[1]);
}
