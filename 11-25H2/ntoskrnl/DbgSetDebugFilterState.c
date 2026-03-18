/*
 * XREFs of DbgSetDebugFilterState @ 0x1405DB630
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x14081ADF0 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
