/*
 * XREFs of zzzInternalDestroyCaret @ 0x140095744
 * Callers:
 *     xxxCreateCaret @ 0x140091710 (xxxCreateCaret.c)
 *     zzzDestroyCaret @ 0x140094F8C (zzzDestroyCaret.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024FA00 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     zzzInternalHideCaret @ 0x1400357EC (zzzInternalHideCaret.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

void __fastcall zzzInternalDestroyCaret(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rsi
  __int64 v3; // rbx
  __int64 *v4; // rdi
  struct tagWND *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = PtiCurrent(a1, a2);
  zzzInternalHideCaret();
  v3 = *((_QWORD *)v2 + 59);
  v4 = (__int64 *)(v3 + 344);
  if ( *(_QWORD *)(v3 + 392) )
  {
    FindTimer(*v4, 0xFFFFLL, 2u, 1, 0LL);
    *(_QWORD *)(v3 + 392) = 0LL;
  }
  *(_QWORD *)(v3 + 384) = 0LL;
  *(_DWORD *)(v3 + 356) = 0;
  v5 = (struct tagWND *)*v4;
  if ( *v4 )
  {
    Win32HM_LockIntoThread<1>((__int64)v2, *v4, (__int64 *)BugCheckParameter3);
    HMAssignmentUnlock(v4);
    UserSessionState = W32GetUserSessionState(v7, v6);
    xxxWindowEvent(0x8001u, v5, -8, 0, *(_DWORD *)(UserSessionState + 70856) != 0 ? 2 : 0);
    v11 = PtiCurrent(v10, v9);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v11, BugCheckParameter3);
  }
}
