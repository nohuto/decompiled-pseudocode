/*
 * XREFs of UsbDevice_CompleteConfigureEndpointRequest @ 0x140039EE8
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002AB24 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_dqqd @ 0x140031D04 (WPP_RECORDER_SF_dqqd.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x1400321D8 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_CompleteConfigureEndpointRequest(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // edi
  __int64 v6; // rbp
  _BYTE *v7; // rcx
  bool v8; // zf
  unsigned int v9; // esi
  int v11; // [rsp+20h] [rbp-48h]
  int v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]

  Debug_FreAssertMsg(
    (__int64)"Unexpected WdfRequest value",
    a1[55] != 0,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
    2529);
  v5 = *((_DWORD *)a1 + 112);
  v6 = a1[55];
  if ( v5 == 259 )
    v5 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = *a1;
    v13 = a1[55];
    WPP_RECORDER_SF_dqqd(*(_QWORD *)(a1[1] + 72), *((unsigned __int8 *)a1 + 135), v3, v4, v11);
  }
  v7 = (_BYTE *)a1[74];
  if ( v7 )
  {
    *((_BYTE *)a1 + 570) = v7[80];
    *((_BYTE *)a1 + 571) = v7[81];
    *((_BYTE *)a1 + 572) = v7[82];
  }
  v8 = *((_BYTE *)a1 + 432) == 0;
  v9 = v5;
  *((_DWORD *)a1 + 144) = v5;
  if ( !v8 )
    v9 = 0;
  *((_DWORD *)a1 + 150) = 0;
  a1[55] = 0LL;
  a1[74] = 0LL;
  *((_DWORD *)a1 + 112) = -1073741823;
  *((_BYTE *)a1 + 432) = 0;
  *((_BYTE *)a1 + 452) = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
  {
    v15 = v5;
    LODWORD(v14) = *((unsigned __int8 *)a1 + 572);
    LODWORD(v13) = *((unsigned __int8 *)a1 + 571);
    v12 = *((unsigned __int8 *)a1 + 570);
    McTemplateK0ppqqqq_EtwWriteTransfer(
      *((unsigned __int8 *)a1 + 571),
      v2,
      v3,
      *(_QWORD *)(a1[1] + 8),
      *a1,
      v12,
      v13,
      v14,
      v15);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           v6,
           v9);
}
