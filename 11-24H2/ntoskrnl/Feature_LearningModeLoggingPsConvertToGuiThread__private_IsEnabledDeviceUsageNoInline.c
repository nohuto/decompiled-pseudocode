/*
 * XREFs of Feature_LearningModeLoggingPsConvertToGuiThread__private_IsEnabledDeviceUsageNoInline @ 0x1405E2B3C
 * Callers:
 *     PsConvertToGuiThread @ 0x140AC9700 (PsConvertToGuiThread.c)
 * Callees:
 *     Feature_LearningModeLoggingPsConvertToGuiThread__private_IsEnabledFallback @ 0x1405E2B74 (Feature_LearningModeLoggingPsConvertToGuiThread__private_IsEnabledFallback.c)
 */

__int64 Feature_LearningModeLoggingPsConvertToGuiThread__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_LearningModeLoggingPsConvertToGuiThread__private_featureState & 0x10) != 0 )
    return Feature_LearningModeLoggingPsConvertToGuiThread__private_featureState & 1;
  else
    return Feature_LearningModeLoggingPsConvertToGuiThread__private_IsEnabledFallback(
             (unsigned int)Feature_LearningModeLoggingPsConvertToGuiThread__private_featureState,
             3LL);
}
