/*
 * XREFs of Endpoint_OnResetSetDequeuePointerCompletion @ 0x1400149E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x1400130A4 (ESM_AddEvent.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x140034E78 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 */

void __fastcall Endpoint_OnResetSetDequeuePointerCompletion(__int64 a1, int a2, __int128 *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  int v7; // ecx

  v3 = *(__int64 **)(a1 + 48);
  v6 = *v3;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v6 + 80),
        4u,
        0xDu,
        0x2Bu,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144));
  }
  else
  {
    v7 = *(unsigned __int8 *)(a1 + 60);
    if ( (_BYTE)v7 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(v6 + 80),
          4u,
          0xDu,
          0x2Du,
          (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
          *(_DWORD *)(v6 + 144),
          *(unsigned __int16 *)(a1 + 34));
      if ( *(_BYTE *)(v6 + 37) )
      {
        Endpoint_StreamsOnResetSetDequeuePointerComplete(v3, *(unsigned __int16 *)(a1 + 34));
      }
      else
      {
        *(_DWORD *)(v6 + 288) = 0;
        ESM_AddEvent((KSPIN_LOCK *)(v6 + 296), 16);
      }
      return;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v6 + 80),
        2u,
        0xDu,
        0x2Cu,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144),
        v7);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)v6,
      *(_QWORD *)(v6 + 8),
      *(_QWORD *)(v6 + 24),
      128LL,
      "Set Dequeue pointer command following a Reset Endpoint command failed",
      (__int128 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v6, 2, 4122, 0, *(_QWORD *)(v6 + 16), v6, (__int64)a3);
  }
  *(_DWORD *)(v6 + 288) = -1073741823;
  _m_prefetchw((const void *)(v6 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v6 + 32), 2u) & 2) == 0 )
    ESM_AddEsmEvent(v6);
}
