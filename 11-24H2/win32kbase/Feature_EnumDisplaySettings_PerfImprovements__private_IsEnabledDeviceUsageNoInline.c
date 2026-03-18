/*
 * XREFs of Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1401B7668
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x14016C140 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledFallback @ 0x1401B76A0 (Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledFallback.c)
 */

__int64 Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EnumDisplaySettings_PerfImprovements__private_featureState & 0x10) != 0 )
    return Feature_EnumDisplaySettings_PerfImprovements__private_featureState & 1;
  else
    return Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledFallback(
             (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_featureState,
             3LL);
}
