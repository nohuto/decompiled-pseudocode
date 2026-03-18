/*
 * XREFs of ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14021F87C
 * Callers:
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x140222848 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A7F9C (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     GetRect @ 0x1400355F0 (GetRect.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400688A4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x14021FA10 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     ??0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x14021FFE4 (--0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x140269110 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall AdvancedWindowPos::xxxMigrateCheckpoint(struct tagRECT *this, struct tagWND *a2, struct tagMONITOR *a3)
{
  __int64 UserSessionState; // rax
  char v5; // bl
  CHECKPOINT *Prop; // rsi
  __int64 v7; // rdx
  bool v8; // di
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  CMonitorTopology *v15[4]; // [rsp+40h] [rbp-58h] BYREF
  struct tagRECT v16; // [rsp+60h] [rbp-38h] BYREF

  UserSessionState = W32GetUserSessionState(this, a2);
  v5 = 1;
  Prop = (CHECKPOINT *)GetProp((__int64)this, *(unsigned __int16 *)(UserSessionState + 41398), 1u);
  if ( Prop
    || (v16 = 0LL,
        GetRect((__int64)this, (__int64)&v16, 66),
        (Prop = CHECKPOINT::Restore((struct tagWND *)this, &v16)) != 0LL) )
  {
    CThreadLockedCurrentMonitorTopologyPtr::CThreadLockedCurrentMonitorTopologyPtr((CThreadLockedCurrentMonitorTopologyPtr *)v15);
    anonymous_namespace_::xxxMigrateWindowCheckpoint(this, Prop, 0LL, 0LL, 0, 0LL);
    if ( v15[0] )
    {
      v14 = PtiCurrent(v13, v12);
      *((CMonitorTopology **)v14 + 48) = v15[1];
      if ( v15[0] )
        CMonitorTopology::Release(v15[0]);
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v5 = 0;
    }
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v11,
        v10,
        *(_QWORD *)(v9 + 69416),
        2,
        4,
        45,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
  }
}
