/*
 * XREFs of HvlpHvToNtStatus @ 0x14026E418
 * Callers:
 *     HvlRetargetDeviceInterrupt @ 0x14026C870 (HvlRetargetDeviceInterrupt.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14026CB84 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapSparseGpaPages @ 0x14026CEEC (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x14026D068 (HvlMapGpaPages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x14026DBD0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x14026E010 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlGetGpaPagesAccessState @ 0x14042C0FC (HvlGetGpaPagesAccessState.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x140448400 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlDmaMapDeviceSparsePages @ 0x14046FDA0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140477CC0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlpSetPowerProperty @ 0x1404BEF1C (HvlpSetPowerProperty.c)
 *     HvlGetRootVpSharedPages @ 0x14057FB7C (HvlGetRootVpSharedPages.c)
 *     HvlpReadPerfRegister @ 0x1405811CC (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x140582400 (HvlpWritePerfRegister.c)
 *     HvlAcknowledgePageRequest @ 0x1405825B0 (HvlAcknowledgePageRequest.c)
 *     HvlAttachPasidSpace @ 0x140582650 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x140582700 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x1405827B0 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x140582810 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x1405828D0 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x1405829C0 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x140582A20 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x140582A70 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x140582AC0 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140582B40 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140582C10 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x140582CD0 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140582D90 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140582E20 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x140582E80 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140582F60 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140583060 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x1405831A0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x140583260 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x1405832B0 (HvlEnablePasid.c)
 *     HvlGetDeviceCapabilities @ 0x140583430 (HvlGetDeviceCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x140583CB0 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x140583FD0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140584234 (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x1405846F0 (HvlRegisterDeviceId.c)
 *     HvlRestoreTime @ 0x140584880 (HvlRestoreTime.c)
 *     HvlSetDeviceCapabilities @ 0x1405849E0 (HvlSetDeviceCapabilities.c)
 *     HvlSetDeviceDmaEnabled @ 0x140584A80 (HvlSetDeviceDmaEnabled.c)
 *     HvlSetPasidAddressSpace @ 0x140584D80 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x140584E30 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x140585040 (HvlUnblockDefaultDma.c)
 *     HvlUnmapDeviceInterrupt @ 0x1405850D0 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x140585180 (HvlUnregisterDeviceId.c)
 *     HvlpDmaFastFlushDeviceDomainVaList @ 0x1405851D0 (HvlpDmaFastFlushDeviceDomainVaList.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x1405852B0 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x1405856D0 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlMapDmaRanges @ 0x140585810 (HvlMapDmaRanges.c)
 *     HvlUnmapDmaRanges @ 0x140585910 (HvlUnmapDmaRanges.c)
 *     HvlRequestProcessorHalt @ 0x140586070 (HvlRequestProcessorHalt.c)
 *     HvlWakeVirtualProcessors @ 0x140586170 (HvlWakeVirtualProcessors.c)
 *     HvlpAddRemovePhysicalMemory @ 0x140695980 (HvlpAddRemovePhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x140695EB4 (HvlNotifyPageHeat.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140703488 (HvlpDynamicUpdateMicrocode.c)
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
