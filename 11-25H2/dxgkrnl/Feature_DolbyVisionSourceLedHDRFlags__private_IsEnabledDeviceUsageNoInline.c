/*
 * XREFs of Feature_DolbyVisionSourceLedHDRFlags__private_IsEnabledDeviceUsageNoInline @ 0x14009043C
 * Callers:
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1402740C8 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 * Callees:
 *     Feature_DolbyVisionSourceLedHDRFlags__private_IsEnabledFallback @ 0x140090474 (Feature_DolbyVisionSourceLedHDRFlags__private_IsEnabledFallback.c)
 */

__int64 Feature_DolbyVisionSourceLedHDRFlags__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DolbyVisionSourceLedHDRFlags__private_featureState & 0x10) != 0 )
    return Feature_DolbyVisionSourceLedHDRFlags__private_featureState & 1;
  else
    return Feature_DolbyVisionSourceLedHDRFlags__private_IsEnabledFallback(
             (unsigned int)Feature_DolbyVisionSourceLedHDRFlags__private_featureState,
             3LL);
}
