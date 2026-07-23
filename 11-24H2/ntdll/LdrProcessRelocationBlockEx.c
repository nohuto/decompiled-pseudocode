/*
 * XREFs of LdrProcessRelocationBlockEx @ 0x180136520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PIMAGE_BASE_RELOCATION __cdecl LdrProcessRelocationBlockEx(
        ULONG Machine,
        ULONG_PTR VA,
        ULONG SizeOfBlock,
        PUSHORT NextOffset,
        LONG_PTR Diff)
{
  return (PIMAGE_BASE_RELOCATION)LdrProcessRelocationBlockLongLong(Machine, VA, SizeOfBlock, NextOffset, Diff);
}
