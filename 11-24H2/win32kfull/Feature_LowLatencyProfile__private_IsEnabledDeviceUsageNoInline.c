/*
 * XREFs of Feature_LowLatencyProfile__private_IsEnabledDeviceUsageNoInline @ 0x1402925D0
 * Callers:
 *     NtUserRequestLowLatencyProfile @ 0x14029BEB0 (NtUserRequestLowLatencyProfile.c)
 * Callees:
 *     Feature_LowLatencyProfile__private_IsEnabledFallback @ 0x140292608 (Feature_LowLatencyProfile__private_IsEnabledFallback.c)
 */

__int64 Feature_LowLatencyProfile__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_LowLatencyProfile__private_featureState & 0x10) != 0 )
    return Feature_LowLatencyProfile__private_featureState & 1;
  else
    return Feature_LowLatencyProfile__private_IsEnabledFallback(
             (unsigned int)Feature_LowLatencyProfile__private_featureState,
             3LL);
}
