/*
 * XREFs of MiGetPfnChannel @ 0x14026ED40
 * Callers:
 *     MiPruneStandbyPages @ 0x140225F84 (MiPruneStandbyPages.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiTradeTransitionPage @ 0x1402F718C (MiTradeTransitionPage.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiReplaceLockedPage @ 0x14039F10C (MiReplaceLockedPage.c)
 *     MiTryUnlinkNodeLargePages @ 0x1406844A4 (MiTryUnlinkNodeLargePages.c)
 * Callees:
 *     MiSearchChannelTable @ 0x14026F0D4 (MiSearchChannelTable.c)
 */

char __fastcall MiGetPfnChannel(__int64 a1)
{
  if ( qword_140E2DB28 )
    return *(_BYTE *)(MiSearchChannelTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 12);
  else
    return 0;
}
