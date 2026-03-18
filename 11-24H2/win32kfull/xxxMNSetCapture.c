/*
 * XREFs of xxxMNSetCapture @ 0x14026533C
 * Callers:
 *     xxxMNStartMenu @ 0x14009A980 (xxxMNStartMenu.c)
 *     xxxMNEndMenuStateInternal @ 0x14009AEB0 (xxxMNEndMenuStateInternal.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxMNKeyDown @ 0x1402BE09C (xxxMNKeyDown.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x140089FBC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 */

void __fastcall xxxMNSetCapture(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = PtiCurrent(a1, a2);
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(
    BugCheckParameter3,
    *(_QWORD *)(**(_QWORD **)a1 + 8LL));
  xxxCapture(v4, *(struct tagWND **)(**(_QWORD **)a1 + 8LL), 4);
  v7 = PtiCurrent(v6, v5);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v7, BugCheckParameter3);
  *(_DWORD *)(*((_QWORD *)v4 + 59) + 436LL) |= 0x100000u;
  *(_DWORD *)(a2 + 8) |= 0x40000u;
  if ( *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18944) )
  {
    v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 18944);
    if ( *(_QWORD *)(v13 + 120) )
    {
      v15 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 18944);
      if ( *(struct tagTHREADINFO **)(*(_QWORD *)(v15 + 120) + 16LL) == v4 )
      {
        UserSessionState = W32GetUserSessionState(v15, v14);
        xxxWindowEvent(0x80000004, *(struct tagWND **)(*(_QWORD *)(UserSessionState + 18944) + 120LL), 0, 1u, 33);
      }
    }
  }
}
