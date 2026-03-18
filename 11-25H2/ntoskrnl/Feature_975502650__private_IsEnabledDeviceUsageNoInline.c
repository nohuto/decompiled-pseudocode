/*
 * XREFs of Feature_975502650__private_IsEnabledDeviceUsageNoInline @ 0x140645964
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x140896C34 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     Feature_975502650__private_IsEnabledFallback @ 0x14064599C (Feature_975502650__private_IsEnabledFallback.c)
 */

__int64 Feature_975502650__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_975502650__private_featureState & 0x10) != 0 )
    return Feature_975502650__private_featureState & 1;
  else
    return Feature_975502650__private_IsEnabledFallback((unsigned int)Feature_975502650__private_featureState, 3LL);
}
