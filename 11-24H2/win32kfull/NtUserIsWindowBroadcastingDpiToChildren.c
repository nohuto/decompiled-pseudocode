/*
 * XREFs of NtUserIsWindowBroadcastingDpiToChildren @ 0x14019E010
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x14019E09C (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

_BOOL8 __fastcall NtUserIsWindowBroadcastingDpiToChildren(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _BOOL8 v5; // rbx
  struct tagWND *v6; // rdi
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+48h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = (struct tagWND *)v2;
  if ( v2 )
  {
    v8 = PtiCurrent(v4, v3);
    Win32HM_LockIntoThread<0>((__int64)v8, (__int64)v6, BugCheckParameter3);
    v5 = IsWindowBroadcastingDpiToChildrenX(v6);
    v11 = PtiCurrent(v10, v9);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v11, BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
