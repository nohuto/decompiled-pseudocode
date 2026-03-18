/*
 * XREFs of MiReleaseSpinLockShared @ 0x140323610
 * Callers:
 *     MiReferenceInPageFile @ 0x140208E60 (MiReferenceInPageFile.c)
 *     MiFindBestZeroingProcessor @ 0x14020E844 (MiFindBestZeroingProcessor.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReferenceIoPages @ 0x1402AD138 (MiReferenceIoPages.c)
 *     MiTrimSection @ 0x140320A50 (MiTrimSection.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140323330 (MiReferenceControlAreaFileWithTag.c)
 *     MiKernelStackVaToStackNode @ 0x14032346C (MiKernelStackVaToStackNode.c)
 *     MiCheckSlabPage @ 0x1403234E8 (MiCheckSlabPage.c)
 *     MiObtainParkedCoreMasks @ 0x14032375C (MiObtainParkedCoreMasks.c)
 *     MiLocateCombineBlock @ 0x1403239AC (MiLocateCombineBlock.c)
 *     MiDereferenceIoPages @ 0x140391A60 (MiDereferenceIoPages.c)
 *     MiGetPartitionNodeInformation @ 0x140392848 (MiGetPartitionNodeInformation.c)
 *     MiGetChannelInformation @ 0x140392D28 (MiGetChannelInformation.c)
 *     MiIsCalibrationWorthwhile @ 0x1403B7024 (MiIsCalibrationWorthwhile.c)
 *     MiGetPageFromSlabAllocator @ 0x1403B7FAC (MiGetPageFromSlabAllocator.c)
 *     MiAgeAweRegions @ 0x1403C3618 (MiAgeAweRegions.c)
 *     MiFindFreePageFileSpace @ 0x1403D9AC0 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403DB268 (MiPageFileLargestBitmapsRun.c)
 *     MiTransientCombineAddress @ 0x1403E2664 (MiTransientCombineAddress.c)
 *     MiGenerateAccessViolation @ 0x1403E297C (MiGenerateAccessViolation.c)
 *     MiTransientPageListWriter @ 0x1403E2D30 (MiTransientPageListWriter.c)
 *     MmUnmapReservedMapping @ 0x140411E60 (MmUnmapReservedMapping.c)
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140433470 (MmMapLockedPagesWithReservedMapping.c)
 *     MiComputeUnusedSegmentReduction @ 0x1404592F0 (MiComputeUnusedSegmentReduction.c)
 *     MiAllUnusedSegmentsAreModNoWrite @ 0x140459B34 (MiAllUnusedSegmentsAreModNoWrite.c)
 *     MiGetPrivatePageCount @ 0x14049474C (MiGetPrivatePageCount.c)
 *     MiGetOptimalEngineMix @ 0x14049F7F8 (MiGetOptimalEngineMix.c)
 *     MiInitializeCachedExtentWalker @ 0x1404C091C (MiInitializeCachedExtentWalker.c)
 *     MiApplyDebuggerPatches @ 0x1404F41FC (MiApplyDebuggerPatches.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140665D54 (MiReleasePartitionHugeIoSpace.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x140667F4C (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x140668070 (MiGetListOfPendingBadPages.c)
 *     MiDeleteAwePageTables @ 0x140676440 (MiDeleteAwePageTables.c)
 *     MiFindPageFileMemoryExtent @ 0x140682DFC (MiFindPageFileMemoryExtent.c)
 *     MiAbsorbPossibleEngineChanges @ 0x1406837B4 (MiAbsorbPossibleEngineChanges.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReleaseSpinLockShared(volatile signed __int32 *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

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
