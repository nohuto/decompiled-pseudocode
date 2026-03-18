/*
 * XREFs of Feature_FSSM__private_IsEnabledDeviceUsageNoInline @ 0x140043DAC
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140076BD8 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     Feature_FSSM__private_IsEnabledFallback @ 0x140043DE4 (Feature_FSSM__private_IsEnabledFallback.c)
 */

__int64 Feature_FSSM__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FSSM__private_featureState & 0x10) != 0 )
    return Feature_FSSM__private_featureState & 1;
  else
    return Feature_FSSM__private_IsEnabledFallback((unsigned int)Feature_FSSM__private_featureState, 3LL);
}
