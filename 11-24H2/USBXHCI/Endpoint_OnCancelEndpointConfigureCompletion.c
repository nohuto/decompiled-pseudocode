/*
 * XREFs of Endpoint_OnCancelEndpointConfigureCompletion @ 0x14001BAC0
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     Endpoint_SendClearStallTransfer @ 0x14001BC34 (Endpoint_SendClearStallTransfer.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 */

__int64 __fastcall Endpoint_OnCancelEndpointConfigureCompletion(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  int v3; // edx
  __int64 result; // rax
  int v5; // edx

  v2 = *(_QWORD **)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dD(
        v2[10],
        a2,
        13,
        79,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(v2[2] + 143LL),
        *((_DWORD *)v2 + 38));
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 60) == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v3 = *(unsigned __int8 *)(v2[2] + 143LL);
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_dD(
          v2[10],
          v3,
          13,
          80,
          (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
          *(_BYTE *)(v2[2] + 143LL),
          *((_DWORD *)v2 + 38));
      }
      return Endpoint_SendClearStallTransfer(v2);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = *(unsigned __int8 *)(v2[2] + 143LL);
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_ddL(
        v2[10],
        v5,
        13,
        81,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(v2[2] + 143LL),
        *((_DWORD *)v2 + 38),
        *(_BYTE *)(a1 + 60));
    }
    Controller_ReportFatalError(*v2, 2, 4125, 0, v2[2], (__int64)v2, 0LL);
  }
  _m_prefetchw(v2 + 4);
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v2 + 8, 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEsmEvent((__int64)v2);
  return result;
}
