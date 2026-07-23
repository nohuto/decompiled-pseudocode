/*
 * XREFs of DbgQueryDebugFilterState @ 0x180134B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return ZwQueryDebugFilterState(ComponentId, Level);
}
