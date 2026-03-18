/*
 * XREFs of GreHintSpriteShape @ 0x1C00B356C
 * Callers:
 *     HintSpriteShape @ 0x1C00B2ED8 (HintSpriteShape.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00FEBE0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     GreHintSpriteShapeDelayDelete @ 0x1C026754C (GreHintSpriteShapeDelayDelete.c)
 * Callees:
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C006B8D8 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C006CA94 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     DwmAsyncUpdateSprite @ 0x1C007AAF0 (DwmAsyncUpdateSprite.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00853DC (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0087284 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C008C180 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C008E520 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00B4110 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C00B4964 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00B4A08 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00B4A3C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00C4690 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C00C5C10 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00C5CF0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013DC74 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0264E00 (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C0264EC4 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, __int64 a4, int a5, int a6, int a7)
{
  unsigned int v7; // r12d
  _DWORD *v8; // rsi
  HBITMAP v10; // r15
  HWND v11; // rbx
  Gre::Base *v12; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // rax
  struct Gre::Base::SESSION_GLOBALS *v14; // rdi
  _QWORD *v15; // r14
  __int64 ThreadWin32Thread; // rax
  Gre::Base *v17; // rcx
  struct Gre::Base::SESSION_GLOBALS *v18; // rbx
  HSPRITE v19; // rbx
  Gre::Base *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // rax
  int v41; // eax
  struct SFMLOGICALSURFACE *v42; // rdi
  HLSURF HLSURFClone; // rax
  HDEV v44; // rdx
  HDEV v45; // rdx
  unsigned int *v46; // rbx
  unsigned int *v47; // r14
  __int64 v48; // rax
  HDEV v49; // r15
  int v50; // xmm1_4
  int v51; // ecx
  int v52; // edx
  int v53; // r8d
  int v54; // edx
  Gre::Base *v55; // rcx
  struct Gre::Base::SESSION_GLOBALS *v56; // rax
  unsigned int v57; // edx
  int v58; // eax
  __int64 v59; // r15
  int v60; // r14d
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rcx
  __int64 v64; // rdx
  int v65; // ebx
  __int64 v66; // r8
  void *v67; // rax
  SFMLOGICALSURFACE *v68; // rcx
  int v69; // eax
  struct Gre::Base::SESSION_GLOBALS *v70; // rax
  struct Gre::Base::SESSION_GLOBALS *v71; // rbx
  struct SFMLOGICALSURFACE *v72; // rcx
  int v73; // eax
  struct Gre::Base::SESSION_GLOBALS *v74; // rax
  BOOL v76; // [rsp+68h] [rbp-A0h]
  unsigned int v77; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v78; // [rsp+70h] [rbp-98h] BYREF
  int v79; // [rsp+74h] [rbp-94h] BYREF
  int v80; // [rsp+78h] [rbp-90h] BYREF
  int v81; // [rsp+7Ch] [rbp-8Ch]
  unsigned int *v82; // [rsp+80h] [rbp-88h]
  _QWORD *v83; // [rsp+88h] [rbp-80h]
  _BYTE v84[32]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v85; // [rsp+B0h] [rbp-58h]
  struct Gre::Base::SESSION_GLOBALS *v86; // [rsp+B8h] [rbp-50h]
  _BYTE v87[32]; // [rsp+C0h] [rbp-48h] BYREF
  SFMLOGICALSURFACE *v88; // [rsp+E0h] [rbp-28h]
  int v89; // [rsp+E8h] [rbp-20h]
  _BYTE v90[32]; // [rsp+F0h] [rbp-18h] BYREF
  struct SFMLOGICALSURFACE *v91; // [rsp+110h] [rbp+8h]
  int v92; // [rsp+118h] [rbp+10h]
  __int128 v93; // [rsp+120h] [rbp+18h]
  __int128 v94; // [rsp+130h] [rbp+28h]
  __int128 v95; // [rsp+140h] [rbp+38h]
  __int128 v96; // [rsp+150h] [rbp+48h]
  __int128 v97; // [rsp+160h] [rbp+58h]
  __int128 v98; // [rsp+170h] [rbp+68h]
  __int128 v99; // [rsp+180h] [rbp+78h]
  __int128 v100; // [rsp+190h] [rbp+88h]
  __int64 v101; // [rsp+1A0h] [rbp+98h]

  v81 = 1;
  v76 = 0;
  v7 = 0;
  v78 = 0;
  v8 = 0LL;
  v77 = 0;
  v79 = 0;
  v10 = a3;
  v11 = a2;
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v90);
  v13 = Gre::Base::Globals(v12);
  v14 = v13;
  v86 = v13;
  v15 = (_QWORD *)((char *)v13 + 120);
  v83 = (_QWORD *)((char *)v13 + 120);
  if ( a7 )
  {
    GreAcquireSemaphore(*v15);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *v15, 2LL);
  }
  else
  {
    v83 = (_QWORD *)((char *)v13 + 120);
  }
  if ( !a6 || !(unsigned int)IsDwmActive() )
    goto LABEL_64;
  v80 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
  {
    v18 = Gre::Base::Globals(v17);
    GreAcquireSemaphore(*((_QWORD *)v18 + 14));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v18 + 14), 5LL);
    v11 = a2;
    v80 = 1;
  }
  GreAcquireSemaphore(*((_QWORD *)v14 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v14 + 9), 7LL);
  if ( (unsigned int)IsDwmActive() )
  {
    v81 = 0;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v84);
    v85 = 0LL;
    v19 = DWMSPRITEREF::hspLookupWindow(v11);
    Gre::Base::Globals(v20);
    if ( v19 )
    {
      LOBYTE(v21) = 15;
      v22 = HmgLock(v19, v21);
      v85 = v22;
    }
    else
    {
      v22 = v85;
    }
    if ( !v22 )
    {
LABEL_60:
      v85 = 0LL;
LABEL_61:
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v84);
      v7 = v76;
      goto LABEL_62;
    }
    v23 = *(_QWORD *)(v22 + 144);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v87);
    v88 = 0LL;
    v89 = 1;
    if ( v23 )
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v87, *(HLSURF *)v23);
    v25 = *(_QWORD *)(v23 + 184);
    v76 = 1;
    if ( v25 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v25 - 24)) )
    {
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v25 + 248));
      if ( *(_DWORD *)(v25 + 300) )
      {
        *(_QWORD *)(v25 + 312) = a2;
        *(_QWORD *)(v25 + 320) = a3;
        *(_QWORD *)(v25 + 304) = a1;
        v26 = *(_QWORD *)(a4 + 128);
        v27 = *(_OWORD *)(a4 + 16);
        v93 = *(_OWORD *)a4;
        v28 = *(_OWORD *)(a4 + 32);
        v94 = v27;
        v29 = *(_OWORD *)(a4 + 48);
        v95 = v28;
        v30 = *(_OWORD *)(a4 + 64);
        v96 = v29;
        v31 = *(_OWORD *)(a4 + 80);
        v97 = v30;
        v32 = *(_OWORD *)(a4 + 96);
        v98 = v31;
        v99 = v32;
        v100 = *(_OWORD *)(a4 + 112);
        v101 = v26;
        v33 = v94;
        *(_OWORD *)(v25 + 328) = v93;
        v34 = v95;
        *(_OWORD *)(v25 + 344) = v33;
        v35 = v96;
        *(_OWORD *)(v25 + 360) = v34;
        v36 = v97;
        *(_OWORD *)(v25 + 376) = v35;
        v37 = v98;
        *(_OWORD *)(v25 + 392) = v36;
        v38 = v99;
        *(_OWORD *)(v25 + 408) = v37;
        v39 = v100;
        v40 = v101;
        *(_OWORD *)(v25 + 424) = v38;
        *(_OWORD *)(v25 + 440) = v39;
        *(_QWORD *)(v25 + 456) = v40;
        *(_DWORD *)(v25 + 464) = a5;
        *(_DWORD *)(v25 + 468) = a6;
        v41 = *(_DWORD *)(v25 + 88);
        if ( (v41 & 0x2000000) == 0 )
        {
          *(_DWORD *)(v25 + 88) = v41 | 0x2000000;
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(0x2000000LL) + 32) + 23656LL));
        }
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v25 + 248));
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v87);
        if ( v85 )
          _InterlockedDecrement((volatile signed __int32 *)(v85 + 12));
        v85 = 0LL;
        goto LABEL_61;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v25 + 248));
      v10 = a3;
    }
    if ( *(_QWORD *)(v23 + 184) || (*(_DWORD *)(v23 + 244) & 1) != 0 )
    {
      HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(a1, (struct SFMLOGICALSURFACE *)v23, 0, a5 & 2, 1);
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v90, HLSURFClone);
      v42 = v91;
      if ( !v91 )
      {
        if ( v10 )
        {
          v7 = 0;
          SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v87);
          if ( v85 )
            _InterlockedDecrement((volatile signed __int32 *)(v85 + 12));
          v85 = 0LL;
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v84);
          goto LABEL_62;
        }
        v49 = a1;
        v42 = (struct SFMLOGICALSURFACE *)v23;
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v23, a1, 0LL);
        v46 = (unsigned int *)(v23 + 252);
        v47 = v46;
        v82 = v46;
        goto LABEL_41;
      }
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v22, v44, 0LL);
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v22, v45, v42);
    }
    else
    {
      v42 = (struct SFMLOGICALSURFACE *)v23;
    }
    v46 = (unsigned int *)((char *)v42 + 252);
    v82 = (unsigned int *)((char *)v42 + 252);
    v47 = (unsigned int *)((char *)v42 + 252);
    if ( v10 )
    {
      LOBYTE(v24) = 5;
      v48 = HmgReferenceCheckLock(v10, v24, 0LL);
      v49 = a1;
      v8 = (_DWORD *)(v48 + 24);
      SFMLOGICALSURFACE::SetShape(v42, a1, (struct _SURFOBJ *)(v48 + 24));
      *v46 |= 8u;
      if ( (v8[23] & 0x800) != 0 )
      {
        v50 = v8[160];
        *(_DWORD *)(v22 + 132) = v8[159];
        *(_DWORD *)(v22 + 136) = v50;
        *(_DWORD *)(v22 + 140) |= 0x20u;
      }
      else
      {
        *(_DWORD *)(v22 + 132) = 0;
        *(_DWORD *)(v22 + 136) = 0;
        *(_DWORD *)(v22 + 140) &= ~0x20u;
      }
LABEL_42:
      v51 = *(_DWORD *)(a4 + 8) - *(_DWORD *)a4;
      v52 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
      if ( v8 )
      {
        *v47 |= 1u;
        v53 = v52 + *(_DWORD *)(v22 + 60);
        v54 = v51 + *(_DWORD *)(v22 + 56);
      }
      else
      {
        v53 = *(_DWORD *)(v22 + 60);
        v54 = *(_DWORD *)(v22 + 56);
      }
      *(_DWORD *)(v22 + 64) = v54;
      *(_DWORD *)(v22 + 68) = v53;
      v55 = (Gre::Base *)*v47;
      if ( ((unsigned __int8)v55 & 1) != 0 && (*(_DWORD *)(v22 + 140) & 0x10) == 0 && ((unsigned __int8)v55 & 8) != 0 )
      {
        v56 = Gre::Base::Globals(v55);
        SFMLOGICALSURFACE::StartSfmStateTracking(v42, v49, *((struct SfmState **)v56 + 809));
        SFMLOGICALSURFACE::GetRedirectionInfo(v42, (enum _HLSURF_REDIRECTIONSTYLE *)&v79, &v78, &v77, 0LL, 0LL);
        v57 = *v47;
        v58 = *(_DWORD *)(v22 + 140);
        v59 = *(_QWORD *)(v22 + 104);
        v60 = *(_DWORD *)(v22 + 116);
        v61 = *(_QWORD *)v22;
        *(_QWORD *)(v22 + 104) = 0LL;
        v62 = *(_QWORD *)v42;
        v63 = v57 & 1;
        v64 = v57 & 0xC;
        v65 = v58 & 1 | v64 | (2 * (v63 | v58 & 0x40 | (4 * (v58 & 0xE))));
        v67 = (void *)UserReferenceDwmApiPort(v63, v64, v66);
        v76 = (int)DwmAsyncUpdateSprite(v67, v61, v62, v65, v22 + 72, (__int128 *)a4, v79, v78, v77, v60 >= 1, v59) >= 0;
        *v82 &= ~8u;
      }
      if ( *(int *)(v22 + 116) >= 1 )
        CheckAndProcessWindowResizeComplete((struct DWMSPRITE *)v22, 0, 0LL);
      if ( v88 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v88 + 3);
        if ( v89 == 1 )
        {
          v68 = v88;
          v69 = *((_DWORD *)v88 + 61);
          if ( (v69 & 0x80u) != 0 && (v69 & 8) != 0 && (v69 & 0x10) != 0 )
          {
            *((_DWORD *)v88 + 61) = v69 & 0xFFFFFFEF;
            v70 = Gre::Base::Globals(v68);
            SFMLOGICALSURFACE::StopSfmStateTracking(v88, 0LL, *((struct SfmState **)v70 + 809));
            v68 = v88;
          }
          bhLSurfDestroyLogicalSurfaceObject(v68, 1);
        }
      }
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v87);
      v15 = v83;
      if ( v85 )
        _InterlockedDecrement((volatile signed __int32 *)(v85 + 12));
      goto LABEL_60;
    }
    v49 = a1;
LABEL_41:
    *v46 &= ~1u;
    *v47 = *v46 & 0xFFFFFFF7;
    goto LABEL_42;
  }
LABEL_62:
  v71 = v86;
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v71 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v80);
  if ( !v81 )
    goto LABEL_65;
  v10 = a3;
  v11 = a2;
LABEL_64:
  v7 = GdiHintSpriteShape(a1, v11, v10, 0, 0);
LABEL_65:
  if ( a7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
    GreReleaseSemaphoreInternal(*v15);
  }
  if ( v91 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v91 + 3);
    if ( v92 == 1 )
    {
      v72 = v91;
      v73 = *((_DWORD *)v91 + 61);
      if ( (v73 & 0x80u) != 0 && (v73 & 8) != 0 && (v73 & 0x10) != 0 )
      {
        *((_DWORD *)v91 + 61) = v73 & 0xFFFFFFEF;
        v74 = Gre::Base::Globals(v72);
        SFMLOGICALSURFACE::StopSfmStateTracking(v91, 0LL, *((struct SfmState **)v74 + 809));
        v72 = v91;
      }
      bhLSurfDestroyLogicalSurfaceObject(v72, 1);
    }
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v90);
  return v7;
}
