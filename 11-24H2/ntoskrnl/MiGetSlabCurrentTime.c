/*
 * XREFs of MiGetSlabCurrentTime @ 0x140263454
 * Callers:
 *     MiCreateSlabEntry @ 0x140217C8C (MiCreateSlabEntry.c)
 *     MiInsertSlabEntry @ 0x14021E754 (MiInsertSlabEntry.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x140261770 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiSlabUpdateRecentFailure @ 0x14035371C (MiSlabUpdateRecentFailure.c)
 *     MiFreeUnusedSlabPages @ 0x140354C04 (MiFreeUnusedSlabPages.c)
 *     MiFreeSlabEntries @ 0x140354D7C (MiFreeSlabEntries.c)
 *     MiCheckMdlSlabFragmentation @ 0x14048FD10 (MiCheckMdlSlabFragmentation.c)
 *     MiAllocateDriverPage @ 0x140A62088 (MiAllocateDriverPage.c)
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
