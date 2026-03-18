/*
 * XREFs of Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140045730
 * Callers:
 *     SleepstudyHelper_ComponentActive @ 0x140045784 (SleepstudyHelper_ComponentActive.c)
 *     SleepstudyHelper_ComponentInactive @ 0x14004580C (SleepstudyHelper_ComponentInactive.c)
 *     SleepstudyHelper_GenerateGuid @ 0x140045894 (SleepstudyHelper_GenerateGuid.c)
 *     SleepstudyHelper_UnregisterComponent @ 0x1400458F0 (SleepstudyHelper_UnregisterComponent.c)
 *     HUBFDO_RegisterSleepstudyBlockerReasons @ 0x14007F624 (HUBFDO_RegisterSleepstudyBlockerReasons.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1400815B0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     SleepstudyHelper_Initialize @ 0x140092F18 (SleepstudyHelper_Initialize.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140092FB4 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_Uninitialize @ 0x1400930B0 (SleepstudyHelper_Uninitialize.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledFallback @ 0x140045768 (Feature_SPR_HardenInClient__private_IsEnabledFallback.c)
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
