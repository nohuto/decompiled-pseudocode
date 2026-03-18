/*
 * XREFs of MiReleaseSpinLockShared @ 0x140244830
 * Callers:
 *     MiFindBestZeroingProcessor @ 0x140209DE8 (MiFindBestZeroingProcessor.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiSystemFault @ 0x140229570 (MiSystemFault.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402440D0 (MiReferenceControlAreaFileWithTag.c)
 *     MiLocateCombineBlock @ 0x1402445AC (MiLocateCombineBlock.c)
 *     MiKernelStackVaToStackNode @ 0x14024468C (MiKernelStackVaToStackNode.c)
 *     MiCheckSlabPage @ 0x140244708 (MiCheckSlabPage.c)
 *     MiTransientCombineAddress @ 0x1402448C4 (MiTransientCombineAddress.c)
 *     MiObtainParkedCoreMasks @ 0x140244998 (MiObtainParkedCoreMasks.c)
 *     MiGenerateAccessViolation @ 0x140246254 (MiGenerateAccessViolation.c)
 *     MiReferenceControlAreaFile @ 0x1402464D0 (MiReferenceControlAreaFile.c)
 *     MiReferenceIoPages @ 0x140283108 (MiReferenceIoPages.c)
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 *     MiIsCalibrationWorthwhile @ 0x1402D1A6C (MiIsCalibrationWorthwhile.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403664F0 (MiPageFileLargestBitmapsRun.c)
 *     MiFindFreePageFileSpace @ 0x140367D88 (MiFindFreePageFileSpace.c)
 *     MiAgeAweRegions @ 0x1403797D0 (MiAgeAweRegions.c)
 *     MiReferenceInPageFile @ 0x140398340 (MiReferenceInPageFile.c)
 *     MiGetPageFromSlabAllocator @ 0x1403A2ED0 (MiGetPageFromSlabAllocator.c)
 *     MiDereferenceIoPages @ 0x1403CE8E0 (MiDereferenceIoPages.c)
 *     MiGetPartitionNodeInformation @ 0x1403D4C28 (MiGetPartitionNodeInformation.c)
 *     MiGetChannelInformation @ 0x1403D54BC (MiGetChannelInformation.c)
 *     MiComputeUnusedSegmentReduction @ 0x1403F7C6C (MiComputeUnusedSegmentReduction.c)
 *     MiAllUnusedSegmentsAreModNoWrite @ 0x1403F8494 (MiAllUnusedSegmentsAreModNoWrite.c)
 *     MmUnmapReservedMapping @ 0x14040F6F0 (MmUnmapReservedMapping.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140410510 (MmMapLockedPagesWithReservedMapping.c)
 *     MiGetPrivatePageCount @ 0x14049352C (MiGetPrivatePageCount.c)
 *     MiGetOptimalEngineMix @ 0x1404940F8 (MiGetOptimalEngineMix.c)
 *     MiInitializeCachedExtentWalker @ 0x1404BF028 (MiInitializeCachedExtentWalker.c)
 *     MiTransientPageListWriter @ 0x1404D1B8C (MiTransientPageListWriter.c)
 *     MiApplyDebuggerPatches @ 0x1404F6A1C (MiApplyDebuggerPatches.c)
 *     MiReleasePartitionHugeIoSpace @ 0x1406717FC (MiReleasePartitionHugeIoSpace.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x1406739AC (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x140673AD0 (MiGetListOfPendingBadPages.c)
 *     MiDeleteAwePageTables @ 0x140681C60 (MiDeleteAwePageTables.c)
 *     MiFindPageFileMemoryExtent @ 0x14068E68C (MiFindPageFileMemoryExtent.c)
 *     MiAbsorbPossibleEngineChanges @ 0x14068F0A4 (MiAbsorbPossibleEngineChanges.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReleaseSpinLockShared(volatile signed __int32 *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
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
      return ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1, retaddr);
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
      result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1, retaddr);
    }
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v2);
    __writecr8(v2);
  }
  return result;
}
