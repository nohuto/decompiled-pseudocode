/*
 * XREFs of ?IsWindowEligibleForMinimize@CRecalcState@@AEAA_NPEBUtagWND@@@Z @ 0x140268CC8
 * Callers:
 *     ?ShouldMinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVCRecalcContext@@@Z @ 0x1401CAD00 (-ShouldMinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IsForegroundWindow@@YA_NPEBUtagWND@@@Z @ 0x1400F7DEC (-IsForegroundWindow@@YA_NPEBUtagWND@@@Z.c)
 */

char __fastcall CRecalcState::IsWindowEligibleForMinimize(CRecalcState *this, const struct tagWND *a2)
{
  __int64 v2; // rcx
  bool v4; // di
  bool v5; // si
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r9
  char v9; // al
  __int64 v10; // rdx
  __int16 v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+40h] [rbp-18h]

  v2 = *((_QWORD *)a2 + 5);
  if ( (*(_BYTE *)(v2 + 30) & 2) == 0 )
  {
    v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v13 = *(_QWORD *)a2;
    v8 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69416);
    v12 = 42;
LABEL_37:
    LOBYTE(v7) = v5;
    LOBYTE(v6) = v4;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v6,
      v7,
      v8,
      4,
      7,
      v12,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v13);
    return 0;
  }
  v9 = *(_BYTE *)(v2 + 31);
  if ( (v9 & 8) != 0 )
  {
    v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v13 = *(_QWORD *)a2;
    v8 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69416);
    v12 = 43;
    goto LABEL_37;
  }
  if ( (v9 & 0x10) == 0 )
  {
    v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v13 = *(_QWORD *)a2;
    v8 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69416);
    v12 = 44;
    goto LABEL_37;
  }
  if ( IsForegroundWindow(a2, (__int64)a2) )
  {
    v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v13 = *(_QWORD *)a2;
    v8 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10) + 69416);
    v12 = 45;
    goto LABEL_37;
  }
  return 1;
}
