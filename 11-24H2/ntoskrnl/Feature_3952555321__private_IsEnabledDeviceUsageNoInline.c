/*
 * XREFs of Feature_3952555321__private_IsEnabledDeviceUsageNoInline @ 0x1405E6EA0
 * Callers:
 *     PspWow64SetContextThread @ 0x140913174 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1409A90C0 (PspWow64GetContextThread.c)
 * Callees:
 *     Feature_3952555321__private_IsEnabledFallback @ 0x1405E6ED8 (Feature_3952555321__private_IsEnabledFallback.c)
 */

__int64 Feature_3952555321__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3952555321__private_featureState & 0x10) != 0 )
    return Feature_3952555321__private_featureState & 1;
  else
    return Feature_3952555321__private_IsEnabledFallback((unsigned int)Feature_3952555321__private_featureState, 3LL);
}
