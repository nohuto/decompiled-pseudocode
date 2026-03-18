/*
 * XREFs of Etw_DeviceDelete @ 0x14000377C
 * Callers:
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1400035A0 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 * Callees:
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x1400031E4 (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

__int64 __fastcall Etw_DeviceDelete(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+60h] [rbp-D8h]

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
  {
    v3 = *(_DWORD *)(a2 + 144);
    return McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer(
             *(unsigned __int8 *)(a2 + 658),
             (__int64)"\n",
             0LL,
             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
             *(_QWORD *)(a2 + 24),
             *(_QWORD *)a2,
             *(_DWORD *)(a2 + 20),
             *(_DWORD *)(a2 + 36),
             a2 + 44,
             *(_BYTE *)(a2 + 135),
             *(_BYTE *)(a2 + 136) != 0,
             *(_DWORD *)(a2 + 140),
             v3);
  }
  return result;
}
