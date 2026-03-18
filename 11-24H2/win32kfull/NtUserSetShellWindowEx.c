/*
 * XREFs of NtUserSetShellWindowEx @ 0x140246970
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x140092FE8 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x1402C06AC (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtUserSetShellWindowEx(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  _BOOL8 v5; // rdi
  struct tagWND *v6; // rsi
  __int64 v7; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  const struct tagUIPI_INFO *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 UserSessionState; // rax
  __int64 v18; // rdx
  _BYTE v20[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+28h] [rbp-40h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v23[4]; // [rsp+40h] [rbp-28h] BYREF

  v23[1] = -1;
  v23[0] = 0x2000;
  v23[2] = 0;
  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = (struct tagWND *)v3;
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    if ( (((*(_WORD *)(v4 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v7);
      if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
        goto LABEL_12;
      v10 = PsGetCurrentProcessWin32Process(v9);
      if ( v10 )
        v10 &= -(__int64)(*(_QWORD *)v10 != 0LL);
      if ( !UIPrivilegeIsolation::CheckAccess(
              (UIPrivilegeIsolation *)(v10 + 872),
              (const struct tagUIPI_INFO *)v23,
              v11) )
        goto LABEL_12;
      v13 = PsGetCurrentProcessWin32Process(v12);
      v16 = v13;
      if ( v13 )
      {
        v15 = -*(_QWORD *)v13;
        v14 = -(__int64)(*(_QWORD *)v13 != 0LL);
        v16 = v14 & v13;
      }
      if ( *(_QWORD *)(*((_QWORD *)v6 + 2) + 464LL) == v16 )
      {
        UserSessionState = W32GetUserSessionState(v15, v14);
        v20[0] = 0;
        v21 = 0LL;
        ++*(_DWORD *)(UserSessionState + 70856);
        AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v20);
        v5 = RegisterShell(v6);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v20);
        zzzEndDeferWinEventNotify();
      }
      else
      {
LABEL_12:
        UserSetLastError(5);
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v18);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
