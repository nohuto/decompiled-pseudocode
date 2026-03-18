/*
 * XREFs of MiMakeLinkedListPte @ 0x1402D1A40
 * Callers:
 *     MiConvertContiguousPages @ 0x140268C24 (MiConvertContiguousPages.c)
 *     MiInsertCachedPte @ 0x14028E4E0 (MiInsertCachedPte.c)
 *     MiFreeSlabEntry @ 0x1402D2150 (MiFreeSlabEntry.c)
 *     MiGetPageChainSmallPageProcess @ 0x1402FBB90 (MiGetPageChainSmallPageProcess.c)
 *     MiGetPageChain @ 0x1402FCDC0 (MiGetPageChain.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x140414640 (MiUpdateCacheAttributeListsForPage.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiChangeAwePageAttributes @ 0x140681768 (MiChangeAwePageAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeLinkedListPte(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 << 25;
  if ( !qword_140E2DB80 )
    return v1;
  if ( (qword_140E2DB80 & v1) != 0 )
    return v1 | 0x10;
  return v1 | qword_140E2DB80;
}
