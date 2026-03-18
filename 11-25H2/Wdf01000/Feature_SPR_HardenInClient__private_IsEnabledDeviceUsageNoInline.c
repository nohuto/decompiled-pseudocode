/*
 * XREFs of Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1400AB164
 * Callers:
 *     SleepstudyHelper_AcquireComponentLock @ 0x1400AB1B8 (SleepstudyHelper_AcquireComponentLock.c)
 *     SleepstudyHelper_ComponentActive @ 0x1400AB228 (SleepstudyHelper_ComponentActive.c)
 *     SleepstudyHelper_ComponentActiveLocked @ 0x1400AB2B0 (SleepstudyHelper_ComponentActiveLocked.c)
 *     SleepstudyHelper_ComponentInactive @ 0x1400AB338 (SleepstudyHelper_ComponentInactive.c)
 *     SleepstudyHelper_GenerateGuid @ 0x1400AB3C0 (SleepstudyHelper_GenerateGuid.c)
 *     SleepstudyHelper_ReleaseComponentLock @ 0x1400AB41C (SleepstudyHelper_ReleaseComponentLock.c)
 *     SleepstudyHelper_ResetComponentsStartTime @ 0x1400AB48C (SleepstudyHelper_ResetComponentsStartTime.c)
 *     SleepstudyHelper_UnregisterComponent @ 0x1400AB514 (SleepstudyHelper_UnregisterComponent.c)
 *     SleepstudyHelper_GetPdoFriendlyName @ 0x1400DAFB4 (SleepstudyHelper_GetPdoFriendlyName.c)
 *     SleepstudyHelper_Initialize @ 0x1400DB020 (SleepstudyHelper_Initialize.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x1400DB0BC (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_Uninitialize @ 0x1400DB1B8 (SleepstudyHelper_Uninitialize.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledFallback @ 0x1400AB19C (Feature_SPR_HardenInClient__private_IsEnabledFallback.c)
 */

int __fastcall Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SPR_HardenInClient__private_featureState.exchange64 & 0x10) != 0 )
    return Feature_SPR_HardenInClient__private_featureState.exchange64 & 1;
  else
    return Feature_SPR_HardenInClient__private_IsEnabledFallback(
             (wil_details_FeatureStateCache)Feature_SPR_HardenInClient__private_featureState.exchange,
             wil_ReportingKind_DeviceUsage);
}
