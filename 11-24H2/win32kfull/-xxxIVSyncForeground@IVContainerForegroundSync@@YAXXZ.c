/*
 * XREFs of ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x1402329E4
 * Callers:
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x1402C00B4 (-GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WIND.c)
 */

void __fastcall IVContainerForegroundSync::xxxIVSyncForeground(IVContainerForegroundSync *this, __int64 a2)
{
  __int64 v2; // rcx
  char v3; // di
  bool v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *ShellSpecialWindow; // rsi
  bool v17; // bp
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int16 v24; // [rsp+30h] [rbp-48h]
  char v25; // [rsp+40h] [rbp-38h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-28h] BYREF

  v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  v3 = 1;
  v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      2,
      114,
      (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
  }
  v9 = W32GetUserSessionState(v2, a2);
  v12 = *(_QWORD *)(v9 + 19552);
  if ( v12 )
  {
    ShellSpecialWindow = (__int64 *)ValidateHwnd(*(_QWORD *)(v9 + 19552));
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v3 = 0;
    }
    v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
      v25 = v12;
      v24 = 116;
      goto LABEL_24;
    }
  }
  else
  {
    v13 = W32GetUserSessionState(v11, v10);
    ShellSpecialWindow = (__int64 *)ShellWindowManagement::GetShellSpecialWindow(*(_QWORD *)(v13 + 19200), 0LL);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (v15 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v15 & 2) == 0)
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v3 = 0;
    }
    v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v18 = *ShellSpecialWindow;
      v19 = W32GetUserSessionState(v15, v14);
      v25 = v18;
      v24 = 115;
LABEL_24:
      LOBYTE(v21) = v17;
      LOBYTE(v20) = v3;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v20,
        v21,
        *(_QWORD *)(v19 + 69416),
        4,
        2,
        v24,
        (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids,
        v25);
    }
  }
  if ( ShellSpecialWindow )
  {
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(
      BugCheckParameter3,
      (__int64)ShellSpecialWindow);
    xxxSetForegroundWindowWithOptions(ShellSpecialWindow, 31LL, 128LL, 0LL);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v23);
  }
}
