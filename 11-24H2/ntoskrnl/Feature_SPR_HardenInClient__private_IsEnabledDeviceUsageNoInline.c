/*
 * XREFs of Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1405E45D8
 * Callers:
 *     SleepstudyHelper_ComponentActive @ 0x1404EE600 (SleepstudyHelper_ComponentActive.c)
 *     SleepstudyHelper_ComponentActiveLocked @ 0x1404EE670 (SleepstudyHelper_ComponentActiveLocked.c)
 *     SleepstudyHelper_ComponentInactive @ 0x1404EE6E0 (SleepstudyHelper_ComponentInactive.c)
 *     SleepstudyHelper_UnregisterComponent @ 0x1404EE770 (SleepstudyHelper_UnregisterComponent.c)
 *     SleepstudyHelper_AcquireComponentLock @ 0x1405E4630 (SleepstudyHelper_AcquireComponentLock.c)
 *     SleepstudyHelper_ReleaseComponentLock @ 0x1405E46B0 (SleepstudyHelper_ReleaseComponentLock.c)
 *     SleepstudyHelper_ResetComponentsStartTime @ 0x1405E4730 (SleepstudyHelper_ResetComponentsStartTime.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x140767990 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x140767A70 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140ACB790 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140ACB880 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledFallback @ 0x1405E4610 (Feature_SPR_HardenInClient__private_IsEnabledFallback.c)
 */

__int64 Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SPR_HardenInClient__private_featureState & 0x10) != 0 )
    return Feature_SPR_HardenInClient__private_featureState & 1;
  else
    return Feature_SPR_HardenInClient__private_IsEnabledFallback(
             (unsigned int)Feature_SPR_HardenInClient__private_featureState,
             3LL);
}
