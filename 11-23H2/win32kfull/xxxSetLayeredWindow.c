/*
 * XREFs of xxxSetLayeredWindow @ 0x1C00ABE84
 * Callers:
 *     ComposeWindow @ 0x1C0026348 (ComposeWindow.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1C00EF138 (xxxSetWindowStyle.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BB7B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     GreGetSprite @ 0x1C0013DD0 (GreGetSprite.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C00239AC (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0023A1C (GreUpdateSpriteClipRgn.c)
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     SendDwmIconChange @ 0x1C003F904 (SendDwmIconChange.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x1C004E1B4 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004E3A0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     DwmAsyncTextChange @ 0x1C00706B0 (DwmAsyncTextChange.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1C00850B0 (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     CreateSprite @ 0x1C00AB4E4 (CreateSprite.c)
 *     CreateVisRgnTracker @ 0x1C00ABD58 (CreateVisRgnTracker.c)
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     _GetTopLevelWindow @ 0x1C00AE7B0 (_GetTopLevelWindow.c)
 *     TrackLayeredZorder @ 0x1C00B2F78 (TrackLayeredZorder.c)
 *     IsDesktopWindow @ 0x1C00B3188 (IsDesktopWindow.c)
 *     UpdateWindowSpriteMonitor @ 0x1C00B32C0 (UpdateWindowSpriteMonitor.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C00B48E0 (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B4B3C (IsToplevelWindowDesktopComposed.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C01198D0 (UserGetRedirectedWindowOrigin.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BCF20 (zzzUpdateLayeredWindow.c)
 *     xxxUpdateWindows @ 0x1C0214920 (xxxUpdateWindows.c)
 */

__int64 __fastcall xxxSetLayeredWindow(struct tagWND **a1, int a2, __int64 *a3)
{
  int v3; // esi
  struct tagWND *TopLevelWindow; // rax
  Gre::Base *v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax
  unsigned int updated; // esi
  tagWND *v12; // rcx
  HRGN ExplicitClipRgn; // rax
  Gre::Base *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 Sprite; // rax
  __int64 v23; // rdx
  struct tagWND *v24; // rcx
  struct tagWND *v25; // rax
  __int64 v26; // rdi
  int v27; // ebx
  void *v28; // rax
  __int64 DCEx; // rax
  __int64 v30; // rbx
  struct tagWND *v31; // rcx
  __int64 RectRgnIndirect; // rax
  struct tagWND *v33; // rbx
  HRGN v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int128 v38; // [rsp+60h] [rbp-20h] BYREF
  __int64 v39; // [rsp+70h] [rbp-10h]
  __int64 v40; // [rsp+C0h] [rbp+40h] BYREF
  int v41; // [rsp+C8h] [rbp+48h] BYREF
  int v42; // [rsp+CCh] [rbp+4Ch]

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow(a1);
  if ( TopLevelWindow
    && (TopLevelWindow == (struct tagWND *)a1
     || *((_WORD *)a1 + 128) >= 0x602u
     || IsChildWindowDpiIsolationEnabled((struct tagWND *)a1, a1[13])
     && IsChildWindowDpiBoundary((const struct tagWND *)a1)) )
  {
    v3 = 1;
  }
  if ( (!(unsigned int)IsDesktopWindow(a1) || !(unsigned int)IsWindowDesktopComposed(v8)) && !v3 )
    return 2151546883LL;
  if ( (*((_DWORD *)a1[5] + 58) & 2) == 0 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(a1) )
    {
      result = CreateSprite(*(HDEV *)(gpDispInfo + 40LL), (__int64)a1, (struct tagRECT *)(v9 + 88), a3);
      updated = result;
      if ( (int)result >= 0 )
      {
        SetOrClrWF(1LL, a1, 2568LL, 1LL);
        CreateVisRgnTracker((struct tagWND *)a1, 1);
        TrackLayeredZorder((struct tagWND *)a1);
        if ( (unsigned int)IsTopLevelWindow(a1) )
        {
          ExplicitClipRgn = tagWND::GetExplicitClipRgn(v12);
          if ( ExplicitClipRgn )
            GreUpdateSpriteClipRgn(v14, (HWND)*a1, ExplicitClipRgn, 0);
        }
        v15 = ValidateHmonitorNoRip(*((_QWORD *)a1[5] + 32));
        UpdateWindowSpriteMonitor(a1, v15);
        if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
        {
          SendDwmIconChange((__int64 *)a1);
          v16 = (__int64)*a1;
          v19 = (void *)ReferenceDwmApiPort(v18, v17);
          DwmAsyncTextChange(v19, v16);
        }
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v40);
        zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 17, 0LL);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v40, v20, v21);
        if ( (*((_BYTE *)a1[5] + 31) & 0x10) != 0 && a2 )
        {
          DCEx = _GetDCEx(a1[13], 0LL, 3LL);
          v30 = DCEx;
          if ( DCEx )
          {
            v40 = 0LL;
            UserGetRedirectedWindowOrigin(DCEx, &v40);
            v31 = a1[5];
            v41 = *((_DWORD *)v31 + 22) - v40;
            v42 = *((_DWORD *)v31 + 23) - HIDWORD(v40);
            updated = zzzUpdateLayeredWindow((struct tagWND *)a1, v30, (__int64)&v41, 0, 0LL, 12, 0LL);
            _ReleaseDC(v30);
          }
          RectRgnIndirect = GreCreateRectRgnIndirect((char *)a1[5] + 88);
          v33 = a1[13];
          v34 = (HRGN)RectRgnIndirect;
          v39 = 0LL;
          v38 = 0LL;
          if ( v33 )
          {
            ThreadLock(v33, &v38);
            GreOffsetRgn(
              v34,
              (unsigned int)-*(_DWORD *)(*((_QWORD *)v33 + 5) + 104LL),
              (unsigned int)-*(_DWORD *)(*((_QWORD *)v33 + 5) + 108LL));
          }
          xxxRedrawWindow(v33, 0LL, (__int64)v34, 1157);
          if ( v33 )
            ThreadUnlock1(v36, v35, v37);
          xxxUpdateWindows((struct tagWND *)a1, v34);
          GreDeleteObject(v34);
        }
        return updated;
      }
      return result;
    }
    return 2151546883LL;
  }
  Sprite = GreGetSprite(v8, (HWND)*a1);
  v24 = a1[5];
  *((_DWORD *)v24 + 58) &= ~2u;
  *((_DWORD *)a1 + 80) |= 0x8000u;
  if ( a3 )
    *a3 = Sprite;
  v25 = a1[5];
  v26 = (__int64)*a1;
  v27 = *((_DWORD *)v25 + 58);
  v28 = (void *)ReferenceDwmApiPort(v24, v23);
  DwmAsyncChildStyleChange(v28, v26, -268435456, v27);
  return 0LL;
}
