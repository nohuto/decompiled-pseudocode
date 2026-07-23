/*
 * XREFs of RtlCreateHashTable @ 0x1801080B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable((PVOID *)HashTable, 0x80u, Shift, Flags);
}
