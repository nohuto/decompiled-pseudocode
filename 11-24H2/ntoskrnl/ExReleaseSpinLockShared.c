/*
 * XREFs of ExReleaseSpinLockShared @ 0x140246D40
 * Callers:
 *     RtlpHpReleaseLockShared @ 0x140246CF4 (RtlpHpReleaseLockShared.c)
 *     PsGetNextPartitionUnsafe @ 0x140246D98 (PsGetNextPartitionUnsafe.c)
 *     RtlpCSparseBitmapUnlock @ 0x140247650 (RtlpCSparseBitmapUnlock.c)
 *     HalpIommuFlushDmaDomain @ 0x14027B380 (HalpIommuFlushDmaDomain.c)
 *     IopQueueWorkItemProlog @ 0x14029F590 (IopQueueWorkItemProlog.c)
 *     ExpAddTagForBigPages @ 0x1402C4180 (ExpAddTagForBigPages.c)
 *     PopPepLockActivityLink @ 0x140312A80 (PopPepLockActivityLink.c)
 *     PopPepComponentSetLatency @ 0x1403169B8 (PopPepComponentSetLatency.c)
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140357308 (SepGetSingletonEntryFromIndexNumber.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140358240 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     IoPageReadEx @ 0x140373740 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140374220 (IoSetDiskIoAttributionFromThread.c)
 *     PopFxLockDevice @ 0x140376070 (PopFxLockDevice.c)
 *     ExRemovePoolTag @ 0x1403A9924 (ExRemovePoolTag.c)
 *     IommupHvFlushDomainTbs @ 0x1403AC1BC (IommupHvFlushDomainTbs.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x1403ACFA0 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     IoReferenceIoAttributionFromThread @ 0x1403C6140 (IoReferenceIoAttributionFromThread.c)
 *     InsertEventEntryInLookUpTable @ 0x1403D0F14 (InsertEventEntryInLookUpTable.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x140421384 (RtlpHpVaMgrCtxAlloc.c)
 *     PsGetWorkOnBehalfThread @ 0x140432F80 (PsGetWorkOnBehalfThread.c)
 *     IoQueueWorkItemEx @ 0x14043B330 (IoQueueWorkItemEx.c)
 *     PsGetEffectiveContainerId @ 0x140444430 (PsGetEffectiveContainerId.c)
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x14044A328 (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 *     ExpCheckForResource @ 0x140491810 (ExpCheckForResource.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x1404918A0 (PopPepGetDevicePlatformStateDependents.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1404A1D24 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepGetComponentVetoMasks @ 0x1404A9BDC (PopPepGetComponentVetoMasks.c)
 *     ?SmCompressManagerUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1404B61D0 (-SmCompressManagerUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAG.c)
 *     PopPepGetDeviceVetoMasks @ 0x1404C1A8C (PopPepGetDeviceVetoMasks.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1404F721C (SepValidateAndCopyGlobalEntry.c)
 *     IommupDomainDetachPasidDevice @ 0x14054E420 (IommupDomainDetachPasidDevice.c)
 *     HalpQueryNumaRangeTableInformation @ 0x140558C60 (HalpQueryNumaRangeTableInformation.c)
 *     PopPepPlatformStateRegistered @ 0x1405DBD18 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x1405DBF60 (PopPepRegisterComponentPerfStates.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1405E5B48 (PspJobIoRateVolumeEntryReference.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x140615730 (ViIrpDatabaseReleaseLockShared.c)
 *     MiNoPagesLastChance @ 0x1406849B0 (MiNoPagesLastChance.c)
 *     ExQuerySystemLockInformation @ 0x140B6A1BC (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
