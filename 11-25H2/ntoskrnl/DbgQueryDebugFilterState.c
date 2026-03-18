/*
 * XREFs of DbgQueryDebugFilterState @ 0x1405DB610
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x140458CC0 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
