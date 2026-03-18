/*
 * XREFs of Etw_DeviceCreate @ 0x1400300B0
 * Callers:
 *     UsbDevice_UcxEvtDeviceAdd @ 0x140083520 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x140008F9C (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

__int64 __fastcall Etw_DeviceCreate(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+68h] [rbp-D0h]
  _BYTE v4[32]; // [rsp+E0h] [rbp-58h] BYREF
  _BYTE v5[32]; // [rsp+100h] [rbp-38h] BYREF

  memset(v5, 0, sizeof(v5));
  memset(v4, 0, sizeof(v4));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer(
             *(unsigned __int8 *)(a2 + 666),
             (__int64)&USBXHCI_ETW_EVENT_DEVICE_CREATE_V3,
             0LL,
             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
             *(_QWORD *)(a2 + 24),
             *(_QWORD *)a2,
             *(_DWORD *)(a2 + 20),
             *(_DWORD *)(a2 + 36),
             a2 + 44,
             *(_BYTE *)(a2 + 143),
             *(_BYTE *)(a2 + 144) != 0,
             *(_DWORD *)(a2 + 148),
             *(_DWORD *)(a2 + 152),
             v3,
             a2 + 124,
             *(_BYTE *)(a2 + 664),
             *(_BYTE *)(a2 + 665),
             *(_BYTE *)(a2 + 666),
             *(_BYTE *)(a2 + 578),
             *(_BYTE *)(a2 + 579),
             *(_BYTE *)(a2 + 580),
             *(_DWORD *)(a2 + 584),
             0,
             0,
             0,
             0,
             (__int64)v5,
             (__int64)v4);
  return result;
}
