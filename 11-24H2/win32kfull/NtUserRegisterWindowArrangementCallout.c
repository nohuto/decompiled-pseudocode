/*
 * XREFs of NtUserRegisterWindowArrangementCallout @ 0x140244F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1402405A4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall NtUserRegisterWindowArrangementCallout(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  struct tagWND *v8; // rsi
  __int64 v9; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwndStrict(a1);
  v7 = 0LL;
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
    v7 = _RegisterWindowArrangementCallout(v8, a2);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v9);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
