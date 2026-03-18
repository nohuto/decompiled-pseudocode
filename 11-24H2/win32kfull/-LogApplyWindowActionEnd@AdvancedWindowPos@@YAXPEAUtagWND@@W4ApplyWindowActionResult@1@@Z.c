/*
 * XREFs of ?LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z @ 0x1402D2E88
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14014E948 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14014E984 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140189B00 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1401EB664 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?ApplyEnd@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGUtagRECT@@PEBDH@Z @ 0x1402D2400 (-ApplyEnd@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGUtagRECT@@PEBDH@Z.c)
 *     ?GetApplyResultString@AdvancedWindowPos@@YAPEBGW4ApplyWindowActionResult@1@@Z @ 0x1402D2B4C (-GetApplyResultString@AdvancedWindowPos@@YAPEBGW4ApplyWindowActionResult@1@@Z.c)
 */

unsigned int *__fastcall AdvancedWindowPos::LogApplyWindowActionEnd(const struct tagWND *a1, int a2)
{
  __int64 v3; // rax
  struct tagRECT v5; // xmm6
  int v6; // ebx
  int WindowState; // eax
  const unsigned __int16 *ApplyResultString; // rbp
  const char *v9; // r9
  __int64 v10; // rdx
  char v11; // si
  char v12; // bl
  char v13; // di
  __int64 UserSessionState; // rax
  char v15; // r14
  char v16; // bp
  __int64 v17; // rax
  unsigned int *result; // rax
  bool v19; // di
  int v20; // eax
  const char *StateString; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // [rsp+40h] [rbp-78h]
  struct tagRECT v28; // [rsp+80h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a1 + 5);
  v5 = *(struct tagRECT *)(v3 + 88);
  v6 = *(_BYTE *)(v3 + 20) & 0x40;
  WindowState = AdvancedWindowPos::GetWindowState(a1);
  AdvancedWindowPos::GetStateString(WindowState);
  v28 = v5;
  ApplyResultString = AdvancedWindowPos::GetApplyResultString(a2);
  InputTraceLogging::ApplyWindowAction::ApplyEnd(*(HWND *)a1, ApplyResultString, &v28, v9, v6);
  v11 = 1;
  v12 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
    WPP_RECORDER_AND_TRACE_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v13,
      *(_QWORD *)(UserSessionState + 69416),
      4u,
      4u,
      0x96u,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      (const char *)ApplyResultString);
  }
  v15 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  v16 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
     && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
  if ( v15 || v16 )
  {
    v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
    LODWORD(v27) = v5.left;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v16,
      *(_QWORD *)(v17 + 69416),
      5u,
      4u,
      0x97u,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      v27,
      v5.top,
      v5.right,
      v5.bottom,
      v5.right - v5.left,
      v5.bottom - v5.top);
  }
  result = &WPP_GLOBAL_Control;
  v19 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    result = (unsigned int *)*(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
    if ( ((unsigned __int8)result & 8) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
      v19 = 1;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v11 = 0;
  }
  if ( v19 || v11 )
  {
    v20 = AdvancedWindowPos::GetWindowState(a1);
    StateString = AdvancedWindowPos::GetStateString(v20);
    v24 = W32GetUserSessionState(v23, v22);
    LOBYTE(v25) = v11;
    LOBYTE(v26) = v19;
    return (unsigned int *)WPP_RECORDER_AND_TRACE_SF_s(
                             *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                             v26,
                             v25,
                             *(_QWORD *)(v24 + 69416),
                             5,
                             4,
                             152,
                             (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
                             (__int64)StateString);
  }
  return result;
}
