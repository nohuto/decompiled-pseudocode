/*
 * XREFs of DbgUiConvertStateChangeStructureEx @ 0x1801127C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiConvertStateChangeStructureEx(PDBGUI_WAIT_STATE_CHANGE StateChange, LPDEBUG_EVENT DebugEvent)
{
  return DbgUiConvertStateChangeStructureWorker((int *)StateChange, (__int64)DebugEvent, 1);
}
