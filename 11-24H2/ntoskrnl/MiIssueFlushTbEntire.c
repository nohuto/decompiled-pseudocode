/*
 * XREFs of MiIssueFlushTbEntire @ 0x1403AFDC8
 * Callers:
 *     MiGetHighestUltraLevel @ 0x140261644 (MiGetHighestUltraLevel.c)
 *     MiInsertCachedPte @ 0x14028E4E0 (MiInsertCachedPte.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140488384 (MiGetWsAndMakePageTablesNx.c)
 *     MiDeleteUnumappedSystemCacheViews @ 0x140676A90 (MiDeleteUnumappedSystemCacheViews.c)
 *     MiApplyLazyStampToAwePtes @ 0x14068117C (MiApplyLazyStampToAwePtes.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140681434 (MiBuildPhysicalPageFreeChain.c)
 *     MiDecrementAweMapCount @ 0x14068190C (MiDecrementAweMapCount.c)
 *     MiTransformValidPteViaIpi @ 0x14068404C (MiTransformValidPteViaIpi.c)
 *     MiConvertHiberPhasePages @ 0x140B62664 (MiConvertHiberPhasePages.c)
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 *     MiZeroBootMappings @ 0x140C503D0 (MiZeroBootMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x140C518FC (MiInitializePfnsForValidMappings.c)
 *     MiSwitchToPfns @ 0x140C51F10 (MiSwitchToPfns.c)
 * Callees:
 *     KeFlushTb @ 0x1403AFDF0 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B0C90 (KeFlushCurrentTbOnly.c)
 */

__int64 __fastcall MiIssueFlushTbEntire(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (_DWORD)a2 == -1 )
    return KeFlushCurrentTbOnly(a1, a2, a3);
  else
    return KeFlushTb(a1, a2, a3);
}
