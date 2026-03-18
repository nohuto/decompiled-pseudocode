/*
 * XREFs of Etw_DeviceRundown @ 0x140009A24
 * Callers:
 *     Etw_DeviceListRundown @ 0x140009850 (Etw_DeviceListRundown.c)
 * Callees:
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x140008F9C (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 *     Etw_EndpointListRundown @ 0x14000A880 (Etw_EndpointListRundown.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

__int64 __fastcall Etw_DeviceRundown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // dl
  char v7; // cl
  char v8; // r11
  __int128 v9; // xmm1
  __int128 *v11; // rax
  __int128 *v12; // rax
  int v13; // [rsp+68h] [rbp-F8h]
  __int128 v14; // [rsp+E0h] [rbp-80h] BYREF
  __int128 v15; // [rsp+F0h] [rbp-70h]
  __int128 v16; // [rsp+100h] [rbp-60h] BYREF
  __int128 v17; // [rsp+110h] [rbp-50h]

  LOBYTE(a3) = 0;
  v6 = 0;
  LOBYTE(a4) = 0;
  v7 = 0;
  v8 = *(_BYTE *)(a2 + 664);
  v16 = 0LL;
  v17 = 0LL;
  if ( !v8 )
  {
    v9 = 0LL;
    v14 = 0LL;
LABEL_3:
    v15 = v9;
    goto LABEL_4;
  }
  v11 = *(__int128 **)(a2 + 688);
  LOBYTE(a3) = *(_BYTE *)(a2 + 680);
  v6 = *(_BYTE *)(a2 + 681);
  LOBYTE(a4) = *(_BYTE *)(a2 + 682);
  if ( v11 )
  {
    v16 = *v11;
    v17 = v11[1];
  }
  v12 = *(__int128 **)(a2 + 704);
  v7 = *(_BYTE *)(a2 + 696);
  v14 = 0LL;
  v15 = 0LL;
  if ( v12 )
  {
    v14 = *v12;
    v9 = v12[1];
    goto LABEL_3;
  }
LABEL_4:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer(
      (unsigned __int8)a4,
      (__int64)&USBXHCI_ETW_EVENT_RUNDOWN_DEVICE_INFORMATION_V3,
      a1,
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
      v13,
      a2 + 124,
      v8,
      *(_BYTE *)(a2 + 665),
      *(_BYTE *)(a2 + 666),
      *(_BYTE *)(a2 + 578),
      *(_BYTE *)(a2 + 579),
      *(_BYTE *)(a2 + 580),
      *(_DWORD *)(a2 + 584),
      a3,
      v6,
      a4,
      v7,
      (__int64)&v16,
      (__int64)&v14);
  return Etw_EndpointListRundown(a1, a2, a3, a4);
}
