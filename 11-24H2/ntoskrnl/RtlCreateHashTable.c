/*
 * XREFs of RtlCreateHashTable @ 0x14047C500
 * Callers:
 *     SepInitializeLowBoxNumberTable @ 0x140794D3C (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x140794DC8 (SepInitializeSharedSidMap.c)
 *     SepSetTokenCachedHandles @ 0x140913AE0 (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x14047C520 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
