/*
 * XREFs of ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x14015DA6C
 * Callers:
 *     NtUserDestroyDCompositionHwndTarget @ 0x14015DA00 (NtUserDestroyDCompositionHwndTarget.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x14015EC74 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall DetachWindowCompositionTarget(HWND a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  PETHREAD **v7; // rdi
  unsigned int v8; // ebx
  __int64 v10; // rcx
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = (PETHREAD **)v5;
  if ( v5 && (v6 = *(_QWORD *)(v5 + 40), (((*(_WORD *)(v6 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v10);
    if ( CurrentProcess == PsGetThreadProcess(*v7[2]) )
      v8 = (unsigned int)_DetachWindowCompositionTarget((struct tagWND *)v7, a2) == 0 ? 0xC0000225 : 0;
    else
      v8 = -1073741790;
    v14 = PtiCurrent(v13, v12);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v14, BugCheckParameter3);
  }
  else
  {
    v8 = -1073741823;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
