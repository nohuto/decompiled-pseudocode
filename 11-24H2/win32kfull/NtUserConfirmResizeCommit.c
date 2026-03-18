/*
 * XREFs of NtUserConfirmResizeCommit @ 0x140292EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     GreConfirmWindowResizeCommit @ 0x140321770 (GreConfirmWindowResizeCommit.c)
 */

__int64 __fastcall NtUserConfirmResizeCommit(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  HWND *v6; // rbx
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  v3 = ValidateHwnd(a1);
  v6 = (HWND *)v3;
  if ( v3 )
  {
    v5 = (*(_WORD *)(*(_QWORD *)(v3 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      v7 = PtiCurrent(v5, v4);
      Win32HM_LockIntoThread<0>((__int64)v7, (__int64)v6, BugCheckParameter3);
      CurrentProcess = PsGetCurrentProcess(v8);
      if ( (unsigned int)IsProcessDwm(CurrentProcess) )
        v2 = GreConfirmWindowResizeCommit(*v6);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v2;
}
