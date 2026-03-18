/*
 * XREFs of MiIssueFlushTbEntire @ 0x14026F7B8
 * Callers:
 *     MiGetHighestUltraLevel @ 0x1402A9B28 (MiGetHighestUltraLevel.c)
 *     MiInsertCachedPte @ 0x140328E50 (MiInsertCachedPte.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140488518 (MiGetWsAndMakePageTablesNx.c)
 *     MiDeleteUnumappedSystemCacheViews @ 0x14066B148 (MiDeleteUnumappedSystemCacheViews.c)
 *     MiApplyLazyStampToAwePtes @ 0x14067595C (MiApplyLazyStampToAwePtes.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140675C14 (MiBuildPhysicalPageFreeChain.c)
 *     MiDecrementAweMapCount @ 0x1406760EC (MiDecrementAweMapCount.c)
 *     MiTransformValidPteViaIpi @ 0x1406787F8 (MiTransformValidPteViaIpi.c)
 *     MiConvertHiberPhasePages @ 0x140B52534 (MiConvertHiberPhasePages.c)
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 *     MiZeroBootMappings @ 0x140C3F1A0 (MiZeroBootMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x140C406CC (MiInitializePfnsForValidMappings.c)
 *     MiSwitchToPfns @ 0x140C40CE0 (MiSwitchToPfns.c)
 * Callees:
 *     KeFlushTb @ 0x14026F7E0 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14027027C (KeFlushCurrentTbOnly.c)
 */

__int64 __fastcall MiIssueFlushTbEntire(__int64 a1, int a2)
{
  if ( a2 == -1 )
    return KeFlushCurrentTbOnly();
  else
    return KeFlushTb(a1);
}
