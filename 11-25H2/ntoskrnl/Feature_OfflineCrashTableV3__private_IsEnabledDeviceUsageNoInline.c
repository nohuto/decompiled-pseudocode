/*
 * XREFs of Feature_OfflineCrashTableV3__private_IsEnabledDeviceUsageNoInline @ 0x140646764
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     Feature_OfflineCrashTableV3__private_IsEnabledFallback @ 0x14064679C (Feature_OfflineCrashTableV3__private_IsEnabledFallback.c)
 */

__int64 Feature_OfflineCrashTableV3__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_OfflineCrashTableV3__private_featureState & 0x10) != 0 )
    return Feature_OfflineCrashTableV3__private_featureState & 1;
  else
    return Feature_OfflineCrashTableV3__private_IsEnabledFallback(
             (unsigned int)Feature_OfflineCrashTableV3__private_featureState,
             3LL);
}
