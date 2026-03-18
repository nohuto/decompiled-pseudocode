/*
 * XREFs of Feature_1276702010__private_IsEnabledDeviceUsageNoInline @ 0x1405FC034
 * Callers:
 *     SepCopyTokenAccessInformation @ 0x140ACC360 (SepCopyTokenAccessInformation.c)
 * Callees:
 *     Feature_1276702010__private_IsEnabledFallback @ 0x1405FC06C (Feature_1276702010__private_IsEnabledFallback.c)
 */

__int64 Feature_1276702010__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1276702010__private_featureState & 0x10) != 0 )
    return Feature_1276702010__private_featureState & 1;
  else
    return Feature_1276702010__private_IsEnabledFallback((unsigned int)Feature_1276702010__private_featureState, 3LL);
}
