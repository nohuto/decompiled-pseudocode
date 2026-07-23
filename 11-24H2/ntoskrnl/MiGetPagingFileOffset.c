/*
 * XREFs of MiGetPagingFileOffset @ 0x140341C00
 * Callers:
 *     MiDecommitFreePage @ 0x1402068E0 (MiDecommitFreePage.c)
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiWsleFree @ 0x140248D20 (MiWsleFree.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiPfnShareCountIsZero @ 0x14024D700 (MiPfnShareCountIsZero.c)
 *     MiDemoteCombinedPte @ 0x140296374 (MiDemoteCombinedPte.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiExpandSharedZeroCluster @ 0x14034162C (MiExpandSharedZeroCluster.c)
 *     MiValidatePagefilePageHash @ 0x140341950 (MiValidatePagefilePageHash.c)
 *     MiArePagefileContentsCorrupted @ 0x140341C34 (MiArePagefileContentsCorrupted.c)
 *     MiComputeFaultCluster @ 0x140341F24 (MiComputeFaultCluster.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiFlowThroughInsertNode @ 0x1403F01B0 (MiFlowThroughInsertNode.c)
 *     MiTranslatePageForCopy @ 0x1403F3CE0 (MiTranslatePageForCopy.c)
 *     MiStoreUpdatePagefileHash @ 0x140425E74 (MiStoreUpdatePagefileHash.c)
 *     MiWritePageFileHash @ 0x140426540 (MiWritePageFileHash.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x14049D728 (MiWorkingSetInfoCheckPageTable.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 *     MiReadPagefilePage @ 0x14066B64C (MiReadPagefilePage.c)
 *     MiDbgMarkPfnModified @ 0x14067FEDC (MiDbgMarkPfnModified.c)
 *     MiScanPagefileSpace @ 0x1407EFD80 (MiScanPagefileSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPagingFileOffset(__int64 a1)
{
  if ( (a1 & 4) == 0 )
    return 0LL;
  if ( qword_140E2DCC0 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140E2DCC0;
  }
  return HIDWORD(a1);
}
