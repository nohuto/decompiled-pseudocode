/*
 * XREFs of Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140044EF0
 * Callers:
 *     SleepstudyHelper_ComponentActive @ 0x140044F44 (SleepstudyHelper_ComponentActive.c)
 *     SleepstudyHelper_ComponentInactive @ 0x140044FCC (SleepstudyHelper_ComponentInactive.c)
 *     SleepstudyHelper_GenerateGuid @ 0x140045054 (SleepstudyHelper_GenerateGuid.c)
 *     SleepstudyHelper_UnregisterComponent @ 0x1400450B0 (SleepstudyHelper_UnregisterComponent.c)
 *     HUBFDO_RegisterSleepstudyBlockerReasons @ 0x1400804F0 (HUBFDO_RegisterSleepstudyBlockerReasons.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 *     SleepstudyHelper_Initialize @ 0x1400938E8 (SleepstudyHelper_Initialize.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140093984 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_Uninitialize @ 0x140093A80 (SleepstudyHelper_Uninitialize.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledFallback @ 0x140044F28 (Feature_SPR_HardenInClient__private_IsEnabledFallback.c)
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
