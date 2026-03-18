/*
 * XREFs of GreHintSpriteShape @ 0x140027AF0
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x140020810 (-vClearRendering@DC@@QEAAXXZ.c)
 *     HintSpriteShape @ 0x14002D818 (HintSpriteShape.c)
 *     GreHintSpriteShapeDelayDelete @ 0x140321EDC (GreHintSpriteShapeDelayDelete.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x140023C64 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002569C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140029324 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14002C858 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x140062CF0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140062D4C (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1400C916C (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1400CAFFC (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1400CCA14 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1400CCA5C (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400E08E8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     DwmAsyncUpdateSprite @ 0x14016AADC (DwmAsyncUpdateSprite.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x14016B1E8 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x14016C284 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1401D412C (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1401DAD5C (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GreHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, __int64 a4, int a5, int a6, int a7)
{
  char v7; // di
  int v8; // esi
  HDEV v9; // rbx
  unsigned int v11; // r13d
  __int64 v12; // r15
  Gre::Base *v13; // rcx
  struct Gre::Base::SESSION_GLOBALS *v14; // r12
  Gre::Base *v15; // rcx
  struct PDEVOBJ *v16; // rdx
  Gre::Base *v17; // rcx
  DWMSPRITE *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rax
  struct SFMLOGICALSURFACE *v22; // rdi
  unsigned int *v23; // rbx
  unsigned int *v24; // rsi
  int v25; // ecx
  int v26; // edx
  int v27; // r8d
  int v28; // edx
  Gre::Base *v29; // rcx
  __int64 v31; // rbx
  __int128 v32; // xmm1
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int64 v46; // rax
  int v47; // eax
  HLSURF HLSURFClone; // rax
  __int64 v49; // rdx
  HDEV v50; // rdx
  HDEV v51; // rdx
  struct Gre::Base::SESSION_GLOBALS *v52; // rax
  int v53; // r9d
  _DWORD *v54; // rcx
  int v55; // ecx
  __int64 v56; // r15
  int v57; // r14d
  void *v58; // rax
  int updated; // esi
  int v60; // [rsp+60h] [rbp-A0h]
  int v61; // [rsp+64h] [rbp-9Ch]
  int v62; // [rsp+68h] [rbp-98h]
  int v63; // [rsp+6Ch] [rbp-94h]
  int v65; // [rsp+78h] [rbp-88h]
  unsigned int *v68; // [rsp+90h] [rbp-70h]
  char v70[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v71[2]; // [rsp+A8h] [rbp-58h] BYREF
  char v72[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v73; // [rsp+C0h] [rbp-40h] BYREF
  char v74; // [rsp+C8h] [rbp-38h]
  _BYTE v75[32]; // [rsp+D0h] [rbp-30h] BYREF
  DWMSPRITE *v76; // [rsp+F0h] [rbp-10h]
  _BYTE v77[32]; // [rsp+F8h] [rbp-8h] BYREF
  struct SFMLOGICALSURFACE *v78; // [rsp+118h] [rbp+18h]
  _BYTE v79[56]; // [rsp+128h] [rbp+28h] BYREF
  __int128 v80; // [rsp+160h] [rbp+60h] BYREF
  __int128 v81; // [rsp+170h] [rbp+70h]
  __int128 v82; // [rsp+180h] [rbp+80h]
  __int128 v83; // [rsp+190h] [rbp+90h]
  __int128 v84; // [rsp+1A0h] [rbp+A0h]
  __int128 v85; // [rsp+1B0h] [rbp+B0h]
  __int128 v86; // [rsp+1C0h] [rbp+C0h]
  __int128 v87; // [rsp+1D0h] [rbp+D0h]
  __int64 v88; // [rsp+1E0h] [rbp+E0h]

  v7 = a5;
  v8 = 0;
  v61 = 0;
  v9 = a1;
  v11 = 1;
  v65 = 1;
  v12 = 0LL;
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v77);
  v14 = Gre::Base::Globals(v13);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(v71, v14);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v70, a7 != 0);
  if ( !a6 || !IsDwmActive(v15) )
    goto LABEL_20;
  v71[1] = (__int64)v9;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v72, v16, 0, 0);
  v73 = *(_QWORD *)v14 + 520LL;
  v74 = 0;
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v73);
  if ( !IsDwmActive(v17) )
    goto LABEL_19;
  v65 = 0;
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v75, a2);
  v18 = v76;
  if ( v76 )
  {
    v19 = *((_QWORD *)v76 + 18);
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v79, (struct SFMLOGICALSURFACE *)v19);
    v21 = *(_QWORD *)(v19 + 184);
    if ( v21 )
    {
      v31 = v21 - 24;
      if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v21 - 24)) )
      {
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v31 + 272));
        if ( *(_DWORD *)(v31 + 324) )
        {
          *(_QWORD *)(v31 + 336) = a2;
          *(_QWORD *)(v31 + 344) = a3;
          *(_QWORD *)(v31 + 328) = a1;
          v32 = *(_OWORD *)(a4 + 16);
          v33 = *(_QWORD *)(a4 + 128);
          v80 = *(_OWORD *)a4;
          v34 = *(_OWORD *)(a4 + 32);
          v81 = v32;
          v35 = *(_OWORD *)(a4 + 48);
          v82 = v34;
          v36 = *(_OWORD *)(a4 + 64);
          v83 = v35;
          v37 = *(_OWORD *)(a4 + 80);
          v84 = v36;
          v38 = *(_OWORD *)(a4 + 96);
          v85 = v37;
          v86 = v38;
          v87 = *(_OWORD *)(a4 + 112);
          v88 = v33;
          v39 = v81;
          *(_OWORD *)(v31 + 352) = v80;
          v40 = v82;
          *(_OWORD *)(v31 + 368) = v39;
          v41 = v83;
          *(_OWORD *)(v31 + 384) = v40;
          v42 = v84;
          *(_OWORD *)(v31 + 400) = v41;
          v43 = v85;
          *(_OWORD *)(v31 + 416) = v42;
          v44 = v86;
          *(_OWORD *)(v31 + 432) = v43;
          v45 = v87;
          v46 = v88;
          *(_OWORD *)(v31 + 448) = v44;
          *(_OWORD *)(v31 + 464) = v45;
          *(_QWORD *)(v31 + 480) = v46;
          *(_DWORD *)(v31 + 488) = a5;
          *(_DWORD *)(v31 + 492) = a6;
          v47 = *(_DWORD *)(v31 + 112);
          if ( (v47 & 0x2000000) == 0 )
          {
            *(_DWORD *)(v31 + 112) = v47 | 0x2000000;
            _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState() + 96) + 4832LL), 1u);
          }
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v31 + 272));
          goto LABEL_28;
        }
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v31 + 272));
        v7 = a5;
      }
      v9 = a1;
    }
    if ( !*(_QWORD *)(v19 + 184) && (*(_DWORD *)(v19 + 244) & 1) == 0 )
    {
      v22 = (struct SFMLOGICALSURFACE *)v19;
      goto LABEL_9;
    }
    ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)&v80);
    HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(v9, (struct SFMLOGICALSURFACE *)v19, 0, v7 & 2, 1);
    if ( HLSURFClone )
    {
      LOBYTE(v49) = 18;
      v78 = (struct SFMLOGICALSURFACE *)HmgLock(HLSURFClone, v49);
    }
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)&v80);
    v22 = v78;
    if ( v78 )
    {
      DWMSPRITE::SetLogicalSurface(v18, v50, 0LL);
      DWMSPRITE::SetLogicalSurface(v18, v51, v22);
LABEL_9:
      v23 = (unsigned int *)((char *)v22 + 252);
      v68 = (unsigned int *)((char *)v22 + 252);
      v24 = (unsigned int *)((char *)v22 + 252);
      if ( a3 )
      {
        LOBYTE(v20) = 5;
        v12 = HmgReferenceCheckLock(a3, v20, 0LL) + 24;
        SFMLOGICALSURFACE::SetShape(v22, a1, (struct _SURFOBJ *)v12);
        *v23 |= 8u;
        if ( (*(_DWORD *)(v12 + 92) & 0x800) != 0 )
        {
          v63 = *(_DWORD *)(v12 + 640);
          *((_DWORD *)v18 + 33) = *(_DWORD *)(v12 + 636);
          *((_DWORD *)v18 + 34) = v63;
          *((_DWORD *)v18 + 35) |= 0x20u;
        }
        else
        {
          *((_DWORD *)v18 + 33) = 0;
          *((_DWORD *)v18 + 34) = 0;
          *((_DWORD *)v18 + 35) &= ~0x20u;
        }
LABEL_11:
        v25 = *(_DWORD *)(a4 + 8) - *(_DWORD *)a4;
        v26 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
        if ( v12 )
        {
          *v24 |= 1u;
          v27 = v26 + *((_DWORD *)v18 + 15);
          v28 = v25 + *((_DWORD *)v18 + 14);
        }
        else
        {
          v27 = *((_DWORD *)v18 + 15);
          v28 = *((_DWORD *)v18 + 14);
        }
        *((_DWORD *)v18 + 16) = v28;
        *((_DWORD *)v18 + 17) = v27;
        v29 = (Gre::Base *)*v24;
        if ( ((unsigned __int8)v29 & 1) != 0 && (*((_DWORD *)v18 + 35) & 0x10) == 0 && ((unsigned __int8)v29 & 8) != 0 )
        {
          v52 = Gre::Base::Globals(v29);
          SFMLOGICALSURFACE::StartSfmStateTracking(v22, a1, *((struct SfmState **)v52 + 529), v53);
          v54 = (_DWORD *)*((_QWORD *)v22 + 23);
          if ( v54 )
          {
            v60 = v54[8];
            v62 = v54[9];
            if ( (v54[23] & 1) != 0 )
            {
              v61 = 2;
            }
            else if ( (v54[22] & 0x800) != 0 )
            {
              v61 = 1;
            }
          }
          else
          {
            v61 = 0;
            v60 = 0;
            v62 = 0;
          }
          v55 = *((_DWORD *)v18 + 35);
          v56 = *((_QWORD *)v18 + 13);
          v57 = *((_DWORD *)v18 + 29);
          *((_QWORD *)v18 + 13) = 0LL;
          v58 = (void *)UserReferenceDwmApiPort(v55 & 1);
          updated = DwmAsyncUpdateSprite(v58, (__int64)v18 + 72, a4, v61, v60, v62, v57 >= 1, v56);
          *v68 &= ~8u;
          v8 = updated >= 0;
        }
        else
        {
          v8 = 1;
        }
        if ( *((int *)v18 + 29) >= 1 )
          CheckAndProcessWindowResizeComplete(v18, 0, 0LL);
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v79);
        v9 = a1;
        goto LABEL_18;
      }
LABEL_10:
      *v23 &= ~1u;
      *v24 = *v23 & 0xFFFFFFF7;
      goto LABEL_11;
    }
    if ( !a3 )
    {
      v22 = (struct SFMLOGICALSURFACE *)v19;
      SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v19, v9, 0LL);
      v23 = (unsigned int *)(v19 + 252);
      v24 = v23;
      v68 = v23;
      goto LABEL_10;
    }
    v11 = 0;
LABEL_28:
    SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v79);
    DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v75);
    SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>(&v73);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v72);
    goto LABEL_22;
  }
LABEL_18:
  DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v75);
LABEL_19:
  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>(&v73);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v72);
  if ( v65 )
LABEL_20:
    v8 = GdiHintSpriteShape(v9, a2, a3, 0, 0);
  v11 = v8;
LABEL_22:
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v70);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v71[0]);
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v77);
  return v11;
}
