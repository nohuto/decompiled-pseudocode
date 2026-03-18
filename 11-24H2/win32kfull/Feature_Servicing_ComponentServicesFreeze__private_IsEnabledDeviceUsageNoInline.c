/*
 * XREFs of Feature_Servicing_ComponentServicesFreeze__private_IsEnabledDeviceUsageNoInline @ 0x1402F27FC
 * Callers:
 *     ?DT_AdjustBreakForSurrogatesAndVariationSelectors@@YAHPEBGHH@Z @ 0x14007E6B8 (-DT_AdjustBreakForSurrogatesAndVariationSelectors@@YAHPEBGHH@Z.c)
 * Callees:
 *     Feature_Servicing_ComponentServicesFreeze__private_IsEnabledFallback @ 0x1402F2834 (Feature_Servicing_ComponentServicesFreeze__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_ComponentServicesFreeze__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_ComponentServicesFreeze__private_featureState & 0x10) != 0 )
    return Feature_Servicing_ComponentServicesFreeze__private_featureState & 1;
  else
    return Feature_Servicing_ComponentServicesFreeze__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_ComponentServicesFreeze__private_featureState,
             3LL);
}
