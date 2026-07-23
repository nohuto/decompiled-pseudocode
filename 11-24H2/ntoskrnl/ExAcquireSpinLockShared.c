/*
 * XREFs of ExAcquireSpinLockShared @ 0x1402C2D30
 * Callers:
 *     MiReferenceControlAreaFileWithTag @ 0x14020C860 (MiReferenceControlAreaFileWithTag.c)
 *     MiLocateCombineBlock @ 0x14020CD3C (MiLocateCombineBlock.c)
 *     MiKernelStackVaToStackNode @ 0x14020CE1C (MiKernelStackVaToStackNode.c)
 *     MiCheckSlabPage @ 0x14020CE98 (MiCheckSlabPage.c)
 *     MiTransientCombineAddress @ 0x14020D0AC (MiTransientCombineAddress.c)
 *     MiObtainParkedCoreMasks @ 0x14020D180 (MiObtainParkedCoreMasks.c)
 *     IopFindDiskIoAttribution @ 0x14020D650 (IopFindDiskIoAttribution.c)
 *     PsGetNextPartitionUnsafe @ 0x1402194E8 (PsGetNextPartitionUnsafe.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1402197E0 (RtlpCSparseBitmapPageCommit.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14021AA04 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExReturnPoolQuota @ 0x14021ACC0 (ExReturnPoolQuota.c)
 *     MiGetPageFromSlabAllocator @ 0x14021D5AC (MiGetPageFromSlabAllocator.c)
 *     PfSnGetFileInformation @ 0x14022B790 (PfSnGetFileInformation.c)
 *     HalpIommuFlushDmaDomain @ 0x140230910 (HalpIommuFlushDmaDomain.c)
 *     IoPageReadEx @ 0x14025C000 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14025CAE0 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x14025D350 (IopSetDiskIoAttributionFromProcess.c)
 *     MiGetPartitionNodeInformation @ 0x1402636C4 (MiGetPartitionNodeInformation.c)
 *     MiGetChannelInformation @ 0x140264320 (MiGetChannelInformation.c)
 *     IoReferenceIoAttributionFromThread @ 0x140273BD0 (IoReferenceIoAttributionFromThread.c)
 *     InsertEventEntryInLookUpTable @ 0x140274A04 (InsertEventEntryInLookUpTable.c)
 *     PopPepComponentSetLatency @ 0x1402BF568 (PopPepComponentSetLatency.c)
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     MiOffsetToProtos @ 0x1402C28D0 (MiOffsetToProtos.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1402C37E0 (IopFreeIrp.c)
 *     IoQueueWorkItemEx @ 0x1402F05B0 (IoQueueWorkItemEx.c)
 *     MiGenerateAccessViolation @ 0x1402FB178 (MiGenerateAccessViolation.c)
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 *     MiReferencePfBackedSection @ 0x140302908 (MiReferencePfBackedSection.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiReferenceInPageFile @ 0x140350A90 (MiReferenceInPageFile.c)
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x1403765B0 (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 *     ExProtectPoolEx @ 0x140382168 (ExProtectPoolEx.c)
 *     ExRemovePoolTag @ 0x1403985B4 (ExRemovePoolTag.c)
 *     IommupHvFlushDomainTbs @ 0x14039A8CC (IommupHvFlushDomainTbs.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x14039B7B0 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     PopPepLockActivityLink @ 0x1403A76F0 (PopPepLockActivityLink.c)
 *     PopFxLockDevice @ 0x1403A79D0 (PopFxLockDevice.c)
 *     IopQueueWorkItemProlog @ 0x1403AA050 (IopQueueWorkItemProlog.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     MiFindFreePageFileSpace @ 0x1403C438C (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403C5B54 (MiPageFileLargestBitmapsRun.c)
 *     RtlpHpAcquireLockShared @ 0x1403D9B14 (RtlpHpAcquireLockShared.c)
 *     MiComputeUnusedSegmentReduction @ 0x1403EDBDC (MiComputeUnusedSegmentReduction.c)
 *     MiAllUnusedSegmentsAreModNoWrite @ 0x1403EE5AC (MiAllUnusedSegmentsAreModNoWrite.c)
 *     MiFindLastSubsection @ 0x1403F2490 (MiFindLastSubsection.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14041D8B0 (MmMapLockedPagesWithReservedMapping.c)
 *     PsGetWorkOnBehalfThread @ 0x1404250C0 (PsGetWorkOnBehalfThread.c)
 *     IopMcFindNextTableEntryForUnlock @ 0x1404315E0 (IopMcFindNextTableEntryForUnlock.c)
 *     MiStartingOffsetNeedLock @ 0x140432804 (MiStartingOffsetNeedLock.c)
 *     MmUnmapReservedMapping @ 0x140433320 (MmUnmapReservedMapping.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1404357B0 (IopReferenceIoAttributionFromProcess.c)
 *     PsGetEffectiveContainerId @ 0x140439ED0 (PsGetEffectiveContainerId.c)
 *     MiAgeAweRegions @ 0x14043DAC0 (MiAgeAweRegions.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x140459658 (RtlpHpVaMgrCtxAlloc.c)
 *     MiPurgeSlabEntries @ 0x14047D9E8 (MiPurgeSlabEntries.c)
 *     ExpCheckForResource @ 0x14048C4AC (ExpCheckForResource.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14048C53C (PopPepGetDevicePlatformStateDependents.c)
 *     MiGetPrivatePageCount @ 0x14048DE5C (MiGetPrivatePageCount.c)
 *     MiGetOptimalEngineMix @ 0x14048EB84 (MiGetOptimalEngineMix.c)
 *     MiIsCalibrationWorthwhile @ 0x140490824 (MiIsCalibrationWorthwhile.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14049CCB4 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepGetComponentVetoMasks @ 0x1404A3EAC (PopPepGetComponentVetoMasks.c)
 *     ?SmCompressManagerUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1404B0A90 (-SmCompressManagerUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAG.c)
 *     MiInitializeCachedExtentWalker @ 0x1404BA55C (MiInitializeCachedExtentWalker.c)
 *     PopPepGetDeviceVetoMasks @ 0x1404BD07C (PopPepGetDeviceVetoMasks.c)
 *     MiTransientPageListWriter @ 0x1404CABCC (MiTransientPageListWriter.c)
 *     MiApplyDebuggerPatches @ 0x1404F4300 (MiApplyDebuggerPatches.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1404F4AFC (SepValidateAndCopyGlobalEntry.c)
 *     IommupDomainDetachPasidDevice @ 0x14054BD54 (IommupDomainDetachPasidDevice.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1405565A0 (HalpQueryNumaRangeTableInformation.c)
 *     PopPepPlatformStateRegistered @ 0x1405D8BE8 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x1405D8E30 (PopPepRegisterComponentPerfStates.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1405E30E8 (PspJobIoRateVolumeEntryReference.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x140613CAC (ViIrpDatabaseAcquireLockShared.c)
 *     MiReleasePartitionHugeIoSpace @ 0x1406729CC (MiReleasePartitionHugeIoSpace.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x140674B7C (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x140674CA0 (MiGetListOfPendingBadPages.c)
 *     MiDeleteAwePageTables @ 0x140682E50 (MiDeleteAwePageTables.c)
 *     MiNoPagesLastChance @ 0x140685ADC (MiNoPagesLastChance.c)
 *     MiFindPageFileMemoryExtent @ 0x14068F7BC (MiFindPageFileMemoryExtent.c)
 *     MiAbsorbPossibleEngineChanges @ 0x140690174 (MiAbsorbPossibleEngineChanges.c)
 *     ExQuerySystemLockInformation @ 0x140B6B8CC (ExQuerySystemLockInformation.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B74210 (ExpAllocatePoolWithQuotaTag.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // r8
  __int64 v2; // r9
  KIRQL CurrentIrql; // bl
  signed __int32 v6; // eax
  signed __int32 v7; // ett

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw((const void *)SpinLock);
    v6 = *SpinLock & 0x7FFFFFFF;
    while ( 1 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange(SpinLock, v6 + 1, v6);
      if ( v7 == v6 )
        break;
      if ( v6 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)SpinLock, CurrentIrql, v1, v2);
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
