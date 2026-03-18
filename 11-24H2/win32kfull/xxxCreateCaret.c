/*
 * XREFs of xxxCreateCaret @ 0x140091710
 * Callers:
 *     NtUserCreateCaret @ 0x1401D2340 (NtUserCreateCaret.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsWindowBeingDestroyed @ 0x1400911AC (IsWindowBeingDestroyed.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x140092FE8 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     zzzInternalDestroyCaret @ 0x140095744 (zzzInternalDestroyCaret.c)
 */

__int64 __fastcall xxxCreateCaret(struct tagWND *a1, Gre::Base *a2, int a3, int a4)
{
  struct tagTHREADINFO *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  unsigned int v13; // eax
  unsigned int ThreadId; // eax
  int v15; // ecx
  int v16; // eax
  _QWORD v18[2]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v19[8]; // [rsp+40h] [rbp-38h] BYREF

  memset(v19, 0, sizeof(v19));
  v8 = PtiCurrent((__int64)a1, (__int64)a2);
  v9 = *((_QWORD *)v8 + 59);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) != v9 || (unsigned int)IsWindowBeingDestroyed((__int64)a1) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v11, v10);
  ++*(_DWORD *)(UserSessionState + 70856);
  if ( *(_QWORD *)(v9 + 344) )
  {
    zzzInternalDestroyCaret();
    v9 = *((_QWORD *)v8 + 59);
  }
  v18[1] = a1;
  v18[0] = v9 + 344;
  HMAssignmentLock(v18, 0LL);
  v13 = *(_DWORD *)(v9 + 352) & 0xFFFFFFFE;
  *(_DWORD *)(v9 + 356) = 1;
  *(_DWORD *)(v9 + 352) = v13 | 2;
  ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v8);
  *(_QWORD *)(v9 + 384) = a2;
  *(_DWORD *)(v9 + 400) = ThreadId;
  v15 = 1;
  v16 = 1;
  if ( a4 )
    v16 = a4;
  if ( a3 )
    v15 = a3;
  if ( (unsigned __int64)a2 > 1 )
  {
    GreExtGetObjectW(a2, 32LL, v19);
    v16 = v19[2];
    v15 = v19[1];
  }
  *(_QWORD *)(v9 + 392) = 0LL;
  *(_DWORD *)(v9 + 372) = v16;
  *(_DWORD *)(v9 + 376) = v15;
  zzzEndDeferWinEventNotify();
  xxxWindowEvent(0x8000u, a1, -8, 0, 0);
  return 1LL;
}
