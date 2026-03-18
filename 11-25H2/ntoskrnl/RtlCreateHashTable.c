/*
 * XREFs of RtlCreateHashTable @ 0x140480580
 * Callers:
 *     SepInitializeLowBoxNumberTable @ 0x1407858E4 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x140785970 (SepInitializeSharedSidMap.c)
 *     SepSetTokenCachedHandles @ 0x14098384C (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x1404805A0 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
