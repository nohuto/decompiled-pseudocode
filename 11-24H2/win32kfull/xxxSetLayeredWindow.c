/*
 * XREFs of xxxSetLayeredWindow @ 0x140090DC8
 * Callers:
 *     ComposeWindow @ 0x1400316A8 (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401EDE40 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     UpdateWindowSpriteMonitor @ 0x140025828 (UpdateWindowSpriteMonitor.c)
 *     CreateVisRgnTracker @ 0x140030A08 (CreateVisRgnTracker.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x140031010 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     DwmAsyncChildStyleChange @ 0x140032044 (DwmAsyncChildStyleChange.c)
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14004083C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     xxxRedrawWindow @ 0x140042630 (xxxRedrawWindow.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14004544C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x14006E488 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x140073A04 (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncTextChange @ 0x140073A54 (DwmAsyncTextChange.c)
 *     TrackLayeredZorder @ 0x140075130 (TrackLayeredZorder.c)
 *     UserGetRedirectedWindowOrigin @ 0x140075480 (UserGetRedirectedWindowOrigin.c)
 *     IsDesktopWindow @ 0x140075580 (IsDesktopWindow.c)
 *     IsWindowBeingDestroyed @ 0x1400911AC (IsWindowBeingDestroyed.c)
 *     CreateSprite @ 0x1400911EC (CreateSprite.c)
 *     SendDwmIconChange @ 0x140091358 (SendDwmIconChange.c)
 *     GreUpdateSpriteClipRgn @ 0x1400914A8 (GreUpdateSpriteClipRgn.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1401BC7BC (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     GreGetSprite @ 0x1401F89EC (GreGetSprite.c)
 *     xxxUpdateWindows @ 0x1402166C8 (xxxUpdateWindows.c)
 */

__int64 __fastcall xxxSetLayeredWindow(struct tagWND *a1, int a2, __int64 *a3)
{
  int v3; // ebx
  struct tagWND *TopLevelWindow; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 UserSessionState; // rax
  __int64 result; // rax
  unsigned int updated; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  HRGN ExplicitClipRgn; // r14
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  void *v27; // rax
  __int64 DCEx; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  HDC v31; // rbx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 RectRgnIndirect; // rax
  struct tagWND *v35; // rbx
  HRGN v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 Sprite; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdi
  int v46; // ebx
  void *v47; // rax
  struct tagSIZE v48; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v50; // [rsp+B0h] [rbp+40h] BYREF
  int v51; // [rsp+B8h] [rbp+48h] BYREF
  int v52; // [rsp+BCh] [rbp+4Ch]

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)a1);
  if ( TopLevelWindow
    && (TopLevelWindow == a1
     || *((_WORD *)a1 + 128) >= 0x602u
     || IsChildWindowDpiIsolationEnabled(a1, *((struct tagWND **)a1 + 13)) && IsChildWindowDpiBoundary(a1)) )
  {
    v3 = 1;
  }
  LOBYTE(v8) = IsDesktopWindow((__int64)a1);
  if ( (!v8 || !(unsigned int)IsWindowDesktopComposed(v10)) && !v3 )
    return 2151546883LL;
  v11 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
  if ( (v11 & 2) == 0 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(a1) )
    {
      v14 = *((_QWORD *)a1 + 5);
      UserSessionState = W32GetUserSessionState(v13, v12);
      result = CreateSprite(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL), a1, v14 + 88, a3);
      updated = result;
      if ( (int)result >= 0 )
      {
        SetOrClrWF(1, a1, 0xA08u, 1);
        CreateVisRgnTracker(a1, 1);
        TrackLayeredZorder(a1);
        if ( IsTopLevelWindow((__int64)a1) )
        {
          ExplicitClipRgn = tagWND::GetExplicitClipRgn(a1);
          if ( ExplicitClipRgn )
          {
            v21 = *(_QWORD *)a1;
            v22 = W32GetUserSessionState(v19, v18);
            GreUpdateSpriteClipRgn(*(_QWORD *)(*(_QWORD *)(v22 + 57008) + 48LL), v21, ExplicitClipRgn, 0LL);
          }
        }
        v23 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
        UpdateWindowSpriteMonitor((__int64 *)a1, v23);
        if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
        {
          SendDwmIconChange(a1);
          v24 = *(_QWORD *)a1;
          v27 = (void *)ReferenceDwmApiPort(v26, v25);
          DwmAsyncTextChange(v27, v24);
        }
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)BugCheckParameter3);
        zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 17LL, 0LL);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)BugCheckParameter3);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 && a2 )
        {
          DCEx = _GetDCEx(*((_QWORD *)a1 + 13), 0LL, 3LL);
          v31 = (HDC)DCEx;
          if ( DCEx )
          {
            v32 = *((_QWORD *)a1 + 5);
            v50 = 0LL;
            BugCheckParameter3[0] = *(_QWORD *)(v32 + 88);
            v48.cx = *(_DWORD *)(v32 + 96) - *(_DWORD *)(v32 + 88);
            v48.cy = *(_DWORD *)(v32 + 100) - *(_DWORD *)(v32 + 92);
            UserGetRedirectedWindowOrigin(DCEx, (__int64)&v50);
            v33 = *((_QWORD *)a1 + 5);
            v51 = *(_DWORD *)(v33 + 88) - v50;
            v52 = *(_DWORD *)(v33 + 92) - HIDWORD(v50);
            updated = zzzUpdateLayeredWindow(
                        a1,
                        (__int64)v31,
                        (const struct tagPOINT *)BugCheckParameter3,
                        &v48,
                        v31,
                        (__int64)&v51,
                        0,
                        0LL,
                        0xCu,
                        0LL);
            _ReleaseDC(v31);
          }
          RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL, v29, v30);
          v35 = (struct tagWND *)*((_QWORD *)a1 + 13);
          v36 = (HRGN)RectRgnIndirect;
          BugCheckParameter3[1] = 0LL;
          BugCheckParameter3[0] = -1LL;
          if ( v35 )
          {
            Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, (__int64)v35);
            GreOffsetRgn(
              v36,
              (unsigned int)-*(_DWORD *)(*((_QWORD *)v35 + 5) + 104LL),
              (unsigned int)-*(_DWORD *)(*((_QWORD *)v35 + 5) + 108LL));
          }
          xxxRedrawWindow(v35, 0LL, (__int64)v36, 133);
          if ( v35 )
            Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v37);
          xxxUpdateWindows(a1, v36);
          GreDeleteObject(v36);
          Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v38);
        }
        return updated;
      }
      return result;
    }
    return 2151546883LL;
  }
  v39 = *(_QWORD *)a1;
  v40 = W32GetUserSessionState(v11, v9);
  Sprite = GreGetSprite(*(_QWORD *)(*(_QWORD *)(v40 + 57008) + 48LL), v39);
  v43 = *((_QWORD *)a1 + 5);
  *(_DWORD *)(v43 + 232) &= ~2u;
  *((_DWORD *)a1 + 95) |= 0x8000u;
  if ( a3 )
    *a3 = Sprite;
  v44 = *((_QWORD *)a1 + 5);
  v45 = *(_QWORD *)a1;
  v46 = *(_DWORD *)(v44 + 232);
  v47 = (void *)ReferenceDwmApiPort(v43, v42);
  DwmAsyncChildStyleChange(v47, v45, -268435456, v46);
  return 0LL;
}
