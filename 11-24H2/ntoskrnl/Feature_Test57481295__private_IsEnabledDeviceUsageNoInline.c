/*
 * XREFs of Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C
 * Callers:
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x1404F2C14 (IvtUpdateScalableModePasidTablesForPasid.c)
 *     IvtBuildScalableModePasidTableS1Entry @ 0x1404F322C (IvtBuildScalableModePasidTableS1Entry.c)
 *     HalpDmaGetDefaultRemappingDomainPolicy @ 0x140539F14 (HalpDmaGetDefaultRemappingDomainPolicy.c)
 *     HalpIommuUpdatePageWalkCapability @ 0x14054AC60 (HalpIommuUpdatePageWalkCapability.c)
 *     IommupDomainAttachPasidDevice @ 0x14054B9D4 (IommupDomainAttachPasidDevice.c)
 *     HalpIommuAllocateDmaDomain @ 0x140550E04 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuGetPageTableType @ 0x140551720 (HalpIommuGetPageTableType.c)
 *     IommuFlushTb @ 0x140561CB0 (IommuFlushTb.c)
 *     IommuGetLibraryContext @ 0x140561F90 (IommuGetLibraryContext.c)
 *     IommupMapDeviceInternal @ 0x140562A78 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140562DD8 (IommupUnmapDeviceInternal.c)
 *     IommupHvAttachPasidDevice @ 0x1405630EC (IommupHvAttachPasidDevice.c)
 *     HalpIommuInitializeDmarPageTable @ 0x140565654 (HalpIommuInitializeDmarPageTable.c)
 *     IvtAttachDeviceDomain @ 0x14056AE50 (IvtAttachDeviceDomain.c)
 *     IvtDetachDeviceDomain @ 0x14056B4B0 (IvtDetachDeviceDomain.c)
 *     IvtGetScalableModePasidTables @ 0x14056BE6C (IvtGetScalableModePasidTables.c)
 *     IvtInvalidateScalableModeContextEntry @ 0x14056CA50 (IvtInvalidateScalableModeContextEntry.c)
 *     HalpIvtProcessDmarTable @ 0x14057558C (HalpIvtProcessDmarTable.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FA900 (HalpDmaAllocateChildAdapterV3.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406FD034 (IommupDeviceEnablePasidTaggedDma.c)
 *     IvtInitializeIommu @ 0x140B53BE0 (IvtInitializeIommu.c)
 *     IvtInitializeReservedDomains @ 0x140B55618 (IvtInitializeReservedDomains.c)
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     Feature_Test57481295__private_IsEnabledFallback @ 0x140539A44 (Feature_Test57481295__private_IsEnabledFallback.c)
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
