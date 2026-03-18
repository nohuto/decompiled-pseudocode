/*
 * XREFs of ExAcquireSpinLockShared @ 0x14031A1A0
 * Callers:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiSystemFault @ 0x140229570 (MiSystemFault.c)
 *     MiReferencePfBackedSection @ 0x14022EFF8 (MiReferencePfBackedSection.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402440D0 (MiReferenceControlAreaFileWithTag.c)
 *     MiLocateCombineBlock @ 0x1402445AC (MiLocateCombineBlock.c)
 *     MiKernelStackVaToStackNode @ 0x14024468C (MiKernelStackVaToStackNode.c)
 *     MiCheckSlabPage @ 0x140244708 (MiCheckSlabPage.c)
 *     MiTransientCombineAddress @ 0x1402448C4 (MiTransientCombineAddress.c)
 *     MiObtainParkedCoreMasks @ 0x140244998 (MiObtainParkedCoreMasks.c)
 *     IopFindDiskIoAttribution @ 0x140244E70 (IopFindDiskIoAttribution.c)
 *     MiGenerateAccessViolation @ 0x140246254 (MiGenerateAccessViolation.c)
 *     MiReferenceControlAreaFile @ 0x1402464D0 (MiReferenceControlAreaFile.c)
 *     PsGetNextPartitionUnsafe @ 0x140246D98 (PsGetNextPartitionUnsafe.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1402477C4 (RtlpCSparseBitmapPageCommit.c)
 *     PfSnGetFileInformation @ 0x140276200 (PfSnGetFileInformation.c)
 *     HalpIommuFlushDmaDomain @ 0x14027B380 (HalpIommuFlushDmaDomain.c)
 *     IopQueueWorkItemProlog @ 0x14029F590 (IopQueueWorkItemProlog.c)
 *     ExReturnPoolQuota @ 0x1402B4980 (ExReturnPoolQuota.c)
 *     MiIsCalibrationWorthwhile @ 0x1402D1A6C (MiIsCalibrationWorthwhile.c)
 *     PopPepLockActivityLink @ 0x140312A80 (PopPepLockActivityLink.c)
 *     MiFindLastSubsection @ 0x140314EB0 (MiFindLastSubsection.c)
 *     PopPepComponentSetLatency @ 0x1403169B8 (PopPepComponentSetLatency.c)
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 *     MiOffsetToProtos @ 0x140319D40 (MiOffsetToProtos.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x14031AC50 (IopFreeIrp.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140357308 (SepGetSingletonEntryFromIndexNumber.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140358240 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403664F0 (MiPageFileLargestBitmapsRun.c)
 *     MiFindFreePageFileSpace @ 0x140367D88 (MiFindFreePageFileSpace.c)
 *     IoPageReadEx @ 0x140373740 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140374220 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x140374A90 (IopSetDiskIoAttributionFromProcess.c)
 *     PopFxLockDevice @ 0x140376070 (PopFxLockDevice.c)
 *     MiAgeAweRegions @ 0x1403797D0 (MiAgeAweRegions.c)
 *     ExProtectPoolEx @ 0x140388828 (ExProtectPoolEx.c)
 *     MiReferenceInPageFile @ 0x140398340 (MiReferenceInPageFile.c)
 *     MiGetPageFromSlabAllocator @ 0x1403A2ED0 (MiGetPageFromSlabAllocator.c)
 *     ExRemovePoolTag @ 0x1403A9924 (ExRemovePoolTag.c)
 *     IommupHvFlushDomainTbs @ 0x1403AC1BC (IommupHvFlushDomainTbs.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x1403ACFA0 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     IoReferenceIoAttributionFromThread @ 0x1403C6140 (IoReferenceIoAttributionFromThread.c)
 *     InsertEventEntryInLookUpTable @ 0x1403D0F14 (InsertEventEntryInLookUpTable.c)
 *     MiGetPartitionNodeInformation @ 0x1403D4C28 (MiGetPartitionNodeInformation.c)
 *     MiGetChannelInformation @ 0x1403D54BC (MiGetChannelInformation.c)
 *     MiComputeUnusedSegmentReduction @ 0x1403F7C6C (MiComputeUnusedSegmentReduction.c)
 *     MiAllUnusedSegmentsAreModNoWrite @ 0x1403F8494 (MiAllUnusedSegmentsAreModNoWrite.c)
 *     MmUnmapReservedMapping @ 0x14040F6F0 (MmUnmapReservedMapping.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140410510 (MmMapLockedPagesWithReservedMapping.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x140421384 (RtlpHpVaMgrCtxAlloc.c)
 *     PsGetWorkOnBehalfThread @ 0x140432F80 (PsGetWorkOnBehalfThread.c)
 *     IoQueueWorkItemEx @ 0x14043B330 (IoQueueWorkItemEx.c)
 *     IopMcFindNextTableEntryForUnlock @ 0x14043D340 (IopMcFindNextTableEntryForUnlock.c)
 *     MiStartingOffsetNeedLock @ 0x14043E114 (MiStartingOffsetNeedLock.c)
 *     IopReferenceIoAttributionFromProcess @ 0x14043F740 (IopReferenceIoAttributionFromProcess.c)
 *     PsGetEffectiveContainerId @ 0x140444430 (PsGetEffectiveContainerId.c)
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x14044A328 (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 *     RtlpHpAcquireLockShared @ 0x14045964C (RtlpHpAcquireLockShared.c)
 *     MiPurgeSlabEntries @ 0x1404827F0 (MiPurgeSlabEntries.c)
 *     ExpCheckForResource @ 0x140491810 (ExpCheckForResource.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x1404918A0 (PopPepGetDevicePlatformStateDependents.c)
 *     MiGetPrivatePageCount @ 0x14049352C (MiGetPrivatePageCount.c)
 *     MiGetOptimalEngineMix @ 0x1404940F8 (MiGetOptimalEngineMix.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1404A1D24 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepGetComponentVetoMasks @ 0x1404A9BDC (PopPepGetComponentVetoMasks.c)
 *     ?SmCompressManagerUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1404B61D0 (-SmCompressManagerUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAG.c)
 *     MiInitializeCachedExtentWalker @ 0x1404BF028 (MiInitializeCachedExtentWalker.c)
 *     PopPepGetDeviceVetoMasks @ 0x1404C1A8C (PopPepGetDeviceVetoMasks.c)
 *     MiTransientPageListWriter @ 0x1404D1B8C (MiTransientPageListWriter.c)
 *     MiApplyDebuggerPatches @ 0x1404F6A1C (MiApplyDebuggerPatches.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1404F721C (SepValidateAndCopyGlobalEntry.c)
 *     IommupDomainDetachPasidDevice @ 0x14054E420 (IommupDomainDetachPasidDevice.c)
 *     HalpQueryNumaRangeTableInformation @ 0x140558C60 (HalpQueryNumaRangeTableInformation.c)
 *     PopPepPlatformStateRegistered @ 0x1405DBD18 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x1405DBF60 (PopPepRegisterComponentPerfStates.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1405E5B48 (PspJobIoRateVolumeEntryReference.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x1406156EC (ViIrpDatabaseAcquireLockShared.c)
 *     MiReleasePartitionHugeIoSpace @ 0x1406717FC (MiReleasePartitionHugeIoSpace.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x1406739AC (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x140673AD0 (MiGetListOfPendingBadPages.c)
 *     MiDeleteAwePageTables @ 0x140681C60 (MiDeleteAwePageTables.c)
 *     MiNoPagesLastChance @ 0x1406849B0 (MiNoPagesLastChance.c)
 *     MiFindPageFileMemoryExtent @ 0x14068E68C (MiFindPageFileMemoryExtent.c)
 *     MiAbsorbPossibleEngineChanges @ 0x14068F0A4 (MiAbsorbPossibleEngineChanges.c)
 *     ExQuerySystemLockInformation @ 0x140B6A1BC (ExQuerySystemLockInformation.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B72670 (ExpAllocatePoolWithQuotaTag.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw((const void *)SpinLock);
    v4 = *SpinLock & 0x7FFFFFFF;
    while ( 1 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange(SpinLock, v4 + 1, v4);
      if ( v5 == v4 )
        break;
      if ( v4 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)SpinLock, CurrentIrql);
        return CurrentIrql;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, CurrentIrql);
  }
  return CurrentIrql;
}
