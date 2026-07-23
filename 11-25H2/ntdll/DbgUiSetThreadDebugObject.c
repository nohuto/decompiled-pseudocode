/*
 * XREFs of DbgUiSetThreadDebugObject @ 0x180134700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl DbgUiSetThreadDebugObject(HANDLE DebugObject)
{
  NtCurrentTeb()->DbgSsReserved[1] = DebugObject;
}
