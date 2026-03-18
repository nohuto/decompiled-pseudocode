/*
 * XREFs of RecreateRedirectionBitmap @ 0x140039394
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     UpdateWindowMonitor @ 0x140045CB0 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x14015E100 (NtUserHwndQueryRedirectionInfo.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z @ 0x140285138 (-RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x140285640 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x14002CDD0 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x14002D5F8 (DeleteOrSetRedirectionBitmap.c)
 *     HintSpriteShape @ 0x14002D818 (HintSpriteShape.c)
 *     ChangeRedirectionParentInDCEs @ 0x14002D8C0 (ChangeRedirectionParentInDCEs.c)
 *     GetRedirectionFlags @ 0x140036778 (GetRedirectionFlags.c)
 *     GreAdjustSpriteDirtyAccum @ 0x140039684 (GreAdjustSpriteDirtyAccum.c)
 *     GreNotifyDirtySprite @ 0x140039920 (GreNotifyDirtySprite.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140039ADC (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x14003A1C4 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     GetRedirectionBitmap @ 0x140063BA0 (GetRedirectionBitmap.c)
 *     IsDesktopWindow @ 0x140075580 (IsDesktopWindow.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall RecreateRedirectionBitmap(struct tagWND *a1, LONG a2, int a3, int a4, int a5, Gre::Base **a6)
{
  int v8; // r13d
  __int64 v9; // rcx
  Gre::Base *RedirectionBitmap; // rsi
  int v11; // ebx
  int v12; // eax
  Gre::Base *v13; // r14
  unsigned int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 UserSessionState; // rax
  __int64 v22; // rdx
  bool v23; // zf
  LONG x; // r13d
  __int64 v25; // rcx
  HWND v26; // rbx
  LONG v27; // eax
  __int64 v28; // rax
  struct _POINTL v30; // [rsp+40h] [rbp-89h] BYREF
  int v31; // [rsp+48h] [rbp-81h]
  int v32; // [rsp+4Ch] [rbp-7Dh]
  int v33; // [rsp+50h] [rbp-79h]
  struct _POINTL v34; // [rsp+58h] [rbp-71h] BYREF
  struct tagBITMAP v35; // [rsp+60h] [rbp-69h] BYREF
  struct tagBITMAP v36; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v37[32]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-9h]
  struct _RECTL v39; // [rsp+C8h] [rbp-1h] BYREF

  v32 = a3;
  v30.x = a2;
  v34 = 0LL;
  memset(&v36, 0, sizeof(v36));
  memset(&v35, 0, sizeof(v35));
  v8 = IsDesktopWindow(a1);
  v31 = 0;
  v33 = 0;
  RedirectionBitmap = (Gre::Base *)GetRedirectionBitmap(v9);
  SURFREF::SURFREF((SURFREF *)v37, (HSURF)RedirectionBitmap);
  if ( v38 )
    v11 = *(_DWORD *)(v38 + 112) & 0x800000;
  else
    v11 = 0;
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v37);
  if ( v11 && a4 && !v8 )
  {
    if ( a6 )
      *a6 = 0LL;
    return 0LL;
  }
  v12 = CreateOrGetRedirectionBitmap(a1, 1, a5, (HSURF *)&v34);
  v13 = (Gre::Base *)v34;
  v14 = v12;
  if ( v12 >= 0 )
  {
    if ( (unsigned int)SetRedirectionBitmap(a1, *(HBITMAP *)&v34, 0) )
      goto LABEL_6;
    DeleteOrSetRedirectionBitmap((__int64)a1, (HSURF)v13, 1);
    v14 = -1073741801;
  }
  SetRedirectionBitmap(a1, 0LL, 0);
  v33 = 1;
LABEL_6:
  if ( v13 && !v8 )
  {
    if ( RedirectionBitmap )
    {
      GreExtGetObjectW(RedirectionBitmap, 32LL, &v36);
      v31 = 1;
    }
    GreExtGetObjectW(v13, 32LL, &v35);
  }
  if ( (GetRedirectionFlags((__int64)a1, v15) & 1) != 0
    && (v18 = W32GetUserSessionState(v17, v16),
        HintSpriteShape(*(HDEV *)(*(_QWORD *)(v18 + 57008) + 48LL), a1, 0LL, v8 == 0 ? 2 : 0),
        v13) )
  {
    UserSessionState = W32GetUserSessionState(v20, v19);
    HintSpriteShape(*(HDEV *)(*(_QWORD *)(UserSessionState + 57008) + 48LL), a1, (HBITMAP)v13, v8 == 0 ? 2 : 0);
    v23 = v8 == 0;
    x = v30.x;
    if ( v23 )
    {
      v25 = *((_QWORD *)a1 + 5);
      v26 = *(HWND *)a1;
      v34.x = *(_DWORD *)(v25 + 88);
      v27 = *(_DWORD *)(v25 + 92);
      v39.left = 0;
      v39.top = 0;
      v34.y = v27;
      v39.right = v35.bmWidth;
      v39.bottom = v35.bmHeight;
      v30.x = -v30.x;
      v30.y = -v32;
      v28 = W32GetUserSessionState(v25, v22);
      GreAdjustSpriteDirtyAccum(*(HDEV *)(*(_QWORD *)(v28 + 57008) + 48LL), v26, &v39, &v30, &v34);
    }
  }
  else
  {
    x = v30.x;
  }
  if ( v31 )
  {
    BltOldRedirectionBitsToNewBitmap(a1, (HBITMAP)RedirectionBitmap, (HBITMAP)v13, &v36, &v35, x, v32);
    GreNotifyDirtySprite(*(HWND *)a1);
  }
  ChangeRedirectionParentInDCEs((__int64)a1);
  if ( a6 )
  {
    *a6 = RedirectionBitmap;
  }
  else if ( RedirectionBitmap )
  {
    DeleteOrSetRedirectionBitmap((__int64)a1, (HSURF)RedirectionBitmap, 1);
  }
  return v14;
}
