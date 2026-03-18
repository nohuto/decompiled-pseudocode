/*
 * XREFs of Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1405D8688
 * Callers:
 *     SleepstudyHelper_ComponentActive @ 0x1404EB6A0 (SleepstudyHelper_ComponentActive.c)
 *     SleepstudyHelper_ComponentActiveLocked @ 0x1404EB710 (SleepstudyHelper_ComponentActiveLocked.c)
 *     SleepstudyHelper_ComponentInactive @ 0x1404EB780 (SleepstudyHelper_ComponentInactive.c)
 *     SleepstudyHelper_UnregisterComponent @ 0x1404EB810 (SleepstudyHelper_UnregisterComponent.c)
 *     SleepstudyHelper_AcquireComponentLock @ 0x1405D86E0 (SleepstudyHelper_AcquireComponentLock.c)
 *     SleepstudyHelper_ReleaseComponentLock @ 0x1405D8760 (SleepstudyHelper_ReleaseComponentLock.c)
 *     SleepstudyHelper_ResetComponentsStartTime @ 0x1405D87E0 (SleepstudyHelper_ResetComponentsStartTime.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x140757FD0 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1407580B0 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140AC49E0 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140AC4AD0 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledFallback @ 0x1405D86C0 (Feature_SPR_HardenInClient__private_IsEnabledFallback.c)
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
