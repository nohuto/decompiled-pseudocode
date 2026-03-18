/*
 * XREFs of NtUserSetDialogControlDpiChangeBehavior @ 0x14029D590
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserSetDialogControlDpiChangeBehavior(__int64 a1, char a2, unsigned __int8 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateReceivingHwnd(a1, 1);
  v9 = 0LL;
  v10 = v7;
  if ( v7 )
  {
    Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    v14 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v14 = v13 & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v10 + 16) + 464LL) == v14 )
    {
      v9 = 1LL;
      *(_WORD *)(*(_QWORD *)(v10 + 40) + 304LL) = a3 & a2 & 3 | *(_WORD *)(*(_QWORD *)(v10 + 40) + 304LL) & ~(a2 & 3);
    }
    else
    {
      UserSetLastError(5);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v13);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
