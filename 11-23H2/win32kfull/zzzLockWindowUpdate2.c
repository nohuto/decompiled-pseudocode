/*
 * XREFs of zzzLockWindowUpdate2 @ 0x1C008B518
 * Callers:
 *     NtUserLockWindowUpdate @ 0x1C00137C0 (NtUserLockWindowUpdate.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00A5054 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EE188 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     FreeSpb @ 0x1C000C170 (FreeSpb.c)
 *     CreateSpb @ 0x1C000DCF4 (CreateSpb.c)
 *     SpbCheckPwnd @ 0x1C00138FC (SpbCheckPwnd.c)
 *     SpbCheck @ 0x1C0015958 (SpbCheck.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004E3A0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInternalInvalidate @ 0x1C004FB80 (xxxInternalInvalidate.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00B7028 (zzzEndDeferWinEventNotify.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     GetStyleWindow @ 0x1C01199B0 (GetStyleWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzLockWindowUpdate2(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  struct tagWND *v5; // rdi
  __int64 v6; // rbp
  char *i; // rbx
  __int64 v8; // rdx
  struct tagWND *StyleWindow; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  BOOL v15; // esi
  _QWORD v16[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h]
  char v19; // [rsp+80h] [rbp+18h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  if ( (gdwPUDFlags & 0x20000000) != 0 || gptiLockUpdate && gptiLockUpdate != gptiCurrent && !a2 )
  {
    v14 = 1440LL;
    goto LABEL_20;
  }
  if ( (a1 != 0LL) == (gptiLockUpdate != 0LL) )
  {
    if ( a2 )
      return 0LL;
    v14 = 87LL;
LABEL_20:
    UserSetLastError(v14);
    return 0LL;
  }
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( a1 )
  {
    SpbCheckPwnd(a1);
    CreateSpb(a1, 2, 0LL);
    v16[1] = a1;
    v16[0] = &gspwndLockUpdate;
    HMAssignmentLock(v16, 0LL);
    gptiLockUpdate = gptiCurrent;
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
  else
  {
    SpbCheck();
    v5 = (struct tagWND *)gspwndLockUpdate;
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    *((_QWORD *)&v17 + 1) = v5;
    if ( v5 )
      HMLockObject(v5);
    gptiLockUpdate = 0LL;
    HMAssignmentUnlock(&gspwndLockUpdate);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v5, 1, 0LL);
    v6 = 1LL;
    for ( i = *(char **)(gpDispInfo + 32LL); ; i = *(char **)i )
    {
      if ( !i )
        goto LABEL_15;
      if ( (*((_DWORD *)i + 12) & 2) != 0 )
        break;
    }
    if ( *((_QWORD *)i + 5) )
    {
      v6 = ghrgnSPB1;
      SetRectRgnIndirect(ghrgnSPB1, i + 24);
      v15 = GreCombineRgn(ghrgnSPB1, ghrgnSPB1, *((_QWORD *)i + 5), 4LL) != 1;
    }
    else
    {
      v15 = 0;
    }
    FreeSpb(i);
    if ( v15 )
    {
LABEL_15:
      StyleWindow = (struct tagWND *)GetStyleWindow(v5, 2568LL);
      if ( !StyleWindow )
        StyleWindow = (struct tagWND *)GetDesktopWindow(v5, v8);
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v19);
      ++gdwDeferWinEvent;
      xxxInternalInvalidate(StyleWindow, (HRGN)v6, 0x10485u);
      zzzEndDeferWinEventNotify(v10);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v19);
    }
    SpbCheckPwnd(v5);
    ThreadUnlock1(v12, v11, v13);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify(v4);
  return 1LL;
}
