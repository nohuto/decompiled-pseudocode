/*
 * XREFs of Endpoint_OnCancelEndpointConfigure @ 0x14000DF14
 * Callers:
 *     ESM_ReconfiguringEndpointAfterStop @ 0x140036040 (ESM_ReconfiguringEndpointAfterStop.c)
 * Callees:
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x14000DAE0 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     XilEndpoint_AcquireBuffer @ 0x14000E5BC (XilEndpoint_AcquireBuffer.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140015624 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall Endpoint_OnCancelEndpointConfigure(__int64 *a1)
{
  int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rdx
  char v6; // cl
  _OWORD *v7; // rsi
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h]

  v2 = *((_DWORD *)a1 + 36);
  v3 = *(_QWORD *)(*a1 + 144);
  v4 = *(_QWORD *)(*a1 + 88);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dD(
      a1[10],
      4u,
      0xDu,
      0x47u,
      (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
      *(unsigned __int8 *)(a1[2] + 135),
      *((_DWORD *)a1 + 36));
  v5 = a1[2];
  v6 = *(_BYTE *)(v5 + 658);
  if ( (*(_DWORD *)(v4 + 104) & 4) != 0 )
  {
    if ( v6 )
      v7 = (_OWORD *)(XilCoreUsbDevice_GetDeviceContextBufferVA(v5 + (*(_BYTE *)(v5 + 657) != 0 ? 616LL : 608LL))
                    + (((unsigned int)(v2 - 1) + 1LL) << 6));
    else
      v7 = 0LL;
    v8 = a1[33];
    if ( v8 )
      goto LABEL_7;
    v10 = 2112LL;
  }
  else
  {
    if ( v6 )
      v7 = (_OWORD *)(XilCoreUsbDevice_GetDeviceContextBufferVA(v5 + (*(_BYTE *)(v5 + 657) != 0 ? 616LL : 608LL))
                    + 32 * ((unsigned int)(v2 - 1) + 1LL));
    else
      v7 = 0LL;
    v8 = a1[33];
    if ( v8 )
      goto LABEL_7;
    v10 = 1056LL;
  }
  v8 = XilEndpoint_AcquireBuffer(a1, v10, a1, 846491717LL);
  a1[33] = v8;
  if ( v8 )
  {
LABEL_7:
    Endpoint_SetUpConfigureEndpointCommand(
      a1,
      1,
      (__int64)Endpoint_OnCancelEndpointConfigureCompletion_EpDropped,
      (__int64)a1,
      v8,
      v7,
      0LL,
      a1 + 20);
    return Command_SendCommand(v3, (__int64)(a1 + 20));
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = *((_DWORD *)a1 + 36);
    LODWORD(v11) = *(unsigned __int8 *)(a1[2] + 135);
    WPP_RECORDER_SF_dD(a1[10], 2u, 0xDu, 0x48u, (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids, v11, v12);
  }
  Controller_ReportFatalError(*a1, 2, 0, 0, a1[2], (__int64)a1, 0LL);
  _m_prefetchw(a1 + 4);
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)a1 + 8, 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEsmEvent(a1, 12LL);
  return result;
}
