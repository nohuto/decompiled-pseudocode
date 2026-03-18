/*
 * XREFs of MiGetPagingFileOffset @ 0x14037C4CC
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiArePagefileContentsCorrupted @ 0x140226808 (MiArePagefileContentsCorrupted.c)
 *     MiWritePageFileHash @ 0x140226C80 (MiWritePageFileHash.c)
 *     MiWsleFree @ 0x14022FD60 (MiWsleFree.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 *     MiRestoreTransitionPte @ 0x14024EBD8 (MiRestoreTransitionPte.c)
 *     MiStoreUpdatePagefileHash @ 0x1402D18E4 (MiStoreUpdatePagefileHash.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiPfnShareCountIsZero @ 0x140342440 (MiPfnShareCountIsZero.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiComputeFaultCluster @ 0x14037A558 (MiComputeFaultCluster.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiExpandSharedZeroCluster @ 0x14037C52C (MiExpandSharedZeroCluster.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1404A2D98 (MiWorkingSetInfoCheckPageTable.c)
 *     MiFlowThroughInsertNode @ 0x1404AA7FC (MiFlowThroughInsertNode.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 *     MiReadPagefilePage @ 0x14065E95C (MiReadPagefilePage.c)
 *     MiDbgMarkPfnModified @ 0x1406734BC (MiDbgMarkPfnModified.c)
 *     MiScanPagefileSpace @ 0x1407DF910 (MiScanPagefileSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPagingFileOffset(__int64 a1)
{
  if ( (a1 & 4) == 0 )
    return 0LL;
  if ( qword_140E2D940 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140E2D940;
  }
  return HIDWORD(a1);
}
