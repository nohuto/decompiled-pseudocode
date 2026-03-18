/*
 * XREFs of ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400759F4
 * Callers:
 *     NtUserSetCursor @ 0x1400757B0 (NtUserSetCursor.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1402278F8 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140252880 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserHideCursorNoCapture @ 0x1402985B0 (NtUserHideCursorNoCapture.c)
 *     ?zzzSetMoveSizeCursor@MoveSizeApi@@YAXW4_MOVESIZE_OPERATION@@@Z @ 0x1402AA7D8 (-zzzSetMoveSizeCursor@MoveSizeApi@@YAXW4_MOVESIZE_OPERATION@@@Z.c)
 *     xxxDragObject @ 0x1402DF924 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1402E98E4 (xxxHelpLoop.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     zzzUpdateCursorImage @ 0x140075AF0 (zzzUpdateCursorImage.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     LockQCursor @ 0x140271870 (LockQCursor.c)
 */

struct tagCURSOR *__fastcall zzzSetCursor(struct tagCURSOR *a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rdx
  struct tagQ *v5; // rbx
  struct tagCURSOR *v6; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  if ( (*(_DWORD *)(v4 + 1360) & 0x8000000) != 0 )
    v4 = *(_QWORD *)(v4 + 1680);
  v5 = *(struct tagQ **)(v4 + 472);
  v6 = (struct tagCURSOR *)*((_QWORD *)v5 + 53);
  if ( v6 != a1 )
  {
    v6 = (struct tagCURSOR *)LockQCursor(v5, a1);
    if ( !*(_QWORD *)(W32GetUserSessionState(v9, v8) + 19232) )
      *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19232) = v5;
    if ( v5 == *(struct tagQ **)(W32GetUserSessionState(v11, v10) + 19232) )
    {
      v14 = PtiCurrent(v13, v12);
      Win32HM_LockIntoThread<1>((__int64)v14, (__int64)v6, (__int64 *)BugCheckParameter3);
      zzzUpdateCursorImage();
      v17 = PtiCurrent(v16, v15);
      return (struct tagCURSOR *)Win32HM_UnlockFromThread<1>((ULONG_PTR)v17, BugCheckParameter3);
    }
  }
  return v6;
}
