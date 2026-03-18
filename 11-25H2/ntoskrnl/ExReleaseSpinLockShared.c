/*
 * XREFs of ExReleaseSpinLockShared @ 0x14035E450
 * Callers:
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x14026E720 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     PopPepLockActivityLink @ 0x1402BD6B0 (PopPepLockActivityLink.c)
 *     PopPepProcessEvent @ 0x1402BD780 (PopPepProcessEvent.c)
 *     PopPepComponentSetLatency @ 0x1402C0F08 (PopPepComponentSetLatency.c)
 *     IopQueueWorkItemProlog @ 0x1402E4B70 (IopQueueWorkItemProlog.c)
 *     IoQueueWorkItemEx @ 0x1402E56E0 (IoQueueWorkItemEx.c)
 *     ExpAddTagForBigPages @ 0x1402FCDC0 (ExpAddTagForBigPages.c)
 *     HalpIommuFlushDmaDomain @ 0x14034975C (HalpIommuFlushDmaDomain.c)
 *     IoPageReadEx @ 0x14035CA60 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14035D5D0 (IoSetDiskIoAttributionFromThread.c)
 *     RtlpCSparseBitmapUnlock @ 0x14035E2E4 (RtlpCSparseBitmapUnlock.c)
 *     PsGetNextPartitionUnsafe @ 0x14035E34C (PsGetNextPartitionUnsafe.c)
 *     RtlpHpReleaseLockShared @ 0x14035E3FC (RtlpHpReleaseLockShared.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14035ED18 (SepGetSingletonEntryFromIndexNumber.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14035FF40 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     ExRemovePoolTag @ 0x14038B5E8 (ExRemovePoolTag.c)
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x1403937A0 (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 *     IoReferenceIoAttributionFromThread @ 0x1403AAA00 (IoReferenceIoAttributionFromThread.c)
 *     InsertEventEntryInLookUpTable @ 0x1403BB444 (InsertEventEntryInLookUpTable.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1403CBC48 (RtlpHpVaMgrCtxAlloc.c)
 *     PsGetWorkOnBehalfThread @ 0x1404365B0 (PsGetWorkOnBehalfThread.c)
 *     PsGetEffectiveContainerId @ 0x140442EC0 (PsGetEffectiveContainerId.c)
 *     PopFxLockDevice @ 0x14048C9E4 (PopFxLockDevice.c)
 *     ExpCheckForResource @ 0x140492604 (ExpCheckForResource.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x1404926B0 (PopPepGetDevicePlatformStateDependents.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1404A2324 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepGetComponentVetoMasks @ 0x1404A8A00 (PopPepGetComponentVetoMasks.c)
 *     ?SmCompressManagerUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1404B6720 (-SmCompressManagerUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAG.c)
 *     PopPepGetDeviceVetoMasks @ 0x1404C3004 (PopPepGetDeviceVetoMasks.c)
 *     PopPepCompleteComponentIdleState @ 0x1404CBFBC (PopPepCompleteComponentIdleState.c)
 *     IommupHvFlushDomainTbs @ 0x1404D1710 (IommupHvFlushDomainTbs.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1404F4924 (SepValidateAndCopyGlobalEntry.c)
 *     IommupDomainDetachPasidDevice @ 0x14054BB10 (IommupDomainDetachPasidDevice.c)
 *     HalpQueryNumaRangeTableInformation @ 0x140556360 (HalpQueryNumaRangeTableInformation.c)
 *     PopPepPlatformStateRegistered @ 0x1405D6B38 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x1405D6D80 (PopPepRegisterComponentPerfStates.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1405D9978 (PspJobIoRateVolumeEntryReference.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x140609770 (ViIrpDatabaseReleaseLockShared.c)
 *     MiNoPagesLastChance @ 0x140679124 (MiNoPagesLastChance.c)
 *     ExQuerySystemLockInformation @ 0x140B5A6C8 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __stdcall ExReleaseSpinLockShared(PEX_SPIN_LOCK SpinLock, KIRQL OldIrql)
{
  unsigned __int64 v2; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = OldIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(SpinLock, 0xBFFFFFFF);
    _InterlockedDecrement(SpinLock);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SpinLock, retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v2);
  __writecr8(v2);
}
