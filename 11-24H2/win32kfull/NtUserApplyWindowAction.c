/*
 * XREFs of NtUserApplyWindowAction @ 0x140292770
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x1400617A8 (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_4038020409__private_IsEnabledDeviceUsageNoInline @ 0x14029242C (Feature_4038020409__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402CA394 (-RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CC61C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CCFF0 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtUserApplyWindowAction(WindowActions *this, void *Src)
{
  const struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rcx
  struct _WINDOW_ACTION *v6; // r8
  int v7; // edi
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rdx
  bool v12; // si
  bool v13; // bl
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  int v17; // eax
  __int64 v18; // rdx
  char v19; // si
  char v20; // r12
  __int64 v21; // rdx
  WindowActions *v22; // r14
  bool v23; // bl
  int v24; // edx
  __int64 v25; // r9
  int v26; // r8d
  __int64 v27; // rdx
  bool v28; // r15
  __int64 v29; // rbx
  const struct tagTHREADINFO *v30; // rax
  bool v31; // zf
  bool v32; // bl
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  bool v36; // r12
  int v37; // r15d
  struct tagWND *v38; // rdx
  struct _WINDOW_ACTION *v39; // r9
  struct tagWND *v40; // rdx
  int v41; // ebx
  __int64 v42; // rdx
  struct tagWND *v43; // rdx
  struct _WINDOW_ACTION *v44; // r9
  unsigned int v45; // ebx
  __int64 v46; // rdx
  struct tagWND *v47; // rdx
  __int16 v49; // [rsp+30h] [rbp-148h]
  char v50; // [rsp+40h] [rbp-138h]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-120h] BYREF
  char v52; // [rsp+60h] [rbp-118h]
  _OWORD v53[6]; // [rsp+78h] [rbp-100h] BYREF
  struct HWND__ v54[4]; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v55; // [rsp+F0h] [rbp-88h]
  __int128 v56; // [rsp+100h] [rbp-78h]
  __int128 v57; // [rsp+110h] [rbp-68h]
  __int128 v58; // [rsp+120h] [rbp-58h]
  __int128 v59; // [rsp+130h] [rbp-48h]

  v4 = (const struct tagTHREADINFO *)EnterCrit(0LL, 0LL);
  memset_0(v54, 0, 0x60uLL);
  memset_0(v53, 0, sizeof(v53));
  RtlCopyFromUser(v53, Src, 0x60uLL);
  *(_OWORD *)&v54[0].unused = v53[0];
  v55 = v53[1];
  v56 = v53[2];
  v57 = v53[3];
  v58 = v53[4];
  v59 = v53[5];
  v7 = 0;
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    v8 = WindowActions::xxxApplyAction(this, v54, v6);
    if ( v8 )
    {
      v10 = v8;
LABEL_4:
      UserSetLastError(v10);
      goto LABEL_61;
    }
LABEL_5:
    v7 = 1;
    goto LABEL_61;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v5) & 0xF) != 2 )
  {
    v12 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v11);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69416),
        3,
        4,
        98,
        (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids);
    }
    v10 = 5023;
    goto LABEL_4;
  }
  LOBYTE(v17) = IAMThreadAccessGranted(v4);
  if ( v17 )
  {
    v19 = 1;
    v20 = 1;
    CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)&BugCheckParameter3, v18);
    v22 = (WindowActions *)ValidateHwnd(this);
    if ( v52 )
      *(_BYTE *)(BugCheckParameter3 + 1708) = 1;
  }
  else
  {
    v20 = 0;
    v22 = (WindowActions *)ValidateHwnd(this);
    v19 = 1;
  }
  if ( !v22 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v19 = 0;
    }
    v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v19 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v25 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v21) + 69416);
    v50 = (char)this;
    v49 = 99;
    LOBYTE(v26) = v23;
LABEL_28:
    LOBYTE(v24) = v19;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v24,
      v26,
      v25,
      3,
      4,
      v49,
      (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
      v50);
LABEL_29:
    v10 = 87;
    goto LABEL_4;
  }
  if ( !IsTopLevelWindow((__int64)v22) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v19 = 0;
    }
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v19 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v29 = *(_QWORD *)v22;
    v25 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v27) + 69416);
    v50 = v29;
    v49 = 100;
    LOBYTE(v26) = v28;
    goto LABEL_28;
  }
  v30 = (const struct tagTHREADINFO *)*((_QWORD *)v22 + 2);
  v31 = v30 == v4;
  if ( v30 != v4 )
  {
    if ( !v20 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v19 = 0;
      }
      v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v33 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v27);
        LOBYTE(v34) = v32;
        LOBYTE(v35) = v19;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v35,
          v34,
          *(_QWORD *)(v33 + 69416),
          3,
          4,
          101,
          (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids);
      }
      v10 = 5;
      goto LABEL_4;
    }
    v31 = v30 == v4;
  }
  v36 = v31;
  v37 = v54[0].unused & 0x400;
  if ( !(unsigned int)Feature_4038020409__private_IsEnabledDeviceUsageNoInline() )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(&BugCheckParameter3, (__int64)v4, (__int64)v22);
    LOBYTE(v43) = v36;
    v45 = WindowActions::xxxApplyActionOld(v22, v43, (bool)v54, v44);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)&BugCheckParameter3, v46);
    if ( v45 )
    {
      if ( !v37 && (v54[0].unused & 0x400) != 0 )
        WindowActions::RemoveLastSystemOperationData(v22, v47);
      v10 = v45;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(&BugCheckParameter3, (__int64)v4, (__int64)v22);
  LOBYTE(v38) = v36;
  v41 = WindowActions::xxxApplyActionOld(v22, v38, (bool)v54, v39);
  if ( !v41 )
  {
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)&BugCheckParameter3, (__int64)v40);
    goto LABEL_5;
  }
  if ( !v37 && (v54[0].unused & 0x400) != 0 )
    WindowActions::RemoveLastSystemOperationData(v22, v40);
  UserSetLastError(v41);
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)&BugCheckParameter3, v42);
LABEL_61:
  UserSessionSwitchLeaveCrit(v9);
  return v7;
}
