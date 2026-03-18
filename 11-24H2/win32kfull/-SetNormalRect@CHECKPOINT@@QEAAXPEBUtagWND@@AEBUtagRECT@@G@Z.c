/*
 * XREFs of ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DB324
 * Callers:
 *     xxxSetWindowPlacement @ 0x140086334 (xxxSetWindowPlacement.c)
 *     xxxMetricsRecalc @ 0x140110EAC (xxxMetricsRecalc.c)
 *     ?Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x14014E9BC (-Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14017C3F8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140205E28 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x14021FA10 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x140222848 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1402A50C0 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A7F9C (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1402AB2DC (xxxSetInternalWindowPos.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1402D22E0 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     ?Init@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x1402DB2B8 (-Init@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z @ 0x140255500 (-SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402BFB0C (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 */

void __fastcall CHECKPOINT::SetNormalRect(
        CHECKPOINT *this,
        const struct tagWND *a2,
        const struct tagRECT *a3,
        __int16 a4)
{
  char v5; // r12
  char v6; // r13
  __int64 UserSessionState; // rax
  __int64 v8; // [rsp+20h] [rbp-88h]
  struct tagWND *v9; // [rsp+B8h] [rbp+10h]

  v9 = a2;
  *((_WORD *)this + 26) = a4;
  if ( *(_OWORD *)((char *)this + 20) != *(_OWORD *)a3 )
  {
    *(struct tagRECT *)((char *)this + 20) = *a3;
    v5 = 1;
    v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v5 = 0;
    }
    if ( v6 || v5 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      WPP_RECORDER_AND_TRACE_SF_qdddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v6,
        v5,
        *(_QWORD *)(UserSessionState + 69416),
        v8,
        4u,
        0xCu,
        (__int64)&WPP_b6344e787f9c38fd67b335c61b846d12_Traceguids);
      a2 = v9;
    }
    CHECKPOINT::SendNormalToDwm(this, a2);
  }
}
