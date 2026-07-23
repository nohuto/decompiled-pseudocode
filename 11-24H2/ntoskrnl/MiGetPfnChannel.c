/*
 * XREFs of MiGetPfnChannel @ 0x1402242D0
 * Callers:
 *     MiReplaceLockedPage @ 0x1402158AC (MiReplaceLockedPage.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiTradeTransitionPage @ 0x14033F5E8 (MiTradeTransitionPage.c)
 *     MiPruneStandbyPages @ 0x1403F7714 (MiPruneStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiTryUnlinkNodeLargePages @ 0x1406855D0 (MiTryUnlinkNodeLargePages.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140224664 (MiSearchChannelTable.c)
 */

char __fastcall MiGetPfnChannel(__int64 a1)
{
  if ( qword_140E2DC68 )
    return *(_BYTE *)(MiSearchChannelTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 12);
  else
    return 0;
}
