/*
 * XREFs of NtUserBuildPropList @ 0x140085640
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _BuildPropList @ 0x140085418 (_BuildPropList.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserBuildPropList(__int64 a1, unsigned int a2, char *a3, int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(BugCheckParameter3, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v11 = PtiCurrent(v9, v8);
    Win32HM_LockIntoThread<0>((__int64)v11, v10, BugCheckParameter3);
    if ( a2 )
    {
      v13 = BuildPropList(v10, a3, a2, a4);
      v16 = PtiCurrent(v15, v14);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v16, BugCheckParameter3);
    }
    else
    {
      v13 = -1073741816;
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v12);
    }
  }
  else
  {
    v13 = -1073741816;
  }
  UserSessionSwitchLeaveCrit();
  return v13;
}
