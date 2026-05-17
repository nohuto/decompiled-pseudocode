/*
 * XREFs of DbgUiStopDebugging @ 0x180134720
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1801344D0 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgUiStopDebugging(__int64 a1)
{
  return ZwRemoveProcessDebug(a1, NtCurrentTeb()->DbgSsReserved[1]);
}
