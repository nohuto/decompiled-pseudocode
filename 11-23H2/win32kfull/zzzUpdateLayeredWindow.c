/*
 * XREFs of zzzUpdateLayeredWindow @ 0x1C01BCF20
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C00ABE84 (xxxSetLayeredWindow.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01BC2E4 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C01DEE20 (NtUserUpdateLayeredWindow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0220BC8 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzMoveShadow @ 0x1C022126C (zzzMoveShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C022130C (zzzUpdateShadowAlpha.c)
 * Callees:
 *     GreUpdateSpriteVisRgn @ 0x1C0020B48 (GreUpdateSpriteVisRgn.c)
 *     RecreateRedirectionBitmap @ 0x1C00229DC (RecreateRedirectionBitmap.c)
 *     GetRedirectionFlags @ 0x1C0022CB0 (GetRedirectionFlags.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C002433C (DeleteOrSetRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C0026E50 (UnsetRedirectedWindow.c)
 *     GreClientRgnUpdated @ 0x1C0051264 (GreClientRgnUpdated.c)
 *     UpdateSprite @ 0x1C00B5498 (UpdateSprite.c)
 *     OffsetChildren @ 0x1C00B5A7C (OffsetChildren.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     DwmChildRectChange @ 0x1C00EB3C0 (DwmChildRectChange.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     GetRedirectionBitmap @ 0x1C011E440 (GetRedirectionBitmap.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C015190A (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01BC170 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     InvalidateGDIWindows @ 0x1C01BD484 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzUpdateLayeredWindow(
        struct tagWND *a1,
        HDC a2,
        const struct tagPOINT *a3,
        struct tagSIZE *a4,
        HDC a5,
        struct tagPOINT *a6,
        unsigned int a7,
        struct _BLENDFUNCTION *a8,
        unsigned int a9,
        struct tagRECT *a10)
{
  HBITMAP v10; // rdi
  struct tagSIZE *v11; // r14
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  BOOL v22; // esi
  char RedirectionFlags; // al
  unsigned int v24; // r12d
  _DWORD *v25; // rdx
  int v27; // r15d
  int v28; // eax
  int updated; // r14d
  __int64 v30; // r8
  int v31; // esi
  unsigned int v32; // r13d
  int v33; // ecx
  int v34; // [rsp+60h] [rbp-71h] BYREF
  int v35; // [rsp+64h] [rbp-6Dh] BYREF
  HBITMAP v36; // [rsp+68h] [rbp-69h] BYREF
  struct tagSIZE *v37; // [rsp+70h] [rbp-61h]
  HDC v38; // [rsp+78h] [rbp-59h]
  struct tagRECT *v39; // [rsp+80h] [rbp-51h]
  struct _BLENDFUNCTION *v40; // [rsp+88h] [rbp-49h]
  struct tagPOINT *v41; // [rsp+90h] [rbp-41h]
  struct tagPOINT *v42; // [rsp+98h] [rbp-39h]
  HDC v43; // [rsp+A0h] [rbp-31h]
  __int128 v44; // [rsp+A8h] [rbp-29h]
  __int128 v45; // [rsp+B8h] [rbp-19h]

  v10 = 0LL;
  v34 = 0;
  v11 = a4;
  v35 = 0;
  v38 = a5;
  v41 = a6;
  v40 = a8;
  v39 = a10;
  v14 = *((_QWORD *)a1 + 5);
  v37 = a4;
  v42 = (struct tagPOINT *)a3;
  v43 = a2;
  v15 = *(_OWORD *)(v14 + 88);
  v36 = 0LL;
  v16 = *(_OWORD *)(v14 + 104);
  v44 = v15;
  v45 = v16;
  v17 = IsWindowDesktopComposed(a1);
  v20 = 1LL;
  if ( v17 && (*((_DWORD *)a1 + 80) & 0x8000) != 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) != 0 )
      UnsetRedirectedWindow(a1, 1);
    *((_DWORD *)a1 + 80) &= ~0x8000u;
  }
  v21 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v21 + 26) & 8) != 0 && (*(_DWORD *)(v21 + 232) & 2) == 0 )
  {
    v22 = GetRedirectionBitmap((__int64)a1, v20, v18, v19) != 0;
    RedirectionFlags = GetRedirectionFlags((__int64)a1);
    if ( !v22 || (RedirectionFlags & 8) != 0 )
    {
      v24 = a9;
      if ( (a9 & 8) != 0 )
      {
        if ( v11 )
        {
          v25 = (_DWORD *)*((_QWORD *)a1 + 5);
          if ( v11->cx != v25[24] - v25[22] || v11->cy != v25[25] - v25[23] )
          {
            UserSetLastError(1462);
            return 2151546881LL;
          }
        }
        v24 = a9 & 0xFFFFFFF7;
      }
      UpdateWindowRects(a1, a3, v11, &v34, &v35);
      v27 = v34;
      if ( v22 && v34 )
      {
        v28 = RecreateRedirectionBitmap(a1, 0, 0, 0, 0, (HSURF *)&v36);
        v10 = v36;
        updated = v28;
        if ( v28 < 0 )
          goto LABEL_44;
        v11 = v37;
      }
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v31 = v35;
      if ( v27 || v35 )
      {
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          DwmChildRectChange(a1);
          DirtyVisRgnTrackers((__int64)a1);
        }
        if ( WPP_MAIN_CB.AlignmentRequirement )
        {
          InvalidateGDIWindows(a1);
          GreClientRgnUpdated((Gre::Base *)1);
        }
        GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0);
      }
      v32 = v24 | 0x20000000;
      if ( !v38 )
        v32 = v24;
      updated = UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, v30, v43, v42, v11, v38, v41, a7, v40, v32, v39);
      if ( updated >= 0 && v31 )
        OffsetChildren(
          a1,
          *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL) - v44,
          *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL) - DWORD1(v44),
          0LL);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      if ( updated >= 0 )
      {
        if ( v10 )
          DeleteOrSetRedirectionBitmap((__int64)a1, (HSURF)v10, 1);
        if ( v27 || v31 )
          GenerateMouseMove(0LL);
        if ( (v32 & 0x20) == 0 || v27 || v31 )
        {
          v33 = 3;
          if ( !gdwDeferWinEvent )
            v33 = 1;
          xxxWindowEvent(0x800Bu, a1, 0, 0, v33);
        }
        return (unsigned int)updated;
      }
LABEL_44:
      *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL) = v44;
      *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL) = v45;
      if ( v10 && !(unsigned int)RestoreOldRedirectionBitmap(a1, v10) )
        DeleteOrSetRedirectionBitmap((__int64)a1, (HSURF)v10, 1);
      return (unsigned int)updated;
    }
  }
  return 3221225485LL;
}
