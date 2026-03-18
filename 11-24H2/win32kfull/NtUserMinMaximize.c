/*
 * XREFs of NtUserMinMaximize @ 0x140299C70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x14014F09C (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 */

__int64 __fastcall NtUserMinMaximize(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // eax
  int v15; // r8d
  __int64 v16; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v7;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( (((*(_WORD *)(v8 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
      LOBYTE(v9) = a3 != 0;
      v13 = *(_DWORD *)(W32GetUserSessionState(v12, v11) + 67056);
      v14 = v9 | 0x10;
      v15 = v13 & 0x10000;
      if ( a2 != 3 )
        v14 = v9;
      xxxMinMaximize(v10, a2, v14 | (unsigned int)v15);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v16);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return 0LL;
}
