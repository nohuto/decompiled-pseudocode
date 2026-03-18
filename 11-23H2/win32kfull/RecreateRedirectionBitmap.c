/*
 * XREFs of RecreateRedirectionBitmap @ 0x1C00229DC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00A47A4 (zzzUpdateWindowsAfterModeChange.c)
 *     UpdateWindowMonitor @ 0x1C00B0F70 (UpdateWindowMonitor.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F6650 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01541B0 (NtUserHwndQueryRedirectionInfo.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01BC6F0 (UserRecreateRedirectionBitmap.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BCF20 (zzzUpdateLayeredWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EE188 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     GreAdjustSpriteDirtyAccum @ 0x1C000ABB0 (GreAdjustSpriteDirtyAccum.c)
 *     GreNotifyDirtySprite @ 0x1C000B1A0 (GreNotifyDirtySprite.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00103B8 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C002292C (ChangeRedirectionParentInDCEs.c)
 *     GetRedirectionFlags @ 0x1C0022CB0 (GetRedirectionFlags.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C002433C (DeleteOrSetRedirectionBitmap.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0024A64 (CreateOrGetRedirectionBitmap.c)
 *     GreExtGetObjectW @ 0x1C004B0D0 (GreExtGetObjectW.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004CC34 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C007E42C (--1SURFREF@@QEAA@XZ.c)
 *     HintSpriteShape @ 0x1C00B2ED8 (HintSpriteShape.c)
 *     IsDesktopWindow @ 0x1C00B3188 (IsDesktopWindow.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00B51AC (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     GetRedirectionBitmap @ 0x1C011E440 (GetRedirectionBitmap.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall RecreateRedirectionBitmap(struct tagWND *a1, LONG a2, int a3, int a4, unsigned int a5, HSURF *a6)
{
  int v8; // r13d
  __int64 v9; // rcx
  HSURF RedirectionBitmap; // rsi
  int v11; // eax
  HBITMAP v12; // rbx
  unsigned int v13; // r12d
  __int64 v14; // r9
  LONG x; // r15d
  bool v16; // zf
  int v17; // r13d
  __int64 v18; // rcx
  HWND v19; // rdx
  LONG v20; // eax
  int v21; // ebx
  struct _POINTL v24; // [rsp+48h] [rbp-81h] BYREF
  int v25; // [rsp+50h] [rbp-79h]
  int v26; // [rsp+54h] [rbp-75h]
  struct _POINTL v27; // [rsp+58h] [rbp-71h] BYREF
  struct tagBITMAP v28; // [rsp+60h] [rbp-69h] BYREF
  struct tagBITMAP v29; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v30[32]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-9h]
  struct _RECTL v32; // [rsp+C8h] [rbp-1h] BYREF

  v24.x = a2;
  v27 = 0LL;
  memset(&v29, 0, sizeof(v29));
  memset(&v28, 0, sizeof(v28));
  v8 = IsDesktopWindow(a1);
  v25 = 0;
  v26 = 0;
  RedirectionBitmap = (HSURF)GetRedirectionBitmap(v9);
  SURFREF::SURFREF((SURFREF *)v30, RedirectionBitmap);
  if ( !v31 )
  {
    SURFREF::~SURFREF((SURFREF *)v30);
    goto LABEL_3;
  }
  v21 = *(_DWORD *)(v31 + 112);
  DEC_SHARE_REF_CNT(v31);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v30);
  if ( (v21 & 0x800000) == 0 || !a4 || v8 )
  {
LABEL_3:
    v11 = CreateOrGetRedirectionBitmap(a1, 1LL, a5, &v27);
    v12 = (HBITMAP)v27;
    v13 = v11;
    if ( v11 >= 0 )
    {
      if ( (unsigned int)SetRedirectionBitmap(a1, *(HBITMAP *)&v27, 0) )
        goto LABEL_7;
      DeleteOrSetRedirectionBitmap(a1, v12, 1LL);
      v13 = -1073741801;
    }
    SetRedirectionBitmap(a1, 0LL, 0);
    v26 = 1;
LABEL_7:
    if ( v12 && !v8 )
    {
      if ( RedirectionBitmap )
      {
        GreExtGetObjectW((int)RedirectionBitmap);
        v25 = 1;
      }
      GreExtGetObjectW((int)v12);
    }
    if ( (GetRedirectionFlags(a1) & 1) != 0
      && (HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, 0LL, v8 == 0 ? 2 : 0), v12) )
    {
      HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, v12, v8 == 0 ? 2 : 0);
      x = v24.x;
      v16 = v8 == 0;
      v17 = a3;
      if ( v16 )
      {
        v18 = *((_QWORD *)a1 + 5);
        v19 = *(HWND *)a1;
        v27.x = *(_DWORD *)(v18 + 88);
        v20 = *(_DWORD *)(v18 + 92);
        v32.left = 0;
        v32.top = 0;
        v27.y = v20;
        v32.right = v28.bmWidth;
        v32.bottom = v28.bmHeight;
        v24.x = -v24.x;
        v24.y = -a3;
        GreAdjustSpriteDirtyAccum(*(HDEV *)(gpDispInfo + 40LL), v19, &v32, v14, &v24, &v27);
      }
    }
    else
    {
      v17 = a3;
      x = v24.x;
    }
    if ( v25 )
    {
      BltOldRedirectionBitsToNewBitmap(a1, (HBITMAP)RedirectionBitmap, v12, &v29, &v28, x, v17);
      GreNotifyDirtySprite(*(HWND *)a1);
    }
    ChangeRedirectionParentInDCEs(a1, v26);
    if ( a6 )
    {
      *a6 = RedirectionBitmap;
    }
    else if ( RedirectionBitmap )
    {
      DeleteOrSetRedirectionBitmap(a1, RedirectionBitmap, 1LL);
    }
    return v13;
  }
  if ( a6 )
    *a6 = 0LL;
  return 0LL;
}
