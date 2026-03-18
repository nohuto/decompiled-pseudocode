/*
 * XREFs of DbgQueryDebugFilterState @ 0x1405E76C0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x140459980 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
