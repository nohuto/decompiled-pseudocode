/*
 * XREFs of DbgQueryDebugFilterState @ 0x1405E4CB0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x14044E6B0 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
