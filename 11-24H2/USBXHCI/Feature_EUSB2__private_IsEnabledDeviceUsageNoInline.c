/*
 * XREFs of Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140043D58
 * Callers:
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x140015440 (Bulk_Stage_EstimateRequiredTrbs.c)
 *     Bulk_Stage_MapIntoRing @ 0x140017BC0 (Bulk_Stage_MapIntoRing.c)
 *     Control_Transfer_MapIntoRing @ 0x14001E7C0 (Control_Transfer_MapIntoRing.c)
 *     Isoch_Stage_MapIntoRing @ 0x14001FE60 (Isoch_Stage_MapIntoRing.c)
 *     TR_GetPacketCount @ 0x140020F50 (TR_GetPacketCount.c)
 *     TR_CalculateTDSize @ 0x140021070 (TR_CalculateTDSize.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x140029C68 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_InitializeEndpointContext @ 0x14002B144 (UsbDevice_InitializeEndpointContext.c)
 *     Bulk_EP_Enable @ 0x140031DE0 (Bulk_EP_Enable.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x140036A80 (Controller_UcxEvtQueryUsbCapability.c)
 *     UsbDevice_SetAddress @ 0x14003AEC4 (UsbDevice_SetAddress.c)
 *     Register_ParseCapabilityRegister @ 0x14007D158 (Register_ParseCapabilityRegister.c)
 *     Control_Initialize @ 0x140080740 (Control_Initialize.c)
 *     Endpoint_Create @ 0x140080F6C (Endpoint_Create.c)
 *     Bulk_Initialize @ 0x140082100 (Bulk_Initialize.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x140083520 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     Feature_EUSB2__private_IsEnabledFallback @ 0x140043D90 (Feature_EUSB2__private_IsEnabledFallback.c)
 */

__int64 Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EUSB2__private_featureState & 0x10) != 0 )
    return Feature_EUSB2__private_featureState & 1;
  else
    return Feature_EUSB2__private_IsEnabledFallback((unsigned int)Feature_EUSB2__private_featureState, 3LL);
}
