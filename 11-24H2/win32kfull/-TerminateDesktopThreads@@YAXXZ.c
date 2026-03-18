/*
 * XREFs of ?TerminateDesktopThreads@@YAXXZ @ 0x14022F338
 * Callers:
 *     ?InitiateWin32kCleanup@@YAXXZ @ 0x140272F14 (-InitiateWin32kCleanup@@YAXXZ.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IPostQuitMessage @ 0x1401BC764 (IPostQuitMessage.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401DFCE4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline @ 0x140274E24 (Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall TerminateDesktopThreads(__int64 a1, __int64 a2)
{
  ULONG v2; // r15d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  void *v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdx
  char v14; // bl
  bool v15; // di
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  bool v19; // zf
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  char v23; // bl
  bool v24; // di
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  void *v28; // rcx
  char v29; // bl
  bool v30; // di
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  char v34; // bl
  bool v35; // di
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  int v39; // eax
  int v40; // eax
  char v41; // si
  char v42; // bl
  bool v43; // di
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  NTSTATUS v47; // ebx
  __int64 v48; // rdx
  char v49; // bl
  bool v50; // di
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  __int64 v54; // rdx
  char v55; // bl
  bool v56; // di
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  char v60; // bl
  bool v61; // di
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  char v65; // bl
  bool v66; // di
  __int64 v67; // rax
  int v68; // r8d
  int v69; // edx
  char v70; // bl
  bool v71; // di
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  PVOID *v75; // rbx
  __int64 v76; // rdi
  PVOID Object[9]; // [rsp+40h] [rbp-48h] BYREF
  char v78; // [rsp+90h] [rbp+8h] BYREF
  __int16 v79; // [rsp+98h] [rbp+10h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+18h] BYREF

  *(_OWORD *)Object = 0LL;
  v2 = 0;
  v79 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3264) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(*(CTouchProcessor **)(UserSessionState + 3264));
  }
  v6 = W32GetUserSessionState(v4, v3);
  v9 = W32GetUserSessionState(v8, v7);
  v11 = *(void **)(v6 + 68784);
  v12 = v9;
  if ( v11 )
  {
    Object[0] = *(PVOID *)(v6 + 68784);
    ObfReferenceObject(v11);
    v2 = 1;
    if ( *(_QWORD *)(v6 + 68776) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v14 = 0;
      }
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v18,
          v17,
          *(_QWORD *)(v16 + 69416),
          4,
          20,
          10,
          (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
      }
      v19 = (unsigned int)Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline() == 0;
      v20 = *(_DWORD *)(v6 + 68720);
      if ( v19 )
        v21 = v20 | 8;
      else
        v21 = v20 | 0x10;
      *(_DWORD *)(v6 + 68720) = v21;
      KeSetEvent(*(PRKEVENT *)(v6 + 68776), 1, 0);
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || (v23 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v23 = 0;
      }
      v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
        LOBYTE(v26) = v24;
        LOBYTE(v27) = v23;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v27,
          v26,
          *(_QWORD *)(v25 + 69416),
          4,
          20,
          11,
          (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
      }
      IPostQuitMessage(*(_QWORD *)(v6 + 68736), 0);
      LOBYTE(v79) = 1;
    }
    HYDRA_HINT(0x80000LL, v22);
  }
  else if ( *(_QWORD *)(v6 + 68728) )
  {
    HMAssignmentUnlock(v6 + 68728);
  }
  v28 = *(void **)(v12 + 68856);
  if ( !v28 )
    goto LABEL_47;
  Object[v2] = v28;
  ObfReferenceObject(v28);
  ++v2;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || (v29 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v29 = 0;
  }
  v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v31 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v32) = v30;
    LOBYTE(v33) = v29;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v33,
      v32,
      *(_QWORD *)(v31 + 69416),
      4,
      20,
      12,
      (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
  }
  if ( *(_QWORD *)(v12 + 68848) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || (v34 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v34 = 0;
    }
    v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v36 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v37) = v35;
      LOBYTE(v38) = v34;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v38,
        v37,
        *(_QWORD *)(v36 + 69416),
        4,
        20,
        13,
        (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
    }
    v19 = (unsigned int)Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline() == 0;
    v39 = *(_DWORD *)(v12 + 68792);
    if ( v19 )
      v40 = v39 | 8;
    else
      v40 = v39 | 0x10;
    *(_DWORD *)(v12 + 68792) = v40;
    KeSetEvent(*(PRKEVENT *)(v12 + 68848), 1, 0);
LABEL_47:
    v41 = HIBYTE(v79);
    goto LABEL_48;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || (v65 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v65 = 0;
  }
  v66 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v65 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v67 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v68) = v66;
    LOBYTE(v69) = v65;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v69,
      v68,
      *(_QWORD *)(v67 + 69416),
      4,
      20,
      14,
      (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
  }
  IPostQuitMessage(*(_QWORD *)(v12 + 68808), 0);
  v41 = 1;
LABEL_48:
  if ( v2 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || (v42 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v42 = 0;
    }
    v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v42 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v44 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
      LOBYTE(v45) = v43;
      LOBYTE(v46) = v42;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v46,
        v45,
        *(_QWORD *)(v44 + 69416),
        4,
        20,
        15,
        (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
    }
    Timeout.QuadPart = -100000000LL;
    while ( 1 )
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v78, 1);
      v47 = KeWaitForMultipleObjects(v2, Object, WaitAll, WrUserRequest, 0, 0, &Timeout, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v78);
      if ( v47 != 258 )
        break;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || (v49 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
      {
        v49 = 0;
      }
      v50 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v49 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v51 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v48);
        LOBYTE(v52) = v50;
        LOBYTE(v53) = v49;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v53,
          v52,
          *(_QWORD *)(v51 + 69416),
          2,
          20,
          16,
          (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
      }
      HYDRA_HINT(0x800000LL, v48);
      if ( (_BYTE)v79 == 1 && *(_QWORD *)(v6 + 68736) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
          || (v55 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
        {
          v55 = 0;
        }
        v56 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v55 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v57 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v54);
          LOBYTE(v58) = v56;
          LOBYTE(v59) = v55;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v59,
            v58,
            *(_QWORD *)(v57 + 69416),
            2,
            20,
            17,
            (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
        }
        IPostQuitMessage(*(_QWORD *)(v6 + 68736), 0);
      }
      if ( v41 == 1 && *(_QWORD *)(v12 + 68808) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
          || (v60 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
        {
          v60 = 0;
        }
        v61 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v60 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v62 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v54);
          LOBYTE(v63) = v61;
          LOBYTE(v64) = v60;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v64,
            v63,
            *(_QWORD *)(v62 + 69416),
            2,
            20,
            18,
            (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
        }
        IPostQuitMessage(*(_QWORD *)(v12 + 68808), 0);
      }
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || (v70 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v70 = 0;
    }
    v71 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v70 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v72 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v48);
      LOBYTE(v73) = v71;
      LOBYTE(v74) = v70;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v74,
        v73,
        *(_QWORD *)(v72 + 69416),
        4,
        20,
        19,
        (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
    }
    v75 = Object;
    v76 = v2;
    do
    {
      ObfDereferenceObject(*v75++);
      --v76;
    }
    while ( v76 );
  }
  HYDRA_HINT(2048LL, v10);
}
