/*
 * XREFs of MiGetSlabCurrentTime @ 0x14045CB68
 * Callers:
 *     MiCreateSlabEntry @ 0x140376BF8 (MiCreateSlabEntry.c)
 *     MiFreeUnusedSlabPages @ 0x1403B5490 (MiFreeUnusedSlabPages.c)
 *     MiFreeSlabEntries @ 0x1403B5608 (MiFreeSlabEntries.c)
 *     MiSlabUpdateRecentFailure @ 0x1403B62A8 (MiSlabUpdateRecentFailure.c)
 *     MiCheckMdlSlabFragmentation @ 0x1403B67F4 (MiCheckMdlSlabFragmentation.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1403BF540 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiInsertSlabEntry @ 0x14045C760 (MiInsertSlabEntry.c)
 *     MiAllocateDriverPage @ 0x140A69E40 (MiAllocateDriverPage.c)
 * Callees:
 *     <none>
 */

__int64 MiGetSlabCurrentTime()
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  if ( MEMORY[0xFFFFF78000000008] == MEMORY[0xFFFFF780000003B0] )
    return 1LL;
  return result;
}
