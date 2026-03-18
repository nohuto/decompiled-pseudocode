/*
 * XREFs of Feature_VsFidTimeoutOverride__private_IsEnabledDeviceUsageNoInline @ 0x140017860
 * Callers:
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     NVMeBuildDevicePollingConfiguration @ 0x140026BF0 (NVMeBuildDevicePollingConfiguration.c)
 *     NVMeBuildPollingConfiguration @ 0x140026CF4 (NVMeBuildPollingConfiguration.c)
 * Callees:
 *     Feature_VsFidTimeoutOverride__private_IsEnabledFallback @ 0x140017898 (Feature_VsFidTimeoutOverride__private_IsEnabledFallback.c)
 */

__int64 Feature_VsFidTimeoutOverride__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_VsFidTimeoutOverride__private_featureState & 0x10) != 0 )
    return Feature_VsFidTimeoutOverride__private_featureState & 1;
  else
    return Feature_VsFidTimeoutOverride__private_IsEnabledFallback(
             (unsigned int)Feature_VsFidTimeoutOverride__private_featureState,
             3LL);
}
