/*
 * XREFs of Feature_SetPciLinkBandwidthIoctl__private_IsEnabledDeviceUsageNoInline @ 0x1400565F4
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     Feature_SetPciLinkBandwidthIoctl__private_IsEnabledFallback @ 0x14005662C (Feature_SetPciLinkBandwidthIoctl__private_IsEnabledFallback.c)
 */

__int64 Feature_SetPciLinkBandwidthIoctl__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SetPciLinkBandwidthIoctl__private_featureState & 0x10) != 0 )
    return Feature_SetPciLinkBandwidthIoctl__private_featureState & 1;
  else
    return Feature_SetPciLinkBandwidthIoctl__private_IsEnabledFallback(
             (unsigned int)Feature_SetPciLinkBandwidthIoctl__private_featureState,
             3LL);
}
