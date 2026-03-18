/*
 * XREFs of MiMakeLinkedListPte @ 0x1403B7F30
 * Callers:
 *     MiConvertContiguousPages @ 0x140224560 (MiConvertContiguousPages.c)
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MiGetPageChainSmallPageProcess @ 0x1402C7A50 (MiGetPageChainSmallPageProcess.c)
 *     MiInsertCachedPte @ 0x140328E50 (MiInsertCachedPte.c)
 *     MiFreeSlabEntry @ 0x1403B6480 (MiFreeSlabEntry.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x140416EAC (MiUpdateCacheAttributeListsForPage.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiChangeAwePageAttributes @ 0x140675F48 (MiChangeAwePageAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeLinkedListPte(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 << 25;
  if ( !qword_140E2D940 )
    return v1;
  if ( (qword_140E2D940 & v1) != 0 )
    return v1 | 0x10;
  return v1 | qword_140E2D940;
}
