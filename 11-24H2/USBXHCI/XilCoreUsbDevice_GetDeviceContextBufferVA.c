/*
 * XREFs of XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140008E74
 * Callers:
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x14000144C (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x140008180 (UsbDevice_GetXhciEndpointDequeuePointer.c)
 *     XilDeviceSlot_QueryEndpointContextInfo @ 0x140008DA0 (XilDeviceSlot_QueryEndpointContextInfo.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x14001C290 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x14001CE2C (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x14001D204 (Endpoint_OnResetEndpointConfigure.c)
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x14002AC70 (UsbDevice_InitializeInputContextForDropEndpoints.c)
 *     UsbDevice_UcxEvtReset @ 0x14002DE50 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_SetAddressCompletion @ 0x14002F8B0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x140039910 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x14003A27C (UsbDevice_GetEndpointOffloadInformation.c)
 *     Crashdump_InitializeDeviceContext @ 0x140050414 (Crashdump_InitializeDeviceContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCoreUsbDevice_GetDeviceContextBufferVA(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return *(_QWORD *)(result + 16);
  return result;
}
