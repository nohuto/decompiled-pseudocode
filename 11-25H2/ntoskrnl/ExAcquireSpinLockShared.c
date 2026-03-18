/*
 * XREFs of ExAcquireSpinLockShared @ 0x1402BBA30
 * Callers:
 *     MiReferenceInPageFile @ 0x140208E60 (MiReferenceInPageFile.c)
 *     MiReferencePfBackedSection @ 0x1402185B4 (MiReferencePfBackedSection.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140250FE0 (IopFreeIrp.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x14026E720 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     MmQueryWorkingSetInformation @ 0x1402BB410 (MmQueryWorkingSetInformation.c)
 *     MiOffsetToProtos @ 0x1402BBD30 (MiOffsetToProtos.c)
 *     MiFindLastSubsection @ 0x1402BC450 (MiFindLastSubsection.c)
 *     PopPepLockActivityLink @ 0x1402BD6B0 (PopPepLockActivityLink.c)
 *     PopPepProcessEvent @ 0x1402BD780 (PopPepProcessEvent.c)
 *     PopPepComponentSetLatency @ 0x1402C0F08 (PopPepComponentSetLatency.c)
 *     IopQueueWorkItemProlog @ 0x1402E4B70 (IopQueueWorkItemProlog.c)
 *     IoQueueWorkItemEx @ 0x1402E56E0 (IoQueueWorkItemEx.c)
 *     PfSnGetFileInformation @ 0x140302AF0 (PfSnGetFileInformation.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140323330 (MiReferenceControlAreaFileWithTag.c)
 *     MiKernelStackVaToStackNode @ 0x14032346C (MiKernelStackVaToStackNode.c)
 *     MiCheckSlabPage @ 0x1403234E8 (MiCheckSlabPage.c)
 *     MiObtainParkedCoreMasks @ 0x14032375C (MiObtainParkedCoreMasks.c)
 *     MiLocateCombineBlock @ 0x1403239AC (MiLocateCombineBlock.c)
 *     MiStartingOffsetNeedLock @ 0x140323EDC (MiStartingOffsetNeedLock.c)
 *     HalpIommuFlushDmaDomain @ 0x14034975C (HalpIommuFlushDmaDomain.c)
 *     IopFindDiskIoAttribution @ 0x14034E730 (IopFindDiskIoAttribution.c)
 *     IoPageReadEx @ 0x14035CA60 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14035D5D0 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x14035DE60 (IopSetDiskIoAttributionFromProcess.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14035E0AC (RtlpCSparseBitmapPageCommit.c)
 *     PsGetNextPartitionUnsafe @ 0x14035E34C (PsGetNextPartitionUnsafe.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14035ED18 (SepGetSingletonEntryFromIndexNumber.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14035FF40 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     ExRemovePoolTag @ 0x14038B5E8 (ExRemovePoolTag.c)
 *     MiGetPartitionNodeInformation @ 0x140392848 (MiGetPartitionNodeInformation.c)
 *     MiGetChannelInformation @ 0x140392D28 (MiGetChannelInformation.c)
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x1403937A0 (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 *     ExProtectPoolEx @ 0x14039FD08 (ExProtectPoolEx.c)
 *     IoReferenceIoAttributionFromThread @ 0x1403AAA00 (IoReferenceIoAttributionFromThread.c)
 *     MiIsCalibrationWorthwhile @ 0x1403B7024 (MiIsCalibrationWorthwhile.c)
 *     MiGetPageFromSlabAllocator @ 0x1403B7FAC (MiGetPageFromSlabAllocator.c)
 *     InsertEventEntryInLookUpTable @ 0x1403BB444 (InsertEventEntryInLookUpTable.c)
 *     MiAgeAweRegions @ 0x1403C3618 (MiAgeAweRegions.c)
 *     ExReturnPoolQuota @ 0x1403C5CF0 (ExReturnPoolQuota.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1403CBC48 (RtlpHpVaMgrCtxAlloc.c)
 *     MiFindFreePageFileSpace @ 0x1403D9AC0 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403DB268 (MiPageFileLargestBitmapsRun.c)
 *     MiTransientCombineAddress @ 0x1403E2664 (MiTransientCombineAddress.c)
 *     MiGenerateAccessViolation @ 0x1403E297C (MiGenerateAccessViolation.c)
 *     MiTransientPageListWriter @ 0x1403E2D30 (MiTransientPageListWriter.c)
 *     MmUnmapReservedMapping @ 0x140411E60 (MmUnmapReservedMapping.c)
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140433470 (MmMapLockedPagesWithReservedMapping.c)
 *     PsGetWorkOnBehalfThread @ 0x1404365B0 (PsGetWorkOnBehalfThread.c)
 *     IopMcFindNextTableEntryForUnlock @ 0x14043D130 (IopMcFindNextTableEntryForUnlock.c)
 *     IopReferenceIoAttributionFromProcess @ 0x14043FE30 (IopReferenceIoAttributionFromProcess.c)
 *     PsGetEffectiveContainerId @ 0x140442EC0 (PsGetEffectiveContainerId.c)
 *     RtlpHpAcquireLockShared @ 0x1404505D0 (RtlpHpAcquireLockShared.c)
 *     MiComputeUnusedSegmentReduction @ 0x1404592F0 (MiComputeUnusedSegmentReduction.c)
 *     MiAllUnusedSegmentsAreModNoWrite @ 0x140459B34 (MiAllUnusedSegmentsAreModNoWrite.c)
 *     MiPurgeSlabEntries @ 0x140481A04 (MiPurgeSlabEntries.c)
 *     PopFxLockDevice @ 0x14048C9E4 (PopFxLockDevice.c)
 *     ExpCheckForResource @ 0x140492604 (ExpCheckForResource.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x1404926B0 (PopPepGetDevicePlatformStateDependents.c)
 *     MiGetPrivatePageCount @ 0x14049474C (MiGetPrivatePageCount.c)
 *     MiGetOptimalEngineMix @ 0x14049F7F8 (MiGetOptimalEngineMix.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1404A2324 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepGetComponentVetoMasks @ 0x1404A8A00 (PopPepGetComponentVetoMasks.c)
 *     ?SmCompressManagerUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1404B6720 (-SmCompressManagerUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAG.c)
 *     MiInitializeCachedExtentWalker @ 0x1404C091C (MiInitializeCachedExtentWalker.c)
 *     PopPepGetDeviceVetoMasks @ 0x1404C3004 (PopPepGetDeviceVetoMasks.c)
 *     PopPepCompleteComponentIdleState @ 0x1404CBFBC (PopPepCompleteComponentIdleState.c)
 *     IommupHvFlushDomainTbs @ 0x1404D1710 (IommupHvFlushDomainTbs.c)
 *     MiApplyDebuggerPatches @ 0x1404F41FC (MiApplyDebuggerPatches.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1404F4924 (SepValidateAndCopyGlobalEntry.c)
 *     IommupDomainDetachPasidDevice @ 0x14054BB10 (IommupDomainDetachPasidDevice.c)
 *     HalpQueryNumaRangeTableInformation @ 0x140556360 (HalpQueryNumaRangeTableInformation.c)
 *     PopPepPlatformStateRegistered @ 0x1405D6B38 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x1405D6D80 (PopPepRegisterComponentPerfStates.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1405D9978 (PspJobIoRateVolumeEntryReference.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x14060972C (ViIrpDatabaseAcquireLockShared.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140665D54 (MiReleasePartitionHugeIoSpace.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x140667F4C (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x140668070 (MiGetListOfPendingBadPages.c)
 *     MiDeleteAwePageTables @ 0x140676440 (MiDeleteAwePageTables.c)
 *     MiNoPagesLastChance @ 0x140679124 (MiNoPagesLastChance.c)
 *     MiFindPageFileMemoryExtent @ 0x140682DFC (MiFindPageFileMemoryExtent.c)
 *     MiAbsorbPossibleEngineChanges @ 0x1406837B4 (MiAbsorbPossibleEngineChanges.c)
 *     ExQuerySystemLockInformation @ 0x140B5A6C8 (ExQuerySystemLockInformation.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B62670 (ExpAllocatePoolWithQuotaTag.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // di
  signed __int32 v3; // eax
  signed __int32 v4; // ett

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw((const void *)SpinLock);
    v3 = *SpinLock & 0x7FFFFFFF;
    while ( 1 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange(SpinLock, v3 + 1, v3);
      if ( v4 == v3 )
        break;
      if ( v3 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire(SpinLock, CurrentIrql);
        return CurrentIrql;
      }
    }
    return CurrentIrql;
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, CurrentIrql);
    return CurrentIrql;
  }
}
