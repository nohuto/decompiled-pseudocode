/*
 * XREFs of ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C00B9650
 * Callers:
 *     GreUpdateSprite @ 0x1C00B7164 (GreUpdateSprite.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0108A98 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GreUpdateSpriteCallout@@YAXPEAX@Z @ 0x1C0265070 (-GreUpdateSpriteCallout@@YAXPEAX@Z.c)
 * Callees:
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00209B4 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00222C0 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     DwmAsyncDirtySprite @ 0x1C0027344 (DwmAsyncDirtySprite.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C006B9CC (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     DwmAsyncUpdateSprite @ 0x1C007AAF0 (DwmAsyncUpdateSprite.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0087284 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C008C180 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C009CF2C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C009FD98 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00BA500 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00C2470 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00C42A0 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x1C00C4980 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0133DCC (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C01340F4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0135338 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013DC74 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C0265D20 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C02D4A00 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall GreUpdateSpriteInternal(
        HDEV a1,
        HWND a2,
        void *a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12,
        struct tagMINIWINDOWINFO *a13,
        int a14,
        int a15,
        unsigned int a16)
{
  HDEV v16; // rbx
  unsigned int v17; // edi
  unsigned int v18; // r13d
  unsigned int v19; // r15d
  Gre::Base *v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  Gre::Base *v22; // rcx
  __int64 v23; // rax
  int v24; // edi
  int v25; // r14d
  __int64 v26; // rsi
  struct Gre::Base::SESSION_GLOBALS *v27; // rbx
  Gre::Base *v28; // rcx
  Gre::Base *v29; // rcx
  int v30; // ebx
  void *v31; // r15
  __int64 v32; // r13
  struct Gre::Base::SESSION_GLOBALS *v33; // r13
  __int64 v34; // rbx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // r15
  __int64 v40; // r13
  SFMLOGICALSURFACE *v41; // rsi
  void *v42; // rax
  SFMLOGICALSURFACE *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // r8
  char *v46; // r12
  struct tagRECT v47; // xmm0
  int *v48; // rdx
  __int64 v49; // r8
  unsigned int v50; // r15d
  struct _BLENDFUNCTION *v51; // r14
  unsigned __int64 v52; // rcx
  int v53; // r10d
  int v54; // eax
  struct _BLENDFUNCTION v55; // ecx
  __int64 v56; // rbx
  int v57; // eax
  HSURF v58; // rcx
  SFMLOGICALSURFACE *FirstLSurf; // r10
  __int64 v60; // rdx
  int v61; // r9d
  struct tagPOINT *v62; // r11
  LONG x; // eax
  int v64; // edx
  int v65; // ebx
  SURFACE *v66; // rax
  __int64 v67; // r8
  struct tagRECT *v68; // r10
  __int64 v69; // r8
  LONG y; // edx
  struct _RECTL *v71; // rax
  LONG v72; // ecx
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rdx
  _OWORD *v77; // rax
  SFMLOGICALSURFACE *v78; // rbx
  Gre::Base *v79; // rcx
  struct Gre::Base::SESSION_GLOBALS *v80; // rax
  _DWORD *v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  int v85; // ebx
  void *v86; // rax
  SFMLOGICALSURFACE *v87; // rbx
  int v88; // eax
  struct Gre::Base::SESSION_GLOBALS *v89; // rax
  HLSURF v90; // r12
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  SFMLOGICALSURFACE *v94; // r12
  unsigned int v95; // ebx
  __int64 v96; // rax
  int v97; // eax
  __int64 v98; // rax
  void *v99; // rax
  __int64 v100; // r8
  unsigned int v101; // ebx
  struct Gre::Base::SESSION_GLOBALS *v102; // rbx
  Gre::Base *v103; // rcx
  struct Gre::Base::SESSION_GLOBALS *v104; // rbx
  unsigned int v106; // eax
  int v107; // [rsp+20h] [rbp-E0h]
  int v108; // [rsp+60h] [rbp-A0h]
  int v109; // [rsp+60h] [rbp-A0h]
  int v110; // [rsp+60h] [rbp-A0h]
  int updated; // [rsp+64h] [rbp-9Ch]
  unsigned int v112; // [rsp+68h] [rbp-98h]
  struct tagPOINT *v113; // [rsp+68h] [rbp-98h]
  unsigned int v114; // [rsp+6Ch] [rbp-94h]
  char v115; // [rsp+70h] [rbp-90h]
  SFMLOGICALSURFACE *v116; // [rsp+78h] [rbp-88h] BYREF
  int v117; // [rsp+80h] [rbp-80h]
  unsigned int v118; // [rsp+84h] [rbp-7Ch]
  __int64 v119; // [rsp+88h] [rbp-78h]
  int v120; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v121; // [rsp+94h] [rbp-6Ch] BYREF
  struct _BLENDFUNCTION *v122; // [rsp+98h] [rbp-68h]
  int v123; // [rsp+A0h] [rbp-60h]
  struct tagRECT *v124; // [rsp+A8h] [rbp-58h]
  void *v125; // [rsp+B0h] [rbp-50h]
  __int64 v126; // [rsp+B8h] [rbp-48h]
  __int64 v127; // [rsp+C0h] [rbp-40h]
  unsigned int v128; // [rsp+C8h] [rbp-38h]
  HDEV v129; // [rsp+D0h] [rbp-30h]
  struct tagSIZE *v130; // [rsp+D8h] [rbp-28h]
  __int64 v131; // [rsp+E0h] [rbp-20h]
  struct tagPOINT *v132; // [rsp+E8h] [rbp-18h]
  HDC v133; // [rsp+F0h] [rbp-10h]
  struct tagPOINT *v134; // [rsp+F8h] [rbp-8h]
  HWND v135; // [rsp+100h] [rbp+0h]
  HDEV v136; // [rsp+108h] [rbp+8h] BYREF
  struct _BLENDFUNCTION *v137; // [rsp+110h] [rbp+10h]
  __int64 v138; // [rsp+118h] [rbp+18h]
  struct Gre::Base::SESSION_GLOBALS *v139; // [rsp+128h] [rbp+28h]
  HDC v140; // [rsp+130h] [rbp+30h]
  _BYTE v141[32]; // [rsp+138h] [rbp+38h] BYREF
  SFMLOGICALSURFACE *v142; // [rsp+158h] [rbp+58h]
  int v143; // [rsp+160h] [rbp+60h]
  _QWORD Buffer[2]; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v145[2]; // [rsp+178h] [rbp+78h] BYREF
  char v146[32]; // [rsp+188h] [rbp+88h] BYREF
  struct _RECTL v147; // [rsp+1A8h] [rbp+A8h] BYREF
  struct tagRECT v148; // [rsp+1B8h] [rbp+B8h] BYREF
  _OWORD v149[8]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v150; // [rsp+250h] [rbp+150h]
  unsigned int v151; // [rsp+310h] [rbp+210h]

  v134 = a5;
  v16 = a1;
  v130 = a6;
  v17 = a11 & 0x200000;
  v18 = 0;
  v133 = a7;
  v132 = a8;
  v122 = a10;
  v137 = a10;
  v124 = a12;
  v129 = a1;
  v150 = 0LL;
  v115 = 0;
  v140 = a4;
  v125 = a3;
  v135 = a2;
  v126 = (__int64)a13;
  v131 = 0LL;
  updated = 0;
  v117 = 1;
  v128 = a11 & 0x200000;
  memset(v149, 0, sizeof(v149));
  v120 = 0;
  v121 = 0;
  v123 = 0;
  v19 = a11 & 0xFFDFFFFF;
  v139 = Gre::Base::Globals(a13);
  v151 = v19;
  v118 = v19;
  if ( !a14 || !*((_QWORD *)Gre::Base::Globals(v20) + 38) )
    goto LABEL_164;
  if ( !v17 )
  {
    GreAcquireSemaphore(*((_QWORD *)v139 + 15));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v139 + 15), 2LL);
    v136 = v16;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread
      && (v23 = *ThreadWin32Thread) != 0
      && ((v24 = 1, v25 = 0, v108 = 1, *(_DWORD *)(v23 + 104)) || (v108 = 1, *(_DWORD *)(v23 + 108))) )
    {
      v26 = *((_QWORD *)v139 + 9);
      if ( v128 )
        goto LABEL_13;
    }
    else
    {
      v27 = Gre::Base::Globals(v22);
      GreAcquireSemaphore(*((_QWORD *)v27 + 14));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v27 + 14), 5LL);
      v26 = *((_QWORD *)v139 + 9);
      v25 = 1;
      v24 = 1;
      v108 = 1;
    }
    GreAcquireSemaphore(v26);
    goto LABEL_14;
  }
  v26 = *((_QWORD *)v139 + 9);
  v25 = 0;
  v136 = v16;
  v24 = 0;
  v108 = 0;
LABEL_13:
  GreAcquireSemaphoreSharedInternal(v26);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v26);
LABEL_14:
  if ( *((_QWORD *)Gre::Base::Globals(v28) + 38) )
  {
    v30 = v24;
    v31 = v125;
    v32 = v26;
    v114 = v24;
    v119 = v26;
    v112 = v25;
    if ( v135 )
    {
      Buffer[1] = 0LL;
      v31 = 0LL;
      v33 = Gre::Base::Globals(v29);
      Buffer[0] = v135;
      v34 = *((_QWORD *)v33 + 38) + 72LL;
      if ( *((_QWORD *)v33 + 38) != -72LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v34, 0LL);
      }
      v35 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v33 + 38), Buffer);
      if ( v35 )
        v31 = (void *)v35[1];
      if ( v34 )
      {
        ExReleasePushLockExclusiveEx(v34, 0LL);
        KeLeaveCriticalRegion();
      }
      v30 = v24;
      v32 = v26;
    }
    if ( v31 )
    {
      Gre::Base::Globals(v29);
      LOBYTE(v36) = 15;
      v37 = HmgShareLockCheck(v31, v36);
      v38 = v37;
      if ( v37 )
      {
        v109 = v30;
        v39 = v37;
        v138 = v37 + 140;
        v26 = v32;
        if ( (*(_DWORD *)(v37 + 140) & 0x10) != 0 )
        {
          v101 = a9;
          v24 = v109;
LABEL_153:
          v18 = updated;
          DEC_SHARE_REF_CNT(v39);
          a9 = v101;
LABEL_156:
          v19 = v151;
          goto LABEL_157;
        }
        v40 = v37 + 88;
        v117 = 0;
        updated = 1;
        if ( v37 != -88 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v39 + 88, 0LL);
        }
        v42 = *(void **)v38;
        v43 = *(SFMLOGICALSURFACE **)(v38 + 144);
        v116 = v43;
        v41 = v43;
        v125 = v42;
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v141);
        v142 = 0LL;
        v143 = 1;
        if ( v43 && *(_QWORD *)v116 )
        {
          LOBYTE(v44) = 18;
          v142 = (SFMLOGICALSURFACE *)HmgLock(*(_QWORD *)v116, v44);
        }
        v46 = (char *)v116 + 256;
        if ( v116 != (SFMLOGICALSURFACE *)-256LL )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)v116 + 256, 0LL);
        }
        if ( v124 )
        {
          v47 = *v124;
          v124 = &v148;
          v148 = v47;
        }
        if ( v151 == 0x2000000 )
        {
          v48 = &v120;
          v122 = (struct _BLENDFUNCTION *)&v120;
          v120 = 33488896;
          if ( v130 || v134 )
          {
            LOBYTE(v48) = 1;
            vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v38, (__int64)v48, v45);
            v49 = 33554434LL;
            v50 = a9;
            v51 = v122;
          }
          else
          {
            LOBYTE(v48) = 0;
            vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v38, (__int64)v48, v45);
            v49 = 33554434LL;
            v50 = a9;
            v51 = v122;
          }
        }
        else
        {
          v49 = v118;
          v122 = v137;
          if ( (v118 & 0x20000000) != 0 )
          {
            v50 = a9;
            LODWORD(v49) = v118 & 0xDFFFFFFF;
            v51 = v137;
          }
          else
          {
            if ( (v118 & 0x40000000) == 0 )
            {
              v122 = v137;
              v51 = v137;
              v151 = v118;
              if ( v118 )
              {
                v50 = a9;
LABEL_47:
                v118 = v50;
                v52 = v49 & 2;
                if ( (v49 & 2) != 0 && (!v51 || (v51->AlphaFormat & 1) != 0 && (*((_DWORD *)v116 + 63) & 1) != 0) )
                {
                  v53 = 0;
                  v25 = v112;
                  v39 = v38;
                  v26 = v119;
                  updated = 0;
                  v110 = v114;
LABEL_107:
                  if ( *(_QWORD *)(v39 + 40) )
                  {
                    v77 = (_OWORD *)v126;
                  }
                  else
                  {
                    vSpDwmGetMiniWinInfoForNonWindowSprite(v149, v39 + 56);
                    v77 = v149;
                    v126 = (__int64)v149;
                  }
                  if ( v53 )
                  {
                    if ( !v115 )
                    {
                      v78 = v116;
                      if ( v77 || (*((_DWORD *)v116 + 63) & 8) != 0 )
                      {
                        v79 = (Gre::Base *)*((unsigned int *)v116 + 63);
                        if ( ((unsigned __int8)v79 & 8) != 0 )
                        {
                          v80 = Gre::Base::Globals(v79);
                          SFMLOGICALSURFACE::StartSfmStateTracking(v78, v129, *((struct SfmState **)v80 + 809));
                          LODWORD(v79) = *((_DWORD *)v78 + 63);
                        }
                        v81 = (_DWORD *)*((_QWORD *)v78 + 23);
                        if ( v81 )
                        {
                          HIDWORD(v113) = v81[8];
                          LODWORD(v113) = v81[9];
                          if ( (v81[23] & 1) != 0 )
                          {
                            v123 = 2;
                          }
                          else if ( (v81[22] & 0x800) != 0 )
                          {
                            v123 = 1;
                          }
                        }
                        else
                        {
                          v123 = 0;
                          v113 = 0LL;
                        }
                        v82 = v138;
                        v138 = *(_QWORD *)(v39 + 104);
                        LODWORD(v119) = *(_DWORD *)(v39 + 116);
                        LODWORD(v82) = *(_DWORD *)v82;
                        *(_QWORD *)(v39 + 104) = 0LL;
                        v83 = (unsigned __int8)v79 & 1;
                        v84 = (unsigned __int8)v79 & 0xC;
                        v85 = v82 & 1 | v84 | (2 * (v83 | v82 & 0x40 | (4 * (v82 & 0xE))));
                        v137 = *(struct _BLENDFUNCTION **)v116;
                        v127 = *(_QWORD *)v39;
                        v86 = (void *)UserReferenceDwmApiPort(v84, v83, v49);
                        DwmAsyncUpdateSprite(
                          v86,
                          v127,
                          (__int64)v137,
                          v85,
                          v39 + 72,
                          (__int128 *)v126,
                          v123,
                          SHIDWORD(v113),
                          (int)v113,
                          (int)v119 >= 1,
                          v138);
                      }
                    }
                  }
                  if ( v46 )
                  {
                    ExReleasePushLockExclusiveEx(v46, 0LL);
                    KeLeaveCriticalRegion();
                  }
                  if ( v142 )
                  {
                    _InterlockedDecrement((volatile signed __int32 *)v142 + 3);
                    if ( v143 == 1 )
                    {
                      v87 = v142;
                      v88 = *((_DWORD *)v142 + 61);
                      if ( (v88 & 0x80u) != 0 && (v88 & 8) != 0 && (v88 & 0x10) != 0 )
                      {
                        *((_DWORD *)v142 + 61) = v88 & 0xFFFFFFEF;
                        v89 = Gre::Base::Globals((Gre::Base *)v52);
                        SFMLOGICALSURFACE::StopSfmStateTracking(v142, 0LL, *((struct SfmState **)v89 + 809));
                        v87 = v142;
                      }
                      v90 = *(HLSURF *)v87;
                      if ( *(_QWORD *)v87 )
                      {
                        LOBYTE(v107) = 18;
                        v87 = (SFMLOGICALSURFACE *)HmgRemoveObject(v90, 0LL, 0LL, 1LL, v107, 0LL);
                      }
                      if ( v87 )
                      {
                        SFMLOGICALSURFACE::DeInitialize(v87, v90);
                        FreeObject(v87, 18LL);
                        EtwLogicalSurfDestroyEvent(v90, 0LL);
                      }
                    }
                  }
                  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v141);
                  v94 = v116;
                  v95 = v121;
                  v96 = *((_QWORD *)v116 + 23);
                  if ( v96 )
                  {
                    v92 = *(_QWORD *)(v96 + 8);
                    v91 = *(_QWORD *)v38;
                    v97 = *(_DWORD *)(v96 + 92);
                    v24 = v110;
                    v131 = v92;
                    v126 = v91;
                    if ( (v97 & 1) != 0 )
                    {
                      v95 = v121 & 0xFFFFFFFE;
                      v131 = v92;
                      v126 = v91;
                    }
                  }
                  else
                  {
                    v98 = *(_QWORD *)v38;
                    v24 = v110;
                    v126 = v98;
                  }
                  if ( (v95 & 1) != 0 && bShouldUseSfmTokenArray(*((_DWORD *)v116 + 63)) )
                  {
                    GreAddLogicalSurfaceToDirtyQueue(*(Gre::Base **)v94, 1u, v131);
                    v95 &= ~1u;
                  }
                  if ( v95 )
                  {
                    v99 = (void *)UserReferenceDwmApiPort(v92, v91, v93);
                    DwmAsyncDirtySprite(v99, v126, v100, v95, v131);
                  }
                  if ( v94 == (SFMLOGICALSURFACE *)-256LL )
                  {
                    MEMORY[0xFFFFFFFFFFFFFFFC] &= ~8u;
                  }
                  else
                  {
                    KeEnterCriticalRegion();
                    ExAcquirePushLockExclusiveEx((char *)v94 + 256, 0LL);
                    *((_DWORD *)v94 + 63) &= ~8u;
                    ExReleasePushLockExclusiveEx((char *)v94 + 256, 0LL);
                    KeLeaveCriticalRegion();
                  }
                  if ( v40 )
                  {
                    ExReleasePushLockExclusiveEx(v40, 0LL);
                    KeLeaveCriticalRegion();
                  }
                  v101 = v118;
                  goto LABEL_153;
                }
                *(_DWORD *)(v38 + 72) = v49;
                if ( (v49 & 2) != 0 )
                {
                  if ( *(_BYTE *)(v38 + 79) != v51->AlphaFormat )
                  {
                    v54 = bSpDwmCreateLogicalSurface(v129, (struct DWMSPRITE *)v38, v43, 0LL, &v116);
                    v49 = v151;
                    v43 = v116;
                    updated = v54;
                  }
                  *(struct _BLENDFUNCTION *)(v38 + 76) = *v51;
                  v55 = *v51;
                  *((_DWORD *)v43 + 61) |= 0x40u;
                  *((struct _BLENDFUNCTION *)v43 + 60) = v55;
                }
                if ( (v49 & 1) != 0 )
                {
                  *(_DWORD *)(v38 + 80) = v50;
                  if ( *((_QWORD *)v41 + 23) )
                  {
                    if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v41) )
                    {
                      if ( !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v136) )
                      {
                        v56 = *((_QWORD *)v41 + 23);
                        if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v136) )
                        {
                          v57 = *(_DWORD *)(v56 + 92);
                          if ( (v57 & 0x20) == 0 )
                          {
                            v58 = *(HSURF *)(v56 + 8);
                            *(_DWORD *)(v56 + 92) = v57 | 0x20;
                            pConvertDfbSurfaceToDibPostNKAPC(v58);
                            v115 = 1;
                          }
                        }
                        else
                        {
                          v66 = (SURFACE *)pProcessDfbSurfaces(v56 - 24, 1LL);
                          if ( v66 )
                          {
                            FirstLSurf = SURFACE::GetFirstLSurf(v66);
                            v116 = FirstLSurf;
                            goto LABEL_64;
                          }
                        }
                        FirstLSurf = v116;
LABEL_64:
                        v49 = v151;
                        goto LABEL_65;
                      }
                      v49 = v151;
                    }
                  }
                }
                FirstLSurf = v116;
LABEL_65:
                v39 = v38;
                v60 = v119;
                v61 = v112;
                v26 = v119;
                v52 = v114;
                v25 = v112;
                v110 = v114;
                if ( !updated )
                {
LABEL_109:
                  v53 = updated;
                  goto LABEL_107;
                }
                v62 = v134;
                if ( v134 )
                {
                  x = v134->x;
                  v64 = v134->y - *(_DWORD *)(v38 + 60);
                  *(_DWORD *)(v38 + 64) += v134->x - *(_DWORD *)(v38 + 56);
                  *(_DWORD *)(v38 + 68) += v64;
                  *(_DWORD *)(v38 + 60) += v64;
                  v60 = v26;
                  v52 = v114;
                  *(_DWORD *)(v38 + 56) = x;
                }
                if ( (*((_DWORD *)FirstLSurf + 63) & 1) != 0 )
                {
                  v49 = (__int64)v124;
                  v26 = v60;
                  v110 = v52;
                  v65 = v52;
                  if ( !v124 || (v110 = v52, !*((_QWORD *)FirstLSurf + 23)) )
                  {
LABEL_94:
                    if ( a16 )
                    {
                      v74 = *((_QWORD *)FirstLSurf + 23);
                      v75 = v74 - 24;
                      if ( !v74 )
                        v75 = 0LL;
                      if ( v75 && *(_DWORD *)(v75 + 656) != a16 )
                        *(_DWORD *)(v75 + 656) = a16;
                    }
                    v52 = *((unsigned int *)FirstLSurf + 63);
                    if ( (*((_DWORD *)FirstLSurf + 63) & 0x41) == 1 )
                    {
                      v52 = (unsigned int)v52 | 0x40;
                      *((_DWORD *)FirstLSurf + 63) = v52;
                    }
                    v76 = *((_QWORD *)FirstLSurf + 23);
                    if ( v76 && (*(_DWORD *)(v76 + 92) & 1) == 0 )
                    {
                      v110 = v65;
                      if ( !*(_QWORD *)(v76 + 224) )
                      {
                        v52 = (unsigned int)v52 | 8;
                        *((_DWORD *)FirstLSurf + 63) = v52;
                        v110 = v65;
                      }
                      v53 = updated;
                      goto LABEL_107;
                    }
                    goto LABEL_109;
                  }
                  vSpUpdateDirtyRgn((struct DWMSPRITE *)v38, FirstLSurf, v133, v124, &v121, a15);
                  v65 = v114;
                  v26 = v119;
                  v110 = v114;
                }
                else
                {
                  if ( (v49 & 0x2000000) != 0 )
                  {
                    if ( v62 && v130 )
                    {
                      updated = bSpDwmUpdateDragRectShape(
                                  v129,
                                  (struct DWMSPRITE *)v38,
                                  FirstLSurf,
                                  (struct tagPOINT *)v112,
                                  v130,
                                  &v121,
                                  &v116);
                      v61 = v112;
                    }
                    v65 = v114;
                    v25 = v61;
                    v110 = v114;
                  }
                  else
                  {
                    v26 = v60;
                    v65 = v52;
                    v110 = v52;
                    if ( v132 )
                    {
                      v110 = v52;
                      if ( v130 )
                      {
                        DCOBJ::DCOBJ((DCOBJ *)v145, v133);
                        v65 = v114;
                        v26 = v119;
                        updated = 0;
                        v110 = v114;
                        if ( v145[0] )
                        {
                          if ( !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v145) )
                          {
                            v69 = *(_QWORD *)(v67 + 496);
                            y = v132->y;
                            v71 = (struct _RECTL *)&v148;
                            v147.left = v132->x;
                            v147.right = v130->cx + v147.left;
                            v72 = y + v130->cy;
                            v147.top = y;
                            if ( v124 == v68 )
                              v71 = (struct _RECTL *)v68;
                            v147.bottom = v72;
                            v73 = bSpDwmUpdateSpriteShape(
                                    v129,
                                    (struct DWMSPRITE *)v38,
                                    v116,
                                    (struct _SURFOBJ *)(v69 + 24),
                                    &v147,
                                    *(struct PALETTE **)(v69 + 128),
                                    &v121,
                                    v71,
                                    &v116);
                            v67 = v145[0];
                            v39 = v38;
                            updated = v73;
                            v110 = v114;
                          }
                          if ( v67 )
                            XDCOBJ::vUnlockFast((XDCOBJ *)v145);
                        }
                        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v146);
                      }
                    }
                  }
                  v53 = updated;
                  if ( !updated )
                    goto LABEL_107;
                }
                FirstLSurf = v116;
                goto LABEL_94;
              }
            }
            v49 = *(unsigned int *)(v38 + 72);
            v51 = (struct _BLENDFUNCTION *)(v38 + 76);
            v50 = *(_DWORD *)(v38 + 80);
            v122 = (struct _BLENDFUNCTION *)(v38 + 76);
          }
        }
        v151 = v49;
        goto LABEL_47;
      }
      v24 = v108;
    }
    v18 = 0;
    goto LABEL_156;
  }
LABEL_157:
  if ( v24 )
  {
    v102 = v139;
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
    GreReleaseSemaphoreInternal(*((_QWORD *)v102 + 15));
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(v26);
  if ( v25 )
  {
    v104 = Gre::Base::Globals(v103);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
    GreReleaseSemaphoreInternal(*((_QWORD *)v104 + 14));
  }
  if ( !v117 )
    return v18;
  v16 = v129;
  v17 = v128;
LABEL_164:
  v106 = v19 | 0x200000;
  if ( !v17 )
    v106 = v19;
  return GdiUpdateSprite(
           (Gre::Base *)v16,
           v135,
           v125,
           v140,
           (struct _POINTL *)v134,
           v130,
           v133,
           (struct _POINTL *)v132,
           a9,
           v122,
           v106,
           v124);
}
