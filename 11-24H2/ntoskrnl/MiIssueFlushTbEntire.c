/*
 * XREFs of MiIssueFlushTbEntire @ 0x14039E5D8
 * Callers:
 *     MiGetHighestUltraLevel @ 0x140291C54 (MiGetHighestUltraLevel.c)
 *     MiInsertCachedPte @ 0x14029E0E0 (MiInsertCachedPte.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1404834D4 (MiGetWsAndMakePageTablesNx.c)
 *     MiDeleteUnumappedSystemCacheViews @ 0x140677C60 (MiDeleteUnumappedSystemCacheViews.c)
 *     MiApplyLazyStampToAwePtes @ 0x14068236C (MiApplyLazyStampToAwePtes.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140682624 (MiBuildPhysicalPageFreeChain.c)
 *     MiDecrementAweMapCount @ 0x140682AFC (MiDecrementAweMapCount.c)
 *     MiTransformValidPteViaIpi @ 0x1406851A8 (MiTransformValidPteViaIpi.c)
 *     MiConvertHiberPhasePages @ 0x140B64734 (MiConvertHiberPhasePages.c)
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 *     MiZeroBootMappings @ 0x140C52560 (MiZeroBootMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x140C53A8C (MiInitializePfnsForValidMappings.c)
 *     MiSwitchToPfns @ 0x140C540A0 (MiSwitchToPfns.c)
 * Callees:
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14039F4A0 (KeFlushCurrentTbOnly.c)
 */

__int64 __fastcall MiIssueFlushTbEntire(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (_DWORD)a2 == -1 )
    return KeFlushCurrentTbOnly(a1, a2, a3);
  else
    return KeFlushTb(a1, a2, a3);
}
