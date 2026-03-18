/*
 * XREFs of NtUserGetClassIcoCur @ 0x140241800
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetClassIcoCur @ 0x14007C184 (GetClassIcoCur.c)
 */

__int64 __fastcall NtUserGetClassIcoCur(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 *ClassIcoCur; // rax
  __int64 v10; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v5;
  if ( v5 )
  {
    Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
    ClassIcoCur = (__int64 *)GetClassIcoCur(v8, a2);
    if ( ClassIcoCur )
      v7 = *ClassIcoCur;
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v10);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
