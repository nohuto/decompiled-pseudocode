/*
 * XREFs of MiGetPfnChannel @ 0x140216430
 * Callers:
 *     MiTradeTransitionPage @ 0x14022A82C (MiTradeTransitionPage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x1402C622C (MiPruneStandbyPages.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiReplaceLockedPage @ 0x1403FE3AC (MiReplaceLockedPage.c)
 *     MiTryUnlinkNodeLargePages @ 0x140678C18 (MiTryUnlinkNodeLargePages.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402167C8 (MiSearchChannelTable.c)
 */

char __fastcall MiGetPfnChannel(__int64 a1)
{
  if ( qword_140E2D8E8 )
    return *(_BYTE *)(MiSearchChannelTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 12);
  else
    return 0;
}
