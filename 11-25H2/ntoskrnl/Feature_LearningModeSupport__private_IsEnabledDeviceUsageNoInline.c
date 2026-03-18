/*
 * XREFs of Feature_LearningModeSupport__private_IsEnabledDeviceUsageNoInline @ 0x1405FC088
 * Callers:
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 * Callees:
 *     Feature_LearningModeSupport__private_IsEnabledFallback @ 0x1405FC0C0 (Feature_LearningModeSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_LearningModeSupport__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_LearningModeSupport__private_featureState & 0x10) != 0 )
    return Feature_LearningModeSupport__private_featureState & 1;
  else
    return Feature_LearningModeSupport__private_IsEnabledFallback(
             (unsigned int)Feature_LearningModeSupport__private_featureState,
             3LL);
}
