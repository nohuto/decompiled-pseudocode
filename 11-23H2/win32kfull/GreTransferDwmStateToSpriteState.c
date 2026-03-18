/*
 * XREFs of GreTransferDwmStateToSpriteState @ 0x1C00208A8
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C00206F8 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0022F04 (zzzComposeDesktop.c)
 * Callees:
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C000B35C (UserIsWindowWithNoRedirectionBitmap.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C0020A9C (UserIsWindowOnDesktopAndComposed.c)
 *     GreDeleteSprite @ 0x1C00267F8 (GreDeleteSprite.c)
 *     DwmAsyncDestroySprite @ 0x1C0026DAC (DwmAsyncDestroySprite.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C006B6A0 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C006B8D8 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C006B9CC (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C009520C (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C00C3C44 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C00C3D94 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00C4690 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00C486C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C00C4A2C (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C027F580 (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreTransferDwmStateToSpriteState(HDEV a1, __int64 a2, HDC a3)
{
  unsigned int v4; // r15d
  Gre::Base *v5; // rcx
  struct SURFACE *v6; // r13
  HDC DisplayDC; // r12
  __int64 *v8; // rax
  __int64 v9; // r14
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rbx
  HLSURF v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r14
  int IsWindowWithNoRedirectionBitmap; // eax
  unsigned __int64 v20; // rcx
  unsigned int v21; // r9d
  HDC v22; // rax
  __int64 v23; // r13
  unsigned int v24; // eax
  HWND v25; // rdx
  LONG v26; // ecx
  HDC v27; // r14
  LONG v28; // eax
  int v29; // ecx
  HWND v30; // rdx
  void *v31; // rax
  int v32; // [rsp+50h] [rbp-49h]
  unsigned int v33; // [rsp+60h] [rbp-39h] BYREF
  struct tagSIZE v34; // [rsp+68h] [rbp-31h] BYREF
  struct tagPOINT v35; // [rsp+70h] [rbp-29h] BYREF
  HDC v36; // [rsp+78h] [rbp-21h]
  struct SURFACE *v37; // [rsp+80h] [rbp-19h]
  struct tagSIZE v38; // [rsp+88h] [rbp-11h] BYREF
  struct tagPOINT v39; // [rsp+90h] [rbp-9h] BYREF
  __int64 v40; // [rsp+98h] [rbp-1h]
  __int64 v41; // [rsp+A0h] [rbp+7h]
  struct tagPOINT v42; // [rsp+A8h] [rbp+Fh] BYREF
  struct Gre::Base::SESSION_GLOBALS *v43; // [rsp+B0h] [rbp+17h]
  HDEV v44[7]; // [rsp+B8h] [rbp+1Fh] BYREF

  v40 = a2;
  v33 = 0;
  v36 = a3;
  v41 = 0LL;
  v4 = 1;
  v44[0] = a1;
  ENTER_GRE_DWM_CRIT(a1, &v33);
  if ( !(unsigned int)IsDwmActive() )
    goto LABEL_8;
  v6 = 0LL;
  DisplayDC = 0LL;
  v37 = 0LL;
  v43 = Gre::Base::Globals(v5);
  v8 = (__int64 *)(*((_QWORD *)v43 + 38) + 80LL);
  v9 = *v8;
  while ( (__int64 *)v9 != v8 )
  {
    v11 = v9 - 24;
    v12 = -v9;
    v13 = v11 & -(__int64)(v12 != 0);
    v14 = *(_QWORD *)(v13 + 0x90);
    if ( (*(_DWORD *)(v13 + 0x48) & 0x400000) != 0 )
    {
      v9 = *(_QWORD *)((v11 & -(__int64)(v12 != 0)) + 0x18);
      GreDeleteSprite(a1, 0LL, *(void **)v13, 1);
      goto LABEL_12;
    }
    if ( !(unsigned int)UserIsWindowOnDesktopAndComposed(*(_QWORD *)((v11 & -(__int64)(v12 != 0)) + 0x28), v40) )
    {
      v9 = *(_QWORD *)(v13 + 24);
      goto LABEL_12;
    }
    if ( GdiCreateSprite(a1, *(HWND *)(v13 + 40), (struct tagRECT *)(v13 + 56)) )
    {
      v18 = *(_QWORD *)(v14 + 184);
      v4 = 1;
      if ( v18 )
      {
        v37 = SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)v14, v15, v17);
        v6 = v37;
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v14, a1, 0LL);
LABEL_19:
        v20 = *(_QWORD *)(v13 + 72) - v41;
        if ( !v20 )
          v20 = *(unsigned int *)(v13 + 80) - (unsigned __int64)(unsigned int)v41;
        if ( !v20 )
        {
          *(_DWORD *)(v13 + 72) = 4;
          *(_DWORD *)(v13 + 76) = 16711680;
        }
        if ( v18 )
        {
          v21 = *(_DWORD *)(v14 + 252);
          if ( (v21 & 1) != 0 )
          {
            GdiHintSpriteShape(a1, *(HWND *)(v13 + 40), *(HBITMAP *)(v18 + 8), (v21 >> 6) & 1, 1);
            GdiUpdateSprite(
              a1,
              *(HWND *)(v13 + 40),
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              *(_DWORD *)(v13 + 80),
              (struct _BLENDFUNCTION *)(v13 + 76),
              *(_DWORD *)(v13 + 72) | 0x20000000,
              0LL);
          }
          else
          {
            v35 = 0LL;
            v42 = 0LL;
            v34 = 0LL;
            if ( !DisplayDC )
              DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL);
            v22 = v36;
            if ( v36 )
            {
              if ( DisplayDC )
              {
                *((_DWORD *)v6 + 28) |= 0x4000000u;
                v23 = GreSelectBitmap(v22, *(_QWORD *)(v18 + 8));
                if ( v23 )
                {
                  v24 = *(_DWORD *)(v13 + 80);
                  v32 = *(_DWORD *)(v13 + 72) | 0x20000000;
                  v25 = *(HWND *)(v13 + 40);
                  v35 = *(struct tagPOINT *)(v13 + 56);
                  v34.cx = *(_DWORD *)(v18 + 32);
                  v26 = *(_DWORD *)(v18 + 36);
                  v27 = v36;
                  v34.cy = v26;
                  GdiUpdateSprite(
                    a1,
                    v25,
                    0LL,
                    DisplayDC,
                    &v35,
                    &v34,
                    v36,
                    &v42,
                    v24,
                    (struct _BLENDFUNCTION *)(v13 + 76),
                    v32,
                    0LL);
                  GreSelectBitmap(v27, v23);
                }
              }
            }
            v6 = v37;
          }
          SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)v14, v6);
        }
        else
        {
          v28 = *(_DWORD *)(v13 + 56);
          v29 = *(_DWORD *)(v13 + 72);
          v38 = 0LL;
          v30 = *(HWND *)(v13 + 40);
          v39.x = v28;
          v39.y = *(_DWORD *)(v13 + 60);
          GdiUpdateSprite(
            a1,
            v30,
            0LL,
            0LL,
            &v39,
            &v38,
            0LL,
            0LL,
            *(_DWORD *)(v13 + 80),
            (struct _BLENDFUNCTION *)(v13 + 76),
            v29 | 0x20000000,
            0LL);
        }
        goto LABEL_36;
      }
      IsWindowWithNoRedirectionBitmap = UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v13 + 40), (__int64)v15);
      v17 = 0LL;
      if ( IsWindowWithNoRedirectionBitmap )
        goto LABEL_19;
    }
    else
    {
      v4 = 0;
    }
LABEL_36:
    v9 = *(_QWORD *)(v13 + 24);
    v31 = (void *)UserReferenceDwmApiPort(v16, v15, v17);
    DwmAsyncDestroySprite(v31);
    vspDestroyDwmSpriteObjInternal(a1, 0, (struct DWMSPRITE *)v13);
LABEL_12:
    v8 = (__int64 *)(*((_QWORD *)v43 + 38) + 80LL);
  }
  if ( ((_DWORD)a1[10] & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)v44);
  if ( DisplayDC )
    GreDeleteDC(DisplayDC);
LABEL_8:
  LEAVE_GRE_DWM_CRIT(a1, v33);
  return v4;
}
