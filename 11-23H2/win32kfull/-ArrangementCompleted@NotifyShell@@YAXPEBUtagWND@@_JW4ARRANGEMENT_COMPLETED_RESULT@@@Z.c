/*
 * XREFs of ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C021C580
 * Callers:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C00123A4 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C0015CD4 (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C005CB44 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C01E9C1C (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01EB2A4 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F04DC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023C82C (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C00A623C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1C021C900 (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C021CBA8 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

__int64 __fastcall NotifyShell::ArrangementCompleted(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v5; // ebp
  PDEVICE_OBJECT v7; // rcx
  const char *v8; // rax
  unsigned __int16 WindowTrackState; // si
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  v4 = a3;
  v5 = a2;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v4 == 1 )
    {
      v8 = "ACR_ARRANGED";
    }
    else
    {
      v8 = "ACR_DISARRANGED";
      if ( v4 != 2 )
        v8 = "ACR_NONE";
    }
    WPP_RECORDER_AND_TRACE_SF_qs(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (__int64)gFullLog,
      4u,
      1u,
      0x13u,
      (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids,
      *a1,
      v8);
  }
  WindowTrackState = 0;
  if ( (_WORD)v4 == 2 )
  {
    LOBYTE(a2) = 1;
    WindowTrackState = ShellWindowManagement::GetWindowTrackState(a1, a2, a3);
  }
  v10 = 0;
  if ( *((_QWORD *)PtiCurrentShared((__int64)v7, a2, a3, a4) + 84) )
    v10 = *((_DWORD *)PtiCurrentShared(v12, v11, v13, v14) + 322) & 0x1F;
  return anonymous_namespace_::NotifyShellSimplePayload(
           *a1,
           2,
           (unsigned __int16)v4 | ((WindowTrackState | (unsigned int)(16 * v10)) << 16),
           v5,
           0);
}
