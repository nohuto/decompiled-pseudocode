/*
 * XREFs of MiInvalidPteConforms @ 0x1403461F0
 * Callers:
 *     MiSetProtectionOnTransitionPte @ 0x140212844 (MiSetProtectionOnTransitionPte.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiGetPageProtection @ 0x14030C130 (MiGetPageProtection.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140334220 (MiUpdatePfnForPrefetchByPte.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiCombineCandidate @ 0x140344930 (MiCombineCandidate.c)
 *     MiCheckProtoPtePageState @ 0x140345BB0 (MiCheckProtoPtePageState.c)
 *     MiTryLockLeafPage @ 0x1403460BC (MiTryLockLeafPage.c)
 *     MiOutSwapWorkingSetPte @ 0x140346260 (MiOutSwapWorkingSetPte.c)
 *     MiUpdatePrefetchPriority @ 0x1403DCA60 (MiUpdatePrefetchPriority.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FDC68 (MiReservePageFileSpaceForPage.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 *     MiTransferPartitionPageRun @ 0x14068C62C (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInvalidPteConforms(__int64 a1)
{
  if ( (a1 & 1) != 0 )
    return 0LL;
  if ( a1 && qword_140E2DCC0 )
    return (qword_140E2DCC0 & a1) != 0;
  return 1LL;
}
