/*
 * XREFs of Endpoint_Disable @ 0x14000FDC4
 * Callers:
 *     UsbDevice_SetDeviceDisabled @ 0x14000E7F4 (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x14000F6F4 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x14002A6A8 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_DeviceResetCompletion @ 0x14002C290 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x14002C738 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x14002E880 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtDisable @ 0x14002F190 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x14002FFD0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_EnableCompletion @ 0x140030C60 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003A070 (UsbDevice_EndpointsConfigureCompletion.c)
 * Callees:
 *     Endpoint_Disable_Internal @ 0x140010904 (Endpoint_Disable_Internal.c)
 *     ESM_AddEvent @ 0x1400130A4 (ESM_AddEvent.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x14004020C (Controller_DecrementNumberOfEndpointsOffloaded.c)
 */

__int64 __fastcall Endpoint_Disable(__int64 a1, __int64 a2)
{
  char v2; // di

  v2 = a2;
  if ( *(_DWORD *)(a1 + 1360) == 2 )
  {
    *(_DWORD *)(a1 + 1360) = 0;
    Controller_DecrementNumberOfEndpointsOffloaded(*(_QWORD *)a1);
  }
  LOBYTE(a2) = v2;
  Endpoint_Disable_Internal(a1, a2);
  return ESM_AddEvent((PVOID)(a1 + 296));
}
