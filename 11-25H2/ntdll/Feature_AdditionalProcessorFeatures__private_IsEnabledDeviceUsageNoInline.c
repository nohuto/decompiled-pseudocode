/*
 * XREFs of Feature_AdditionalProcessorFeatures__private_IsEnabledDeviceUsageNoInline @ 0x1801602D0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
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
