/*
 * XREFs of MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiOutSwapWorkingSetPte @ 0x140225A10 (MiOutSwapWorkingSetPte.c)
 *     MiTryLockLeafPage @ 0x14022A6FC (MiTryLockLeafPage.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 *     MiGetPageProtection @ 0x140245740 (MiGetPageProtection.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     MiTryDeleteTransitionPte @ 0x14033FEC4 (MiTryDeleteTransitionPte.c)
 *     MiPurgeSubsection @ 0x1403400A0 (MiPurgeSubsection.c)
 *     MiSetProtectionOnTransitionPte @ 0x14037F4E0 (MiSetProtectionOnTransitionPte.c)
 *     MiUpdatePrefetchPriority @ 0x1403898E0 (MiUpdatePrefetchPriority.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FAC48 (MiReservePageFileSpaceForPage.c)
 *     MiLockTransitionLeafPageEx @ 0x14040D774 (MiLockTransitionLeafPageEx.c)
 * Callees:
 *     MiReleaseFreshPageLocked @ 0x140342C10 (MiReleaseFreshPageLocked.c)
 *     MiReuseStandbyPage @ 0x1404C2648 (MiReuseStandbyPage.c)
 */

__int64 __fastcall MiLockSpecialPurposeMemoryCachedPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (a2 & 2) != 0 )
    return a1;
  MiReuseStandbyPage(a1, a2, a3, a4);
  MiReleaseFreshPageLocked(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
