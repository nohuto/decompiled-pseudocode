/*
 * XREFs of HvlpReleaseHypercallPage @ 0x14039DEB0
 * Callers:
 *     HvlGetGpaPagesAccessState @ 0x1403992CC (HvlGetGpaPagesAccessState.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14039C2C0 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapSparseGpaPages @ 0x14039CD8C (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x14039D530 (HvlMapGpaPages.c)
 *     HvlFlushRangeListTb @ 0x14039D700 (HvlFlushRangeListTb.c)
 *     HvlParkedVirtualProcessors @ 0x1403A3A14 (HvlParkedVirtualProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1403A4210 (HvlRetargetDeviceInterrupt.c)
 *     HvlpSlowFlushListTbEx @ 0x1403A4E4C (HvlpSlowFlushListTbEx.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1404BB764 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x1405802AC (HvlQueryHypervisorTscAdjustment.c)
 *     HvlGetRootVpSharedPages @ 0x1405806AC (HvlGetRootVpSharedPages.c)
 *     HvlQueryNumaDistance @ 0x140580A40 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140580D20 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlStartBootLogicalProcessors @ 0x140580E58 (HvlStartBootLogicalProcessors.c)
 *     HvlpDepositPages @ 0x1405814B4 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1405817B4 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x1405818C0 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x140581BA8 (HvlpMapStatisticsPage.c)
 *     HvlpSetupSchedulerAssist @ 0x140582938 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x1405829C8 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x140582B1C (HvlpStartVirtualProcessor.c)
 *     HvlpUpdateLpcbIndex @ 0x140582C18 (HvlpUpdateLpcbIndex.c)
 *     HvlpWithdrawPages @ 0x140582CD0 (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x140582FF4 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140583A90 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140583B90 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlEnterSleepState @ 0x140583E90 (HvlEnterSleepState.c)
 *     HvlGetDeviceCapabilities @ 0x140583F30 (HvlGetDeviceCapabilities.c)
 *     HvlGetSystemPasidCapabilities @ 0x140584560 (HvlGetSystemPasidCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x1405847B0 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x140584940 (HvlLpReadCpuid.c)
 *     HvlLpWritebackInvalidate @ 0x140584A40 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x140584AD0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140584D34 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140584DC0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140584E70 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140584F08 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140585030 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x140585190 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x1405855B0 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140585748 (HvlSetPartitionProperty.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140585920 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1405859C0 (HvlSetSystemSleepProperty.c)
 *     HvlUnmapDeviceInterrupt @ 0x140585B30 (HvlUnmapDeviceInterrupt.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x140585D10 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140585E70 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x140585F34 (HvlpSlowFlushPasidAddressList.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140586020 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlMapDmaRanges @ 0x140586160 (HvlMapDmaRanges.c)
 *     HvlUnmapDmaRanges @ 0x140586260 (HvlUnmapDmaRanges.c)
 *     HvlNotifyAcpiReenabled @ 0x14058669C (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x140586714 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x14058683C (HvlPrepareForSecureHibernate.c)
 *     HvlWakeVirtualProcessors @ 0x140586AD0 (HvlWakeVirtualProcessors.c)
 *     HvlpInitializePowerStatistics @ 0x140586C90 (HvlpInitializePowerStatistics.c)
 *     HvlCollectLivedump @ 0x1405874B0 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x140588350 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1405884DC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x140588774 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x140588CEC (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x140589318 (HvlpQueryExtendedCapabilities.c)
 *     HvlpApplyIoCachePolicy @ 0x1405894AC (HvlpApplyIoCachePolicy.c)
 *     HvlpInvokeGetPageListHypercall @ 0x1405897FC (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSecureFlushLargeRangeList @ 0x1406A1F18 (HvlpSecureFlushLargeRangeList.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1406A2028 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlNotifyPageHeat @ 0x1406A2140 (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14070CB90 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x14070CCC4 (HvlpLpCpuid.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlpReleaseHypercallPage(unsigned int *a1)
{
  __int64 result; // rax
  __int64 HypercallCachedPages; // rdx
  _SLIST_ENTRY *v3; // rdx
  unsigned __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v6; // r8d
  struct _KPRCB *v7; // rcx
  _DWORD *SchedulerAssist; // r8
  int v9; // ett

  result = *a1;
  HypercallCachedPages = 0LL;
  if ( (result & 1) != 0 )
  {
    v3 = (_SLIST_ENTRY *)*((_QWORD *)a1 + 2);
    v3[1].Next = (_SLIST_ENTRY *)*((_QWORD *)a1 + 3);
    return (__int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*((_QWORD *)a1 + 1) + 35776LL), v3);
  }
  else if ( (result & 2) != 0 )
  {
    v4 = *((unsigned __int8 *)a1 + 8);
    if ( (unsigned __int8)v4 < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(HypercallCachedPages) = *((_BYTE *)a1 + 8);
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), HypercallCachedPages);
      }
      __writecr8(v4);
    }
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = a1[3];
    if ( (v6 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)CurrentPrcb->HypercallCachedPages;
    }
    else if ( (v6 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)CurrentPrcb->HypercallCachedPages + 4096;
    }
    result = *((_QWORD *)a1 + 3);
    *(_QWORD *)(HypercallCachedPages + 16) = result;
    if ( *((_BYTE *)a1 + 8) )
    {
      v7 = KeGetCurrentPrcb();
      SchedulerAssist = v7->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        LODWORD(result) = *SchedulerAssist;
        do
        {
          v9 = result;
          result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
        }
        while ( v9 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v7);
      }
      _enable();
    }
  }
  return result;
}
