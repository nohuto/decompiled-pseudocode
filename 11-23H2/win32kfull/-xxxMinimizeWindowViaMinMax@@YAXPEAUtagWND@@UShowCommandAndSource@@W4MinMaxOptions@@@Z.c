/*
 * XREFs of ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C0015CD4
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00AABCC (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C005BEB4 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C005E948 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00B04A0 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C021C580 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C021D528 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

void __fastcall xxxMinimizeWindowViaMinMax(const struct tagWND *a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  bool v7; // si
  __int64 v8; // rcx
  struct tagWND *v9; // rdx
  BOOL v10; // r8d

  v7 = IsSemiMaximized(a1);
  xxxMinMaximize(v8, *(unsigned __int8 *)(v6 + 4));
  if ( (a3 & 0x20) != 0 )
  {
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v9,
        v10,
        (_DWORD)gFullLog,
        4,
        12,
        14,
        (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
        (char)a1,
        *(_BYTE *)(a2 + 4));
    LOBYTE(v9) = 1;
    NotifyShell::TrackedWindowPosChanged(a1, v9, v10);
  }
  if ( v7 )
    NotifyShell::ArrangementCompleted(a1, -1LL, 2LL);
}
