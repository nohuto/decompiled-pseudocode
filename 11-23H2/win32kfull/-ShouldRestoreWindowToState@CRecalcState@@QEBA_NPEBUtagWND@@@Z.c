/*
 * XREFs of ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C0225A2C
 * Callers:
 *     ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x1C013525C (-FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 * Callees:
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C005BD10 (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C005BEB4 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x1C005DEC0 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x1C005DEF8 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z @ 0x1C005E1A8 (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1C005E700 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qssss @ 0x1C0226ED8 (WPP_RECORDER_AND_TRACE_SF_qssss.c)
 */

char __fastcall CRecalcState::ShouldRestoreWindowToState(CRecalcState *this, const struct tagWND *a2)
{
  char v4; // bl
  const struct tagWND *v5; // rdx
  char v6; // bp
  int WindowState; // eax
  int v8; // r8d
  __int64 v9; // r11
  const char *v10; // rdx
  char v12; // dl
  char v13; // r8

  if ( !CRecalcState::ShouldStoreAfterProcessing(this, a2) )
    return 0;
  v4 = 1;
  if ( (unsigned int)CMonitorTopology::CompareToCurrent(*((CMonitorTopology **)this + 2), 1) )
    return 0;
  v6 = *((_BYTE *)this + 61);
  if ( AdvancedWindowPos::HasFullscreenState(a2, v5) != v6 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v4 = 0;
    }
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WindowState = AdvancedWindowPos::GetWindowState(a2);
      AdvancedWindowPos::GetStateString(WindowState);
      AdvancedWindowPos::GetStateString(*((_DWORD *)this + 6));
      v10 = " Fullscreen/";
      if ( !v6 )
        v10 = " ";
      LOBYTE(v10) = v4;
      WPP_RECORDER_AND_TRACE_SF_qssss(*(_QWORD *)(v9 + 24), (_DWORD)v10, v8, (_DWORD)gFullLog);
    }
    return 0;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v12 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v13 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v13 = 0;
  }
  if ( v12 || v13 )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v13,
      (__int64)gFullLog,
      5u,
      7u,
      0x1Au,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      *(_QWORD *)a2,
      *(_DWORD *)(*((_QWORD *)this + 2) + 4LL));
  return 1;
}
