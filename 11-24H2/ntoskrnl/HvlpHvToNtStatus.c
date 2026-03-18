/*
 * XREFs of HvlpHvToNtStatus @ 0x1403AE3F8
 * Callers:
 *     HvlGetGpaPagesAccessState @ 0x1403AA868 (HvlGetGpaPagesAccessState.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1403AD990 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1403ADAB0 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1403ADFF0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlMapSparseGpaPages @ 0x1403AE57C (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x1403AED20 (HvlMapGpaPages.c)
 *     HvlRetargetDeviceInterrupt @ 0x1403C9670 (HvlRetargetDeviceInterrupt.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x140445850 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlDmaMapDeviceSparsePages @ 0x14046E870 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140477AA0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlpSetPowerProperty @ 0x1404BD770 (HvlpSetPowerProperty.c)
 *     HvlGetRootVpSharedPages @ 0x14058332C (HvlGetRootVpSharedPages.c)
 *     HvlpReadPerfRegister @ 0x14058497C (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x140585BB0 (HvlpWritePerfRegister.c)
 *     HvlAcknowledgePageRequest @ 0x140585D60 (HvlAcknowledgePageRequest.c)
 *     HvlAttachPasidSpace @ 0x140585E00 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x140585EB0 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x140585F60 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x140585FC0 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140586080 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x140586170 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x1405861D0 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x140586220 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x140586270 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1405862F0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1405863C0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x140586480 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140586540 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1405865D0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x140586630 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140586710 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140586810 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x140586950 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x140586A10 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x140586A60 (HvlEnablePasid.c)
 *     HvlGetDeviceCapabilities @ 0x140586BB0 (HvlGetDeviceCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x140587430 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x140587750 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1405879B4 (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x140587E70 (HvlRegisterDeviceId.c)
 *     HvlRestoreTime @ 0x140588000 (HvlRestoreTime.c)
 *     HvlSetDeviceCapabilities @ 0x140588160 (HvlSetDeviceCapabilities.c)
 *     HvlSetDeviceDmaEnabled @ 0x140588200 (HvlSetDeviceDmaEnabled.c)
 *     HvlSetPasidAddressSpace @ 0x140588500 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x1405885B0 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x1405887C0 (HvlUnblockDefaultDma.c)
 *     HvlUnmapDeviceInterrupt @ 0x140588850 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x140588900 (HvlUnregisterDeviceId.c)
 *     HvlpDmaFastFlushDeviceDomainVaList @ 0x140588950 (HvlpDmaFastFlushDeviceDomainVaList.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x140588A30 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140588D40 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlMapDmaRanges @ 0x140588E80 (HvlMapDmaRanges.c)
 *     HvlUnmapDmaRanges @ 0x140588F80 (HvlUnmapDmaRanges.c)
 *     HvlRequestProcessorHalt @ 0x1405896E0 (HvlRequestProcessorHalt.c)
 *     HvlWakeVirtualProcessors @ 0x1405897E0 (HvlWakeVirtualProcessors.c)
 *     HvlpAddRemovePhysicalMemory @ 0x1406A0D20 (HvlpAddRemovePhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x1406A10E8 (HvlNotifyPageHeat.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14070F368 (HvlpDynamicUpdateMicrocode.c)
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
