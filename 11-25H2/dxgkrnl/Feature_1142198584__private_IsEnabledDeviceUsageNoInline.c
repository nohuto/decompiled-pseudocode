/*
 * XREFs of Feature_1142198584__private_IsEnabledDeviceUsageNoInline @ 0x140078C5C
 * Callers:
 *     NtDxgkCreateNativeFenceInternal @ 0x1401F2318 (NtDxgkCreateNativeFenceInternal.c)
 * Callees:
 *     Feature_1142198584__private_IsEnabledFallback @ 0x140078C94 (Feature_1142198584__private_IsEnabledFallback.c)
 */

__int64 Feature_1142198584__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1142198584__private_featureState & 0x10) != 0 )
    return Feature_1142198584__private_featureState & 1;
  else
    return Feature_1142198584__private_IsEnabledFallback((unsigned int)Feature_1142198584__private_featureState, 3LL);
}
