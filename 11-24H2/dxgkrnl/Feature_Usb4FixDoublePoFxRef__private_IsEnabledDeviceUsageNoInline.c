/*
 * XREFs of Feature_Usb4FixDoublePoFxRef__private_IsEnabledDeviceUsageNoInline @ 0x1400917B8
 * Callers:
 *     ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z @ 0x140277AF4 (-AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z.c)
 * Callees:
 *     Feature_Usb4FixDoublePoFxRef__private_IsEnabledFallback @ 0x1400917F0 (Feature_Usb4FixDoublePoFxRef__private_IsEnabledFallback.c)
 */

__int64 Feature_Usb4FixDoublePoFxRef__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Usb4FixDoublePoFxRef__private_featureState & 0x10) != 0 )
    return Feature_Usb4FixDoublePoFxRef__private_featureState & 1;
  else
    return Feature_Usb4FixDoublePoFxRef__private_IsEnabledFallback(
             (unsigned int)Feature_Usb4FixDoublePoFxRef__private_featureState,
             3LL);
}
