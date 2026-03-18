/*
 * XREFs of UsbDevice_GetXhciEndpointDequeuePointer @ 0x140014910
 * Callers:
 *     Endpoint_OnCancelStopCompletion @ 0x1400144F0 (Endpoint_OnCancelStopCompletion.c)
 * Callees:
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140015624 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x140046220 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 */

__int64 __fastcall UsbDevice_GetXhciEndpointDequeuePointer(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  char v4; // al
  __int64 DeviceContextBufferVA; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v9; // rdx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 136) + 88LL) + 8LL);
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 136) + 80LL)
    && (*(_BYTE *)(a1 + 656) && *(_DWORD *)(v3 + 1012) == 2 || *(_DWORD *)(v3 + 1012) == 1) )
  {
    XilDeviceSlot_SendQueryEndpointContextInfoRequest(*(_DWORD *)(v2 + 136) + 16, a1, a2, 0, (__int64)&v10);
    return v10;
  }
  else
  {
    v4 = *(_BYTE *)(a1 + 657);
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 88) + 104LL) & 4) != 0 )
    {
      DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(a1 + (v4 != 0 ? 616LL : 608LL));
      v7 = (v9 << 6) + 72;
    }
    else
    {
      DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(a1 + (v4 != 0 ? 616LL : 608LL));
      v7 = 32 * v6 + 40;
    }
    return *(_QWORD *)(v7 + DeviceContextBufferVA);
  }
}
