/*
 * XREFs of HvcallInitiateHypercall @ 0x14026D230
 * Callers:
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x14026778C (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlParkedVirtualProcessors @ 0x14026C074 (HvlParkedVirtualProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x14026C870 (HvlRetargetDeviceInterrupt.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14026CB84 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapSparseGpaPages @ 0x14026CEEC (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x14026D068 (HvlMapGpaPages.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x14026E010 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlFlushRangeListTb @ 0x14032CB20 (HvlFlushRangeListTb.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1403C4700 (HvlSwitchVirtualAddressSpace.c)
 *     HvlGetGpaPagesAccessState @ 0x14042C0FC (HvlGetGpaPagesAccessState.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14043C4C0 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlInvokeHypervisorDebugger @ 0x14044A224 (HvlInvokeHypervisorDebugger.c)
 *     HvlpSlowFlushListTbEx @ 0x1404518A8 (HvlpSlowFlushListTbEx.c)
 *     HvlDmaMapDeviceSparsePages @ 0x14046FDA0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140477CC0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlLpWriteMultipleMsr @ 0x140498660 (HvlLpWriteMultipleMsr.c)
 *     HvlLpReadMultipleMsr @ 0x1404B0F00 (HvlLpReadMultipleMsr.c)
 *     HvlpSetPowerProperty @ 0x1404BEF1C (HvlpSetPowerProperty.c)
 *     HvlSetQpcBias @ 0x1404F56C0 (HvlSetQpcBias.c)
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
 *     HvlRequestProcessorHalt @ 0x140586070 (HvlRequestProcessorHalt.c)
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
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x140695D9C (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlNotifyPageHeat @ 0x140695EB4 (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140703120 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140703254 (HvlpLpCpuid.c)
 *     HvlGetMicrocodeLatency @ 0x140703380 (HvlGetMicrocodeLatency.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     HvcallpNoHypervisorPresent @ 0x1404AC0A0 (HvcallpNoHypervisorPresent.c)
 *     EtwTraceHvHypercall @ 0x1404CE10C (EtwTraceHvHypercall.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall HvcallInitiateHypercall(int a1)
{
  char v2; // di
  char v3; // r14d^2
  unsigned __int16 v4; // r12
  __int64 result; // rax
  __int64 v6; // rbx
  _OWORD v7[2]; // [rsp+20h] [rbp-68h] BYREF

  memset(v7, 0, sizeof(v7));
  if ( (BYTE4(xmmword_140FC5B10) & 0x10) != 0 )
  {
    v2 = 1;
    EtwGetKernelTraceTimestamp(v7, 2684354576LL);
  }
  else
  {
    v2 = 0;
  }
  v3 = BYTE2(a1);
  v4 = a1;
  result = HvcallCodeVa();
  v6 = result;
  if ( v2 )
  {
    EtwTraceHvHypercall(v7, v4, v3 & 1);
    return v6;
  }
  return result;
}
