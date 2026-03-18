/*
 * XREFs of Endpoint_OnResetEndpointConfigure @ 0x14001D204
 * Callers:
 *     ESM_ReconfiguringEndpointOnReset @ 0x14001D1E0 (ESM_ReconfiguringEndpointOnReset.c)
 * Callees:
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140008E74 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     TR_GetDequeuePointer @ 0x14000A060 (TR_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x14000AAA8 (Endpoint_InitializeTransferRing.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x14001C290 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     XilEndpoint_AcquireBuffer @ 0x14001D4EC (XilEndpoint_AcquireBuffer.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointConfigure(int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 DeviceContextBufferVA; // rax
  int v8; // r8d
  _OWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 DequeuePointer; // rax
  __int64 v15; // rax
  int v16; // r8d
  int v17; // [rsp+28h] [rbp-30h]
  int v18; // [rsp+28h] [rbp-30h]
  int v19; // [rsp+28h] [rbp-30h]
  int v20; // [rsp+30h] [rbp-28h]
  int v21; // [rsp+30h] [rbp-28h]
  int v22; // [rsp+30h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 36);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
  v23 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         v2,
         off_14006AE88);
  v6 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v4 + 104) & 4) != 0 )
  {
    if ( *(_BYTE *)(v6 + 666) )
    {
      DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v6 + (*(_BYTE *)(v6 + 665) != 0 ? 624LL : 616LL));
      v9 = (_OWORD *)(DeviceContextBufferVA + (((unsigned int)(v8 - 1) + 1LL) << 6));
    }
    else
    {
      v9 = 0LL;
    }
    v10 = 2112LL;
  }
  else
  {
    if ( *(_BYTE *)(v6 + 666) )
    {
      v15 = XilCoreUsbDevice_GetDeviceContextBufferVA(v6 + (*(_BYTE *)(v6 + 665) != 0 ? 624LL : 616LL));
      v9 = (_OWORD *)(v15 + 32 * ((unsigned int)(v16 - 1) + 1LL));
    }
    else
    {
      v9 = 0LL;
    }
    v10 = 1056LL;
  }
  v11 = XilEndpoint_AcquireBuffer(a1, v10, a1, 846491717LL);
  *(_QWORD *)(v5 + 8) = v11;
  if ( v11 )
  {
    if ( *((_BYTE *)a1 + 37) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = a1[38];
        v18 = *(unsigned __int8 *)(*((_QWORD *)a1 + 2) + 143LL);
        WPP_RECORDER_SF_dD(
          *((_QWORD *)a1 + 10),
          4u,
          0xDu,
          0x34u,
          (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
          v18,
          v21);
      }
      v12 = v5 + 16;
      Endpoint_SetUpConfigureEndpointCommand(
        a1,
        1,
        (__int64)Endpoint_OnResetEndpointConfigureCompletion_EpDropped,
        v5,
        *(_QWORD *)(v5 + 8),
        v9,
        0LL,
        (void *)(v5 + 16));
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = a1[38];
        v19 = *(unsigned __int8 *)(*((_QWORD *)a1 + 2) + 143LL);
        WPP_RECORDER_SF_dD(
          *((_QWORD *)a1 + 10),
          4u,
          0xDu,
          0x35u,
          (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
          v19,
          v22);
      }
      v12 = v5 + 16;
      Endpoint_SetUpConfigureEndpointCommand(
        a1,
        2,
        (__int64)Endpoint_OnResetEndpointConfigureCompletion,
        v5,
        *(_QWORD *)(v5 + 8),
        v9,
        &v23,
        (void *)(v5 + 16));
      Endpoint_InitializeTransferRing((__int64 *)a1, 0);
      if ( *((_BYTE *)a1 + 37) )
        DequeuePointer = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 18) + 32LL) + 24LL);
      else
        DequeuePointer = TR_GetDequeuePointer(*((_QWORD *)a1 + 11));
      *(_QWORD *)(v23 + 8) = DequeuePointer;
    }
    return Command_SendCommand(v3, v12);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = a1[38];
      v17 = *(unsigned __int8 *)(*((_QWORD *)a1 + 2) + 143LL);
      WPP_RECORDER_SF_dD(
        *((_QWORD *)a1 + 10),
        2u,
        0xDu,
        0x33u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        v17,
        v20);
    }
    a1[74] = -1073741670;
    return ESM_AddEsmEvent((__int64)a1);
  }
}
