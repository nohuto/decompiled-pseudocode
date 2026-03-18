/*
 * XREFs of UsbDevice_GetEndpointState @ 0x140008140
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x140001110 (UsbDevice_DeviceResetCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x140007D60 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x140008B60 (Endpoint_OnResetEndpointResetCompletion.c)
 * Callees:
 *     XilDeviceSlot_QueryEndpointContextInfo @ 0x140008DA0 (XilDeviceSlot_QueryEndpointContextInfo.c)
 */

__int64 __fastcall UsbDevice_GetEndpointState(__int64 a1, int a2)
{
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  XilDeviceSlot_QueryEndpointContextInfo(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL), a1, a2, (unsigned int)&v3, 0LL);
  return v3;
}
