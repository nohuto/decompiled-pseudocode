/*
 * XREFs of NtUserSetWindowPos @ 0x140247430
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140068010 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1400F5A44 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ConstrainWindowSize @ 0x14019E5A8 (ConstrainWindowSize.c)
 *     ConstrainWindowPos @ 0x1401A1648 (ConstrainWindowPos.c)
 *     ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1401E3748 (-ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1401E98D0 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserSetWindowPos(__int64 a1, struct tagWND *a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct tagWND *v13; // rdi
  unsigned int v14; // r14d
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // r12
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  char v23; // bl
  bool v24; // r14
  __int64 UserSessionState; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR v31[2]; // [rsp+60h] [rbp-10h] BYREF
  int v32; // [rsp+B0h] [rbp+40h] BYREF
  int v33; // [rsp+B8h] [rbp+48h] BYREF

  v33 = a4;
  v32 = a3;
  v9 = 0;
  BugCheckParameter3[0] = 0LL;
  v10 = EnterCrit(0LL, 0LL);
  v11 = ValidateHwnd(a1);
  v13 = (struct tagWND *)v11;
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 40);
    if ( (((*(_WORD *)(v12 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v10, v11, v31);
      v14 = a7;
      if ( (a7 & 0xFFFD9800) != 0 )
      {
        v15 = 1004;
      }
      else
      {
        if ( !(unsigned int)ValidateHWNDIA(a2, (struct tagWND **)BugCheckParameter3) )
          goto LABEL_30;
        if ( *(char *)(*((_QWORD *)v13 + 5) + 20LL) >= 0 )
        {
          if ( (v14 & 2) == 0 )
            ConstrainWindowPos(&v32, &v33);
          if ( (v14 & 1) == 0 )
            ConstrainWindowSize(&a5, &a6);
          v18 = BugCheckParameter3[0];
          v19 = 0LL;
          if ( BugCheckParameter3[0] - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
            v19 = BugCheckParameter3[0];
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v17);
          if ( (unsigned __int8)ShouldVirtualizeWindowRect(v13, CurrentThreadDpiAwarenessContext) )
            TransformSWPCoords(v13, &v32, &v33, &a5, &a6, v14);
          if ( (v14 & 0x43) == 0x43
            && (*(_BYTE *)(*((_QWORD *)v13 + 5) + 31LL) & 0x10) == 0
            && ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x40000000, v21)
            && ShellWindowManagement::WindowSubjectToBehavior((__int64)v13, 1u, 0, 1) )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
              || (v23 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
            {
              v23 = 0;
            }
            v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
              LOBYTE(v26) = v24;
              LOBYTE(v27) = v23;
              WPP_RECORDER_AND_TRACE_SF_q(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v27,
                v26,
                *(_QWORD *)(UserSessionState + 69416),
                4,
                12,
                11,
                (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
                (char)v13);
            }
            LOBYTE(v22) = 5;
            xxxShowWindowEx(v13, v22, 0);
            v9 = 1;
          }
          else
          {
            Win32HM_LockIntoThread<1>(v10, v19, (__int64 *)BugCheckParameter3);
            v9 = xxxSetWindowPos(v13, v18, (unsigned int)v32, (unsigned int)v33, a5, a6, v14);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v28);
          }
          goto LABEL_30;
        }
        v15 = 87;
      }
      UserSetLastError(v15);
LABEL_30:
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v31, v16);
    }
  }
  UserSessionSwitchLeaveCrit(v12);
  return v9;
}
