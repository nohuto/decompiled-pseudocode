/*
 * XREFs of MiGetSlabCurrentTime @ 0x14048ED80
 * Callers:
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1402D1890 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiSlabUpdateRecentFailure @ 0x1402D24A4 (MiSlabUpdateRecentFailure.c)
 *     MiFreeUnusedSlabPages @ 0x1402D398C (MiFreeUnusedSlabPages.c)
 *     MiFreeSlabEntries @ 0x1402D3B04 (MiFreeSlabEntries.c)
 *     MiCreateSlabEntry @ 0x1403A112C (MiCreateSlabEntry.c)
 *     MiInsertSlabEntry @ 0x140413D28 (MiInsertSlabEntry.c)
 *     MiCheckMdlSlabFragmentation @ 0x140495450 (MiCheckMdlSlabFragmentation.c)
 *     MiAllocateDriverPage @ 0x140A68CD8 (MiAllocateDriverPage.c)
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
