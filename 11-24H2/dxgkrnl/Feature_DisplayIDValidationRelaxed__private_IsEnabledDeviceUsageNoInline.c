/*
 * XREFs of Feature_DisplayIDValidationRelaxed__private_IsEnabledDeviceUsageNoInline @ 0x140097964
 * Callers:
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x140097580 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 * Callees:
 *     Feature_DisplayIDValidationRelaxed__private_IsEnabledFallback @ 0x14009799C (Feature_DisplayIDValidationRelaxed__private_IsEnabledFallback.c)
 */

__int64 Feature_DisplayIDValidationRelaxed__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisplayIDValidationRelaxed__private_featureState & 0x10) != 0 )
    return Feature_DisplayIDValidationRelaxed__private_featureState & 1;
  else
    return Feature_DisplayIDValidationRelaxed__private_IsEnabledFallback(
             (unsigned int)Feature_DisplayIDValidationRelaxed__private_featureState,
             3LL);
}
