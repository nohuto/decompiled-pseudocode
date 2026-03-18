/*
 * XREFs of Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1400085E0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x140006A44 (ESM_AddEvent.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1400087C4 (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dddL @ 0x14002BED0 (WPP_RECORDER_SF_dddL.c)
 */

void __fastcall Endpoint_OnCancelSetDequeuePointerCompletion(__int64 a1, int a2, __int128 *a3)
{
  __int64 v3; // rbx
  int v6; // edx
  int v7; // edx
  int v8; // edx

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 143LL);
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        v6,
        13,
        65,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 143LL),
        *(_DWORD *)(v3 + 152),
        *(_WORD *)(a1 + 34));
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 60) == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = *(unsigned __int16 *)(a1 + 34);
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_dddL(*(_QWORD *)(v3 + 80), v7, *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 143LL), 67);
      }
      if ( *(_BYTE *)(v3 + 37) )
        Endpoint_StreamsOnCancelSetDequeuePointerComplete(v3, *(unsigned __int16 *)(a1 + 34));
      else
        ESM_AddEvent((KSPIN_LOCK *)(v3 + 304), 16);
      return;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(unsigned __int16 *)(a1 + 34);
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_dddL(*(_QWORD *)(v3 + 80), v8, *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 143LL), 66);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      512LL,
      "Set Dequeue Pointer command following a Stop Endpoint command failed",
      (__int128 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4106, 0, *(_QWORD *)(v3 + 16), v3, 0LL);
  }
  _m_prefetchw((const void *)(v3 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u) & 2) == 0 )
    ESM_AddEsmEvent(v3);
}
