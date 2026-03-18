/*
 * XREFs of ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x140068654
 * Callers:
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x140068228 (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14014E360 (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x14021FA10 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x140223790 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitorData@CMonitorTopology@@@Z @ 0x1402C2A38 (-GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitor.c)
 *     ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402C4B90 (-UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C68BC (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402CEA84 (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D93AC (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x1400688D0 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 */

const struct CMonitorTopology::MonitorData *__fastcall CMonitorTopology::MonitorDataFromRect(
        CMonitorTopology *this,
        const struct tagWND *a2,
        struct tagRECT *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  const struct CMonitorTopology::MonitorData *v7; // r13
  char v8; // r14
  char v9; // r15
  char v11; // r14
  bool v12; // si
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  int v16; // edi
  int v17; // ebp
  int v18; // ebx
  int v19; // esi
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  struct tagRECT v23; // [rsp+70h] [rbp-28h] BYREF

  v3 = *((_QWORD *)a2 + 5);
  v23 = *a3;
  v7 = CMonitorTopology::MonitorDataFromRect(this, &v23, 0, *(_DWORD *)(v3 + 288));
  if ( v7 )
  {
    v8 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (v6 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v6 & 0x40) == 0)
      || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v9 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v8 = 0;
    }
    if ( v9 || v8 )
    {
      v16 = *((_DWORD *)v7 + 5);
      v17 = *((_DWORD *)v7 + 3);
      v18 = *((_DWORD *)v7 + 4);
      v19 = *((_DWORD *)v7 + 2);
      UserSessionState = W32GetUserSessionState(v6, *(_QWORD *)&WPP_GLOBAL_Control);
      LOBYTE(v21) = v8;
      LOBYTE(v22) = v9;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 69416),
        5,
        7,
        19,
        (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
        v19,
        v17,
        v18,
        v16,
        v18 - v19,
        v16 - v17);
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
    {
      v11 = 0;
    }
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v15,
        v14,
        *(_QWORD *)(v13 + 69416),
        3,
        7,
        20,
        (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
        a3->left,
        a3->top,
        a3->right,
        a3->bottom,
        a3->right - a3->left,
        LOBYTE(a3->bottom) - a3->top);
    }
  }
  return v7;
}
