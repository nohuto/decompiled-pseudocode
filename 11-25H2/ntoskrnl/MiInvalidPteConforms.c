/*
 * XREFs of MiInvalidPteConforms @ 0x1402343E0
 * Callers:
 *     MiCombineCandidate @ 0x140210C20 (MiCombineCandidate.c)
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiOutSwapWorkingSetPte @ 0x140225A10 (MiOutSwapWorkingSetPte.c)
 *     MiTryLockLeafPage @ 0x14022A6FC (MiTryLockLeafPage.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140231A30 (MiUpdatePfnForPrefetchByPte.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiGetPageProtection @ 0x140245740 (MiGetPageProtection.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiCheckProtoPtePageState @ 0x14033E110 (MiCheckProtoPtePageState.c)
 *     MiTryDeleteTransitionPte @ 0x14033FEC4 (MiTryDeleteTransitionPte.c)
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiSetProtectionOnTransitionPte @ 0x14037F4E0 (MiSetProtectionOnTransitionPte.c)
 *     MiUpdatePrefetchPriority @ 0x1403898E0 (MiUpdatePrefetchPriority.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FAC48 (MiReservePageFileSpaceForPage.c)
 *     MiLockTransitionLeafPageEx @ 0x14040D774 (MiLockTransitionLeafPageEx.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 *     MiTransferPartitionPageRun @ 0x14067FC6C (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInvalidPteConforms(__int64 a1)
{
  if ( (a1 & 1) != 0 )
    return 0LL;
  if ( a1 && qword_140E2D940 )
    return (qword_140E2D940 & a1) != 0;
  return 1LL;
}
