/*
 * XREFs of MiGetPagingFileOffset @ 0x1402E5A60
 * Callers:
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MiWsleFree @ 0x14021BFD0 (MiWsleFree.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiPfnShareCountIsZero @ 0x1402209B0 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiDecommitFreePage @ 0x14023E790 (MiDecommitFreePage.c)
 *     MiRestoreTransitionPte @ 0x140271094 (MiRestoreTransitionPte.c)
 *     MiExpandSharedZeroCluster @ 0x1402E548C (MiExpandSharedZeroCluster.c)
 *     MiValidatePagefilePageHash @ 0x1402E57B0 (MiValidatePagefilePageHash.c)
 *     MiArePagefileContentsCorrupted @ 0x1402E5A94 (MiArePagefileContentsCorrupted.c)
 *     MiComputeFaultCluster @ 0x1402E5DF8 (MiComputeFaultCluster.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 *     MiWritePageFileHash @ 0x14039E350 (MiWritePageFileHash.c)
 *     MiDemoteCombinedPte @ 0x1403FABBC (MiDemoteCombinedPte.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiStoreUpdatePagefileHash @ 0x140486554 (MiStoreUpdatePagefileHash.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1404A2798 (MiWorkingSetInfoCheckPageTable.c)
 *     MiFlowThroughInsertNode @ 0x1404ABC8C (MiFlowThroughInsertNode.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 *     MiReadPagefilePage @ 0x14066A47C (MiReadPagefilePage.c)
 *     MiDbgMarkPfnModified @ 0x14067ECDC (MiDbgMarkPfnModified.c)
 *     MiScanPagefileSpace @ 0x1407EF7B0 (MiScanPagefileSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPagingFileOffset(__int64 a1)
{
  if ( (a1 & 4) == 0 )
    return 0LL;
  if ( qword_140E2DB80 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140E2DB80;
  }
  return HIDWORD(a1);
}
