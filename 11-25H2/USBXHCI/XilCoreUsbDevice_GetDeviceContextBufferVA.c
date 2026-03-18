/*
 * XREFs of XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140015624
 * Callers:
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x14000DAE0 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x14000DF14 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x14000E2D4 (Endpoint_OnResetEndpointConfigure.c)
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x14000F4AC (UsbDevice_InitializeInputContextForDropEndpoints.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x140014910 (UsbDevice_GetXhciEndpointDequeuePointer.c)
 *     XilDeviceSlot_QueryEndpointContextInfo @ 0x140015550 (XilDeviceSlot_QueryEndpointContextInfo.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x14002C5CC (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_UcxEvtReset @ 0x14002E880 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_SetAddressCompletion @ 0x140030890 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003A070 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x14003A950 (UsbDevice_GetEndpointOffloadInformation.c)
 *     Crashdump_InitializeDeviceContext @ 0x140050D74 (Crashdump_InitializeDeviceContext.c)
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
