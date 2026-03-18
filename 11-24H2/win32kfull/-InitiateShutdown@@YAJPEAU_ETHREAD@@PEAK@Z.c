/*
 * XREFs of ?InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1402561B4
 * Callers:
 *     xxxSetInformationThread @ 0x140106AA0 (xxxSetInformationThread.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     W32GetThreadWin32Thread @ 0x140105FF4 (W32GetThreadWin32Thread.c)
 *     ?NotifyLogon@@YAHK@Z @ 0x140221A58 (-NotifyLogon@@YAHK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall InitiateShutdown(PETHREAD Thread, unsigned int *a2)
{
  int v4; // edi
  unsigned int v5; // edi
  PEPROCESS ThreadProcess; // rax
  _QWORD *ProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // r14
  __int64 v11; // r13
  HANDLE v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // si
  bool v16; // di
  char ProcessId; // bl
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  bool v24; // di
  char v25; // bl
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  PEPROCESS v31; // rcx
  bool v32; // r12
  int v33; // edi
  char ThreadId; // bl
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  bool v40; // di
  char v41; // bl
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  char v54; // r14
  unsigned int CurrentThreadId; // ebx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  HANDLE v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 ThreadWin32Thread; // rbx
  int v64; // edi
  unsigned int v65; // ebx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 CurrentThreadProcessId; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v80[6]; // [rsp+58h] [rbp-28h] BYREF

  v79 = 0LL;
  GetProcessLuid(Thread, &v79);
  v4 = *a2;
  if ( v79 == __PAIR64__(luidSystem[1], luidSystem[0]) )
    v5 = v4 | 0x100;
  else
    v5 = v4 & 0xFFFFFEFF;
  ThreadProcess = PsGetThreadProcess(Thread);
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(ThreadProcess);
  v10 = ProcessWin32Process;
  if ( !ProcessWin32Process || !*ProcessWin32Process )
    return 3221225480LL;
  v11 = ProcessWin32Process[82];
  v12 = *(HANDLE *)(W32GetUserSessionState(v9, v8) + 63584);
  v15 = 1;
  if ( PsGetThreadProcessId(Thread) == v12 )
    goto LABEL_44;
  v5 &= ~0x200u;
  *a2 = v5;
  if ( !v11 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x400) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v15 = 0;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      ProcessId = (unsigned __int8)PsGetProcessId((PEPROCESS)*v10);
      UserSessionState = W32GetUserSessionState(v19, v18);
      LOBYTE(v21) = v16;
      LOBYTE(v22) = v15;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 69416),
        3,
        11,
        10,
        (__int64)&WPP_10cc4f57605a3a9d31248f005dacd70d_Traceguids,
        ProcessId);
    }
    return 3221225480LL;
  }
  if ( !RtlAreAllAccessesGranted(*((_DWORD *)v10 + 168), 0x40u) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x400) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v15 = 0;
    }
    v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v25 = (unsigned __int8)PsGetProcessId((PEPROCESS)*v10);
      v28 = W32GetUserSessionState(v27, v26);
      LOBYTE(v29) = v24;
      LOBYTE(v30) = v15;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v30,
        v29,
        *(_QWORD *)(v28 + 69416),
        3,
        11,
        11,
        (__int64)&WPP_10cc4f57605a3a9d31248f005dacd70d_Traceguids,
        v25);
    }
    return 3221225506LL;
  }
  if ( (v5 & 1) != 0 )
  {
    v31 = (PEPROCESS)*v10;
    v80[3] = 0;
    v80[4] = 0;
    v80[0] = 1;
    v80[1] = 1;
    v80[2] = 19;
    if ( !(unsigned __int8)IsPrivileged(v31, Thread, v80) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x400) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v15 = 0;
      }
      v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v33 = *((_DWORD *)v10 + 14);
        ThreadId = (unsigned __int8)PsGetThreadId(Thread);
        v37 = W32GetUserSessionState(v36, v35);
        LOBYTE(v38) = v32;
        LOBYTE(v39) = v15;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v39,
          v38,
          *(_QWORD *)(v37 + 69416),
          3,
          11,
          12,
          (__int64)&WPP_10cc4f57605a3a9d31248f005dacd70d_Traceguids,
          ThreadId,
          v33);
      }
      return 3221225569LL;
    }
LABEL_44:
    if ( *(_DWORD *)(W32GetUserSessionState(v14, v13) + 63496) )
    {
      v50 = *(_QWORD *)(W32GetUserSessionState(v48, v47) + 63552);
      if ( (_DWORD)v79 != *(_DWORD *)(v50 + 176)
        || (v50 = *(_QWORD *)(W32GetUserSessionState(v50, v49) + 63552), HIDWORD(v79) != *(_DWORD *)(v50 + 180)) )
      {
        v51 = *(_QWORD *)(W32GetUserSessionState(v50, v49) + 63528);
        if ( v51 != *(_QWORD *)(W32GetUserSessionState(v53, v52) + 63584) )
          return 3221226029LL;
      }
      v54 = v5 & ~(unsigned __int8)*(_DWORD *)(W32GetUserSessionState(v50, v49) + 63524) & 7;
      if ( v54 )
      {
        CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
        if ( CurrentThreadId != *(_DWORD *)(W32GetUserSessionState(v57, v56) + 63496) )
        {
          if ( (v5 & 1) == 0 && v11 != *(_QWORD *)(W32GetUserSessionState(v59, v58) + 63552) )
            return 2147483665LL;
          if ( (v54 & 4) != 0 )
            return 3221226029LL;
        }
      }
      return 259LL;
    }
    v60 = *(HANDLE *)(W32GetUserSessionState(v48, v47) + 63584);
    if ( PsGetThreadProcessId(Thread) != v60 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
      if ( (v5 & 0x8000) != 0 )
      {
        v5 &= ~0x8000u;
        *a2 = v5;
      }
      if ( (unsigned int)NotifyLogon(v5) )
        return 259LL;
      if ( ThreadWin32Thread && *(_DWORD *)(ThreadWin32Thread + 944) )
        return 3221225688LL;
    }
    v64 = v5 | 0x200;
    *a2 = v64;
    *(_DWORD *)(W32GetUserSessionState(v62, v61) + 63524) = v64;
    v65 = (unsigned int)PsGetCurrentThreadId();
    *(_DWORD *)(W32GetUserSessionState(v67, v66) + 63496) = v65;
    v70 = W32GetUserSessionState(v69, v68);
    *(_DWORD *)(*(_QWORD *)(v70 + 19928) + 2236LL) |= 1u;
    CurrentThreadProcessId = PsGetCurrentThreadProcessId();
    *(_QWORD *)(W32GetUserSessionState(v73, v72) + 63528) = CurrentThreadProcessId;
    v76 = W32GetUserSessionState(v75, v74);
    LockObjectAssignment(v76 + 63552, v11);
    LODWORD(CurrentThreadProcessId) = *(_DWORD *)(v11 + 64);
    *(_QWORD *)(v11 + 176) = v79;
    *(_DWORD *)(W32GetUserSessionState(v78, v77) + 63520) = CurrentThreadProcessId & 3;
    *(_DWORD *)(v11 + 64) |= 0xAu;
    return 0LL;
  }
  if ( (*(_DWORD *)(v11 + 64) & 4) == 0 )
    goto LABEL_44;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x400) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
  {
    v15 = 0;
  }
  v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v41 = (unsigned __int8)PsGetProcessId((PEPROCESS)*v10);
    v44 = W32GetUserSessionState(v43, v42);
    LOBYTE(v45) = v40;
    LOBYTE(v46) = v15;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v46,
      v45,
      *(_QWORD *)(v44 + 69416),
      3,
      11,
      13,
      (__int64)&WPP_10cc4f57605a3a9d31248f005dacd70d_Traceguids,
      v41,
      v11);
  }
  return 3221225488LL;
}
