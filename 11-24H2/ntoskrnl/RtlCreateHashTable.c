/*
 * XREFs of RtlCreateHashTable @ 0x140481240
 * Callers:
 *     SepInitializeLowBoxNumberTable @ 0x140794CB4 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x140794D40 (SepInitializeSharedSidMap.c)
 *     SepSetTokenCachedHandles @ 0x1408F2494 (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x140481260 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
