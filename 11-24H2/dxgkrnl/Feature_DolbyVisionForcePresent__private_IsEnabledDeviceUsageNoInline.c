/*
 * XREFs of Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline @ 0x140091198
 * Callers:
 *     ?MonitorSetHdrFlavor@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x14026F400 (-MonitorSetHdrFlavor@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_FLAVOR@@@Z.c)
 * Callees:
 *     Feature_DolbyVisionForcePresent__private_IsEnabledFallback @ 0x1400911D0 (Feature_DolbyVisionForcePresent__private_IsEnabledFallback.c)
 */

__int64 Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DolbyVisionForcePresent__private_featureState & 0x10) != 0 )
    return Feature_DolbyVisionForcePresent__private_featureState & 1;
  else
    return Feature_DolbyVisionForcePresent__private_IsEnabledFallback(
             (unsigned int)Feature_DolbyVisionForcePresent__private_featureState,
             3LL);
}
