/*
 * XREFs of Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledDeviceUsageNoInline @ 0x140090538
 * Callers:
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1402740C8 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     ?GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z @ 0x140278AB0 (-GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z.c)
 * Callees:
 *     Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledFallback @ 0x140090570 (Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledFallback.c)
 */

__int64 Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DolbyVisionVSVDBv4_Support__private_featureState & 0x10) != 0 )
    return Feature_DolbyVisionVSVDBv4_Support__private_featureState & 1;
  else
    return Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledFallback(
             (unsigned int)Feature_DolbyVisionVSVDBv4_Support__private_featureState,
             3LL);
}
