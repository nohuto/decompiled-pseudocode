/*
 * XREFs of Feature_AlwaysWakeTargetThread_2__private_IsEnabledDeviceUsage @ 0x1C0139DA8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     Feature_AlwaysWakeTargetThread_2__private_IsEnabledFallback @ 0x1C0139DE0 (Feature_AlwaysWakeTargetThread_2__private_IsEnabledFallback.c)
 */

__int64 Feature_AlwaysWakeTargetThread_2__private_IsEnabledDeviceUsage()
{
  if ( (Feature_AlwaysWakeTargetThread_2__private_featureState & 0x10) != 0 )
    return Feature_AlwaysWakeTargetThread_2__private_featureState & 1;
  else
    return Feature_AlwaysWakeTargetThread_2__private_IsEnabledFallback(
             (unsigned int)Feature_AlwaysWakeTargetThread_2__private_featureState,
             3LL);
}
