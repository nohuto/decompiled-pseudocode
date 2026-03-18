/*
 * XREFs of Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053C180
 * Callers:
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x1404F5314 (IvtUpdateScalableModePasidTablesForPasid.c)
 *     IvtBuildScalableModePasidTableS1Entry @ 0x1404F592C (IvtBuildScalableModePasidTableS1Entry.c)
 *     HalpDmaGetDefaultRemappingDomainPolicy @ 0x14053C688 (HalpDmaGetDefaultRemappingDomainPolicy.c)
 *     HalpIommuUpdatePageWalkCapability @ 0x14054D3A0 (HalpIommuUpdatePageWalkCapability.c)
 *     IommupDomainAttachPasidDevice @ 0x14054E124 (IommupDomainAttachPasidDevice.c)
 *     HalpIommuAllocateDmaDomain @ 0x1405534C4 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuGetPageTableType @ 0x140553DE0 (HalpIommuGetPageTableType.c)
 *     IommuFlushTb @ 0x140564080 (IommuFlushTb.c)
 *     IommuGetLibraryContext @ 0x140564360 (IommuGetLibraryContext.c)
 *     IommupMapDeviceInternal @ 0x140564E48 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x1405651A8 (IommupUnmapDeviceInternal.c)
 *     IommupHvAttachPasidDevice @ 0x1405654BC (IommupHvAttachPasidDevice.c)
 *     HalpIommuInitializeDmarPageTable @ 0x140567B64 (HalpIommuInitializeDmarPageTable.c)
 *     IvtAttachDeviceDomain @ 0x14056D9C0 (IvtAttachDeviceDomain.c)
 *     IvtDetachDeviceDomain @ 0x14056E020 (IvtDetachDeviceDomain.c)
 *     IvtGetScalableModePasidTables @ 0x14056E9DC (IvtGetScalableModePasidTables.c)
 *     IvtInvalidateScalableModeContextEntry @ 0x14056F5C0 (IvtInvalidateScalableModeContextEntry.c)
 *     HalpIvtProcessDmarTable @ 0x1405780FC (HalpIvtProcessDmarTable.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FCCC0 (HalpDmaAllocateChildAdapterV3.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406FF3F4 (IommupDeviceEnablePasidTaggedDma.c)
 *     IvtInitializeIommu @ 0x140B51B90 (IvtInitializeIommu.c)
 *     IvtInitializeReservedDomains @ 0x140B535C8 (IvtInitializeReservedDomains.c)
 *     KiInitializeKernel @ 0x140B588B0 (KiInitializeKernel.c)
 * Callees:
 *     Feature_Test57481295__private_IsEnabledFallback @ 0x14053C1B8 (Feature_Test57481295__private_IsEnabledFallback.c)
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
