/*
 * XREFs of DbgUiConvertStateChangeStructureEx @ 0x18011A960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiConvertStateChangeStructureEx(PDBGUI_WAIT_STATE_CHANGE StateChange, LPDEBUG_EVENT DebugEvent)
{
  return DbgUiConvertStateChangeStructureWorker((int *)StateChange, (__int64)DebugEvent, 1);
}
