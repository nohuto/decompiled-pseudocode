/*
 * XREFs of xxxDwmStopRedirection @ 0x1402B38D0
 * Callers:
 *     NtUserDwmKernelShutdown @ 0x140294400 (NtUserDwmKernelShutdown.c)
 * Callees:
 *     GreDwmUseDeviceBitmaps @ 0x140014E60 (GreDwmUseDeviceBitmaps.c)
 *     DeleteOrSetRedirectionBitmap @ 0x14002D5F8 (DeleteOrSetRedirectionBitmap.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x140042630 (xxxRedrawWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x140092FE8 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     _GetProcessWindowStation @ 0x1401038C0 (_GetProcessWindowStation.c)
 *     zzzDecomposeDesktop @ 0x140131E78 (zzzDecomposeDesktop.c)
 *     bSetDevDragRect @ 0x1401D7390 (bSetDevDragRect.c)
 *     StopFade @ 0x1401EE440 (StopFade.c)
 *     ChangeComposableCursor @ 0x14020E090 (ChangeComposableCursor.c)
 *     DwmAsyncDesktopFree @ 0x140211784 (DwmAsyncDesktopFree.c)
 *     GreDwmShutdown @ 0x140264BB4 (GreDwmShutdown.c)
 *     DwmNotifyChildrenAddRemove @ 0x14026B47C (DwmNotifyChildrenAddRemove.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     GreDxDwmShutdown @ 0x1403255B4 (GreDxDwmShutdown.c)
 */

__int64 __fastcall xxxDwmStopRedirection(int a1)
{
  __int64 ProcessWindowStation; // rbp
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 i; // rsi
  __int64 **v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdx
  void *v25; // rax
  HSURF v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 j; // rbx
  struct tagWND *v36; // rsi
  struct tagTHREADINFO *v37; // rax
  __int64 v38; // rdx
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF
  char v41; // [rsp+58h] [rbp+10h] BYREF

  ProcessWindowStation = GetProcessWindowStation(0LL);
  v4 = 0;
  if ( (unsigned int)IsDwmApiPortRegistered()
    && (v5 = *(_DWORD *)(ProcessWindowStation + 64) & 0x204, (_DWORD)v5 == 512) )
  {
    UserSessionState = W32GetUserSessionState(v3, v5);
    LOBYTE(BugCheckParameter3[0]) = 0;
    BugCheckParameter3[1] = 0LL;
    ++*(_DWORD *)(UserSessionState + 70856);
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)BugCheckParameter3, v7);
    if ( *(_QWORD *)(W32GetUserSessionState(v9, v8) + 43040) )
      StopFade(v11, v10);
    v12 = W32GetUserSessionState(v11, v10);
    bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v12 + 57008) + 48LL), 0LL, 0LL, 0);
    if ( *(_DWORD *)(W32GetUserSessionState(v14, v13) + 36352) )
    {
      ChangeComposableCursor(0LL, v15);
      *(_DWORD *)(W32GetUserSessionState(v18, v17) + 36352) = 0;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19200) )
    {
      v20 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 19200);
      for ( i = *(_QWORD *)(*(_QWORD *)(v20 + 40) + 16LL); i; i = *(_QWORD *)(i + 32) )
      {
        v20 = **(_QWORD **)(i + 8);
        if ( (*(_DWORD *)(v20 + 64) & 1) != 0 )
        {
          zzzDecomposeDesktop((struct tagDESKTOP *)i, a1);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i, 0);
          v22 = *(__int64 ***)(i + 8);
          v23 = **v22;
          v25 = (void *)ReferenceDwmApiPort(*v22, v24);
          DwmAsyncDesktopFree(v25, v23);
        }
      }
      v26 = *(HSURF *)(ProcessWindowStation + 120);
      if ( v26 )
      {
        v27 = W32GetUserSessionState(v20, v19);
        DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 19200) + 8LL) + 24LL), v26, 1);
      }
    }
    v28 = W32GetUserSessionState(v20, v19);
    GreDwmShutdown(*(Gre::Base **)(*(_QWORD *)(v28 + 57008) + 48LL));
    *(_DWORD *)(ProcessWindowStation + 64) &= ~0x200u;
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)BugCheckParameter3);
    zzzEndDeferWinEventNotify();
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      LOBYTE(v29) = 1;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v41, v29);
      GreDxDwmShutdown();
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v41);
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v30, v29) + 19200) )
    {
      v34 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 19200);
      for ( j = *(_QWORD *)(*(_QWORD *)(v34 + 40) + 16LL); j; j = *(_QWORD *)(j + 32) )
      {
        if ( (*(_DWORD *)(j + 48) & 8) == 0 )
        {
          v36 = *(struct tagWND **)(*(_QWORD *)(j + 8) + 24LL);
          if ( v36 )
          {
            v37 = PtiCurrent(v34, v33);
            Win32HM_LockIntoThread<1>((__int64)v37, (__int64)v36, (__int64 *)BugCheckParameter3);
            GreDwmUseDeviceBitmaps();
            xxxRedrawWindow(v36, 0LL, 0LL, 133);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v38);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v4;
}
