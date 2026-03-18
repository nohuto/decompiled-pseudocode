/*
 * XREFs of ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x140092FE8
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x140089FBC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxCreateCaret @ 0x140091710 (xxxCreateCaret.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x140091BD8 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x140092EAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x140092F08 (-zzzShowCursor@@YAH_N@Z.c)
 *     EditionEndDeferWinEventNotify @ 0x140092FD0 (EditionEndDeferWinEventNotify.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400949E4 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzLockWindowUpdate2 @ 0x140097CA0 (zzzLockWindowUpdate2.c)
 *     zzzEnableDwmPointerSupport @ 0x1401320A8 (zzzEnableDwmPointerSupport.c)
 *     xxxAddShadow @ 0x14015CF84 (xxxAddShadow.c)
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     xxxHardErrorControl @ 0x140216A70 (xxxHardErrorControl.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzReattachThreads @ 0x140237EEC (zzzReattachThreads.c)
 *     NtUserSetImeOwnerWindow @ 0x140246430 (NtUserSetImeOwnerWindow.c)
 *     NtUserSetShellWindowEx @ 0x140246970 (NtUserSetShellWindowEx.c)
 *     xxxScrollWindowEx @ 0x140258878 (xxxScrollWindowEx.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x14028A884 (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 *     xxxDwmStopRedirection @ 0x1402B38D0 (xxxDwmStopRedirection.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1402B452C (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402C1A28 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 * Callees:
 *     xxxFlushDeferredWindowEvents @ 0x140093130 (xxxFlushDeferredWindowEvents.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void zzzEndDeferWinEventNotify(void)
{
  unsigned int DLT; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  char *v3; // rbx
  __int64 v4; // rdx
  int v5; // edi
  tagDomLock *v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *CurrentThreadNonPaged; // rax
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v16; // [rsp+28h] [rbp-40h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]
  char v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+40h] [rbp-28h]
  char v20; // [rsp+48h] [rbp-20h]

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v16 = 1;
  v18 = 0;
  v3 = &v16;
  v17 = W32GetUserSessionState(v2, v1) + 42424;
  v19 = 0LL;
  v5 = 0;
  v20 = 0;
  do
  {
    v6 = (tagDomLock *)*((_QWORD *)v3 - 1);
    if ( v6 )
    {
      if ( *v3 )
        tagDomLock::LockExclusive(v6);
      else
        tagDomLock::LockShared(v6);
    }
    ++v5;
    v3 += 16;
  }
  while ( !v5 );
  v20 = 1;
  UserSessionState = W32GetUserSessionState(v6, v4);
  if ( (*(_DWORD *)(UserSessionState + 70856))-- == 1 )
  {
    v11 = W32GetUserSessionState(v9, v8);
    if ( *(_QWORD *)(v11 + 70864) != v11 + 70864 )
    {
      CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v13, v12);
      if ( CurrentThreadNonPaged )
      {
        if ( *CurrentThreadNonPaged )
          xxxFlushDeferredWindowEvents();
      }
    }
  }
  if ( v20 && DomainLockRef )
  {
    if ( v16 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
}
