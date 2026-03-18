/*
 * XREFs of Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400478F0
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     Endpoint_GetDequeuePointer @ 0x14000A01C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x14000AAA8 (Endpoint_InitializeTransferRing.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x14001C290 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     XilEndpoint_ReleaseBuffer @ 0x14001F92C (XilEndpoint_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x14002D2A4 (XilEndpoint_FetchStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x14003CB1C (XilEndpoint_CommitStreamContextArrayUpdates.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointConfigureCompletion_EpDropped(__int64 a1, int a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 result; // rax
  __int64 v6; // rcx
  unsigned int i; // ebx
  __int64 DequeuePointer; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 48);
  v11 = 0LL;
  v3 = *v2;
  v4 = *(_QWORD *)(*(_QWORD *)*v2 + 144LL);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v3 + 80),
        4u,
        0xDu,
        0x36u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 143LL),
        *(_DWORD *)(v3 + 152));
  }
  else if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v3 + 80),
        4u,
        0xDu,
        0x38u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 143LL),
        *(_DWORD *)(v3 + 152));
    if ( (int)XilEndpoint_FetchStreamContextArray(*(_QWORD *)(v3 + 144)) >= 0 )
    {
      v6 = *(_QWORD *)(v3 + 144);
      for ( i = 1; i <= *(_DWORD *)(v6 + 8); v6 = *(_QWORD *)(v3 + 144) )
      {
        Endpoint_InitializeTransferRing((__int64 *)v3, i);
        DequeuePointer = Endpoint_GetDequeuePointer(v3, i);
        v9 = i++;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 144) + 32LL) + 16LL) + 16 * v9) = DequeuePointer;
      }
      if ( (int)XilEndpoint_CommitStreamContextArrayUpdates(v6) >= 0 )
      {
        Endpoint_SetUpConfigureEndpointCommand(
          (_QWORD *)v3,
          0,
          (__int64)Endpoint_OnResetEndpointConfigureCompletion,
          (__int64)v2,
          v2[1],
          0LL,
          &v11,
          v2 + 2);
        v10 = Endpoint_GetDequeuePointer(v3, 0);
        *(_QWORD *)(v11 + 8) = v10;
        return Command_SendCommand(v4, (__int64)(v2 + 2));
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        2u,
        0xDu,
        0x37u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 143LL),
        *(_DWORD *)(v3 + 152),
        *(unsigned __int8 *)(a1 + 60));
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4119, 0, *(_QWORD *)(v3 + 16), v3, 0LL);
  }
  XilEndpoint_ReleaseBuffer(v3, v2[1]);
  v2[1] = 0LL;
  *(_DWORD *)(v3 + 296) = 0;
  _m_prefetchw((const void *)(v3 + 32));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEsmEvent(v3);
  return result;
}
