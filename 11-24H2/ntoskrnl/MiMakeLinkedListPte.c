/*
 * XREFs of MiMakeLinkedListPte @ 0x1403F8EF0
 * Callers:
 *     MiGetPageChainSmallPageProcess @ 0x140253A70 (MiGetPageChainSmallPageProcess.c)
 *     MiInsertCachedPte @ 0x14029E0E0 (MiInsertCachedPte.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiFreeSlabEntry @ 0x1403533C8 (MiFreeSlabEntry.c)
 *     MiConvertContiguousPages @ 0x1403932BC (MiConvertContiguousPages.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x1403F8E00 (MiUpdateCacheAttributeListsForPage.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiChangeAwePageAttributes @ 0x140682958 (MiChangeAwePageAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeLinkedListPte(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 << 25;
  if ( !qword_140E2DCC0 )
    return v1;
  if ( (qword_140E2DCC0 & v1) != 0 )
    return v1 | 0x10;
  return v1 | qword_140E2DCC0;
}
