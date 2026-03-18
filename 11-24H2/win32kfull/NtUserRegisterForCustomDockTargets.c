/*
 * XREFs of NtUserRegisterForCustomDockTargets @ 0x140244BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     ?SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z @ 0x1401496C0 (-SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

_BOOL8 __fastcall NtUserRegisterForCustomDockTargets(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  bool v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  struct tagTHREADINFO *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  bool v12; // bl
  bool v13; // di
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagTHREADINFO **v20; // rbx
  bool v21; // bl
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  MOVESIZEDATA *v30; // rcx
  bool v31; // bl
  bool v32; // di
  __int64 v33; // rax
  int v34; // edx
  int v35; // r8d
  bool v36; // al
  BOOL v37; // ebx
  __int64 v38; // rcx
  __int16 v40; // [rsp+30h] [rbp-48h]
  char v41[8]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v42; // [rsp+58h] [rbp-20h]

  EnterCrit(0LL, 0LL);
  v42 = 0LL;
  v41[0] = 0;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v41);
  v3 = *(_QWORD *)&WPP_GLOBAL_Control;
  v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      1,
      88,
      (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
      a1);
  }
  v9 = PtiCurrent(v3, v2);
  LOBYTE(v10) = IAMThreadAccessGranted(v9);
  if ( !v10 )
  {
    v12 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v16,
        v15,
        *(_QWORD *)(v14 + 69416),
        3,
        1,
        89,
        (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids);
    }
    v17 = 5;
    goto LABEL_52;
  }
  v20 = (struct tagTHREADINFO **)ValidateHwnd(a1);
  if ( !v20 )
  {
    v21 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v18);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v21;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v25,
        v24,
        *(_QWORD *)(v23 + 69416),
        3,
        1,
        90,
        (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids);
    }
    v17 = 87;
    goto LABEL_52;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v19, v18) + 18944)
    || (v28 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 18944), !*(_QWORD *)(v28 + 128)) )
  {
    v31 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v31 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_51;
    v33 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
    v40 = 91;
LABEL_50:
    LOBYTE(v35) = v32;
    LOBYTE(v34) = v31;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v34,
      v35,
      *(_QWORD *)(v33 + 69416),
      3,
      1,
      v40,
      (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids);
LABEL_51:
    v17 = 5023;
LABEL_52:
    v37 = 0;
    UserSetLastError(v17);
    goto LABEL_53;
  }
  v30 = *(MOVESIZEDATA **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v28, v26) + 18944) + 128LL) + 16LL)
                         + 712LL);
  if ( !v30 )
  {
    v31 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v31 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_51;
    v33 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29);
    v40 = 92;
    goto LABEL_50;
  }
  v36 = MOVESIZEDATA::SHData_SetCustomDockTargetWindow(v30, v20);
  v37 = v36;
  if ( !v36 )
    goto LABEL_51;
LABEL_53:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v41);
  UserSessionSwitchLeaveCrit(v38);
  return v37;
}
