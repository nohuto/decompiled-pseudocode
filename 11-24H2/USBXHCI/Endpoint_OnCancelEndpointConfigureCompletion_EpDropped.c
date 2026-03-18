/*
 * XREFs of Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x14001C090
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     TR_GetDequeuePointer @ 0x14000A060 (TR_GetDequeuePointer.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x14001C290 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 */

__int64 __fastcall Endpoint_OnCancelEndpointConfigureCompletion_EpDropped(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned __int64 DequeuePointer; // rax
  __int64 result; // rax
  int v6; // edx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v7 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)v2 + 144LL);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v2 + 80),
        4u,
        0xDu,
        0x4Cu,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 143LL),
        *(_DWORD *)(v2 + 152));
  }
  else
  {
    if ( *(_BYTE *)(a1 + 60) == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(v2 + 80),
          4u,
          0xDu,
          0x4Eu,
          (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 143LL),
          *(_DWORD *)(v2 + 152));
      Endpoint_SetUpConfigureEndpointCommand(
        v2,
        0,
        (int)Endpoint_OnCancelEndpointConfigureCompletion,
        v2,
        *(_QWORD *)(v2 + 272),
        0LL,
        (__int64)&v7,
        (void *)(v2 + 168));
      if ( *(_BYTE *)(v2 + 37) )
        DequeuePointer = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 144) + 32LL) + 24LL);
      else
        DequeuePointer = TR_GetDequeuePointer(*(_QWORD *)(v2 + 88));
      *(_QWORD *)(v7 + 8) = DequeuePointer;
      return Command_SendCommand(v3, v2 + 168);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 143LL);
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v2 + 80),
        v6,
        13,
        77,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v2 + 16) + 143LL),
        *(_DWORD *)(v2 + 152),
        *(_BYTE *)(a1 + 60));
    }
    Controller_ReportFatalError(*(_QWORD *)v2, 2, 4119, 0, *(_QWORD *)(v2 + 16), v2, 0LL);
  }
  _m_prefetchw((const void *)(v2 + 32));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v2 + 32), 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEsmEvent(v2);
  return result;
}
