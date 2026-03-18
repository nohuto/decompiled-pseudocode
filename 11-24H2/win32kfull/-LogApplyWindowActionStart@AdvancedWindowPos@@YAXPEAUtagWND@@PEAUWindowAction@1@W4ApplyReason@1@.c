/*
 * XREFs of ?LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D3128
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14014E948 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14014E984 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1401EB664 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?ApplyStart@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGKKUtagRECT@@PEBDHUtagPOINT@@UtagSIZE@@032I422@Z @ 0x1402D24E4 (-ApplyStart@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGKKUtagRECT@@PEBDHUtagPOINT@@.c)
 *     ?GetApplyReasonString@AdvancedWindowPos@@YAPEBGW4ApplyReason@1@@Z @ 0x1402D2A68 (-GetApplyReasonString@AdvancedWindowPos@@YAPEBGW4ApplyReason@1@@Z.c)
 */

void __fastcall AdvancedWindowPos::LogApplyWindowActionStart(const struct tagWND *a1, unsigned int *a2, int a3)
{
  const struct tagWND *v4; // rdx
  const char *StateString; // r13
  int v6; // ebp
  HWND v7; // r15
  struct tagSIZE v8; // rdi
  struct tagPOINT v9; // rsi
  int WindowState; // eax
  HWND *v11; // r10
  const char *v12; // rdx
  __int64 v13; // rdx
  char v14; // bl
  char v15; // di
  __int64 UserSessionState; // rax
  struct tagRECT v17; // [rsp+B0h] [rbp-78h] BYREF
  const unsigned __int16 *ApplyReasonString; // [rsp+130h] [rbp+8h]

  v4 = a1;
  if ( (*a2 & 0x20) != 0 )
    StateString = AdvancedWindowPos::GetStateString(a2[10]);
  else
    StateString = (const char *)&unk_14034ED21;
  v6 = *(_BYTE *)(*((_QWORD *)v4 + 5) + 20LL) & 0x40;
  v7 = (HWND)*((_QWORD *)a2 + 4);
  v8 = *(struct tagSIZE *)(a2 + 5);
  v9 = *(struct tagPOINT *)(a2 + 3);
  WindowState = AdvancedWindowPos::GetWindowState(v4);
  AdvancedWindowPos::GetStateString(WindowState);
  v17 = *(struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  ApplyReasonString = AdvancedWindowPos::GetApplyReasonString(a3);
  InputTraceLogging::ApplyWindowAction::ApplyStart(
    *v11,
    ApplyReasonString,
    *a2,
    a2[1],
    &v17,
    v12,
    v6,
    v9,
    v8,
    v7,
    StateString);
  v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
    WPP_RECORDER_AND_TRACE_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v14,
      v15,
      *(_QWORD *)(UserSessionState + 69416),
      4u,
      4u,
      0x95u,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      (const char *)ApplyReasonString);
  }
}
