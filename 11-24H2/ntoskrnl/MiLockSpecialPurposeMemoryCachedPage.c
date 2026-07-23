/*
 * XREFs of MiLockSpecialPurposeMemoryCachedPage @ 0x140204044
 * Callers:
 *     MiTryDeleteTransitionPte @ 0x140204568 (MiTryDeleteTransitionPte.c)
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 *     MiSetProtectionOnTransitionPte @ 0x140212844 (MiSetProtectionOnTransitionPte.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiLockTransitionLeafPageEx @ 0x1402EC2C0 (MiLockTransitionLeafPageEx.c)
 *     MiGetPageProtection @ 0x14030C130 (MiGetPageProtection.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiTryLockLeafPage @ 0x1403460BC (MiTryLockLeafPage.c)
 *     MiOutSwapWorkingSetPte @ 0x140346260 (MiOutSwapWorkingSetPte.c)
 *     MiUpdatePrefetchPriority @ 0x1403DCA60 (MiUpdatePrefetchPriority.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FDC68 (MiReservePageFileSpaceForPage.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 * Callees:
 *     MiReuseStandbyPage @ 0x14043BE20 (MiReuseStandbyPage.c)
 *     MiReleaseFreshPageLocked @ 0x14043C168 (MiReleaseFreshPageLocked.c)
 */

__int64 __fastcall MiLockSpecialPurposeMemoryCachedPage(__int64 a1, char a2)
{
  if ( (a2 & 2) != 0 )
    return a1;
  MiReuseStandbyPage();
  MiReleaseFreshPageLocked(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
