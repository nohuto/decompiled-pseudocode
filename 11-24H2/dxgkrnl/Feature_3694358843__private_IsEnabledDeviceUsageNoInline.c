/*
 * XREFs of Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14006CA48
 * Callers:
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1402ABBB0 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 * Callees:
 *     Feature_3694358843__private_IsEnabledFallback @ 0x14006CA80 (Feature_3694358843__private_IsEnabledFallback.c)
 */

__int64 Feature_3694358843__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3694358843__private_featureState & 0x10) != 0 )
    return Feature_3694358843__private_featureState & 1;
  else
    return Feature_3694358843__private_IsEnabledFallback((unsigned int)Feature_3694358843__private_featureState, 3LL);
}
