/*
 * XREFs of Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledDeviceUsageNoInline @ 0x1400CB6AC
 * Callers:
 *     NvmeAdapterCleanupSubsystemPort @ 0x1400CD2C0 (NvmeAdapterCleanupSubsystemPort.c)
 *     NvmeAdapterStop @ 0x1400D901C (NvmeAdapterStop.c)
 *     NvmeAdapterStopOnPowerdown @ 0x140131E10 (NvmeAdapterStopOnPowerdown.c)
 *     NvmeAdapterDisconnectController @ 0x14019650C (NvmeAdapterDisconnectController.c)
 *     NvmeAdapterGetStorageStackProperty @ 0x14019A048 (NvmeAdapterGetStorageStackProperty.c)
 * Callees:
 *     Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledFallback @ 0x1400CB6E4 (Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_NvmeofPowerDownIrp__private_featureState & 0x10) != 0 )
    return Feature_Servicing_NvmeofPowerDownIrp__private_featureState & 1;
  else
    return Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_NvmeofPowerDownIrp__private_featureState,
             3LL);
}
