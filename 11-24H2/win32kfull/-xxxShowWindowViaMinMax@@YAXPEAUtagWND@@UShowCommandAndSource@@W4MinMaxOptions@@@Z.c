/*
 * XREFs of ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x14014D390
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401162C8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x14014EAE0 (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x140251FB8 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1402C0178 (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1402C1030 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall xxxShowWindowViaMinMax(const struct tagWND *a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 v6; // di
  unsigned int v7; // r14d
  struct tagWND *v8; // rdx
  bool v9; // r8
  char result; // al
  bool v11; // si
  bool v12; // bp
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int128 v16; // [rsp+50h] [rbp-68h] BYREF
  __int64 v17; // [rsp+60h] [rbp-58h]
  unsigned int v18; // [rsp+68h] [rbp-50h]
  char v19; // [rsp+6Ch] [rbp-4Ch]
  __int128 v20; // [rsp+70h] [rbp-48h] BYREF

  v6 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 && IsArranged(a1);
  v7 = *(unsigned __int8 *)(a2 + 4);
  v17 = 0LL;
  v18 = -1;
  v19 = 0;
  v16 = 0LL;
  v20 = 0LL;
  xxxMinMaximizeEx(a1, v7, a3, &v16);
  if ( (a3 & 0x20) != 0 )
  {
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        12,
        15,
        (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
        (char)a1,
        v7);
    }
    LOBYTE(v8) = 1;
    NotifyShell::TrackedWindowPosChanged(a1, v8, v9);
  }
  if ( v19 )
    ShellWindowPos::NotifyPosAndStateApplied(a1, 2LL, &v20, v18);
  result = IsArranged(a1);
  if ( v6 != result )
    return NotifyShell::ArrangementCompleted(a1, v18, (unsigned int)v6 + 1);
  return result;
}
