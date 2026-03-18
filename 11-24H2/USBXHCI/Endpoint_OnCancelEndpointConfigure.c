/*
 * XREFs of Endpoint_OnCancelEndpointConfigure @ 0x14001CE2C
 * Callers:
 *     ESM_ReconfiguringEndpointAfterStop @ 0x140034B60 (ESM_ReconfiguringEndpointAfterStop.c)
 * Callees:
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140008E74 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x14001C290 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     XilEndpoint_AcquireBuffer @ 0x14001D4EC (XilEndpoint_AcquireBuffer.c)
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

  v2 = *((_DWORD *)a1 + 38);
  v3 = *(_QWORD *)(*a1 + 144);
  v4 = *(_QWORD *)(*a1 + 88);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dD(
      a1[10],
      4u,
      0xDu,
      0x4Au,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      *(unsigned __int8 *)(a1[2] + 143),
      *((_DWORD *)a1 + 38));
  v5 = a1[2];
  v6 = *(_BYTE *)(v5 + 666);
  if ( (*(_DWORD *)(v4 + 104) & 4) != 0 )
  {
    if ( v6 )
      v7 = (_OWORD *)(XilCoreUsbDevice_GetDeviceContextBufferVA(v5 + (*(_BYTE *)(v5 + 665) != 0 ? 624LL : 616LL))
                    + (((unsigned int)(v2 - 1) + 1LL) << 6));
    else
      v7 = 0LL;
    v8 = a1[34];
    if ( v8 )
      goto LABEL_7;
    v10 = 2112LL;
  }
  else
  {
    if ( v6 )
      v7 = (_OWORD *)(XilCoreUsbDevice_GetDeviceContextBufferVA(v5 + (*(_BYTE *)(v5 + 665) != 0 ? 624LL : 616LL))
                    + 32 * ((unsigned int)(v2 - 1) + 1LL));
    else
      v7 = 0LL;
    v8 = a1[34];
    if ( v8 )
      goto LABEL_7;
    v10 = 1056LL;
  }
  v8 = XilEndpoint_AcquireBuffer(a1, v10, a1, 846491717LL);
  a1[34] = v8;
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
      a1 + 21);
    return Command_SendCommand(v3, (__int64)(a1 + 21));
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = *((_DWORD *)a1 + 38);
    LODWORD(v11) = *(unsigned __int8 *)(a1[2] + 143);
    WPP_RECORDER_SF_dD(a1[10], 2u, 0xDu, 0x4Bu, (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids, v11, v12);
  }
  Controller_ReportFatalError(*a1, 2, 0, 0, a1[2], (__int64)a1, 0LL);
  _m_prefetchw(a1 + 4);
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)a1 + 8, 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEsmEvent((__int64)a1);
  return result;
}
