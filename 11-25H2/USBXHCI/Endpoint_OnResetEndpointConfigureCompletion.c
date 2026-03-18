/*
 * XREFs of Endpoint_OnResetEndpointConfigureCompletion @ 0x1400017C0
 * Callers:
 *     <none>
 * Callees:
 *     XilEndpoint_ReleaseBuffer @ 0x140001CBC (XilEndpoint_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointConfigureCompletion(__int64 a1, int a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rsi
  int v6; // edx
  char v7; // cl
  int v8; // eax
  int v9; // edx
  __int64 v10; // rdx
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 48);
  v5 = *v2;
  XilEndpoint_ReleaseBuffer(*v2, v2[1]);
  v2[1] = 0LL;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v5 + 80),
        v6,
        13,
        55,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
        *(_DWORD *)(v5 + 144));
    }
LABEL_11:
    v8 = -1073741823;
    goto LABEL_12;
  }
  v7 = *(_BYTE *)(a1 + 60);
  if ( v7 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v5 + 80),
        v9,
        13,
        57,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
        *(_DWORD *)(v5 + 144),
        v7);
    }
    Controller_ReportFatalError(*(_QWORD *)v5, 2, 4130 - (*(_BYTE *)(v5 + 37) != 0), 0, *(_QWORD *)(v5 + 16), v5, 0LL);
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(v5 + 80),
      v6,
      13,
      56,
      (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
      *(_DWORD *)(v5 + 144));
  }
  v8 = 0;
LABEL_12:
  *(_DWORD *)(v5 + 288) = 0;
  if ( v8 < 0 )
  {
    _m_prefetchw((const void *)(v5 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v5 + 32), 2u);
    if ( (result & 2) != 0 )
      return result;
    v10 = 12LL;
  }
  else
  {
    v10 = 16LL;
  }
  return ESM_AddEsmEvent(v5, v10);
}
