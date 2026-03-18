/*
 * XREFs of Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage @ 0x1C00D3EF4
 * Callers:
 *     _PopulatePropertyUsageValues @ 0x1C0185888 (_PopulatePropertyUsageValues.c)
 *     RIMGetDeviceButtons @ 0x1C0188A58 (RIMGetDeviceButtons.c)
 *     RIMGetPointerDeviceProperties @ 0x1C01897A0 (RIMGetPointerDeviceProperties.c)
 *     RIMGetPropertyCount @ 0x1C018A290 (RIMGetPropertyCount.c)
 * Callees:
 *     Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledFallback @ 0x1C00D3F2C (Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledFallback.c)
 */

__int64 Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Backport_FixGetRawPointerDeviceData__private_featureState & 0x10) != 0 )
    return Feature_Backport_FixGetRawPointerDeviceData__private_featureState & 1;
  else
    return Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledFallback(
             (unsigned int)Feature_Backport_FixGetRawPointerDeviceData__private_featureState,
             3LL);
}
