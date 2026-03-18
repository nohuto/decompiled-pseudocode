/*
 * XREFs of ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@KPEAUCompositionObject@@@Z @ 0x1401AC6C4
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1401AC430 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1401AC828 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall AttachWindowCompositionTarget(HWND a1, unsigned int a2, struct CompositionObject *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  PETHREAD **v9; // rdi
  unsigned int v10; // ebx
  __int64 v12; // rcx
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = (PETHREAD **)v7;
  if ( v7 && (v8 = *(_QWORD *)(v7 + 40), (((*(_WORD *)(v8 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v12);
    if ( CurrentProcess == PsGetThreadProcess(*v9[2]) )
      v10 = _AttachWindowCompositionTarget((struct tagWND *)v9, a2, a3);
    else
      v10 = -1073741790;
    v16 = PtiCurrent(v15, v14);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v16, BugCheckParameter3);
  }
  else
  {
    v10 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
