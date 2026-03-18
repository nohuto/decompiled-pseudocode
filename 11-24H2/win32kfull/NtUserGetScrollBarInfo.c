/*
 * XREFs of NtUserGetScrollBarInfo @ 0x1401AC9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     xxxGetScrollBarInfo @ 0x140256A64 (xxxGetScrollBarInfo.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x14027F280 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     W32AttachToProcessAndExecute__lambda_679956ec8699b4d63e5c901704edddc1___ @ 0x1402907D8 (W32AttachToProcessAndExecute__lambda_679956ec8699b4d63e5c901704edddc1___.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_lq @ 0x1402A3198 (WPP_RECORDER_AND_TRACE_SF_lq.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetScrollBarInfo(__int64 a1, unsigned int a2, ULONG64 a3)
{
  __int64 v6; // rbx
  char v7; // si
  __int64 v8; // rax
  __int64 v9; // rcx
  ULONG_PTR v10; // rdi
  int v11; // ebx
  __int64 v12; // rdx
  bool v13; // bl
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *v19; // rcx
  __int64 v20; // r12
  bool v21; // bl
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rax
  _BYTE *v26; // rdx
  struct _KPROCESS **v27; // rcx
  struct _KPROCESS *v28; // rbx
  int ScrollBarInfo; // eax
  __int64 v30; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+68h] [rbp-C0h] BYREF
  unsigned int v35; // [rsp+90h] [rbp-98h]
  __int128 *v36; // [rsp+98h] [rbp-90h]
  __int128 v37; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v38; // [rsp+C0h] [rbp-68h]
  __int128 v39; // [rsp+D0h] [rbp-58h]
  __int64 v40; // [rsp+E0h] [rbp-48h]
  int v41; // [rsp+E8h] [rbp-40h]

  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0;
  v6 = EnterCrit(0LL, 0LL);
  v7 = 1;
  v8 = ValidateReceivingHwnd(a1, 1LL);
  v10 = v8;
  if ( v8 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v6, v8);
    if ( a2 == -4 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v7 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v12);
        LOBYTE(v15) = v13;
        LOBYTE(v16) = v7;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v16,
          v15,
          *(_QWORD *)(UserSessionState + 69416),
          2,
          9,
          16,
          (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
          -4);
      }
    }
    else
    {
      if ( !(unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
        || (v19 = *(__int64 **)(*(_QWORD *)(v10 + 16) + 464LL), v20 = *v19, PsGetCurrentProcess(v19) != v20) )
      {
        v25 = -PsGetCurrentProcessWow64Process(v17, v12, v18);
        BugCheckParameter3[3] = (-(__int64)(v25 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
        v26 = (_BYTE *)a3;
        if ( ((v25 != 0 ? 0 : 3) & (unsigned int)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( a3 >= MmUserProbeAddress )
          v26 = (_BYTE *)MmUserProbeAddress;
        *v26 = *v26;
        v26[59] = v26[59];
        LODWORD(v37) = *(_DWORD *)a3;
        if ( !(unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
          || (v27 = *(struct _KPROCESS ***)(*(_QWORD *)(v10 + 16) + 464LL),
              v28 = *v27,
              (struct _KPROCESS *)PsGetCurrentProcess(v27) == v28) )
        {
          ScrollBarInfo = xxxGetScrollBarInfo(v10, a2, &v37);
        }
        else
        {
          BugCheckParameter3[4] = v10;
          v35 = a2;
          v36 = &v37;
          ScrollBarInfo = W32AttachToProcessAndExecute__lambda_679956ec8699b4d63e5c901704edddc1_(v28);
        }
        v11 = ScrollBarInfo;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v30);
        if ( (unsigned __int8)ShouldVirtualizeWindowRect(v10, CurrentThreadDpiAwarenessContext) )
          TransformRectBetweenCoordinateSpaces((char *)&v37 + 4, (char *)&v37 + 4, 0LL, v10);
        if ( v11 )
        {
          *(_OWORD *)a3 = v37;
          *(_OWORD *)(a3 + 16) = v38;
          *(_OWORD *)(a3 + 32) = v39;
          *(_QWORD *)(a3 + 48) = v40;
          *(_DWORD *)(a3 + 56) = v41;
        }
        goto LABEL_12;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v7 = 0;
      }
      v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v22 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v12);
        LOBYTE(v23) = v21;
        LOBYTE(v24) = v7;
        WPP_RECORDER_AND_TRACE_SF_lq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v24,
          v23,
          *(_QWORD *)(v22 + 69416));
      }
    }
    v11 = 0;
LABEL_12:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v12);
    goto LABEL_34;
  }
  v11 = 0;
LABEL_34:
  UserSessionSwitchLeaveCrit(v9);
  return v11;
}
