/*
 * XREFs of Feature_DolbyVisionV1Fix__private_IsEnabledDeviceUsageNoInline @ 0x140090490
 * Callers:
 *     ?GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAUEDID_V1_CEA_861_DOLBY_VISION_DATABLOCK@@@Z @ 0x140096188 (-GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAUEDID_V1_CEA_861_DOLBY.c)
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1402740C8 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 * Callees:
 *     Feature_DolbyVisionV1Fix__private_IsEnabledFallback @ 0x1400904C8 (Feature_DolbyVisionV1Fix__private_IsEnabledFallback.c)
 */

__int64 Feature_DolbyVisionV1Fix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DolbyVisionV1Fix__private_featureState & 0x10) != 0 )
    return Feature_DolbyVisionV1Fix__private_featureState & 1;
  else
    return Feature_DolbyVisionV1Fix__private_IsEnabledFallback(
             (unsigned int)Feature_DolbyVisionV1Fix__private_featureState,
             3LL);
}
