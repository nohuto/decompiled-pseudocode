/*
 * XREFs of UsbDevice_SetDeviceDisabled @ 0x140002568
 * Callers:
 *     UsbDevice_DisableCompletion @ 0x140001D68 (UsbDevice_DisableCompletion.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x140018F90 (DeviceSlot_DisableAllDeviceSlots.c)
 *     UsbDevice_UcxEvtDisable @ 0x14002E4E0 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_SetAddressCompletion @ 0x14002F8B0 (UsbDevice_SetAddressCompletion.c)
 * Callees:
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x14000159C (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x140002084 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     XilCoreDeviceSlot_ClearDeviceContext @ 0x1400020C0 (XilCoreDeviceSlot_ClearDeviceContext.c)
 *     WPP_RECORDER_SF_dq @ 0x14000212C (WPP_RECORDER_SF_dq.c)
 *     Endpoint_Disable @ 0x140002DBC (Endpoint_Disable.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002A1C8 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

char __fastcall UsbDevice_SetDeviceDisabled(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rsi
  _QWORD *XilCoreDeviceSlotData; // rax
  __int64 v9; // rsi
  char result; // al
  int v11; // edi
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      0xCu,
      0x4Fu,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *(unsigned __int8 *)(a1 + 143),
      *(_QWORD *)a1);
  LOBYTE(a2) = 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
  Endpoint_Disable(*(_QWORD *)(a1 + 184), a2);
  v5 = (_QWORD *)(a1 + 192);
  v6 = 30LL;
  do
  {
    if ( *v5 )
    {
      LOBYTE(v4) = 1;
      Endpoint_Disable(*v5, v4);
      *v5 = 0LL;
    }
    ++v5;
    --v6;
  }
  while ( v6 );
  v7 = *(unsigned __int8 *)(a1 + 143);
  if ( *(_BYTE *)(v3 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest((__int64 *)(v3 + 16), a1);
    v13 = *(_QWORD *)(v3 + 88);
    if ( *(_BYTE *)(v13 + 80) )
      v14 = *(_QWORD *)(v13 + 24);
    else
      v14 = *(_QWORD *)(v13 + 72);
    *(_QWORD *)(v14 + 8 * v7) = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = (_QWORD *)DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v3 + 88));
    XilCoreDeviceSlot_ClearDeviceContext(XilCoreDeviceSlotData, a1, v7);
  }
  v9 = *(_QWORD *)(a1 + 432);
  result = -*(_BYTE *)(a1 + 440);
  v11 = -(*(_BYTE *)(a1 + 440) != 0);
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_WORD *)(a1 + 142) = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  v12 = ~v11 & 0xC0000001;
  if ( *(_QWORD *)(a1 + 448) )
  {
    v15 = 1LL;
    if ( *(int *)(a1 + 456) < 0 )
      v15 = 2LL;
    result = UsbDevice_QueueConfigureEndpointEvent(a1, v15);
  }
  if ( v9 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             v9,
             v12);
  return result;
}
