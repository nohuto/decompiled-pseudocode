/*
 * XREFs of NtUserGetSysMenuOffset @ 0x140296EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxGetSysMenuPtr @ 0x140070C28 (xxxGetSysMenuPtr.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

__int64 __fastcall NtUserGetSysMenuOffset(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  _QWORD *v6; // rsi
  __int64 SysMenuPtr; // rax
  __int64 v8; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = (_QWORD *)v3;
  if ( v3 )
  {
    Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
    SysMenuPtr = xxxGetSysMenuPtr(v6);
    if ( SysMenuPtr )
      v5 = *(_QWORD *)(SysMenuPtr + 48);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v8);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
