/*
 * XREFs of HvcallInitiateHypercall @ 0x14039DF20
 * Callers:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     HvlGetGpaPagesAccessState @ 0x1403992CC (HvlGetGpaPagesAccessState.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14039C2C0 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x14039C800 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlMapSparseGpaPages @ 0x14039CD8C (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x14039D530 (HvlMapGpaPages.c)
 *     HvlFlushRangeListTb @ 0x14039D700 (HvlFlushRangeListTb.c)
 *     HvlParkedVirtualProcessors @ 0x1403A3A14 (HvlParkedVirtualProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1403A4210 (HvlRetargetDeviceInterrupt.c)
 *     HvlpSlowFlushListTbEx @ 0x1403A4E4C (HvlpSlowFlushListTbEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1403E20F0 (HvlSwitchVirtualAddressSpace.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14042D8D0 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlInvokeHypervisorDebugger @ 0x14043FF4C (HvlInvokeHypervisorDebugger.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140468D00 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404740A0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlLpWriteMultipleMsr @ 0x140492CA0 (HvlLpWriteMultipleMsr.c)
 *     HvlLpReadMultipleMsr @ 0x1404AC6E0 (HvlLpReadMultipleMsr.c)
 *     HvlpSetPowerProperty @ 0x1404B88E0 (HvlpSetPowerProperty.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1404BB764 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlSetQpcBias @ 0x1404F57A0 (HvlSetQpcBias.c)
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
 *     HvlRequestProcessorHalt @ 0x1405869D0 (HvlRequestProcessorHalt.c)
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
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1406A2028 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlNotifyPageHeat @ 0x1406A2140 (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14070CB90 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x14070CCC4 (HvlpLpCpuid.c)
 *     HvlGetMicrocodeLatency @ 0x14070CDF0 (HvlGetMicrocodeLatency.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     HvcallpNoHypervisorPresent @ 0x1404A7D70 (HvcallpNoHypervisorPresent.c)
 *     EtwTraceHvHypercall @ 0x1404C72BC (EtwTraceHvHypercall.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  if ( (BYTE4(xmmword_140FC6B50) & 0x10) != 0 )
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
