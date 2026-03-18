/*
 * XREFs of Feature_EnableLunValidCheckContainment__private_IsEnabledDeviceUsageNoInline @ 0x14001F720
 * Callers:
 *     NVMeIsLunValid @ 0x140001AC0 (NVMeIsLunValid.c)
 *     ProcessIrpCommand @ 0x140014990 (ProcessIrpCommand.c)
 * Callees:
 *     Feature_EnableLunValidCheckContainment__private_IsEnabledFallback @ 0x14001F758 (Feature_EnableLunValidCheckContainment__private_IsEnabledFallback.c)
 */

__int64 Feature_EnableLunValidCheckContainment__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EnableLunValidCheckContainment__private_featureState & 0x10) != 0 )
    return Feature_EnableLunValidCheckContainment__private_featureState & 1;
  else
    return Feature_EnableLunValidCheckContainment__private_IsEnabledFallback(
             (unsigned int)Feature_EnableLunValidCheckContainment__private_featureState,
             3LL);
}
