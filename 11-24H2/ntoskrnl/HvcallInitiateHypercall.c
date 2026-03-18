/*
 * XREFs of HvcallInitiateHypercall @ 0x1403AF710
 * Callers:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     HvlGetGpaPagesAccessState @ 0x1403AA868 (HvlGetGpaPagesAccessState.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1403ADAB0 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1403ADFF0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlMapSparseGpaPages @ 0x1403AE57C (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x1403AED20 (HvlMapGpaPages.c)
 *     HvlFlushRangeListTb @ 0x1403AEEF0 (HvlFlushRangeListTb.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1403C6780 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlParkedVirtualProcessors @ 0x1403C8E74 (HvlParkedVirtualProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1403C9670 (HvlRetargetDeviceInterrupt.c)
 *     HvlpSlowFlushListTbEx @ 0x1403CA27C (HvlpSlowFlushListTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14043B838 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlInvokeHypervisorDebugger @ 0x14044782C (HvlInvokeHypervisorDebugger.c)
 *     HvlDmaMapDeviceSparsePages @ 0x14046E870 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140477AA0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlLpWriteMultipleMsr @ 0x1404982C0 (HvlLpWriteMultipleMsr.c)
 *     HvlLpReadMultipleMsr @ 0x1404B1E50 (HvlLpReadMultipleMsr.c)
 *     HvlpSetPowerProperty @ 0x1404BD770 (HvlpSetPowerProperty.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404D48A0 (HvlSwitchVirtualAddressSpace.c)
 *     HvlSetQpcBias @ 0x1404F7EC0 (HvlSetQpcBias.c)
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
 *     HvlRequestProcessorHalt @ 0x1405896E0 (HvlRequestProcessorHalt.c)
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
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1406A0FD0 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlNotifyPageHeat @ 0x1406A10E8 (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14070F000 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x14070F134 (HvlpLpCpuid.c)
 *     HvlGetMicrocodeLatency @ 0x14070F260 (HvlGetMicrocodeLatency.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     HvcallpNoHypervisorPresent @ 0x1404AD690 (HvcallpNoHypervisorPresent.c)
 *     EtwTraceHvHypercall @ 0x1404CDEEC (EtwTraceHvHypercall.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall HvcallInitiateHypercall(int a1)
{
  char v2; // di
  char v3; // r14d^2
  int v4; // r15d
  unsigned __int16 v5; // r12
  __int64 result; // rax
  __int64 v7; // rbx
  _OWORD v8[2]; // [rsp+20h] [rbp-68h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( (BYTE4(xmmword_140FC5B10) & 0x10) != 0 )
  {
    v2 = 1;
    EtwGetKernelTraceTimestamp(v8, 2684354576LL);
  }
  else
  {
    v2 = 0;
  }
  v3 = BYTE2(a1);
  v4 = a1;
  v5 = a1;
  result = HvcallCodeVa();
  v7 = result;
  if ( v2 )
  {
    ((void (__fastcall *)(_OWORD *, _QWORD, _QWORD, bool))EtwTraceHvHypercall)(v8, v5, v3 & 1, v4 < 0);
    return v7;
  }
  return result;
}
