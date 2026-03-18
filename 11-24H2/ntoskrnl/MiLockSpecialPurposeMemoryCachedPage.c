/*
 * XREFs of MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C
 * Callers:
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiSetProtectionOnTransitionPte @ 0x1402386B4 (MiSetProtectionOnTransitionPte.c)
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiTryDeleteTransitionPte @ 0x14023C7DC (MiTryDeleteTransitionPte.c)
 *     MiPurgeSubsection @ 0x14023C9F0 (MiPurgeSubsection.c)
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiGetPageProtection @ 0x1403019B0 (MiGetPageProtection.c)
 *     MiTryLockLeafPage @ 0x14030245C (MiTryLockLeafPage.c)
 *     MiOutSwapWorkingSetPte @ 0x140302690 (MiOutSwapWorkingSetPte.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiReservePageFileSpaceForPage @ 0x1403687E0 (MiReservePageFileSpaceForPage.c)
 *     MiLockTransitionLeafPageEx @ 0x14036A520 (MiLockTransitionLeafPageEx.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MiUpdatePrefetchPriority @ 0x1403FE3E8 (MiUpdatePrefetchPriority.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 * Callees:
 *     MiReuseStandbyPage @ 0x140442E50 (MiReuseStandbyPage.c)
 *     MiReleaseFreshPageLocked @ 0x14044321C (MiReleaseFreshPageLocked.c)
 */

ULONG_PTR __fastcall MiLockSpecialPurposeMemoryCachedPage(ULONG_PTR a1, char a2)
{
  if ( (a2 & 2) != 0 )
    return a1;
  MiReuseStandbyPage(a1);
  MiReleaseFreshPageLocked(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
