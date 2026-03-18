/*
 * XREFs of zzzLockWindowUpdate2 @ 0x140097CA0
 * Callers:
 *     NtUserLockWindowUpdate @ 0x14020A3A0 (NtUserLockWindowUpdate.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1402337EC (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14024A45C (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     SpbCheck @ 0x14002D9F4 (SpbCheck.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxInternalInvalidate @ 0x1400428C0 (xxxInternalInvalidate.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x140092FE8 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     FreeSpb @ 0x1400979B0 (FreeSpb.c)
 *     SpbCheckPwnd @ 0x140098004 (SpbCheckPwnd.c)
 *     CreateSpb @ 0x1400980B0 (CreateSpb.c)
 */

__int64 __fastcall zzzLockWindowUpdate2(struct tagWND *a1, __int64 a2)
{
  int v2; // edi
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _BOOL8 v12; // rcx
  int v14; // ecx
  __int64 UserSessionState; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct tagWND *DesktopWindow; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct tagTHREADINFO *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct tagWND *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  char *i; // rbx
  BOOL v47; // esi
  _QWORD v48[2]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  v4 = PtiCurrent((__int64)a1, a2);
  if ( (*(_DWORD *)(W32GetUserSessionState(v6, v5) + 67056) & 0x20000000) != 0
    || *(_QWORD *)(W32GetUserSessionState(v8, v7) + 63280)
    && *(struct tagTHREADINFO **)(W32GetUserSessionState(v10, v9) + 63280) != v4
    && !v2 )
  {
    v14 = 1440;
    goto LABEL_9;
  }
  v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 63280) != 0LL;
  if ( (a1 != 0LL) == v12 )
  {
    if ( v2 )
      return 0LL;
    v14 = 87;
LABEL_9:
    UserSetLastError(v14);
    return 0LL;
  }
  UserSessionState = W32GetUserSessionState(v12, v11);
  ++*(_DWORD *)(UserSessionState + 70856);
  v18 = W32GetUserSessionState(v17, v16);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v18 + 57008) + 48LL));
  if ( a1 )
  {
    SpbCheckPwnd(a1);
    CreateSpb(a1, 2LL, 0LL);
    v48[1] = a1;
    v48[0] = W32GetUserSessionState(v20, v19) + 57016;
    HMAssignmentLock(v48, 0LL);
    *(_QWORD *)(W32GetUserSessionState(v22, v21) + 63280) = v4;
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1LL, 0LL);
  }
  else
  {
    SpbCheck();
    v35 = *(struct tagWND **)(W32GetUserSessionState(v34, v33) + 57016);
    Win32HM_LockIntoThread<1>((__int64)v4, (__int64)v35, (__int64 *)BugCheckParameter3);
    *(_QWORD *)(W32GetUserSessionState(v37, v36) + 63280) = 0LL;
    v40 = W32GetUserSessionState(v39, v38);
    HMAssignmentUnlock(v40 + 57016);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v35, 1LL, 0LL);
    v41 = 1LL;
    v45 = *(_QWORD *)(W32GetUserSessionState(v43, v42) + 57008);
    for ( i = *(char **)(v45 + 40); i; i = *(char **)i )
    {
      if ( (*((_DWORD *)i + 12) & 2) != 0 )
      {
        if ( *((_QWORD *)i + 5) )
        {
          v41 = *(_QWORD *)(W32GetUserSessionState(v45, v44) + 43128);
          SetRectRgnIndirect(v41, i + 24);
          v47 = GreCombineRgn(v41, v41, *((_QWORD *)i + 5), 4LL) != 1;
        }
        else
        {
          v47 = 0;
        }
        FreeSpb(i, v44);
        if ( !v47 )
          goto LABEL_16;
        break;
      }
    }
    DesktopWindow = v35;
    if ( v35 )
    {
      while ( (*(_BYTE *)(*((_QWORD *)DesktopWindow + 5) + 26LL) & 8) == 0 )
      {
        DesktopWindow = (struct tagWND *)*((_QWORD *)DesktopWindow + 13);
        if ( !DesktopWindow )
          goto LABEL_14;
      }
      if ( DesktopWindow != v35 && (*(_WORD *)(*((_QWORD *)DesktopWindow + 5) + 42LL) & 0x2FFF) == 0x29D )
        goto LABEL_14;
    }
    if ( !DesktopWindow )
LABEL_14:
      DesktopWindow = (struct tagWND *)GetDesktopWindow((__int64)v35);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v48);
    v28 = W32GetUserSessionState(v27, v26);
    ++*(_DWORD *)(v28 + 70856);
    xxxInternalInvalidate(DesktopWindow, (HRGN)v41, 0x10485u);
    zzzEndDeferWinEventNotify();
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v48);
LABEL_16:
    SpbCheckPwnd(v35);
    v31 = PtiCurrent(v30, v29);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v31, BugCheckParameter3);
  }
  v32 = W32GetUserSessionState(v24, v23);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v32 + 57008) + 48LL));
  zzzEndDeferWinEventNotify();
  return 1LL;
}
