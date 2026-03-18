/*
 * XREFs of Feature_UTSP__private_IsEnabledDeviceUsageNoInline @ 0x14000C908
 * Callers:
 *     HUBPDO_EvtDeviceD0Entry @ 0x140015860 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x140015AF0 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceProcessQueryInterfaceRequest @ 0x1400160F0 (HUBPDO_EvtDeviceProcessQueryInterfaceRequest.c)
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x140016670 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 *     HUBUCX_UCXIoctlComplete @ 0x140028CB0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x140029738 (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 *     HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice @ 0x14002E5E0 (HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice.c)
 *     HUBMISC_ComputeU1Timeout @ 0x14002E6F0 (HUBMISC_ComputeU1Timeout.c)
 *     HUBMISC_ComputeU2Timeout @ 0x14002E960 (HUBMISC_ComputeU2Timeout.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x14007B8E0 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1400837B0 (HUBPDO_EvtDeviceReleaseHardware.c)
 * Callees:
 *     Feature_UTSP__private_IsEnabledFallback @ 0x14000C940 (Feature_UTSP__private_IsEnabledFallback.c)
 */

__int64 Feature_UTSP__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UTSP__private_featureState & 0x10) != 0 )
    return Feature_UTSP__private_featureState & 1;
  else
    return Feature_UTSP__private_IsEnabledFallback((unsigned int)Feature_UTSP__private_featureState, 3LL);
}
