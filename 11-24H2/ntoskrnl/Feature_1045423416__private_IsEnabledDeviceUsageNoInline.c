/*
 * XREFs of Feature_1045423416__private_IsEnabledDeviceUsageNoInline @ 0x14064AA64
 * Callers:
 *     WmipQuerySingleMultiple @ 0x1407A5030 (WmipQuerySingleMultiple.c)
 *     WmipQueryAllDataMultiple @ 0x1409B169C (WmipQueryAllDataMultiple.c)
 * Callees:
 *     Feature_1045423416__private_IsEnabledFallback @ 0x14064AA9C (Feature_1045423416__private_IsEnabledFallback.c)
 */

__int64 Feature_1045423416__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1045423416__private_featureState & 0x10) != 0 )
    return Feature_1045423416__private_featureState & 1;
  else
    return Feature_1045423416__private_IsEnabledFallback((unsigned int)Feature_1045423416__private_featureState, 3LL);
}
