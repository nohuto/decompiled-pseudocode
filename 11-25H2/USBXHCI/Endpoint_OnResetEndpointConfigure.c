/*
 * XREFs of Endpoint_OnResetEndpointConfigure @ 0x14000E2D4
 * Callers:
 *     ESM_ReconfiguringEndpointOnReset @ 0x14000E2B0 (ESM_ReconfiguringEndpointOnReset.c)
 * Callees:
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x14000DAE0 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     XilEndpoint_AcquireBuffer @ 0x14000E5BC (XilEndpoint_AcquireBuffer.c)
 *     Endpoint_InitializeTransferRing @ 0x140010424 (Endpoint_InitializeTransferRing.c)
 *     TR_GetDequeuePointer @ 0x140010580 (TR_GetDequeuePointer.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140015624 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
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
  __int64 DequeuePointer; // rax
  __int64 v15; // rax
  int v16; // r8d
  int v17; // [rsp+28h] [rbp-30h]
  int v18; // [rsp+28h] [rbp-30h]
  int v19; // [rsp+28h] [rbp-30h]
  int v20; // [rsp+30h] [rbp-28h]
  int v21; // [rsp+30h] [rbp-28h]
  int v22; // [rsp+30h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 35);
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
    if ( *(_BYTE *)(v6 + 658) )
    {
      DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v6 + (*(_BYTE *)(v6 + 657) != 0 ? 616LL : 608LL));
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
    if ( *(_BYTE *)(v6 + 658) )
    {
      v15 = XilCoreUsbDevice_GetDeviceContextBufferVA(v6 + (*(_BYTE *)(v6 + 657) != 0 ? 616LL : 608LL));
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
        v21 = a1[36];
        v18 = *(unsigned __int8 *)(*((_QWORD *)a1 + 2) + 135LL);
        WPP_RECORDER_SF_dD(
          *((_QWORD *)a1 + 10),
          4u,
          0xDu,
          0x32u,
          (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
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
        v22 = a1[36];
        v19 = *(unsigned __int8 *)(*((_QWORD *)a1 + 2) + 135LL);
        WPP_RECORDER_SF_dD(
          *((_QWORD *)a1 + 10),
          4u,
          0xDu,
          0x33u,
          (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
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
      Endpoint_InitializeTransferRing(a1, 0LL);
      if ( *((_BYTE *)a1 + 37) )
        DequeuePointer = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 32LL) + 24LL);
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
      v20 = a1[36];
      v17 = *(unsigned __int8 *)(*((_QWORD *)a1 + 2) + 135LL);
      WPP_RECORDER_SF_dD(
        *((_QWORD *)a1 + 10),
        2u,
        0xDu,
        0x31u,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        v17,
        v20);
    }
    a1[72] = -1073741670;
    return ESM_AddEsmEvent(a1, 102LL);
  }
}
