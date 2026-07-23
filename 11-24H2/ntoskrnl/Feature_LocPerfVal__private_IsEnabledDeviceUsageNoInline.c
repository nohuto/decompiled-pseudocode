/*
 * XREFs of Feature_LocPerfVal__private_IsEnabledDeviceUsageNoInline @ 0x140667D90
 * Callers:
 *     Feature_LocPerfVal_IsEnabledWithReporting @ 0x140667D10 (Feature_LocPerfVal_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_LocPerfVal__private_IsEnabledFallback @ 0x140667DC8 (Feature_LocPerfVal__private_IsEnabledFallback.c)
 */

__int64 Feature_LocPerfVal__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_LocPerfVal__private_featureState & 0x10) != 0 )
    return Feature_LocPerfVal__private_featureState & 1;
  else
    return Feature_LocPerfVal__private_IsEnabledFallback((unsigned int)Feature_LocPerfVal__private_featureState, 3LL);
}
