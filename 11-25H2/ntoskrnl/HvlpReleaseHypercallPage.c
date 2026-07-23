/*
 * XREFs of HvlpReleaseHypercallPage @ 0x14026D310
 * Callers:
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x14026778C (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlParkedVirtualProcessors @ 0x14026C074 (HvlParkedVirtualProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x14026C870 (HvlRetargetDeviceInterrupt.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14026CB84 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapSparseGpaPages @ 0x14026CEEC (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x14026D068 (HvlMapGpaPages.c)
 *     HvlFlushRangeListTb @ 0x14032CB20 (HvlFlushRangeListTb.c)
 *     HvlGetGpaPagesAccessState @ 0x14042C0FC (HvlGetGpaPagesAccessState.c)
 *     HvlpSlowFlushListTbEx @ 0x1404518A8 (HvlpSlowFlushListTbEx.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x14057F77C (HvlQueryHypervisorTscAdjustment.c)
 *     HvlGetRootVpSharedPages @ 0x14057FB7C (HvlGetRootVpSharedPages.c)
 *     HvlQueryNumaDistance @ 0x14057FF10 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405801F0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlStartBootLogicalProcessors @ 0x140580328 (HvlStartBootLogicalProcessors.c)
 *     HvlpDepositPages @ 0x140580984 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140580C84 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x140580D90 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x140581078 (HvlpMapStatisticsPage.c)
 *     HvlpSetupSchedulerAssist @ 0x140581E08 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x140581E98 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x140581FEC (HvlpStartVirtualProcessor.c)
 *     HvlpUpdateLpcbIndex @ 0x1405820E8 (HvlpUpdateLpcbIndex.c)
 *     HvlpWithdrawPages @ 0x1405821A0 (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1405824C4 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140582F60 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140583060 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlEnterSleepState @ 0x140583360 (HvlEnterSleepState.c)
 *     HvlGetDeviceCapabilities @ 0x140583430 (HvlGetDeviceCapabilities.c)
 *     HvlGetSystemPasidCapabilities @ 0x140583A60 (HvlGetSystemPasidCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x140583CB0 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x140583E40 (HvlLpReadCpuid.c)
 *     HvlLpWritebackInvalidate @ 0x140583F40 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x140583FD0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140584234 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1405842C0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140584390 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140584428 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140584590 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x1405846F0 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x140584B50 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140584CE8 (HvlSetPartitionProperty.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140584EC0 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x140584F60 (HvlSetSystemSleepProperty.c)
 *     HvlUnmapDeviceInterrupt @ 0x1405850D0 (HvlUnmapDeviceInterrupt.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x1405852B0 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140585524 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1405855E8 (HvlpSlowFlushPasidAddressList.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x1405856D0 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlMapDmaRanges @ 0x140585810 (HvlMapDmaRanges.c)
 *     HvlUnmapDmaRanges @ 0x140585910 (HvlUnmapDmaRanges.c)
 *     HvlNotifyAcpiReenabled @ 0x140585D4C (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x140585DB8 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x140585EE0 (HvlPrepareForSecureHibernate.c)
 *     HvlWakeVirtualProcessors @ 0x140586170 (HvlWakeVirtualProcessors.c)
 *     HvlpInitializePowerStatistics @ 0x140586330 (HvlpInitializePowerStatistics.c)
 *     HvlCollectLivedump @ 0x140586B50 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x1405879F0 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x140587B7C (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x140587E14 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x14058838C (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1405889B8 (HvlpQueryExtendedCapabilities.c)
 *     HvlpApplyIoCachePolicy @ 0x140588B4C (HvlpApplyIoCachePolicy.c)
 *     HvlpInvokeGetPageListHypercall @ 0x140588DEC (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSecureFlushLargeRangeList @ 0x140695C8C (HvlpSecureFlushLargeRangeList.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x140695D9C (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlNotifyPageHeat @ 0x140695EB4 (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140703120 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140703254 (HvlpLpCpuid.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
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
          result = KiRemoveSystemWorkPriorityKick(v7);
      }
      _enable();
    }
  }
  return result;
}
