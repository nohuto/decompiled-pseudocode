/*
 * XREFs of Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140044358
 * Callers:
 *     SleepstudyHelper_ComponentActive @ 0x140059414 (SleepstudyHelper_ComponentActive.c)
 *     SleepstudyHelper_ComponentInactive @ 0x14005949C (SleepstudyHelper_ComponentInactive.c)
 *     SleepstudyHelper_GenerateGuid @ 0x140059524 (SleepstudyHelper_GenerateGuid.c)
 *     SleepstudyHelper_UnregisterComponent @ 0x140059580 (SleepstudyHelper_UnregisterComponent.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140079ED0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     SleepstudyHelper_Initialize @ 0x140080578 (SleepstudyHelper_Initialize.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140080614 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_Uninitialize @ 0x140080710 (SleepstudyHelper_Uninitialize.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledFallback @ 0x140044390 (Feature_SPR_HardenInClient__private_IsEnabledFallback.c)
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
