/*
 * XREFs of ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x140251FB8
 * Callers:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x14014D390 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x14014EF70 (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140205E28 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x140223790 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1402A6618 (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?SendShellArrangementCompletionNotification@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NK2@Z @ 0x1402D3A70 (-SendShellArrangementCompletionNotification@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NK2@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x14014884C (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x14019AC0C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1402682DC (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
 */

__int64 __fastcall NotifyShell::ArrangementCompleted(__int64 *a1, __int64 a2, int a3)
{
  unsigned __int16 v3; // si
  __int64 v4; // r12
  char v6; // bp
  __int64 v7; // rcx
  bool v8; // r14
  const char *v9; // rdi
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  unsigned __int16 WindowTrackState; // di
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx

  v3 = a3;
  v4 = a2;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v6 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v6 = 0;
  }
  v7 = 2LL;
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    if ( a3 == 1 )
    {
      v9 = "ACR_ARRANGED";
    }
    else
    {
      v9 = "ACR_DISARRANGED";
      if ( a3 != 2 )
        v9 = "ACR_NONE";
    }
    v10 = *a1;
    UserSessionState = W32GetUserSessionState(2LL, a2);
    LOBYTE(v12) = v8;
    LOBYTE(v13) = v6;
    WPP_RECORDER_AND_TRACE_SF_qs(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      1,
      22,
      (__int64)&WPP_6b95c0fab1563d858a8149a35fde60c5_Traceguids,
      v10,
      (__int64)v9);
    v7 = 2LL;
  }
  WindowTrackState = 0;
  if ( v3 == 2 )
  {
    LOBYTE(a2) = 1;
    WindowTrackState = ShellWindowManagement::GetWindowTrackState(a1, a2);
  }
  v15 = 0;
  if ( *((_QWORD *)PtiCurrent(v7, a2) + 89) )
    v15 = *((_DWORD *)PtiCurrent(v17, v16) + 344) & 0x1F;
  return anonymous_namespace_::NotifyShellSimplePayload(*a1, 2, v3 | ((WindowTrackState | (16 * v15)) << 16), v4, 0);
}
