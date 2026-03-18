/*
 * XREFs of NtUserEnableMouseInPointerForWindow @ 0x1401E2CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserEnableMouseInPointerForWindow(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rax
  __int64 CurrentProcessWin32Process; // rax
  int v20; // ecx
  __int64 v21; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateReceivingHwnd(a1, 0LL);
  v7 = 0LL;
  v8 = v5;
  if ( !v5 )
    goto LABEL_2;
  Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
  if ( (a2 != 0) != a2 )
  {
    v15 = 87;
    goto LABEL_11;
  }
  if ( !a2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    if ( CurrentProcessWin32Process )
    {
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v10;
    }
    if ( (*(_BYTE *)(CurrentProcessWin32Process + 816) & 0x30) == 0x10 )
    {
      v20 = 87;
LABEL_18:
      UserSetLastError(v20);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v21);
      goto LABEL_2;
    }
  }
  if ( *(_QWORD *)(v8 + 16) != v4 )
  {
    v15 = 5;
LABEL_11:
    UserSetLastError(v15);
    v18 = PtiCurrent(v17, v16);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v18, BugCheckParameter3);
    goto LABEL_2;
  }
  v12 = *(_DWORD *)(v8 + 384);
  if ( (v12 & 8) != 0 && a2 != ((*(_DWORD *)(v8 + 380) >> 3) & 1) )
  {
    v20 = 5;
    goto LABEL_18;
  }
  if ( a2 )
    *(_DWORD *)(v8 + 380) |= 8u;
  else
    *(_DWORD *)(v8 + 380) &= ~8u;
  v13 = v12 | 8u;
  *(_DWORD *)(v8 + 384) = v13;
  *(_QWORD *)(v4 + 1360) |= 0x4000000uLL;
  v14 = PtiCurrent(v13, v10);
  Win32HM_UnlockFromThread<0>((ULONG_PTR)v14, BugCheckParameter3);
  v7 = 1LL;
LABEL_2:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
