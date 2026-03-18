/*
 * XREFs of UsbDevice_SetDeviceDisabled @ 0x14000E7F4
 * Callers:
 *     DeviceSlot_DisableAllDeviceSlots @ 0x140024378 (DeviceSlot_DisableAllDeviceSlots.c)
 *     UsbDevice_DisableCompletion @ 0x14002C738 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x14002F190 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_SetAddressCompletion @ 0x140030890 (UsbDevice_SetAddressCompletion.c)
 * Callees:
 *     Endpoint_Disable @ 0x14000FDC4 (Endpoint_Disable.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002AB24 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x14002CA54 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     XilCoreDeviceSlot_ClearDeviceContext @ 0x14002CA90 (XilCoreDeviceSlot_ClearDeviceContext.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x14002CAFC (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     WPP_RECORDER_SF_dq @ 0x14002CC1C (WPP_RECORDER_SF_dq.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

char __fastcall UsbDevice_SetDeviceDisabled(__int64 a1, __int64 a2)
{
  int v3; // edx
  __int64 v4; // rbp
  __int64 v5; // rdx
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 XilCoreDeviceSlotData; // rax
  __int64 v10; // rsi
  char result; // al
  int v12; // edi
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = *(unsigned __int8 *)(a1 + 135);
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v3,
      12,
      72,
      (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
      *(_BYTE *)(a1 + 135),
      *(_QWORD *)a1);
  }
  LOBYTE(a2) = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
  Endpoint_Disable(*(_QWORD *)(a1 + 176), a2);
  v6 = (_QWORD *)(a1 + 184);
  v7 = 30LL;
  do
  {
    if ( *v6 )
    {
      LOBYTE(v5) = 1;
      Endpoint_Disable(*v6, v5);
      *v6 = 0LL;
    }
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = *(unsigned __int8 *)(a1 + 135);
  if ( *(_BYTE *)(v4 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest(v4 + 16, a1);
    v14 = *(_QWORD *)(v4 + 88);
    if ( *(_BYTE *)(v14 + 80) )
      v15 = *(_QWORD *)(v14 + 24);
    else
      v15 = *(_QWORD *)(v14 + 72);
    *(_QWORD *)(v15 + 8 * v8) = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v4 + 88));
    XilCoreDeviceSlot_ClearDeviceContext(XilCoreDeviceSlotData, a1, (unsigned int)v8);
  }
  v10 = *(_QWORD *)(a1 + 424);
  result = -*(_BYTE *)(a1 + 432);
  v12 = -(*(_BYTE *)(a1 + 432) != 0);
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_WORD *)(a1 + 134) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  v13 = ~v12 & 0xC0000001;
  if ( *(_QWORD *)(a1 + 440) )
  {
    v16 = 1LL;
    if ( *(int *)(a1 + 448) < 0 )
      v16 = 2LL;
    result = UsbDevice_QueueConfigureEndpointEvent(a1, v16);
  }
  if ( v10 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             v10,
             v13);
  return result;
}
