/*
 * XREFs of Feature_FixContainerBuildNumber__private_IsEnabledDeviceUsageNoInline @ 0x140667EE4
 * Callers:
 *     CmpRestampSelf @ 0x1407D770C (CmpRestampSelf.c)
 *     MmCreatePeb @ 0x140AE79AC (MmCreatePeb.c)
 * Callees:
 *     Feature_FixContainerBuildNumber__private_IsEnabledFallback @ 0x140667F1C (Feature_FixContainerBuildNumber__private_IsEnabledFallback.c)
 */

__int64 Feature_FixContainerBuildNumber__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixContainerBuildNumber__private_featureState & 0x10) != 0 )
    return Feature_FixContainerBuildNumber__private_featureState & 1;
  else
    return Feature_FixContainerBuildNumber__private_IsEnabledFallback(
             (unsigned int)Feature_FixContainerBuildNumber__private_featureState,
             3LL);
}
