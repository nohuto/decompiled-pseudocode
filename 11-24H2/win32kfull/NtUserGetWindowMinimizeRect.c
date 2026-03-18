/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x14003C870
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxSendMinRectMessages @ 0x14003CD64 (xxxSendMinRectMessages.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140048AF4 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ParkIcon @ 0x1401E31D8 (ParkIcon.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetWindowMinimizeRect(__int64 a1, _OWORD *a2)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 UserSessionState; // rax
  unsigned int *Prop; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // edx
  ULONG_PTR BugCheckParameter3[4]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v19; // [rsp+50h] [rbp-38h] BYREF

  v19 = 0LL;
  v4 = 1;
  v5 = EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v7 = v6;
  if ( v6 && (((*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v5, v6);
    if ( a2 )
    {
      if ( (unsigned __int8)IsTrayWindow(v7, 1LL) )
      {
        v4 = xxxSendMinRectMessages(v7, &v19);
      }
      else
      {
        UserSessionState = W32GetUserSessionState(v10, v9);
        Prop = (unsigned int *)GetProp(v7, *(unsigned __int16 *)(UserSessionState + 41398), 1LL);
        if ( Prop && (Prop[4] & 0x10) != 0 )
        {
          v15 = *Prop;
          *(_QWORD *)&v19 = *(_QWORD *)Prop;
        }
        else
        {
          ParkIcon(v7, &v19);
        }
        v16 = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v15, v14) + 19928) + 2124LL);
        DWORD2(v19) = v16 + v19;
        v17 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState((unsigned int)(v16 + v19), v16) + 19928) + 2128LL);
        HIDWORD(v19) = v17 + DWORD1(v19);
      }
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(v7, CurrentThreadDpiAwarenessContext) )
        TransformRectBetweenCoordinateSpaces(&v19, &v19, 0LL, v7);
      if ( v4 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_OWORD *)MmUserProbeAddress;
        *a2 = v19;
      }
    }
    else
    {
      v4 = 0;
      UserSetLastError(87LL);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
  }
  else
  {
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
