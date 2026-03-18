/*
 * XREFs of GreTransferDwmStateToSpriteState @ 0x1401325C8
 * Callers:
 *     zzzDecomposeDesktop @ 0x140131E78 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x140015954 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14001F7E4 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1400230C4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140023F40 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x14002AE50 (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF14 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF4C (--0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF98 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14002AFD0 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002B064 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14002C858 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x14002C9B4 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     GreReferenceObject @ 0x14002C9F4 (GreReferenceObject.c)
 *     GreDeleteSprite @ 0x140030374 (GreDeleteSprite.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x140030624 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     DwmAsyncDestroySprite @ 0x140030804 (DwmAsyncDestroySprite.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1400DF7B0 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34K.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x14015EAE4 (UserIsWindowWithNoRedirectionBitmap.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x14016A2B0 (UserIsWindowOnDesktopAndComposed.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x14016C574 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1401D412C (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x14032BBE0 (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreTransferDwmStateToSpriteState(Gre::Base *a1, __int64 a2, HDC a3)
{
  unsigned int v4; // r15d
  struct Gre::Base::SESSION_GLOBALS *v5; // rbx
  Gre::Base *v6; // rcx
  Gre::Base *v7; // rcx
  HDC DisplayDC; // r12
  __int64 v9; // r13
  __int64 *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rsi
  int v18; // eax
  unsigned __int64 v19; // rcx
  unsigned int v20; // r9d
  OPTAPIDCOBJ *v21; // rcx
  HDC v22; // rax
  __int64 v23; // r9
  LONG v24; // eax
  void *v25; // rbx
  void *v26; // rax
  struct tagSIZE v28; // [rsp+60h] [rbp-A0h] BYREF
  struct tagPOINT v29; // [rsp+68h] [rbp-98h] BYREF
  HDC v30; // [rsp+70h] [rbp-90h]
  struct tagSIZE v31; // [rsp+78h] [rbp-88h] BYREF
  struct tagPOINT v32; // [rsp+80h] [rbp-80h] BYREF
  Gre::Base *v33; // [rsp+88h] [rbp-78h] BYREF
  __int64 v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  struct tagPOINT v36; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-58h]
  struct Gre::Base::SESSION_GLOBALS *v38; // [rsp+B0h] [rbp-50h]
  _BYTE v39[16]; // [rsp+C0h] [rbp-40h] BYREF
  HSEMAPHORE v40; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-28h] BYREF
  HSEMAPHORE v42; // [rsp+E0h] [rbp-20h]
  HSEMAPHORE v43; // [rsp+E8h] [rbp-18h] BYREF
  HSEMAPHORE v44; // [rsp+F0h] [rbp-10h] BYREF
  HSEMAPHORE v45; // [rsp+F8h] [rbp-8h] BYREF
  HDC v46[16]; // [rsp+100h] [rbp+0h] BYREF
  char v47[16]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v48[128]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v49[176]; // [rsp+210h] [rbp+110h] BYREF

  v30 = a3;
  v34 = a2;
  v35 = 0LL;
  v33 = a1;
  v4 = 1;
  v5 = Gre::Base::Globals(a1);
  GreAcquireUnownedDMCLockShared::GreAcquireUnownedDMCLockShared((GreAcquireUnownedDMCLockShared *)v39, v5);
  SEMOBJ<2>::SEMOBJ<2>(&v40, v5);
  SEMOBJ<3>::SEMOBJ<3>(&v41, v5);
  v42 = (HSEMAPHORE)*((_QWORD *)a1 + 7);
  GreAcquireSemaphoreInternal(v42);
  GrepAcquireLockValidate<4>();
  SEMOBJ<6>::SEMOBJ<6>(&v43, v5);
  SEMOBJ<7>::SEMOBJ<7>(&v44, v5);
  SEMOBJ<8>::SEMOBJ<8>(&v45, (__int64)&v33);
  if ( !IsDwmActive(v6) )
    goto LABEL_41;
  DisplayDC = 0LL;
  v9 = 0LL;
  v38 = Gre::Base::Globals(v7);
  v10 = (__int64 *)(*((_QWORD *)v38 + 17) + 80LL);
  v11 = *v10;
  while ( (__int64 *)v11 != v10 )
  {
    v12 = v11 - 24;
    v13 = -v11;
    v14 = v12 & -(__int64)(v13 != 0);
    v15 = *(_QWORD *)(v14 + 0x90);
    if ( (*(_DWORD *)(v14 + 0x48) & 0x400000) != 0 )
    {
      v11 = *(_QWORD *)((v12 & -(__int64)(v13 != 0)) + 0x18);
      GreDeleteSprite(a1, 0LL, *(void **)v14, 1);
      goto LABEL_35;
    }
    if ( !(unsigned int)UserIsWindowOnDesktopAndComposed(*(_QWORD *)((v12 & -(__int64)(v13 != 0)) + 0x28), v34) )
    {
      v11 = *(_QWORD *)(v14 + 24);
      goto LABEL_35;
    }
    if ( !GdiCreateSprite((HDEV)a1, *(HWND *)(v14 + 40), (struct tagRECT *)(v14 + 56)) )
    {
      v4 = 0;
      goto LABEL_34;
    }
    v17 = *(_QWORD *)(v15 + 184);
    v4 = 1;
    if ( v17 )
    {
      v18 = *(_DWORD *)(v15 + 244);
      if ( (v18 & 0x20) != 0 )
      {
        v9 = 0LL;
      }
      else
      {
        v9 = v17 - 24;
        *(_DWORD *)(v15 + 244) = v18 | 0x20;
        GreReferenceObject(*(HSURF *)(v17 - 24 + 32));
      }
      SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, (HDEV)a1, 0LL);
    }
    else if ( !(unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v14 + 40)) )
    {
      goto LABEL_34;
    }
    v19 = *(_QWORD *)(v14 + 72) - v35;
    if ( !v19 )
      v19 = *(unsigned int *)(v14 + 80) - (unsigned __int64)(unsigned int)v35;
    if ( !v19 )
    {
      *(_DWORD *)(v14 + 72) = 4;
      *(_DWORD *)(v14 + 76) = 16711680;
    }
    if ( !v17 )
    {
      v24 = *(_DWORD *)(v14 + 56);
      v31 = 0LL;
      v32.x = v24;
      v32.y = *(_DWORD *)(v14 + 60);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v46, 0LL);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v49, 0LL);
      GdiUpdateSprite(
        a1,
        *(HWND *)(v14 + 40),
        0LL,
        (struct OPTAPIDCOBJ *)v46,
        (struct _POINTL *)&v32,
        &v31,
        (struct OPTAPIDCOBJ *)v49,
        0LL,
        *(_DWORD *)(v14 + 80),
        (struct _BLENDFUNCTION *)(v14 + 76),
        *(_DWORD *)(v14 + 72) | 0x20000000,
        0LL);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v49);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v46);
      goto LABEL_34;
    }
    v20 = *(_DWORD *)(v15 + 252);
    if ( (v20 & 1) != 0 )
    {
      GdiHintSpriteShape((HDEV)a1, *(HWND *)(v14 + 40), *(HBITMAP *)(v17 + 8), (v20 >> 6) & 1, 1);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v48, 0LL);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v46, 0LL);
      GdiUpdateSprite(
        a1,
        *(HWND *)(v14 + 40),
        0LL,
        (struct OPTAPIDCOBJ *)v48,
        0LL,
        0LL,
        (struct OPTAPIDCOBJ *)v46,
        0LL,
        *(_DWORD *)(v14 + 80),
        (struct _BLENDFUNCTION *)(v14 + 76),
        *(_DWORD *)(v14 + 72) | 0x20000000,
        0LL);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v46);
      v21 = (OPTAPIDCOBJ *)v48;
    }
    else
    {
      v29 = 0LL;
      v36 = 0LL;
      v28 = 0LL;
      if ( !DisplayDC )
        DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL, 0LL);
      v22 = v30;
      if ( !v30 )
        goto LABEL_31;
      if ( !DisplayDC )
        goto LABEL_31;
      *(_DWORD *)(v9 + 112) |= 0x4000000u;
      v37 = GreSelectBitmap(v22, *(_QWORD *)(v17 + 8));
      if ( !v37 )
        goto LABEL_31;
      v29 = *(struct tagPOINT *)(v14 + 56);
      v28 = *(struct tagSIZE *)(v17 + 32);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v49, DisplayDC);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v46, v30);
      GdiUpdateSprite(
        a1,
        *(HWND *)(v14 + 40),
        0LL,
        (struct OPTAPIDCOBJ *)v49,
        (struct _POINTL *)&v29,
        &v28,
        (struct OPTAPIDCOBJ *)v46,
        (struct _POINTL *)&v36,
        *(_DWORD *)(v14 + 80),
        (struct _BLENDFUNCTION *)(v14 + 76),
        *(_DWORD *)(v14 + 72) | 0x20000000,
        0LL);
      if ( OPTAPIDCOBJ::bValid(v46) )
      {
        APIDCOBJ::APIDCOBJ((APIDCOBJ *)v48, (struct Gre::Base::SESSION_GLOBALS **)v46);
        LOBYTE(v23) = 4;
        GrepSelectBitmap(v47, v48, v37, v23);
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v48);
      }
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v46);
      v21 = (OPTAPIDCOBJ *)v49;
    }
    OPTAPIDCOBJ::~OPTAPIDCOBJ(v21);
LABEL_31:
    SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)v15, (HSURF *)v9);
LABEL_34:
    v11 = *(_QWORD *)(v14 + 24);
    v25 = *(void **)v14;
    v26 = (void *)UserReferenceDwmApiPort(v16);
    DwmAsyncDestroySprite(v26, (__int64)v25);
    vspDestroyDwmSpriteObjInternal((HDEV)a1, 0LL, (struct DWMSPRITE *)v14);
LABEL_35:
    v10 = (__int64 *)(*((_QWORD *)v38 + 17) + 80LL);
  }
  if ( (*((_DWORD *)a1 + 10) & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)&v33);
  if ( DisplayDC )
    GreDeleteDC(DisplayDC);
LABEL_41:
  ENTER_GRE_DWM_CRIT::~ENTER_GRE_DWM_CRIT((ENTER_GRE_DWM_CRIT *)v39);
  return v4;
}
