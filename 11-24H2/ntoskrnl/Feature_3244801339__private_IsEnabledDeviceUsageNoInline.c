/*
 * XREFs of Feature_3244801339__private_IsEnabledDeviceUsageNoInline @ 0x14057D918
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1404DB6D0 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     Feature_3244801339__private_IsEnabledFallback @ 0x14057D950 (Feature_3244801339__private_IsEnabledFallback.c)
 */

__int64 Feature_3244801339__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3244801339__private_featureState & 0x10) != 0 )
    return Feature_3244801339__private_featureState & 1;
  else
    return Feature_3244801339__private_IsEnabledFallback((unsigned int)Feature_3244801339__private_featureState, 3LL);
}
