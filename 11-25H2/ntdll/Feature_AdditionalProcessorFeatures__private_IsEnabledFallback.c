/*
 * XREFs of Feature_AdditionalProcessorFeatures__private_IsEnabledFallback @ 0x180160300
 * Callers:
 *     Feature_AdditionalProcessorFeatures__private_IsEnabledDeviceUsageNoInline @ 0x1801602D0 (Feature_AdditionalProcessorFeatures__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_AdditionalProcessorFeatures__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_AdditionalProcessorFeatures__private_descriptor);
}
