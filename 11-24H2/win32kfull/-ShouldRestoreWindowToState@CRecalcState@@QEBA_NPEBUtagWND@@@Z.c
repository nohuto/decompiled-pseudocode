/*
 * XREFs of ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14014BC38
 * Callers:
 *     ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x14014AB1C (-FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 * Callees:
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1400681E8 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401162C8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14014D0F4 (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z @ 0x14014E8D8 (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14014E948 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14014E984 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qssss @ 0x1402C7C80 (WPP_RECORDER_AND_TRACE_SF_qssss.c)
 */

char __fastcall CRecalcState::ShouldRestoreWindowToState(CRecalcState *this, const struct tagWND *a2)
{
  char v4; // r15
  const struct tagWND *v5; // rdx
  char v6; // bl
  __int64 v7; // rdx
  bool v8; // r13
  unsigned int WindowState; // eax
  const struct tagWND *v10; // rdx
  bool HasFullscreenState; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  const char *v15; // rdx
  int v16; // r8d
  char v18; // bp
  char v19; // si
  __int64 v20; // rax
  __int64 v21; // rdi
  int v22; // ebx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx

  if ( !CRecalcState::ShouldStoreAfterProcessing(this, a2) )
    return 0;
  v4 = 1;
  if ( (unsigned int)CMonitorTopology::CompareToCurrent(*((_QWORD *)this + 2), 1LL) )
    return 0;
  v6 = *((_BYTE *)this + 61);
  if ( AdvancedWindowPos::HasFullscreenState(a2, v5) != v6 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v4 = 0;
    }
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      AdvancedWindowPos::GetStateString(*((unsigned int *)this + 6));
      WindowState = AdvancedWindowPos::GetWindowState(a2);
      AdvancedWindowPos::GetStateString(WindowState);
      HasFullscreenState = AdvancedWindowPos::HasFullscreenState(a2, v10);
      UserSessionState = W32GetUserSessionState(v13, v12);
      v15 = " ";
      LOBYTE(v16) = v8;
      if ( !HasFullscreenState )
        v15 = " Fullscreen/";
      LOBYTE(v15) = v4;
      WPP_RECORDER_AND_TRACE_SF_qssss(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        (_DWORD)v15,
        v16,
        *(_QWORD *)(UserSessionState + 69416));
    }
    return 0;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || (v18 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v18 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v19 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v19 = 0;
  }
  if ( v18 || v19 )
  {
    v20 = *((_QWORD *)this + 2);
    v21 = *(_QWORD *)a2;
    v22 = *(_DWORD *)(v20 + 12);
    v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
    LOBYTE(v24) = v19;
    LOBYTE(v25) = v18;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v25,
      v24,
      *(_QWORD *)(v23 + 69416),
      5,
      7,
      31,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v21,
      v22);
  }
  return 1;
}
