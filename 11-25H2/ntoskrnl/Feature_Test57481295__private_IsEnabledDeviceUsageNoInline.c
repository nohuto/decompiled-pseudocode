/*
 * XREFs of Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053997C
 * Callers:
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x1404C901C (IvtUpdateScalableModePasidTablesForPasid.c)
 *     IvtBuildScalableModePasidTableS1Entry @ 0x1404F3028 (IvtBuildScalableModePasidTableS1Entry.c)
 *     HalpDmaGetDefaultRemappingDomainPolicy @ 0x140539E84 (HalpDmaGetDefaultRemappingDomainPolicy.c)
 *     HalpIommuUpdatePageWalkCapability @ 0x14054AAB0 (HalpIommuUpdatePageWalkCapability.c)
 *     IommupDomainAttachPasidDevice @ 0x14054B814 (IommupDomainAttachPasidDevice.c)
 *     HalpIommuAllocateDmaDomain @ 0x140550BC4 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuGetPageTableType @ 0x1405514E0 (HalpIommuGetPageTableType.c)
 *     IommuFlushTb @ 0x1405617E0 (IommuFlushTb.c)
 *     IommuGetLibraryContext @ 0x140561AC0 (IommuGetLibraryContext.c)
 *     IommupMapDeviceInternal @ 0x1405625B8 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140562918 (IommupUnmapDeviceInternal.c)
 *     IommupHvAttachPasidDevice @ 0x140562CAC (IommupHvAttachPasidDevice.c)
 *     HalpIommuInitializeDmarPageTable @ 0x140564F94 (HalpIommuInitializeDmarPageTable.c)
 *     IvtAttachDeviceDomain @ 0x14056A6C0 (IvtAttachDeviceDomain.c)
 *     IvtDetachDeviceDomain @ 0x14056AD20 (IvtDetachDeviceDomain.c)
 *     IvtGetScalableModePasidTables @ 0x14056B6DC (IvtGetScalableModePasidTables.c)
 *     IvtInvalidateScalableModeContextEntry @ 0x14056C2C0 (IvtInvalidateScalableModeContextEntry.c)
 *     HalpIvtProcessDmarTable @ 0x140574DFC (HalpIvtProcessDmarTable.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406F0ED0 (HalpDmaAllocateChildAdapterV3.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406F3604 (IommupDeviceEnablePasidTaggedDma.c)
 *     IvtInitializeIommu @ 0x140B41B90 (IvtInitializeIommu.c)
 *     IvtInitializeReservedDomains @ 0x140B435C8 (IvtInitializeReservedDomains.c)
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 * Callees:
 *     Feature_Test57481295__private_IsEnabledFallback @ 0x1405399B4 (Feature_Test57481295__private_IsEnabledFallback.c)
 */

__int64 Feature_Test57481295__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Test57481295__private_featureState & 0x10) != 0 )
    return Feature_Test57481295__private_featureState & 1;
  else
    return Feature_Test57481295__private_IsEnabledFallback(
             (unsigned int)Feature_Test57481295__private_featureState,
             3LL);
}
