/*
 * XREFs of Feature_AllowAutoRotateToDockOrientationPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14006D0C0
 * Callers:
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403E8190 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x14041495C (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     Feature_AllowAutoRotateToDockOrientationPolicy__private_IsEnabledFallback @ 0x14006D0F8 (Feature_AllowAutoRotateToDockOrientationPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_AllowAutoRotateToDockOrientationPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AllowAutoRotateToDockOrientationPolicy__private_featureState & 0x10) != 0 )
    return Feature_AllowAutoRotateToDockOrientationPolicy__private_featureState & 1;
  else
    return Feature_AllowAutoRotateToDockOrientationPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_AllowAutoRotateToDockOrientationPolicy__private_featureState,
             3LL);
}
