/*
 * XREFs of ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x1401AC5D0
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1401AC430 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1401AC7C0 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall TestWindowForCompositionTarget(HWND a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PETHREAD **v7; // rdi
  unsigned int v8; // ebx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rcx
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+50h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v17, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = (PETHREAD **)v4;
  if ( v4 && (v6 = *(_QWORD *)(v4 + 40), (((*(_WORD *)(v6 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    v10 = PtiCurrent(v6, v5);
    Win32HM_LockIntoThread<0>((__int64)v10, (__int64)v7, BugCheckParameter3);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v11);
    if ( CurrentProcess == PsGetThreadProcess(*v7[2]) )
      v8 = (unsigned int)WindowHasCompositionTarget((struct tagWND *)v7, a2) != 0 ? 0x803E0006 : 0;
    else
      v8 = -1073741790;
    v15 = PtiCurrent(v14, v13);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v15, BugCheckParameter3);
  }
  else
  {
    v8 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
