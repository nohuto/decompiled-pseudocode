/*
 * XREFs of Etw_DeviceRundown @ 0x140002CE4
 * Callers:
 *     Etw_DeviceListRundown @ 0x140002B10 (Etw_DeviceListRundown.c)
 * Callees:
 *     Etw_EndpointListRundown @ 0x140002F10 (Etw_EndpointListRundown.c)
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x1400031E4 (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

__int64 __fastcall Etw_DeviceRundown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a3) = 0;
  LOBYTE(a4) = 0;
  if ( *(_BYTE *)(a2 + 656) )
  {
    LOBYTE(a3) = *(_BYTE *)(a2 + 672);
    LOBYTE(a4) = *(_BYTE *)(a2 + 674);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer(
      (unsigned __int8)a4,
      (unsigned int)&USBXHCI_ETW_EVENT_RUNDOWN_DEVICE_INFORMATION_V3,
      a1,
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
      *(_QWORD *)(a2 + 24),
      *(_QWORD *)a2,
      *(_DWORD *)(a2 + 20),
      *(_DWORD *)(a2 + 36),
      a2 + 44,
      *(_BYTE *)(a2 + 135),
      *(_BYTE *)(a2 + 136) != 0,
      *(_DWORD *)(a2 + 140),
      *(_DWORD *)(a2 + 144));
  return Etw_EndpointListRundown(a1, a2, a3, a4);
}
