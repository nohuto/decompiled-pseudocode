/*
 * XREFs of NtUserCheckImeShowStatusInThread @ 0x140240D10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxCheckImeShowStatusInThread@@YAHPEAUtagWND@@@Z @ 0x140166C3C (-xxxCheckImeShowStatusInThread@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserCheckImeShowStatusInThread(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // edi
  struct tagTHREADINFO **v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwnd(a1);
  v5 = 0;
  v6 = (struct tagTHREADINFO **)v3;
  if ( v3 )
  {
    Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
    v5 = xxxCheckImeShowStatusInThread(v6, v7);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v8);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
