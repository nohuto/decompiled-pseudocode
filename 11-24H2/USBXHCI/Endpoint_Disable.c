/*
 * XREFs of Endpoint_Disable @ 0x140002DBC
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x140001110 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x140001D68 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x140002568 (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x140029C68 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x14002AE58 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_UcxEvtReset @ 0x14002DE50 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtDisable @ 0x14002E4E0 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x14002EFF0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_EnableCompletion @ 0x14002FC80 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x140039910 (UsbDevice_EndpointsConfigureCompletion.c)
 * Callees:
 *     Endpoint_Disable_Internal @ 0x1400047C4 (Endpoint_Disable_Internal.c)
 *     ESM_AddEvent @ 0x140006A44 (ESM_AddEvent.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x14003FB5C (Controller_DecrementNumberOfEndpointsOffloaded.c)
 */

__int64 __fastcall Endpoint_Disable(__int64 a1, __int64 a2)
{
  char v2; // di

  v2 = a2;
  if ( *(_DWORD *)(a1 + 1368) == 2 )
  {
    *(_DWORD *)(a1 + 1368) = 0;
    Controller_DecrementNumberOfEndpointsOffloaded(*(_QWORD *)a1);
  }
  LOBYTE(a2) = v2;
  Endpoint_Disable_Internal(a1, a2);
  return ESM_AddEvent((PVOID)(a1 + 304));
}
