/*
 * XREFs of UsbDevice_GetDeviceSpeedEx @ 0x14004D9A0
 * Callers:
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x14001C290 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x140038180 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x140039910 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x14003A6E4 (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003ABD8 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_SetAddress @ 0x14003AEC4 (UsbDevice_SetAddress.c)
 *     UsbDevice_UcxEvtUpdate @ 0x14003B700 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbDevice_GetDeviceSpeedEx(_DWORD *a1)
{
  if ( a1[4] >= 0x40u )
    return (unsigned int)a1[18];
  else
    return (unsigned int)a1[5];
}
