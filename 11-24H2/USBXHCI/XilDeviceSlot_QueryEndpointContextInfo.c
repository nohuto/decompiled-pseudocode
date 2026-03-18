/*
 * XREFs of XilDeviceSlot_QueryEndpointContextInfo @ 0x140008DA0
 * Callers:
 *     UsbDevice_GetEndpointState @ 0x140008140 (UsbDevice_GetEndpointState.c)
 * Callees:
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140008E74 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x140046530 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 */

__int64 __fastcall XilDeviceSlot_QueryEndpointContextInfo(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  char v8; // al
  __int64 DeviceContextBufferVA; // rdx
  _DWORD *v10; // r9
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8

  v5 = *(_QWORD *)(a1 + 88);
  v6 = a1 + 16;
  v7 = *(_QWORD *)(v5 + 8);
  if ( *(_BYTE *)(v6 + 64) && (*(_BYTE *)(a2 + 664) && *(_DWORD *)(v7 + 1008) == 2 || *(_DWORD *)(v7 + 1008) == 1) )
    return XilDeviceSlot_SendQueryEndpointContextInfoRequest(v6, a2, a3, a4, (__int64)a5);
  v8 = *(_BYTE *)(a2 + 665);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 88LL) + 104LL) & 4) != 0 )
  {
    result = XilCoreUsbDevice_GetDeviceContextBufferVA(a2 + 616 + (v8 != 0 ? 8 : 0));
    DeviceContextBufferVA = (v14 + 1) << 6;
  }
  else
  {
    DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(a2 + 616 + (v8 != 0 ? 8 : 0));
    result = 32 * (v11 + 1);
  }
  v13 = result + DeviceContextBufferVA;
  if ( v10 )
  {
    result = *(_DWORD *)v13 & 7;
    *v10 = result;
  }
  if ( a5 )
  {
    result = *(_QWORD *)(v13 + 8);
    *a5 = result;
  }
  return result;
}
