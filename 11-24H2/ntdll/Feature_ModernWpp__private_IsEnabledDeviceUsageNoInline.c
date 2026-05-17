/*
 * XREFs of Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x18015BF80
 * Callers:
 *     EtwpTrackProviderBinary @ 0x18011A13C (EtwpTrackProviderBinary.c)
 * Callees:
 *     <none>
 */

__int64 Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ModernWpp__private_featureState & 0x10) != 0 )
    return Feature_ModernWpp__private_featureState & 1;
  else
    return Feature_ModernWpp__private_IsEnabledFallback((unsigned int)Feature_ModernWpp__private_featureState, 3LL);
}
