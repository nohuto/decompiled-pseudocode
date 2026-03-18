/*
 * XREFs of Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140043EA8
 * Callers:
 *     SleepstudyHelper_ComponentActive @ 0x140058834 (SleepstudyHelper_ComponentActive.c)
 *     SleepstudyHelper_ComponentInactive @ 0x1400588BC (SleepstudyHelper_ComponentInactive.c)
 *     SleepstudyHelper_GenerateGuid @ 0x140058944 (SleepstudyHelper_GenerateGuid.c)
 *     SleepstudyHelper_UnregisterComponent @ 0x1400589A0 (SleepstudyHelper_UnregisterComponent.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140079BE0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     SleepstudyHelper_Initialize @ 0x140080558 (SleepstudyHelper_Initialize.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x1400805F4 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_Uninitialize @ 0x1400806F0 (SleepstudyHelper_Uninitialize.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledFallback @ 0x140043EE0 (Feature_SPR_HardenInClient__private_IsEnabledFallback.c)
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
