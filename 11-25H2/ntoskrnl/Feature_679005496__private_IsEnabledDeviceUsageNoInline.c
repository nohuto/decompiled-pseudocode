/*
 * XREFs of Feature_679005496__private_IsEnabledDeviceUsageNoInline @ 0x1405C7CC8
 * Callers:
 *     NtQueryDirectoryObject @ 0x140AC1020 (NtQueryDirectoryObject.c)
 * Callees:
 *     Feature_679005496__private_IsEnabledFallback @ 0x1405C7D00 (Feature_679005496__private_IsEnabledFallback.c)
 */

__int64 Feature_679005496__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_679005496__private_featureState & 0x10) != 0 )
    return Feature_679005496__private_featureState & 1;
  else
    return Feature_679005496__private_IsEnabledFallback((unsigned int)Feature_679005496__private_featureState, 3LL);
}
