/*
 * XREFs of MiReleaseSpinLockShared @ 0x14020CFC0
 * Callers:
 *     MiReferenceControlAreaFileWithTag @ 0x14020C860 (MiReferenceControlAreaFileWithTag.c)
 *     MiLocateCombineBlock @ 0x14020CD3C (MiLocateCombineBlock.c)
 *     MiKernelStackVaToStackNode @ 0x14020CE1C (MiKernelStackVaToStackNode.c)
 *     MiCheckSlabPage @ 0x14020CE98 (MiCheckSlabPage.c)
 *     MiTransientCombineAddress @ 0x14020D0AC (MiTransientCombineAddress.c)
 *     MiObtainParkedCoreMasks @ 0x14020D180 (MiObtainParkedCoreMasks.c)
 *     MiGetPageFromSlabAllocator @ 0x14021D5AC (MiGetPageFromSlabAllocator.c)
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiGetPartitionNodeInformation @ 0x1402636C4 (MiGetPartitionNodeInformation.c)
 *     MiGetChannelInformation @ 0x140264320 (MiGetChannelInformation.c)
 *     MiGenerateAccessViolation @ 0x1402FB178 (MiGenerateAccessViolation.c)
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 *     MiFindBestZeroingProcessor @ 0x1403313C8 (MiFindBestZeroingProcessor.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiReferenceInPageFile @ 0x140350A90 (MiReferenceInPageFile.c)
 *     MiTrimSection @ 0x1403612B0 (MiTrimSection.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     MiFindFreePageFileSpace @ 0x1403C438C (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403C5B54 (MiPageFileLargestBitmapsRun.c)
 *     MiComputeUnusedSegmentReduction @ 0x1403EDBDC (MiComputeUnusedSegmentReduction.c)
 *     MiAllUnusedSegmentsAreModNoWrite @ 0x1403EE5AC (MiAllUnusedSegmentsAreModNoWrite.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14041D8B0 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x140433320 (MmUnmapReservedMapping.c)
 *     MiAgeAweRegions @ 0x14043DAC0 (MiAgeAweRegions.c)
 *     MiGetPrivatePageCount @ 0x14048DE5C (MiGetPrivatePageCount.c)
 *     MiGetOptimalEngineMix @ 0x14048EB84 (MiGetOptimalEngineMix.c)
 *     MiIsCalibrationWorthwhile @ 0x140490824 (MiIsCalibrationWorthwhile.c)
 *     MiInitializeCachedExtentWalker @ 0x1404BA55C (MiInitializeCachedExtentWalker.c)
 *     MiTransientPageListWriter @ 0x1404CABCC (MiTransientPageListWriter.c)
 *     MiApplyDebuggerPatches @ 0x1404F4300 (MiApplyDebuggerPatches.c)
 *     MiReleasePartitionHugeIoSpace @ 0x1406729CC (MiReleasePartitionHugeIoSpace.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x140674B7C (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x140674CA0 (MiGetListOfPendingBadPages.c)
 *     MiDeleteAwePageTables @ 0x140682E50 (MiDeleteAwePageTables.c)
 *     MiFindPageFileMemoryExtent @ 0x14068F7BC (MiFindPageFileMemoryExtent.c)
 *     MiAbsorbPossibleEngineChanges @ 0x140690174 (MiAbsorbPossibleEngineChanges.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReleaseSpinLockShared(volatile signed __int32 *a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2;
  if ( a2 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      _InterlockedAnd(a1, 0xBFFFFFFF);
      _InterlockedDecrement(a1);
    }
    else
    {
      return ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1, retaddr, a3, a4);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      _InterlockedAnd(a1, 0xBFFFFFFF);
      _InterlockedDecrement(a1);
    }
    else
    {
      result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1, retaddr, a3, a4);
    }
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v4);
    __writecr8(v4);
  }
  return result;
}
