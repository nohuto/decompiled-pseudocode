/*
 * XREFs of NtUserSuppressWindowDisplayChange @ 0x1402A1030
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?SuppressWindowDisplayChangeWorker@DesktopRecalc@@YAXPEAUtagWND@@_N@Z @ 0x1402C4A7C (-SuppressWindowDisplayChangeWorker@DesktopRecalc@@YAXPEAUtagWND@@_N@Z.c)
 */

__int64 __fastcall NtUserSuppressWindowDisplayChange(__int64 a1, int a2)
{
  char v4; // di
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  bool v12; // si
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  DesktopRecalc *v17; // rax
  struct tagWND *v18; // rdx
  bool v19; // r8
  bool v20; // si
  __int64 UserSessionState; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rcx
  _BYTE v26[8]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v27; // [rsp+58h] [rbp-10h]

  v4 = 1;
  EnterCrit(0LL, 1LL);
  v5 = 0LL;
  v26[0] = 0;
  v27 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v26, v6);
  v9 = PtiCurrent(v8, v7);
  LOBYTE(v10) = IAMThreadAccessGranted(v9);
  if ( v10 )
  {
    v17 = (DesktopRecalc *)ValidateHwnd(a1);
    if ( v17 )
    {
      LOBYTE(v18) = a2 != 0;
      DesktopRecalc::SuppressWindowDisplayChangeWorker(v17, v18, v19);
      v5 = 1LL;
      goto LABEL_21;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v4 = 0;
    }
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v18);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v4;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v23,
        v22,
        *(_QWORD *)(UserSessionState + 69416),
        3,
        4,
        103,
        (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
        a1);
    }
    v16 = 87;
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v4 = 0;
    }
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v15,
        v14,
        *(_QWORD *)(v13 + 69416),
        3,
        4,
        102,
        (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids);
    }
    v16 = 5;
  }
  UserSetLastError(v16);
LABEL_21:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v26);
  UserSessionSwitchLeaveCrit(v24);
  return v5;
}
