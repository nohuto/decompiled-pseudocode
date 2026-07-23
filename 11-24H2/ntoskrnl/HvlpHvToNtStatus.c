/*
 * XREFs of HvlpHvToNtStatus @ 0x14039CC08
 * Callers:
 *     HvlGetGpaPagesAccessState @ 0x1403992CC (HvlGetGpaPagesAccessState.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x14039C1A0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14039C2C0 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x14039C800 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlMapSparseGpaPages @ 0x14039CD8C (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x14039D530 (HvlMapGpaPages.c)
 *     HvlRetargetDeviceInterrupt @ 0x1403A4210 (HvlRetargetDeviceInterrupt.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14043DA00 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140468D00 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404740A0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlpSetPowerProperty @ 0x1404B88E0 (HvlpSetPowerProperty.c)
 *     HvlGetRootVpSharedPages @ 0x1405806AC (HvlGetRootVpSharedPages.c)
 *     HvlpReadPerfRegister @ 0x140581CFC (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x140582F30 (HvlpWritePerfRegister.c)
 *     HvlAcknowledgePageRequest @ 0x1405830E0 (HvlAcknowledgePageRequest.c)
 *     HvlAttachPasidSpace @ 0x140583180 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x140583230 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x1405832E0 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x140583340 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140583400 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x1405834F0 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x140583550 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x1405835A0 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x1405835F0 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140583670 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140583740 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x140583800 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1405838C0 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140583950 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x1405839B0 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140583A90 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140583B90 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x140583CD0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x140583D90 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x140583DE0 (HvlEnablePasid.c)
 *     HvlGetDeviceCapabilities @ 0x140583F30 (HvlGetDeviceCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x1405847B0 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x140584AD0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140584D34 (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x140585190 (HvlRegisterDeviceId.c)
 *     HvlRestoreTime @ 0x140585320 (HvlRestoreTime.c)
 *     HvlSetDeviceCapabilities @ 0x140585440 (HvlSetDeviceCapabilities.c)
 *     HvlSetDeviceDmaEnabled @ 0x1405854E0 (HvlSetDeviceDmaEnabled.c)
 *     HvlSetPasidAddressSpace @ 0x1405857E0 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x140585890 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x140585AA0 (HvlUnblockDefaultDma.c)
 *     HvlUnmapDeviceInterrupt @ 0x140585B30 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x140585BE0 (HvlUnregisterDeviceId.c)
 *     HvlpDmaFastFlushDeviceDomainVaList @ 0x140585C30 (HvlpDmaFastFlushDeviceDomainVaList.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x140585D10 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140586020 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlMapDmaRanges @ 0x140586160 (HvlMapDmaRanges.c)
 *     HvlUnmapDmaRanges @ 0x140586260 (HvlUnmapDmaRanges.c)
 *     HvlRequestProcessorHalt @ 0x1405869D0 (HvlRequestProcessorHalt.c)
 *     HvlWakeVirtualProcessors @ 0x140586AD0 (HvlWakeVirtualProcessors.c)
 *     HvlpAddRemovePhysicalMemory @ 0x1406A1D78 (HvlpAddRemovePhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x1406A2140 (HvlNotifyPageHeat.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14070CEF8 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpHvToNtStatus(unsigned __int16 a1)
{
  int v1; // edx
  __int64 result; // rax
  unsigned int v3; // ecx

  v1 = a1;
  if ( !a1 )
    return 0LL;
  if ( a1 == 11 || a1 == 29 )
    return 3221225626LL;
  result = 3473497LL;
  v3 = a1 | 0xC0350000;
  if ( v1 != 89 )
    return v3;
  return result;
}
