/*
 * XREFs of Endpoint_OnCancelEndpointConfigureCompletion @ 0x14000CEA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     Endpoint_SendClearStallTransfer @ 0x14000D014 (Endpoint_SendClearStallTransfer.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 */

__int64 __fastcall Endpoint_OnCancelEndpointConfigureCompletion(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  int v3; // edx
  __int64 result; // rax

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
        76,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(_BYTE *)(v2[2] + 135LL),
        *((_DWORD *)v2 + 36));
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 60) == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v3 = *(unsigned __int8 *)(v2[2] + 135LL);
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_dD(
          v2[10],
          v3,
          13,
          77,
          (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
          *(_BYTE *)(v2[2] + 135LL),
          *((_DWORD *)v2 + 36));
      }
      return Endpoint_SendClearStallTransfer(v2);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        v2[10],
        2u,
        0xDu,
        0x4Eu,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(unsigned __int8 *)(v2[2] + 135LL),
        *((_DWORD *)v2 + 36),
        *(unsigned __int8 *)(a1 + 60));
    Controller_ReportFatalError(*v2, 2, 4125, 0, v2[2], (__int64)v2, 0LL);
  }
  _m_prefetchw(v2 + 4);
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v2 + 8, 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEsmEvent(v2, 12LL);
  return result;
}
