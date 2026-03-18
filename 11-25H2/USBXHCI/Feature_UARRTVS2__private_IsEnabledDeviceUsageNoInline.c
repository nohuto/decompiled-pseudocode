/*
 * XREFs of Feature_UARRTVS2__private_IsEnabledDeviceUsageNoInline @ 0x140044400
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140076CC0 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     Feature_UARRTVS2__private_IsEnabledFallback @ 0x140044438 (Feature_UARRTVS2__private_IsEnabledFallback.c)
 */

__int64 Feature_UARRTVS2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UARRTVS2__private_featureState & 0x10) != 0 )
    return Feature_UARRTVS2__private_featureState & 1;
  else
    return Feature_UARRTVS2__private_IsEnabledFallback((unsigned int)Feature_UARRTVS2__private_featureState, 3LL);
}
