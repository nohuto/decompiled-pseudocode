/*
 * XREFs of HvlpReleaseHypercallPage @ 0x1403AF6A0
 * Callers:
 *     HvlGetGpaPagesAccessState @ 0x1403AA868 (HvlGetGpaPagesAccessState.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1403ADAB0 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapSparseGpaPages @ 0x1403AE57C (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x1403AED20 (HvlMapGpaPages.c)
 *     HvlFlushRangeListTb @ 0x1403AEEF0 (HvlFlushRangeListTb.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1403C6780 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlParkedVirtualProcessors @ 0x1403C8E74 (HvlParkedVirtualProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1403C9670 (HvlRetargetDeviceInterrupt.c)
 *     HvlpSlowFlushListTbEx @ 0x1403CA27C (HvlpSlowFlushListTbEx.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x140582F2C (HvlQueryHypervisorTscAdjustment.c)
 *     HvlGetRootVpSharedPages @ 0x14058332C (HvlGetRootVpSharedPages.c)
 *     HvlQueryNumaDistance @ 0x1405836C0 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405839A0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlStartBootLogicalProcessors @ 0x140583AD8 (HvlStartBootLogicalProcessors.c)
 *     HvlpDepositPages @ 0x140584134 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140584434 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x140584540 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x140584828 (HvlpMapStatisticsPage.c)
 *     HvlpSetupSchedulerAssist @ 0x1405855B8 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x140585648 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x14058579C (HvlpStartVirtualProcessor.c)
 *     HvlpUpdateLpcbIndex @ 0x140585898 (HvlpUpdateLpcbIndex.c)
 *     HvlpWithdrawPages @ 0x140585950 (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x140585C74 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140586710 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140586810 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlEnterSleepState @ 0x140586B10 (HvlEnterSleepState.c)
 *     HvlGetDeviceCapabilities @ 0x140586BB0 (HvlGetDeviceCapabilities.c)
 *     HvlGetSystemPasidCapabilities @ 0x1405871E0 (HvlGetSystemPasidCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x140587430 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1405875C0 (HvlLpReadCpuid.c)
 *     HvlLpWritebackInvalidate @ 0x1405876C0 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x140587750 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1405879B4 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140587A40 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140587B10 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140587BA8 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140587D10 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x140587E70 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x1405882D0 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140588468 (HvlSetPartitionProperty.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140588640 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1405886E0 (HvlSetSystemSleepProperty.c)
 *     HvlUnmapDeviceInterrupt @ 0x140588850 (HvlUnmapDeviceInterrupt.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x140588A30 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140588B90 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x140588C54 (HvlpSlowFlushPasidAddressList.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140588D40 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlMapDmaRanges @ 0x140588E80 (HvlMapDmaRanges.c)
 *     HvlUnmapDmaRanges @ 0x140588F80 (HvlUnmapDmaRanges.c)
 *     HvlNotifyAcpiReenabled @ 0x1405893BC (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x140589428 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x140589550 (HvlPrepareForSecureHibernate.c)
 *     HvlWakeVirtualProcessors @ 0x1405897E0 (HvlWakeVirtualProcessors.c)
 *     HvlpInitializePowerStatistics @ 0x1405899A0 (HvlpInitializePowerStatistics.c)
 *     HvlCollectLivedump @ 0x14058A1C0 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x14058B060 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14058B1EC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x14058B484 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x14058B9FC (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x14058C028 (HvlpQueryExtendedCapabilities.c)
 *     HvlpApplyIoCachePolicy @ 0x14058C1BC (HvlpApplyIoCachePolicy.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14058C45C (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSecureFlushLargeRangeList @ 0x1406A0EC0 (HvlpSecureFlushLargeRangeList.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1406A0FD0 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlNotifyPageHeat @ 0x1406A10E8 (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14070F000 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x14070F134 (HvlpLpCpuid.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlpReleaseHypercallPage(unsigned int *a1)
{
  __int64 result; // rax
  __int64 HypercallCachedPages; // rdx
  struct _SLIST_ENTRY *v3; // rdx
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
    v3 = (struct _SLIST_ENTRY *)*((_QWORD *)a1 + 2);
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
