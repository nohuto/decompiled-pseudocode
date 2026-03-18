/*
 * XREFs of UsbDevice_GetEndpointState @ 0x1400148D0
 * Callers:
 *     Endpoint_OnCancelStopCompletion @ 0x1400144F0 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x140015310 (Endpoint_OnResetEndpointResetCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x14002C290 (UsbDevice_DeviceResetCompletion.c)
 * Callees:
 *     XilDeviceSlot_QueryEndpointContextInfo @ 0x140015550 (XilDeviceSlot_QueryEndpointContextInfo.c)
 */

__int64 __fastcall UsbDevice_GetEndpointState(__int64 a1, int a2)
{
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  XilDeviceSlot_QueryEndpointContextInfo(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL), a1, a2, (unsigned int)&v3, 0LL);
  return v3;
}
