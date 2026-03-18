/*
 * XREFs of NtUserValidateRgn @ 0x140247E90
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x140042630 (xxxRedrawWindow.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

__int64 __fastcall NtUserValidateRgn(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edi
  struct tagWND *v8; // rsi
  __int64 v9; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0;
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
    v7 = xxxRedrawWindow(v8, 0LL, a2, 8);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v9);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
