/*
 * XREFs of DbgSetDebugFilterState @ 0x180134BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return ZwSetDebugFilterState(ComponentId, Level, State);
}
