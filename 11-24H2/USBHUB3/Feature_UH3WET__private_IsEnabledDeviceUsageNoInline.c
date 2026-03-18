/*
 * XREFs of Feature_UH3WET__private_IsEnabledDeviceUsageNoInline @ 0x140014AD8
 * Callers:
 *     HUBPDO_EvtDeviceD0Exit @ 0x140015B50 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtOutOfBandwidthTimer @ 0x140018A00 (HUBPDO_EvtOutOfBandwidthTimer.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x14001C058 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_CreatePdoInternal @ 0x14008014C (HUBPDO_CreatePdoInternal.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1400815B0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x140085A14 (HUBMISC_GenerateUserNotificationForPersistentOverCurrent.c)
 * Callees:
 *     Feature_UH3WET__private_IsEnabledFallback @ 0x140014B10 (Feature_UH3WET__private_IsEnabledFallback.c)
 */

__int64 Feature_UH3WET__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UH3WET__private_featureState & 0x10) != 0 )
    return Feature_UH3WET__private_featureState & 1;
  else
    return Feature_UH3WET__private_IsEnabledFallback((unsigned int)Feature_UH3WET__private_featureState, 3LL);
}
