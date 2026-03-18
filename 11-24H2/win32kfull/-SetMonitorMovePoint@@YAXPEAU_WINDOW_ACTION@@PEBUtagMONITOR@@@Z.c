/*
 * XREFs of ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402CB230
 * Callers:
 *     ?xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPos@@@Z @ 0x1402CD9E0 (-xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPo.c)
 *     ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402CE108 (-xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402CEA84 (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     ?xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z @ 0x1402CF198 (-xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z.c)
 *     ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402CF4B8 (-xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@P.c)
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x1402CF954 (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 */

void __fastcall SetMonitorMovePoint(struct _WINDOW_ACTION *a1, const struct tagMONITOR *a2)
{
  int v2; // esi
  int v3; // ebp
  char v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  *(_DWORD *)a1 |= 0x80u;
  v2 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 44LL);
  *((_DWORD *)a1 + 20) = v2;
  v3 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 48LL);
  *((_DWORD *)a1 + 21) = v3;
  v4 = 1;
  v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v4 = 0;
  }
  if ( v5 || v4 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v4;
    LOBYTE(v8) = v5;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69416),
      5,
      4,
      30,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      v2,
      v3);
  }
}
