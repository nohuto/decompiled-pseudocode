/*
 * XREFs of NtUserShellMigrateWindow @ 0x14029FD10
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ValidateHwndIAM @ 0x1400F5AA4 (ValidateHwndIAM.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140148A3C (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x14016DFE0 (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?MigrateWindowAsyncOld@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHMONITOR__@@K@Z @ 0x1402C00F0 (-MigrateWindowAsyncOld@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHMONITO.c)
 *     ?ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1402C0A80 (-ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z.c)
 */

__int64 __fastcall NtUserShellMigrateWindow(__int64 a1, __int64 a2, unsigned int a3)
{
  char v5; // di
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  bool v14; // si
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rdx
  const struct tagTHREADINFO **v21; // rsi
  bool v22; // si
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  bool v30; // si
  int v31; // edx
  int v32; // r8d
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rdx
  struct tagWND *v36; // rbp
  bool v37; // bp
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  unsigned int v41; // r9d
  __int64 v42; // rcx
  __int16 v44; // [rsp+30h] [rbp-48h]
  __int16 v45; // [rsp+30h] [rbp-48h]
  char v46; // [rsp+40h] [rbp-38h]
  char v47; // [rsp+40h] [rbp-38h]
  _BYTE v48[8]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v49; // [rsp+58h] [rbp-20h]

  v5 = 1;
  EnterCrit(0LL, 1LL);
  v7 = 0LL;
  v48[0] = 0;
  v49 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v48, v8);
  v11 = PtiCurrent(v10, v9);
  LOBYTE(v12) = IAMThreadAccessGranted(v11);
  if ( !v12 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v5 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v17,
        v16,
        *(_QWORD *)(UserSessionState + 69416),
        3,
        4,
        81,
        (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids);
    }
    v18 = 5;
    goto LABEL_68;
  }
  v19 = ValidateHwndIAM(a1, v13);
  v21 = (const struct tagTHREADINFO **)v19;
  if ( !v19 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v5 = 0;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v46 = a1;
    v25 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20) + 69416);
    v44 = 82;
LABEL_18:
    LOBYTE(v24) = v22;
    LOBYTE(v23) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v23,
      v24,
      v25,
      3,
      4,
      v44,
      (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
      v46);
LABEL_19:
    v18 = 87;
LABEL_68:
    UserSetLastError(v18);
    goto LABEL_69;
  }
  if ( !IsTopLevelWindow(v19) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v5 = 0;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v46 = a1;
    v25 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26) + 69416);
    v44 = 83;
    goto LABEL_18;
  }
  if ( v21[2] == PtiCurrent(v27, v26) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v5 = 0;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v46 = a1;
    v25 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v28) + 69416);
    v44 = 84;
    goto LABEL_18;
  }
  if ( IsHungWindow(v21) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v5 = 0;
    }
    v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    v47 = a1;
    v33 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29) + 69416);
    v45 = 85;
LABEL_44:
    LOBYTE(v32) = v30;
    LOBYTE(v31) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v31,
      v32,
      v33,
      3,
      4,
      v45,
      (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
      v47);
LABEL_45:
    v18 = 5023;
    goto LABEL_68;
  }
  if ( IsGhostWindowClass((const struct tagWND *)v21, v29) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v5 = 0;
    }
    v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    v47 = a1;
    v33 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v34) + 69416);
    v45 = 86;
    goto LABEL_44;
  }
  v36 = (struct tagWND *)ValidateHmonitor(a2);
  if ( !v36 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v5 = 0;
    }
    v37 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v38 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v35);
      LOBYTE(v39) = v37;
      LOBYTE(v40) = v5;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v40,
        v39,
        *(_QWORD *)(v38 + 69416),
        2,
        12,
        87,
        (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
        a2);
    }
    v18 = 87;
    goto LABEL_68;
  }
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    ShellWindowPos::ShellMigrateWindowAsync((ShellWindowPos *)v21, v36, (struct tagMONITOR *)a3, v41);
  }
  else if ( (unsigned int)ShellWindowPos::MigrateWindowAsyncOld(v21, a2, a3) == 2 )
  {
    v18 = 14;
    goto LABEL_68;
  }
  v7 = 1LL;
LABEL_69:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v48);
  UserSessionSwitchLeaveCrit(v42);
  return v7;
}
