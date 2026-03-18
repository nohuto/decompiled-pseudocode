/*
 * XREFs of Endpoint_OnResetEndpointConfigureCompletion @ 0x14001FC00
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     XilEndpoint_ReleaseBuffer @ 0x14001F92C (XilEndpoint_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointConfigureCompletion(__int64 a1, int a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rsi
  int v6; // eax
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 48);
  v5 = *v2;
  XilEndpoint_ReleaseBuffer(*v2, v2[1]);
  v2[1] = 0LL;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v5 + 80),
        4u,
        0xDu,
        0x39u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 143LL),
        *(_DWORD *)(v5 + 152));
LABEL_11:
    v6 = -1073741823;
    goto LABEL_12;
  }
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v5 + 80),
        2u,
        0xDu,
        0x3Bu,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 143LL),
        *(_DWORD *)(v5 + 152),
        *(unsigned __int8 *)(a1 + 60));
    Controller_ReportFatalError(*(_QWORD *)v5, 2, 4130 - (*(_BYTE *)(v5 + 37) != 0), 0, *(_QWORD *)(v5 + 16), v5, 0LL);
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(v5 + 80),
      4u,
      0xDu,
      0x3Au,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 143LL),
      *(_DWORD *)(v5 + 152));
  v6 = 0;
LABEL_12:
  *(_DWORD *)(v5 + 296) = 0;
  if ( v6 >= 0 )
    return ESM_AddEsmEvent(v5);
  _m_prefetchw((const void *)(v5 + 32));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v5 + 32), 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEsmEvent(v5);
  return result;
}
