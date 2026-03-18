/*
 * XREFs of Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x14000C860
 * Callers:
 *     HUBUCX_CreateEndpointsInUCX @ 0x140026848 (HUBUCX_CreateEndpointsInUCX.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x14003150C (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1400322C4 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1400376D8 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateLastEndpoint @ 0x140039A88 (HUBDESC_InternalValidateLastEndpoint.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DA10 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBFDO_EvtDeviceAdd @ 0x140079BE0 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     Feature_EUSB2__private_IsEnabledFallback @ 0x14000C898 (Feature_EUSB2__private_IsEnabledFallback.c)
 */

__int64 Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EUSB2__private_featureState & 0x10) != 0 )
    return Feature_EUSB2__private_featureState & 1;
  else
    return Feature_EUSB2__private_IsEnabledFallback((unsigned int)Feature_EUSB2__private_featureState, 3LL);
}
