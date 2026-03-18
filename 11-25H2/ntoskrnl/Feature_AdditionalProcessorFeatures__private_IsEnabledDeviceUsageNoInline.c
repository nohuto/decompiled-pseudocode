/*
 * XREFs of Feature_AdditionalProcessorFeatures__private_IsEnabledDeviceUsageNoInline @ 0x140646710
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     Feature_AdditionalProcessorFeatures__private_IsEnabledFallback @ 0x140646748 (Feature_AdditionalProcessorFeatures__private_IsEnabledFallback.c)
 */

__int64 Feature_AdditionalProcessorFeatures__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AdditionalProcessorFeatures__private_featureState & 0x10) != 0 )
    return Feature_AdditionalProcessorFeatures__private_featureState & 1;
  else
    return Feature_AdditionalProcessorFeatures__private_IsEnabledFallback(
             (unsigned int)Feature_AdditionalProcessorFeatures__private_featureState,
             3LL);
}
