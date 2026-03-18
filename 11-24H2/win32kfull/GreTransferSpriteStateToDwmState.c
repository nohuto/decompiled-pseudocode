/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x140169AB8
 * Callers:
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1400230C4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140023F40 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x14002AE50 (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF14 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF4C (--0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF98 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14002AFD0 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002B064 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14002C858 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     GreDeleteSprite @ 0x140030374 (GreDeleteSprite.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1400C761C (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1400CCECC (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     UserGetHwndProcess @ 0x1400CE104 (UserGetHwndProcess.c)
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x1400CFA78 (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1400CFA94 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1400DDD8C (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x14015EAE4 (UserIsWindowWithNoRedirectionBitmap.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x14016A2B0 (UserIsWindowOnDesktopAndComposed.c)
 *     DwmAsyncUpdateSprite @ 0x14016AADC (DwmAsyncUpdateSprite.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x14016AE00 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@XZ @ 0x14016BD00 (--0DWMSPRITEREF@@QEAA@XZ.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x14016C284 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401708D4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x140197880 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncCreateSprite @ 0x1401B807C (DwmAsyncCreateSprite.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401B8A30 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1401D412C (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     UserGetMiniWinInfo @ 0x140219148 (UserGetMiniWinInfo.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(Gre::Base *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  HDEV v3; // r14
  int v4; // edi
  struct Gre::Base::SESSION_GLOBALS *v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r12
  Gre::Base *v8; // rcx
  __int64 v9; // r8
  unsigned int i; // ecx
  HSPRITE DwmSpriteObj; // rbx
  Gre::Base *v12; // rcx
  __int64 v13; // rdx
  struct DWMSPRITE *v14; // r13
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rax
  int v19; // r8d
  int v20; // r9d
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ecx
  struct _SURFOBJ *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  int v29; // eax
  BOOL (__stdcall *v30)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rsi
  struct _W32PROCESS *HwndProcess; // rax
  __int64 v32; // rcx
  int v33; // ebx
  void *v34; // rax
  __int64 v35; // rdx
  Gre::Base *v36; // rcx
  struct Gre::Base::SESSION_GLOBALS *v37; // rax
  int v38; // r9d
  __int64 v39; // r15
  int v40; // r14d
  __int64 v41; // rcx
  void *v42; // rax
  int updated; // eax
  SFMLOGICALSURFACE *v44; // rbx
  UINT_PTR v45; // rax
  struct Gre::Base::SESSION_GLOBALS *v46; // r15
  unsigned int v47; // esi
  _QWORD *v48; // rcx
  _QWORD *v49; // rbx
  __int64 v50; // r8
  _QWORD *v51; // rbx
  _QWORD *v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // rdi
  int v57; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v58; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v59; // [rsp+68h] [rbp-98h] BYREF
  int v60; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v61; // [rsp+70h] [rbp-90h] BYREF
  SFMLOGICALSURFACE *v62; // [rsp+78h] [rbp-88h] BYREF
  Gre::Base *v63; // [rsp+80h] [rbp-80h] BYREF
  __int64 v64; // [rsp+88h] [rbp-78h] BYREF
  Gre::Base *v65; // [rsp+90h] [rbp-70h]
  unsigned __int64 v66; // [rsp+98h] [rbp-68h]
  char *v67; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v68[3]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v69[16]; // [rsp+C0h] [rbp-40h] BYREF
  HSEMAPHORE v70; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v71; // [rsp+D8h] [rbp-28h] BYREF
  HSEMAPHORE v72; // [rsp+E0h] [rbp-20h]
  HSEMAPHORE v73; // [rsp+E8h] [rbp-18h] BYREF
  HSEMAPHORE v74; // [rsp+F0h] [rbp-10h] BYREF
  HSEMAPHORE v75; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v76[32]; // [rsp+100h] [rbp+0h] BYREF
  struct DWMSPRITE *v77; // [rsp+120h] [rbp+20h]
  _BYTE v78[32]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v79; // [rsp+148h] [rbp+48h]
  __int64 v80; // [rsp+150h] [rbp+50h] BYREF
  int v81; // [rsp+158h] [rbp+58h]
  int v82; // [rsp+15Ch] [rbp+5Ch]
  struct tagRECT v83; // [rsp+160h] [rbp+60h] BYREF
  __int64 v84[18]; // [rsp+170h] [rbp+70h] BYREF

  v2 = a2;
  v66 = a2;
  v3 = (HDEV)a1;
  v65 = a1;
  v4 = 1;
  v63 = a1;
  v5 = Gre::Base::Globals(a1);
  GreAcquireUnownedDMCLockShared::GreAcquireUnownedDMCLockShared((GreAcquireUnownedDMCLockShared *)v69, v5);
  SEMOBJ<2>::SEMOBJ<2>(&v70, v5);
  SEMOBJ<3>::SEMOBJ<3>(&v71, v5);
  v72 = (HSEMAPHORE)*((_QWORD *)v3 + 7);
  GreAcquireSemaphoreInternal(v72);
  GrepAcquireLockValidate<4>();
  SEMOBJ<6>::SEMOBJ<6>(&v73, v5);
  SEMOBJ<7>::SEMOBJ<7>(&v74, v5);
  SEMOBJ<8>::SEMOBJ<8>(&v75, (__int64)&v63);
  v6 = (__int64)(v3 + 20);
  if ( *((_DWORD *)v3 + 35) )
    v6 = **((_QWORD **)v3 + 18) + 80LL;
  v7 = *(_QWORD *)(v6 + 8);
  v61 = 0;
  v59 = 0;
  v58 = 0;
  v60 = 0;
  while ( v7 )
  {
    v8 = *(Gre::Base **)(v7 + 72);
    if ( v8 && (unsigned int)UserIsWindowOnDesktopAndComposed(v8, v2) )
    {
      if ( *((_DWORD *)v3 + 35) && (*(_DWORD *)v7 & 0x20) == 0 )
      {
        v9 = *(_QWORD *)(v7 + 8);
        for ( i = 0; i < *(_DWORD *)(v9 + 20); ++i )
        {
          if ( (**(_DWORD **)(v9 + 8LL * i + 24) & 0x20) != 0 )
          {
            v7 = *(_QWORD *)(v9 + 8LL * i + 24);
            break;
          }
        }
      }
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v76);
      ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v84);
      DwmSpriteObj = hspCreateDwmSpriteObj(*(HWND *)(v7 + 72), v2, v3, 0);
      Gre::Base::Globals(v12);
      if ( DwmSpriteObj )
      {
        LOBYTE(v13) = 15;
        v77 = (struct DWMSPRITE *)HmgLock(DwmSpriteObj, v13);
      }
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v84);
      v14 = v77;
      if ( v77 )
      {
        v15 = *(__int64 **)(v7 + 16);
        v16 = 1LL;
        v17 = *((_QWORD *)v77 + 18);
        v4 = 1;
        v62 = (SFMLOGICALSURFACE *)v17;
        v18 = *v15;
        *((_DWORD *)v77 + 14) = *(_DWORD *)(v7 + 112) + *(_DWORD *)(v18 + 2576);
        *((_DWORD *)v14 + 15) = *(_DWORD *)(v18 + 2580) + *(_DWORD *)(v7 + 116);
        v19 = *(_DWORD *)(v7 + 112) + *(_DWORD *)(v18 + 2576);
        *((_DWORD *)v14 + 16) = v19;
        v20 = *(_DWORD *)(v18 + 2580) + *(_DWORD *)(v7 + 116);
        *((_DWORD *)v14 + 17) = v20;
        *((_QWORD *)v14 + 9) = *(_QWORD *)(v7 + 224);
        *((_DWORD *)v14 + 20) = *(_DWORD *)(v7 + 232);
        if ( (*(_DWORD *)v7 & 1) != 0
          || (*(_DWORD *)v7 & 0x10) != 0
          || *(_DWORD *)(v7 + 80) >= *(_DWORD *)(v7 + 88)
          || (v21 = 1, *(_DWORD *)(v7 + 84) >= *(_DWORD *)(v7 + 92)) )
        {
          v21 = 0;
        }
        *((_DWORD *)v14 + 35) = v21 | *((_DWORD *)v14 + 35) & 0xFFFFFFFE;
        v22 = *(_QWORD *)(v7 + 128);
        if ( v22 )
        {
          *((_DWORD *)v14 + 16) = v19 + *(_DWORD *)(v22 + 32);
          *((_DWORD *)v14 + 17) = v20 + *(_DWORD *)(*(_QWORD *)(v7 + 128) + 36LL);
          v23 = *(_QWORD *)(v7 + 240);
          if ( v23 )
          {
            LOBYTE(v16) = 5;
            v24 = HmgReferenceCheckLock(v23, v16, 0LL);
            SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v17, v3, (struct _SURFOBJ *)(v24 + 24));
            v25 = *(_DWORD *)(v17 + 252) | 1;
            *(_DWORD *)(v17 + 252) = v25;
            *(_DWORD *)(v17 + 252) = v25 & 0xFFFFFFBF | (*(_DWORD *)v7 >> 1) & 0x40;
          }
          else
          {
            SpCreateSurface(v78, v3, *(_QWORD *)(v7 + 128) + 32LL);
            if ( v79 )
            {
              SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v17, v3, (struct _SURFOBJ *)(v79 + 24));
              v26 = *(struct _SURFOBJ **)(v17 + 184);
              v68[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v68, v26);
              if ( v68[0] )
              {
                v80 = 0LL;
                v27 = *(_QWORD *)(v7 + 128);
                v28 = *(_QWORD *)(v17 + 184);
                v81 = *(_DWORD *)(v27 + 32);
                v29 = *(_DWORD *)(v27 + 36);
                v64 = 0LL;
                v82 = v29;
                if ( (*(_DWORD *)(v28 + 88) & 0x400) != 0 )
                  v30 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v3 + 354);
                else
                  v30 = EngCopyBits;
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v63) )
                  v30 = RedirCopyBits;
                HwndProcess = (struct _W32PROCESS *)UserGetHwndProcess(*((_QWORD *)v14 + 5));
                SURFACE::vAppContainerOwner((SURFACE *)(v28 - 24), HwndProcess);
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))v30)(
                  *(_QWORD *)(v17 + 184),
                  *(_QWORD *)(v7 + 128),
                  0LL,
                  0LL,
                  &v80,
                  &v64);
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v68);
            }
            else
            {
              v4 = 0;
            }
            SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v78);
          }
        }
        if ( v4 )
        {
          memset_0(v84, 0, 0x88uLL);
          v57 = 39168;
          v67 = (char *)v14 + 88;
          if ( v14 != (struct DWMSPRITE *)-88LL )
            GreAcquirePushLockExclusive((struct DWMSPRITE *)((char *)v14 + 88));
          UserGetMiniWinInfo(*((_QWORD *)v14 + 5), v84, &v57);
          v32 = *((_DWORD *)v14 + 35) & 1;
          v33 = v32 | *(_DWORD *)(v17 + 252) & 0xC | (2
                                                    * (*(_DWORD *)(v17 + 252) & 1 | *((_DWORD *)v14 + 35) & 0x40 | (4 * (*((_DWORD *)v14 + 35) & 0xE))));
          v34 = (void *)UserReferenceDwmApiPort(v32);
          if ( (int)DwmAsyncCreateSprite(v34, v33, (__int64)v84, v57) < 0 )
          {
            v4 = 0;
          }
          else
          {
            v4 = 1;
            if ( *(_QWORD *)(v17 + 184) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v7 + 72), v35) )
            {
              *(_DWORD *)(v17 + 252) |= 8u;
              v37 = Gre::Base::Globals(v36);
              SFMLOGICALSURFACE::StartSfmStateTracking(
                (SFMLOGICALSURFACE *)v17,
                v3,
                *((struct SfmState **)v37 + 529),
                v38);
              SFMLOGICALSURFACE::GetRedirectionInfo(
                (SFMLOGICALSURFACE *)v17,
                (enum _HLSURF_REDIRECTIONSTYLE *)&v60,
                &v59,
                &v58,
                0LL,
                0LL);
              v39 = *((_QWORD *)v14 + 13);
              v40 = *((_DWORD *)v14 + 29);
              v41 = *((_DWORD *)v14 + 35) & 1;
              *((_QWORD *)v14 + 13) = 0LL;
              v42 = (void *)UserReferenceDwmApiPort(v41);
              updated = DwmAsyncUpdateSprite(v42, (__int64)v14 + 72, (__int64)v84, v60, v59, v58, v40 >= 1, v39);
              v44 = v62;
              v4 = updated >= 0;
              *((_DWORD *)v62 + 63) &= ~8u;
              if ( updated >= 0 )
              {
                v62 = (SFMLOGICALSURFACE *)((char *)v44 + 256);
                if ( v44 != (SFMLOGICALSURFACE *)-256LL )
                  GreAcquirePushLockExclusive((SFMLOGICALSURFACE *)((char *)v44 + 256));
                v83.right = *((_DWORD *)v14 + 16) - *((_DWORD *)v14 + 14);
                v83.bottom = *((_DWORD *)v14 + 17) - *((_DWORD *)v14 + 15);
                *(_QWORD *)&v83.left = 0LL;
                vSpUpdateDirtyRgn(v14, v44, 0LL, (struct _RECTL *)&v83, &v61, 0);
                Gre::PUSHLOCKEX::vUnlock((Gre::PUSHLOCKEX *)&v62, 0);
                v45 = SFMLOGICALSURFACE::uiCookie(v44);
                v4 = bSpDwmNotifyDirty(*(HSPRITE *)v14, v44, v61, v45);
              }
              v3 = (HDEV)v65;
            }
          }
          Gre::PUSHLOCKEX::vUnlock((Gre::PUSHLOCKEX *)&v67, 0);
        }
        v2 = v66;
      }
      else
      {
        v4 = 0;
      }
      v7 = *(_QWORD *)(v7 + 24);
      DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v76);
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 24);
    }
    if ( !v4 )
    {
      v46 = Gre::Base::Globals(v8);
      v47 = 0;
      v48 = (_QWORD *)(*((_QWORD *)v46 + 17) + 80LL);
      v49 = (_QWORD *)*v48;
      if ( (_QWORD *)*v48 != v48 )
      {
        do
        {
          v50 = (unsigned __int64)(v49 - 3) & -(__int64)(v49 != 0LL);
          v49 = *(_QWORD **)(v50 + 0x18);
          GreDeleteSprite((Gre::Base *)v3, 0LL, *(void **)v50, 1);
        }
        while ( v49 != (_QWORD *)(*((_QWORD *)v46 + 17) + 80LL) );
      }
      goto LABEL_71;
    }
  }
  v47 = v4;
  if ( *((_DWORD *)v3 + 35) )
  {
    v51 = (_QWORD *)*((_QWORD *)v3 + 19);
    if ( v51 )
    {
      do
      {
        v52 = (_QWORD *)v51[1];
        if ( *v51 && (unsigned int)UserIsWindowOnDesktopAndComposed(*v51, v2) )
        {
          GdiHintSpriteShape(v3, (HWND)*v51, 0LL, 0, 0);
          GdiDeleteSprite((Gre::Base *)v3, (HWND)*v51, v51);
        }
        v51 = v52;
      }
      while ( v52 );
    }
  }
  else
  {
    v53 = *((_QWORD *)v3 + 11);
    if ( v53 )
    {
      do
      {
        v54 = *(_QWORD *)(v53 + 72);
        v55 = *(_QWORD *)(v53 + 24);
        if ( v54 && (unsigned int)UserIsWindowOnDesktopAndComposed(v54, v2) )
        {
          if ( *(_QWORD *)(v53 + 240) )
            GdiHintSpriteShape(v3, *(HWND *)(v53 + 72), 0LL, 0, 0);
          GdiDeleteSprite((Gre::Base *)v3, *(HWND *)(v53 + 72), (void *)v53);
        }
        v53 = v55;
      }
      while ( v55 );
    }
  }
LABEL_71:
  ENTER_GRE_DWM_CRIT::~ENTER_GRE_DWM_CRIT((ENTER_GRE_DWM_CRIT *)v69);
  return v47;
}
