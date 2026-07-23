/*
 * XREFs of DbgUiConvertStateChangeStructure @ 0x18010DE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiConvertStateChangeStructure(PDBGUI_WAIT_STATE_CHANGE StateChange, LPDEBUG_EVENT DebugEvent)
{
  return DbgUiConvertStateChangeStructureWorker((int *)StateChange, (__int64)DebugEvent, 0);
}
