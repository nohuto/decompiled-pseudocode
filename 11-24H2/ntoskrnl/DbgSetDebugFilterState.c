/*
 * XREFs of DbgSetDebugFilterState @ 0x1405E76E0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x14082AB30 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
