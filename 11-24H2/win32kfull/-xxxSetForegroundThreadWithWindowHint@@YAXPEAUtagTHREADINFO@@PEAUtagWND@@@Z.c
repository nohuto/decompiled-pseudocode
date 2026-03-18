/*
 * XREFs of ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140233A48
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSetModernAppWindow @ 0x14024CD58 (xxxSetModernAppWindow.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x14027662C (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxClearForegroundThread @ 0x140277BF0 (xxxClearForegroundThread.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     IsCurrentSessionServiceSession @ 0x1400A4078 (IsCurrentSessionServiceSession.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401D3670 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline @ 0x140277A40 (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline.c)
 *     zzzDelegateInputFocusLostWindowEvent @ 0x1402879CC (zzzDelegateInputFocusLostWindowEvent.c)
 *     ?GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x1402C00B4 (-GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WIND.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxSetForegroundThreadWithWindowHint(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r12
  unsigned int ThreadId; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 KeyboardDelegationTargetQ; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  char v33; // bl
  bool v34; // r14
  char v35; // bp
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  char v39; // si
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned int v47; // ebx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 ShellSpecialWindow; // rax
  char v56; // bl
  bool v57; // di
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  struct tagTHREADINFO *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v82; // [rsp+60h] [rbp-68h] BYREF
  __int128 v83; // [rsp+70h] [rbp-58h]

  if ( a1 == *(struct tagTHREADINFO **)(W32GetUserSessionState(a1, a2) + 18960) )
    return;
  if ( !a1 )
  {
    v6 = 0;
    goto LABEL_7;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18960)
    || (v5 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18960), *((_QWORD *)a1 + 58) != *(_QWORD *)(v5 + 464)) )
  {
    v6 = *(_DWORD *)(*((_QWORD *)a1 + 58) + 56LL);
LABEL_7:
    if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18960) )
      v9 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 18960) + 464LL) + 56LL);
    else
      v9 = 0LL;
    EtwTraceFocusedProcessChange(v9, v6);
    UserSessionState = W32GetUserSessionState(v11, v10);
    CitProcessForegroundChange(a1, a2, *(_QWORD *)(UserSessionState + 18960));
    if ( a1 )
      ForegroundBoost::SetForegroundPriority(a1, 1LL, 8LL);
    if ( *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18960) )
    {
      v15 = W32GetUserSessionState(v5, v4);
      ForegroundBoost::SetForegroundPriority(*(_QWORD *)(v15 + 18960), 0LL, 8LL);
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18960) )
  {
    v17 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18960);
    v18 = *(_QWORD *)(v17 + 480);
  }
  else
  {
    v18 = 0LL;
  }
  if ( a1 )
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)a1);
  else
    ThreadId = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18960) )
  {
    v22 = W32GetUserSessionState(v21, v20);
    v23 = (unsigned int)PsGetThreadId(**(PETHREAD **)(v22 + 18960));
  }
  else
  {
    v23 = 0;
  }
  EtwTraceFocusChange(v23, ThreadId);
  if ( *(_QWORD *)(W32GetUserSessionState(v25, v24) + 18960) )
  {
    if ( !a1
      || (v27 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 18960), *(_QWORD *)(v27 + 464) != *((_QWORD *)a1 + 58)) )
    {
      v28 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v27 = *(_QWORD *)(W32GetUserSessionState(0xFFFFF78000000004uLL, v26) + 18960);
      *(_DWORD *)(*(_QWORD *)(v27 + 464) + 1076LL) = v28;
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v27, v26) + 18960) )
  {
    KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
    if ( KeyboardDelegationTargetQ )
    {
      v31 = *(_QWORD *)(KeyboardDelegationTargetQ + 120);
      if ( v31 )
        zzzDelegateInputFocusLostWindowEvent(v31, 14LL);
    }
    DisableDelegation();
  }
  v32 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v33 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v33 = 0;
  }
  v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    if ( a1 )
      v35 = (unsigned __int8)PsGetThreadId(*(PETHREAD *)a1);
    else
      v35 = 0;
    if ( *(_QWORD *)(W32GetUserSessionState(v32, v29) + 18960) )
    {
      v38 = W32GetUserSessionState(v37, v36);
      v39 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v38 + 18960));
    }
    else
    {
      v39 = 0;
    }
    v40 = W32GetUserSessionState(v37, v36);
    LOBYTE(v41) = v34;
    LOBYTE(v42) = v33;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v42,
      v41,
      *(_QWORD *)(v40 + 69416),
      4,
      2,
      111,
      (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids,
      v39,
      v35);
  }
  *(_QWORD *)(W32GetUserSessionState(v32, v29) + 18960) = a1;
  if ( a1
    && (v43 = *(_QWORD *)(W32GetUserSessionState(v44, v43) + 63592),
        v44 = *(unsigned int *)(*((_QWORD *)a1 + 58) + 56LL),
        v44 == v43) )
  {
    v47 = *(_DWORD *)(W32GetUserSessionState(v44, v43) + 14708) | 2;
  }
  else
  {
    v47 = *(_DWORD *)(W32GetUserSessionState(v44, v43) + 14708) & 0xFFFFFFFD;
  }
  *(_DWORD *)(W32GetUserSessionState(v46, v45) + 14708) = v47;
  if ( !IsCurrentSessionServiceSession() )
  {
    v82 = 0LL;
    v83 = 0LL;
    if ( *(_QWORD *)(W32GetUserSessionState(v49, v48) + 18960) )
    {
      LODWORD(v82) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v51, v50) + 18960) + 464LL) + 56LL);
      v53 = W32GetUserSessionState((unsigned int)v82, v52);
      DWORD1(v82) = (unsigned int)PsGetThreadId(**(PETHREAD **)(v53 + 18960));
      if ( a2 )
        *(_QWORD *)&v83 = *(_QWORD *)a2;
      else
        *(_QWORD *)&v83 = 0LL;
    }
    SendMessageTo(2LL, &v82, 32LL);
  }
  if ( a1 )
  {
    v54 = W32GetUserSessionState(v49, v48);
    if ( *(_DWORD *)(v54 + 14048) == 1 )
    {
      ShellSpecialWindow = ShellWindowManagement::GetShellSpecialWindow(*((_QWORD *)a1 + 62), 1LL);
      if ( ShellSpecialWindow )
      {
        if ( *(struct tagTHREADINFO **)(ShellSpecialWindow + 16) == a1 )
        {
          v49 = *(_QWORD *)&WPP_GLOBAL_Control;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20) == 0
            || (v56 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v56 = 0;
          }
          v57 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v56 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v58 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v48);
            LOBYTE(v59) = v57;
            LOBYTE(v60) = v56;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v60,
              v59,
              *(_QWORD *)(v58 + 69416),
              4,
              6,
              112,
              (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
          }
          *(_DWORD *)(v54 + 14048) = 2;
        }
      }
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v49, v48) + 18960) )
  {
    v64 = *(_QWORD *)(W32GetUserSessionState(v62, v61) + 18960);
    if ( *(_QWORD *)(v64 + 480) )
    {
      v66 = *(unsigned int *)(W32GetUserSessionState(v64, v63) + 67064);
      if ( (v66 & 0x80u) != 0LL
        || !*(_QWORD *)(W32GetUserSessionState(v66, v65) + 14240)
        || (v67 = *(_QWORD *)(W32GetUserSessionState(v66, v65) + 14240),
            v66 = *(_QWORD *)(W32GetUserSessionState(v69, v68) + 18960),
            v67 == *(_QWORD *)(v66 + 480)) )
      {
        v70 = PtiCurrent(v66, v65);
        Win32HM_LockIntoThread<1>((__int64)v70, v18, (__int64 *)BugCheckParameter3);
        v73 = W32GetUserSessionState(v72, v71);
        xxxChangeForegroundKeyboardTable(v18, *(_QWORD *)(*(_QWORD *)(v73 + 18960) + 480LL), 0LL);
        Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(BugCheckParameter3, v74);
      }
    }
  }
  if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
  {
    v77 = W32GetUserSessionState(v76, v75);
    *(_OWORD *)(v77 + 14464) = 0LL;
    *(_OWORD *)(v77 + 14480) = 0LL;
    v80 = W32GetUserSessionState(v79, v78);
    ++*(_DWORD *)(*(_QWORD *)(v80 + 19928) + 6988LL);
  }
}
