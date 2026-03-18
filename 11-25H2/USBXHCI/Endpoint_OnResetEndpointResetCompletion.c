/*
 * XREFs of Endpoint_OnResetEndpointResetCompletion @ 0x140015310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x14000F694 (XilEndpoint_FetchStreamContextArray.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     UsbDevice_GetEndpointState @ 0x1400148D0 (UsbDevice_GetEndpointState.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x14001563C (Endpoint_OnResetSetDequeuePointer.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointResetCompletion(__int64 a1, int a2, __int128 *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  int v7; // ecx
  int EndpointState; // edx
  __int64 result; // rax
  __int64 v10; // rcx
  int StreamContextArray; // eax
  unsigned int i; // edi

  v3 = *(__int64 **)(a1 + 48);
  v6 = *v3;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v6 + 80),
        4u,
        0xDu,
        0x2Eu,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144));
    goto LABEL_13;
  }
  v7 = *(unsigned __int8 *)(a1 + 60);
  if ( (_BYTE)v7 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v6 + 80),
        2u,
        0xDu,
        0x2Fu,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144),
        v7);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)v6,
      *(_QWORD *)(v6 + 8),
      *(_QWORD *)(v6 + 24),
      256LL,
      "Endpoint Reset Command failed",
      (__int128 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v6, 2, 4123, 0, *(_QWORD *)(v6 + 16), v6, 0LL);
LABEL_13:
    StreamContextArray = -1073741823;
LABEL_9:
    *(_DWORD *)(v6 + 288) = StreamContextArray;
    _m_prefetchw((const void *)(v6 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v6 + 32), 2u);
    if ( (result & 2) == 0 )
      return ESM_AddEsmEvent(v6);
    return result;
  }
  EndpointState = UsbDevice_GetEndpointState(*(_QWORD *)(v6 + 16), *(_DWORD *)(v6 + 144));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      4u,
      0xDu,
      0x30u,
      (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
      *(_DWORD *)(v6 + 144),
      EndpointState);
  if ( !*(_BYTE *)(v6 + 37) )
    return Endpoint_OnResetSetDequeuePointer(v3, 0LL);
  v10 = *(_QWORD *)(v6 + 136);
  *(_DWORD *)(v10 + 20) = 0;
  StreamContextArray = XilEndpoint_FetchStreamContextArray(v10);
  if ( StreamContextArray < 0 )
    goto LABEL_9;
  result = *(_QWORD *)(v6 + 136);
  for ( i = 1; i <= *(_DWORD *)(result + 8); ++i )
  {
    Endpoint_OnResetSetDequeuePointer(v3, i);
    result = *(_QWORD *)(v6 + 136);
  }
  return result;
}
