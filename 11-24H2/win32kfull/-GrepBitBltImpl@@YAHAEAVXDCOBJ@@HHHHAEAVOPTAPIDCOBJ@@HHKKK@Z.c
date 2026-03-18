/*
 * XREFs of ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0
 * Callers:
 *     NtGdiBitBlt @ 0x1400193E0 (NtGdiBitBlt.c)
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     DxgkEngBltViaGDI @ 0x1401A2AE0 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x140010370 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x140015954 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x140018520 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14001D1D8 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001FC80 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14001FD90 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     GreClientRgnUpdated @ 0x140060F88 (GreClientRgnUpdated.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400BB03C (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400CE708 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x1400D2138 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x1400D22EC (--$GrepAcquireLockValidate@$0N@@@YAXXZ.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400D243C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x14010CBB0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14010E354 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1401541FC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     GreClientRgnUpdatedStable @ 0x14016E4E4 (GreClientRgnUpdatedStable.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1401D4054 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x140213F34 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     SimBitBlt @ 0x14021C234 (SimBitBlt.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepBitBltImpl(
        DC **a1,
        LONG a2,
        int a3,
        int a4,
        int a5,
        struct OPTAPIDCOBJ *a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        char a11)
{
  struct XDCOBJ *v11; // r11
  int v12; // r10d
  LONG left; // ebx
  int v14; // r13d
  int v15; // ecx
  char v16; // r15
  int v17; // r14d
  unsigned int v18; // r12d
  __int64 v19; // rax
  unsigned int v20; // edi
  __int64 v21; // rdx
  DC *v22; // rcx
  __int64 v23; // r8
  struct _DC_ATTR *UserAttr; // rax
  struct Gre::Base::SESSION_GLOBALS *v25; // rax
  __int64 v26; // r10
  int v27; // r8d
  int v28; // edx
  __int64 y; // r9
  LONG x; // r8d
  int v31; // eax
  LONG top; // r8d
  LONG right; // edx
  XDCOBJ *v34; // rsi
  DC *v35; // r13
  int v36; // eax
  LONG bottom; // ecx
  DC *v39; // rax
  int v40; // ecx
  DC *v41; // r9
  DC *v42; // r8
  SURFACE *v43; // r9
  __int64 v44; // rsi
  __int64 v45; // r13
  unsigned __int8 v46; // cl
  DC **v47; // rdi
  Gre::Base *v48; // rcx
  struct Gre::Base::SESSION_GLOBALS *v50; // rax
  __int64 v51; // rdx
  DC *v52; // r9
  struct Gre::Base::SESSION_GLOBALS *v53; // r8
  struct Gre::Base::SESSION_GLOBALS *v54; // rax
  struct Gre::Base::SESSION_GLOBALS *v55; // rbx
  int v56; // eax
  int v57; // eax
  int v58; // r10d
  _DWORD *v59; // rcx
  LONG v60; // r11d
  __int64 v61; // rdx
  __int64 v62; // rbx
  int v63; // eax
  int v64; // edx
  int v65; // r9d
  __int64 v66; // rax
  LONG v67; // eax
  LONG v68; // r9d
  int v69; // ecx
  DC *v70; // rax
  __m128i v71; // xmm3
  DC *v72; // rcx
  int v73; // r12d
  __int64 v74; // rax
  LONG v75; // r11d
  int v76; // edx
  int v77; // r9d
  LONG v78; // r8d
  struct Gre::Base::SESSION_GLOBALS *v79; // r12
  XLATEOBJ *XlateObject; // rdi
  DC *v81; // rcx
  unsigned int v82; // edi
  __int64 v83; // r14
  __int64 v84; // rax
  int v85; // edx
  __int64 v86; // rax
  int v87; // edx
  __int64 v88; // rax
  unsigned int v89; // r12d
  struct Gre::Base::SESSION_GLOBALS *v90; // r8
  unsigned int v91; // edx
  int v92; // r11d
  __int64 v93; // rax
  int v94; // ecx
  __int64 v95; // rdi
  Gre::Base *v96; // rcx
  unsigned int v97; // r8d
  struct Gre::Base::SESSION_GLOBALS *v98; // r12
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rcx
  int v102; // ecx
  __int64 v103; // rcx
  int v104; // ecx
  __int64 v105; // rcx
  int v106; // ecx
  __int64 v107; // rax
  int v108; // ecx
  struct Gre::Base::SESSION_GLOBALS *v109; // rax
  __int64 v110; // rax
  struct Gre::Base::SESSION_GLOBALS *v111; // rax
  XLATEOBJ *v112; // rbx
  unsigned __int64 v113; // rcx
  int v114; // edx
  int v115; // r10d
  bool v116; // sf
  LONG v117; // r11d
  int v118; // eax
  LONG v119; // edx
  float v120; // xmm4_4
  __int64 v121; // rax
  int v122; // ecx
  DC *v123; // r13
  int v124; // eax
  int v125; // ecx
  int v126; // r9d
  int v127; // eax
  __m128i v128; // xmm0
  bool v129; // cc
  int v130; // ecx
  int v131; // edx
  __m128i v132; // xmm3
  LONG v133; // r10d
  int v134; // eax
  LONG v135; // ecx
  LONG v136; // edx
  LONG v137; // r9d
  LONG v138; // eax
  RECTL v139; // xmm3
  int v140; // eax
  RECTL v141; // xmm4
  __int64 v142; // rax
  __int64 v143; // rbx
  int v144; // eax
  int v145; // r14d
  SURFACE *v146; // r13
  unsigned int v147; // eax
  int cEntries; // eax
  int v149; // eax
  int v150; // eax
  _DWORD *v151; // r12
  struct REGION *v152; // rax
  LONG v153; // eax
  __int64 v154; // rax
  int v155; // ecx
  __int64 v156; // rax
  int v157; // ecx
  FLONG flXlate; // r9d
  FLONG v159; // r10d
  int (*v160)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v161; // r8
  __int64 v162; // rdx
  __int64 v163; // rcx
  int v164; // r9d
  unsigned int v165; // eax
  __int64 v166; // rdx
  char *v167; // rbx
  __int64 v168; // rdx
  int v169; // ecx
  int v170; // eax
  __int64 v171; // rax
  _OWORD *v172; // rax
  int v173; // r10d
  int v174; // ecx
  struct _GRETHREAD *v175; // rax
  struct _GRETHREAD *v176; // rax
  struct _GRETHREAD *v177; // rax
  unsigned int v178; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v180; // rax
  struct _GRETHREAD *v181; // rax
  _DWORD *v182; // rax
  bool v183; // zf
  _DWORD *v184; // rax
  int v185; // xmm0_4
  float v186; // xmm1_4
  POINTL *v187; // [rsp+30h] [rbp-D0h]
  struct Gre::Base::SESSION_GLOBALS *v188; // [rsp+70h] [rbp-90h]
  char v189; // [rsp+78h] [rbp-88h]
  int v190; // [rsp+7Ch] [rbp-84h]
  int v191; // [rsp+7Ch] [rbp-84h]
  int v192; // [rsp+80h] [rbp-80h]
  int v193; // [rsp+80h] [rbp-80h]
  int v194; // [rsp+80h] [rbp-80h]
  int v195; // [rsp+80h] [rbp-80h]
  int v198; // [rsp+90h] [rbp-70h]
  int v199[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v200[2]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v201; // [rsp+B0h] [rbp-50h]
  int v202[2]; // [rsp+B8h] [rbp-48h]
  struct Gre::Base::SESSION_GLOBALS *v203; // [rsp+C0h] [rbp-40h]
  struct Gre::Base::SESSION_GLOBALS *v204; // [rsp+C8h] [rbp-38h] BYREF
  SURFACE *v205; // [rsp+D0h] [rbp-30h]
  struct Gre::Base::SESSION_GLOBALS *v206; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v207[4]; // [rsp+E0h] [rbp-20h] BYREF
  RECTL v208; // [rsp+F0h] [rbp-10h]
  __int64 v209; // [rsp+100h] [rbp+0h] BYREF
  int v210; // [rsp+108h] [rbp+8h] BYREF
  int v211; // [rsp+10Ch] [rbp+Ch]
  int v212; // [rsp+110h] [rbp+10h]
  int v213; // [rsp+114h] [rbp+14h]
  unsigned int v214; // [rsp+118h] [rbp+18h]
  LONG v215; // [rsp+120h] [rbp+20h] BYREF
  LONG v216; // [rsp+124h] [rbp+24h]
  LONG v217; // [rsp+128h] [rbp+28h]
  LONG v218; // [rsp+12Ch] [rbp+2Ch]
  _DWORD *v219; // [rsp+130h] [rbp+30h]
  __int64 v220; // [rsp+138h] [rbp+38h] BYREF
  __int64 v221; // [rsp+140h] [rbp+40h] BYREF
  __int64 v222; // [rsp+148h] [rbp+48h]
  _DWORD *v223; // [rsp+150h] [rbp+50h]
  RECTL v224; // [rsp+160h] [rbp+60h] BYREF
  HSEMAPHORE v225; // [rsp+170h] [rbp+70h] BYREF
  const struct MATRIX *v226; // [rsp+178h] [rbp+78h] BYREF
  __int64 v227; // [rsp+180h] [rbp+80h] BYREF
  __m128i v228; // [rsp+190h] [rbp+90h] BYREF
  __m128i v229; // [rsp+1A0h] [rbp+A0h]
  __int64 v230; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v231; // [rsp+1B8h] [rbp+B8h] BYREF
  __int128 v232; // [rsp+1C0h] [rbp+C0h]
  DC *v233[3]; // [rsp+1D0h] [rbp+D0h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v234; // [rsp+1E8h] [rbp+E8h]
  _OWORD v235[2]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v236; // [rsp+270h] [rbp+170h]
  __int64 v237; // [rsp+278h] [rbp+178h]
  char v238; // [rsp+280h] [rbp+180h]
  int v239; // [rsp+284h] [rbp+184h]
  int v240; // [rsp+2A8h] [rbp+1A8h]
  __int128 v241; // [rsp+2B0h] [rbp+1B0h]
  int v242; // [rsp+2C0h] [rbp+1C0h]
  __int64 v243[10]; // [rsp+2C8h] [rbp+1C8h] BYREF
  _QWORD v244[11]; // [rsp+318h] [rbp+218h] BYREF
  __int128 v245; // [rsp+370h] [rbp+270h]
  __int64 v246; // [rsp+380h] [rbp+280h]
  __int64 v247; // [rsp+388h] [rbp+288h]
  __int64 v248; // [rsp+390h] [rbp+290h]
  __int64 v249; // [rsp+398h] [rbp+298h]
  __int64 v250; // [rsp+3A0h] [rbp+2A0h]
  RECTL v251; // [rsp+3B0h] [rbp+2B0h] BYREF
  POINTL v252[2]; // [rsp+3C0h] [rbp+2C0h] BYREF
  __m128i v253; // [rsp+3D0h] [rbp+2D0h] BYREF

  v11 = (struct XDCOBJ *)a1;
  v12 = a5;
  left = a2;
  v14 = a7;
  v15 = a8;
  v202[0] = a8;
  v200[0] = a4;
  v192 = a3;
  v199[0] = a5;
  if ( (a11 & 4) != 0
    && (v16 = 1,
        CurrentThread = GreGetCurrentThread(),
        v15 = v202[0],
        a3 = v192,
        a4 = v200[0],
        v12 = v199[0],
        v11 = (struct XDCOBJ *)a1,
        CurrentThread) )
  {
    *((_DWORD *)CurrentThread + 86) |= 8u;
  }
  else
  {
    v16 = 0;
  }
  v17 = 0;
  v18 = 0;
  if ( (a9 & 0x40000000) == 0 )
  {
    v19 = *(_QWORD *)v11;
    v207[0] = a9 & 0xDFFFFFFF;
    v20 = a9 & 0x5FFFFFFF;
    v214 = 0;
    if ( (*(_DWORD *)(v19 + 36) & 0x10000) != 0 )
      goto LABEL_71;
    if ( ((gajRop3[(unsigned __int8)a9] | gajRop3[BYTE1(a9)]) & 2) != 0 && v20 != 16711778 && v20 != 66 )
      bSpDwmValidateSurface(v11, left, a3, a4, v12);
    if ( *(_QWORD *)a6 )
    {
LABEL_18:
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v233, (struct Gre::Base::SESSION_GLOBALS **)a6);
      bSpDwmValidateSurface((struct XDCOBJ *)v233, a7, v202[0], v200[0], v199[0]);
      v26 = *((_QWORD *)*a1 + 122);
      v27 = *(_DWORD *)(v26 + 108);
      if ( ((*(_BYTE *)(*((_QWORD *)v233[0] + 122) + 108LL) ^ *(_BYTE *)(v26 + 108)) & 7) != 0
        && ((((v27 & 1) != 0) & _bittest((const signed __int32 *)v207, 0x1Fu)) != 0 || (v27 & 9) == 9) )
      {
        left = *(_QWORD *)(v26 + 308) - v200[0] - a2;
        v214 = DC::dwSetLayout(*a1, -1, 0);
        v207[0] = 0x80000000;
      }
      else
      {
        v207[0] = 0;
      }
      DC::QuickInitXform(*a1, &v220, 516LL);
      DC::QuickInitXform(v233[0], &v226, 516LL);
      if ( (*(_BYTE *)(v220 + 32) & 1) == 0 || !EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v220, v226) )
      {
        v34 = (XDCOBJ *)a1;
        v18 = GrepStretchBlt(
                (struct XDCOBJ *)a1,
                left,
                v192,
                v200[0],
                v199[0],
                a6,
                a7,
                v202[0],
                v200[0],
                v199[0],
                v20,
                a10,
                0);
        goto LABEL_68;
      }
      v28 = v202[0];
      y = (unsigned int)(v202[0] + v199[0]);
      v204 = v233[0];
      x = v200[0] + a7;
      v252[0].x = a7;
      v252[1].x = v200[0] + a7;
      v252[0].y = v202[0];
      v252[1].y = v202[0] + v199[0];
      if ( (*((_BYTE *)v226 + 32) & 0x43) == 0x43
        || (v31 = bCvtPts1(v226, v252, 2LL, y),
            y = (unsigned int)v252[1].y,
            x = v252[1].x,
            v28 = v252[0].y,
            v14 = v252[0].x,
            v31) )
      {
        if ( (*(_BYTE *)(*((_QWORD *)v204 + 122) + 108LL) & 1) != 0 )
        {
          ++v14;
          ++x;
          v252[0].x = v14;
          v252[1].x = x;
        }
      }
      if ( v14 > x )
      {
        v252[0].x = x;
        v252[1].x = v14;
      }
      if ( v28 > (int)y )
      {
        v252[0].y = y;
        v252[1].y = v28;
      }
      top = v192;
      right = v200[0] + left;
      v34 = (XDCOBJ *)a1;
      v251.bottom = v192 + v199[0];
      v251.left = left;
      v251.top = v192;
      v35 = *a1;
      v251.right = v200[0] + left;
      if ( (*(_BYTE *)(v220 + 32) & 0x43) == 0x43
        || (v36 = bCvtPts1(v220, &v251, 2LL, y), right = v251.right, top = v251.top, left = v251.left, v36) )
      {
        if ( (*(_BYTE *)(*((_QWORD *)v35 + 122) + 108LL) & 1) != 0 )
        {
          ++left;
          ++right;
          v251.left = left;
          v251.right = right;
        }
      }
      if ( left > right )
      {
        v153 = left;
        v251.left = right;
        left = right;
        v251.right = v153;
        right = v153;
      }
      bottom = v251.bottom;
      if ( top > v251.bottom )
      {
        v251.top = v251.bottom;
        v251.bottom = top;
        top = bottom;
      }
      if ( top == v251.bottom || left == right )
      {
        v18 = 1;
        goto LABEL_68;
      }
      v39 = *a1;
      v40 = *((_DWORD *)*a1 + 9);
      if ( (v40 & 0xE0) != 0 )
      {
        if ( (v40 & 0x20) != 0 )
        {
          if ( left < *((_DWORD *)v39 + 266) )
          {
            *((_DWORD *)v39 + 266) = left;
            right = v251.right;
            top = v251.top;
            left = v251.left;
          }
          if ( top < *((_DWORD *)v39 + 267) )
          {
            *((_DWORD *)v39 + 267) = top;
            right = v251.right;
            top = v251.top;
            left = v251.left;
          }
          if ( right > *((_DWORD *)v39 + 268) )
          {
            *((_DWORD *)v39 + 268) = right;
            right = v251.right;
            top = v251.top;
            left = v251.left;
          }
          if ( v251.bottom > *((_DWORD *)v39 + 269) )
          {
            *((_DWORD *)v39 + 269) = v251.bottom;
            right = v251.right;
            top = v251.top;
            left = v251.left;
          }
        }
        v41 = *a1;
        if ( (*((_DWORD *)*a1 + 9) & 0x80u) != 0 )
        {
          if ( left < *((_DWORD *)v41 + 274) )
          {
            *((_DWORD *)v41 + 274) = left;
            right = v251.right;
            top = v251.top;
          }
          if ( top < *((_DWORD *)v41 + 275) )
          {
            *((_DWORD *)v41 + 275) = top;
            right = v251.right;
          }
          if ( right > *((_DWORD *)v41 + 276) )
            *((_DWORD *)v41 + 276) = right;
          if ( v251.bottom > *((_DWORD *)v41 + 277) )
            *((_DWORD *)v41 + 277) = v251.bottom;
        }
      }
      v237 = 0LL;
      v238 = 0;
      v239 = 0;
      v240 = 0;
      DLODCOBJ::DLODCOBJ((DLODCOBJ *)v243);
      DLODCOBJ::DLODCOBJ((DLODCOBJ *)v244);
      v250 = 0LL;
      memset(v235, 0, sizeof(v235));
      v241 = 0LL;
      v245 = 0LL;
      v236 = 0LL;
      v242 = 0;
      v244[10] = 0LL;
      v246 = 0LL;
      v249 = 0LL;
      v247 = 0LL;
      v248 = 0LL;
      v243[0] = 0LL;
      v244[0] = 0LL;
      if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v235, (struct XDCOBJ *)a1, (struct XDCOBJ *)v233) )
      {
        if ( !*((_QWORD *)v233[0] + 62) || (unsigned int)DC::bInFullScreen(v233[0]) )
          v17 = 1;
        v18 = v17 | XDCOBJ::bFullScreen((XDCOBJ *)a1);
        goto LABEL_67;
      }
      v42 = *a1;
      v43 = (SURFACE *)*((_QWORD *)*a1 + 62);
      v205 = v43;
      if ( !v43 )
      {
        v18 = 1;
        goto LABEL_67;
      }
      v44 = *((_QWORD *)v43 + 16);
      v45 = *((_QWORD *)v42 + 11);
      v46 = (a9 & 0x5FFFFFFF) >> 16;
      v198 = (v46 << 8) | v46;
      if ( ((v46 ^ (unsigned __int8)(16 * v46)) & 0xF0) != 0 )
      {
        v166 = *((_QWORD *)v42 + 122);
        v167 = (char *)v42 + 1200;
        v222 = (__int64)v42 + 1200;
        if ( (*(_DWORD *)(v166 + 152) & 0x1000) != 0 )
        {
          GreDCSelectBrush(v42, *(_QWORD *)(v166 + 160));
          v43 = v205;
        }
        v47 = a1;
        v42 = *a1;
        v168 = *((_QWORD *)*a1 + 122);
        v169 = *(_DWORD *)(v168 + 152);
        if ( (v169 & 1) != 0 || (*((_DWORD *)v42 + 79) & 1) != 0 )
        {
          *(_DWORD *)(v168 + 152) = v169 & 0xFFFFFFFE;
          *((_DWORD *)*a1 + 79) &= ~1u;
          EBRUSHOBJ::vInitBrush(v167, *a1, *((_QWORD *)*a1 + 17), v45, v44, v43, 1);
          v42 = *a1;
        }
      }
      else
      {
        v47 = a1;
        v222 = 0LL;
      }
      v48 = (Gre::Base *)(*((_DWORD *)v42 + 10) & 1);
      v251.left += *((_DWORD *)v42 + 2 * (_QWORD)v48 + 254);
      v251.right += *((_DWORD *)v42 + 2 * (_QWORD)v48 + 254);
      v251.top += *((_DWORD *)v42 + 2 * (_QWORD)v48 + 255);
      v251.bottom += *((_DWORD *)v42 + 2 * (_QWORD)v48 + 255);
      if ( !*((_QWORD *)v233[0] + 62) )
        goto LABEL_66;
      v50 = Gre::Base::Globals(v48);
      v52 = v233[0];
      v53 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)v233[0] + 62);
      v188 = v53;
      if ( v53 )
      {
        v54 = v234;
        if ( !v234 )
        {
          v55 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)v233[0] + 62);
          goto LABEL_77;
        }
      }
      else
      {
        v54 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)v50 + 533);
      }
      v188 = v54;
      v53 = v54;
      v55 = v54;
      if ( !v54 )
        goto LABEL_66;
LABEL_77:
      if ( (a11 & 2) != 0 )
        goto LABEL_86;
      if ( (v242 & 0x400000) == 0 )
        goto LABEL_265;
      v53 = v55;
      v188 = v55;
      if ( (*((_DWORD *)v205 + 29) & 8) != 0 || *((_QWORD *)v205 + 28) )
      {
        if ( _bittest16((const signed __int16 *)v205 + 51, 9u) )
          goto LABEL_265;
      }
      v56 = *((_DWORD *)v205 + 28);
      if ( (v56 & 0x800) != 0 )
      {
        v57 = UserSurfaceAccessCheck(*((_QWORD *)v205 + 81));
      }
      else
      {
        if ( (v56 & 0x10000000) == 0 )
          goto LABEL_86;
        v57 = UserScreenAccessCheck(v205, v51);
      }
      v188 = v55;
      v53 = v55;
      if ( !v57 )
      {
LABEL_265:
        EngSetLastError(6u);
        v34 = (XDCOBJ *)a1;
        goto LABEL_67;
      }
      v52 = v233[0];
LABEL_86:
      v58 = v251.left;
      v59 = (_DWORD *)((char *)v52 + 1024);
      v60 = v251.top;
      v61 = *((_DWORD *)v52 + 10) & 1;
      v62 = *((_QWORD *)v53 + 16);
      if ( (*((_DWORD *)v52 + 10) & 1) == 0 )
        v59 = (_DWORD *)((char *)v52 + 1016);
      v193 = 0;
      v200[0] = v251.left - *v59 - v252[0].x;
      v63 = v251.top - *((_DWORD *)v52 + 2 * v61 + 255);
      v64 = 0;
      v65 = 0;
      v199[0] = v63 - v252[0].y;
      v66 = *((_QWORD *)v53 + 6);
      if ( v66 )
      {
        v188 = v53;
        if ( v53 != *(struct Gre::Base::SESSION_GLOBALS **)(v66 + 2544) )
        {
LABEL_90:
          v188 = v53;
          goto LABEL_91;
        }
        if ( (*(_DWORD *)(v66 + 40) & 0x20000) != 0 )
        {
          v65 = *(_DWORD *)(v66 + 2580);
          v64 = *(_DWORD *)(v66 + 2576);
          v193 = v65;
          goto LABEL_90;
        }
      }
LABEL_91:
      if ( v200[0] + v64 > v251.left )
        v58 = v200[0] + v64;
      v67 = v199[0] + v65;
      v68 = v251.right;
      v251.left = v58;
      if ( v67 > v251.top )
        v60 = v67;
      v251.top = v60;
      v69 = v251.bottom;
      if ( v64 + v200[0] + *((_DWORD *)v53 + 14) < v251.right )
        v68 = v64 + v200[0] + *((_DWORD *)v53 + 14);
      v251.right = v68;
      if ( *((_DWORD *)v53 + 15) + v199[0] + v193 < v251.bottom )
        v69 = *((_DWORD *)v53 + 15) + v199[0] + v193;
      v251.bottom = v69;
      if ( v58 < v68 && v60 < v69 )
      {
        v70 = *v47;
        v219 = 0LL;
        if ( v58 >= *((_DWORD *)v70 + 250)
          && v68 <= *((_DWORD *)v70 + 252)
          && v60 >= *((_DWORD *)v70 + 251)
          && v69 <= *((_DWORD *)v70 + 253) )
        {
          v71 = (__m128i)v251;
LABEL_106:
          v72 = *v47;
          v206 = v53;
          v73 = *((_DWORD *)v72 + 9);
          if ( (v73 & 0xE0) == 0 )
            goto LABEL_126;
          v253 = v71;
          v74 = *((_DWORD *)v72 + 10) & 1;
          v75 = v58 - *((_DWORD *)v72 + 2 * v74 + 254);
          v253.m128i_i32[0] = v75;
          v76 = v71.m128i_i32[2] - *((_DWORD *)v72 + 2 * v74 + 254);
          v253.m128i_i32[2] = v76;
          v77 = v71.m128i_i32[1] - *((_DWORD *)v72 + 2 * v74 + 255);
          v253.m128i_i32[1] = v77;
          v253.m128i_i32[3] = v71.m128i_i32[3] - *((_DWORD *)v72 + 2 * v74 + 255);
          if ( (v73 & 0x40) == 0 )
          {
LABEL_126:
            XlateObject = 0LL;
            v252[0].y = v251.top - v199[0];
            v252[0].x = v58 - v200[0];
            v81 = *a1;
            if ( v53 == *((struct Gre::Base::SESSION_GLOBALS **)*a1 + 62) )
            {
              v112 = 0LL;
              v18 = 1;
              v203 = 0LL;
              v34 = (XDCOBJ *)a1;
              goto LABEL_184;
            }
            v82 = a10;
            v194 = a10;
            v83 = *((_QWORD *)v233[0] + 11);
            if ( a10 == -1 )
            {
              v82 = *(_DWORD *)(*((_QWORD *)v233[0] + 122) + 180LL);
              v194 = v82;
            }
            v84 = *((_QWORD *)v81 + 122);
            v85 = *(_DWORD *)(v84 + 176);
            v190 = *(_DWORD *)(v84 + 184);
            LODWORD(v201) = *((_DWORD *)v81 + 30);
            v202[0] = v85;
            if ( v62 )
            {
              v204 = v53;
              v188 = v53;
              if ( v44 )
              {
LABEL_131:
                v86 = *(_QWORD *)(v62 + 120);
                if ( v86 == v62 )
                  v87 = *(_DWORD *)(v62 + 32);
                else
                  v87 = *(_DWORD *)(v86 + 32);
                v88 = *(_QWORD *)(v44 + 120);
                if ( v88 == v44 )
                  v81 = (DC *)*(unsigned int *)(v44 + 32);
                else
                  v81 = (DC *)*(unsigned int *)(v88 + 32);
                if ( v87 != (_DWORD)v81 )
                {
                  v85 = v202[0];
                  goto LABEL_137;
                }
LABEL_172:
                v109 = Gre::Base::Globals(v81);
                v53 = v188;
                XlateObject = (XLATEOBJ *)((char *)v109 + 4552);
                goto LABEL_179;
              }
              if ( (*(_DWORD *)(v62 + 24) & 0x800) != 0 )
              {
                v110 = *(_QWORD *)(v45 + 80);
                if ( !v110 || v110 == *(_QWORD *)(v45 + 72) )
                {
                  v111 = Gre::Base::Globals(v81);
                  v53 = v204;
                  v188 = v204;
                  XlateObject = (XLATEOBJ *)((char *)v111 + 4552);
                  goto LABEL_179;
                }
              }
            }
            else
            {
              v81 = v53;
              if ( !v44 )
              {
                v188 = v53;
                goto LABEL_172;
              }
              if ( (*(_DWORD *)(v44 + 24) & 0x800) != 0 )
              {
                v180 = *(_QWORD *)(v45 + 80);
                v188 = v53;
                if ( !v180 )
                  goto LABEL_172;
                v188 = v53;
                if ( v180 == *(_QWORD *)(v45 + 72) )
                  goto LABEL_172;
              }
            }
            v188 = v53;
            if ( !v62 )
              goto LABEL_147;
            if ( !v44 )
            {
LABEL_137:
              v188 = v53;
              if ( v44 )
              {
                v89 = *(_DWORD *)(v62 + 56);
                v231 = v83;
                v204 = Gre::Base::Globals(v81);
                v225 = (HSEMAPHORE)(*(_QWORD *)v204 + 312LL);
                GreAcquireSemaphoreInternal(v225);
                GrepAcquireLockValidate<13>();
                v90 = v204;
                v91 = 0;
                v92 = v194;
                while ( 1 )
                {
                  if ( v91 >= 8 )
                  {
                    SEMOBJ<13>::vUnlock(&v225);
                    v53 = v188;
                    v85 = v202[0];
                    v82 = v194;
                    goto LABEL_148;
                  }
                  v93 = *(_QWORD *)(v62 + 120);
                  v94 = v93 == v62 ? *(_DWORD *)(v62 + 32) : *(_DWORD *)(v93 + 32);
                  v95 = 32LL * v89;
                  if ( *(_DWORD *)((char *)v90 + v95 + 4304) == v94 )
                  {
                    v154 = *(_QWORD *)(v44 + 120);
                    v155 = v154 == v44 ? *(_DWORD *)(v44 + 32) : *(_DWORD *)(v154 + 32);
                    if ( *(_DWORD *)((char *)v90 + v95 + 4308) == v155 )
                    {
                      v156 = *(_QWORD *)(v45 + 120);
                      v157 = v156 == v45 ? *(_DWORD *)(v45 + 32) : *(_DWORD *)(v156 + 32);
                      if ( *(_DWORD *)((char *)v90 + v95 + 4316) == v157 )
                      {
                        XlateObject = *(XLATEOBJ **)((char *)v90 + v95 + 4296);
                        flXlate = XlateObject[3].flXlate;
                        if ( (flXlate & 0x6000) == 0 )
                        {
                          v159 = XlateObject->flXlate;
                          if ( (v159 & 4) == 0 && (XlateObject[3].flXlate & 0x100) == 0 )
                            break;
                          if ( (v159 & 4) != 0 && v92 == XlateObject[1].iUniq )
                          {
                            v165 = XEPALOBJ::ulTime((XEPALOBJ *)&v231);
                            if ( *((_DWORD *)v90 + 8 * v89 + 1078) == v165 )
                              break;
                          }
                          if ( (flXlate & 0x100) != 0
                            && v190 == XlateObject[1].flXlate
                            && v202[0] == *(_DWORD *)&XlateObject[1].iSrcType )
                          {
                            break;
                          }
                        }
                      }
                    }
                  }
                  v89 = ((_BYTE)v89 + 1) & 7;
                  ++v91;
                }
                _InterlockedIncrement((volatile signed __int32 *)v90 + 8 * v89 + 1072);
                *(_DWORD *)(v62 + 56) = v89;
                SEMOBJ<13>::vUnlock(&v225);
                v53 = v188;
                goto LABEL_179;
              }
LABEL_147:
              v188 = v53;
LABEL_148:
              v18 = 0;
              LODWORD(v187) = v190;
              v204 = v53;
              XlateObject = (XLATEOBJ *)CreateXlateObject(0LL, v201, v62, v44, v83, v45, v187, v85, v82, 0);
              if ( !XlateObject )
              {
                v53 = v188;
LABEL_180:
                v34 = (XDCOBJ *)a1;
                v112 = XlateObject;
                v203 = (struct Gre::Base::SESSION_GLOBALS *)XlateObject;
                v113 = *((unsigned int *)*a1 + 9);
                if ( (v113 & 1) == 0 )
                {
                  v252[1].x = v251.right - v200[0];
                  v252[1].y = v251.bottom - v199[0];
                }
                if ( !v18 )
                  goto LABEL_222;
                v71 = (__m128i)v251;
LABEL_184:
                v223 = (_DWORD *)((char *)v53 + 56);
                v229 = v71;
                *(_QWORD *)v202 = (char *)v53 + 48;
                v114 = 0;
                v232 = *(_OWORD *)&v252[0].x;
                v115 = 0;
                v228 = v71;
                v224 = *(RECTL *)&v252[0].x;
                v116 = *((int *)v205 + 28) < 0;
                v210 = 0;
                v211 = 0;
                if ( v116 )
                {
                  v182 = (_DWORD *)*((_QWORD *)v205 + 6);
                  if ( v182 )
                  {
                    v183 = (v182[10] & 0x20000) == 0;
                    v203 = (struct Gre::Base::SESSION_GLOBALS *)v112;
                    v188 = v53;
                    if ( !v183 )
                    {
                      v115 = v182[644];
                      v114 = v182[645];
                      v210 = v115;
                      v211 = v114;
                      v203 = (struct Gre::Base::SESSION_GLOBALS *)v112;
                      v188 = v53;
                    }
                  }
                }
                v215 = 0;
                v212 = v115 + *((_DWORD *)v205 + 14);
                v117 = 0;
                v118 = v114 + *((_DWORD *)v205 + 15);
                v119 = 0;
                v116 = *((int *)v53 + 28) < 0;
                v216 = 0;
                v213 = v118;
                if ( v116 )
                {
                  v184 = **(_DWORD ***)v202;
                  if ( **(_QWORD **)v202 )
                  {
                    v183 = (v184[10] & 0x20000) == 0;
                    v203 = (struct Gre::Base::SESSION_GLOBALS *)v112;
                    v188 = v53;
                    if ( !v183 )
                    {
                      v117 = v184[644];
                      v119 = v184[645];
                      v215 = v117;
                      v216 = v119;
                      v203 = (struct Gre::Base::SESSION_GLOBALS *)v112;
                      v188 = v53;
                    }
                  }
                }
                v120 = FLOAT_1_0;
                v217 = v117 + *v223;
                v218 = v119 + *((_DWORD *)v53 + 15);
                v121 = *(_QWORD *)v34;
                v122 = *(_DWORD *)(*(_QWORD *)v34 + 520LL);
                if ( (v122 & 1) != 0 && (v122 & 2) == 0 )
                {
                  *(float *)&v185 = 1.0 / *(float *)(v121 + 528);
                  *(float *)v200 = 1.0 / COERCE_FLOAT(*(_QWORD *)(v121 + 524));
                  v200[1] = v185;
                  ERECTL::vScale((ERECTL *)&v210, (const struct POINTFL *)v200);
                  ERECTL::vScale((ERECTL *)&v228, (const struct POINTFL *)v200);
                  v53 = v188;
                  v71 = v228;
                  v117 = v215;
                  v115 = v210;
                  v203 = (struct Gre::Base::SESSION_GLOBALS *)v112;
                }
                v123 = v233[0];
                v124 = *((_DWORD *)v233[0] + 130);
                if ( (v124 & 1) != 0 && (v124 & 2) == 0 )
                {
                  v186 = v120 / COERCE_FLOAT(*(_QWORD *)((char *)v233[0] + 524));
                  *(float *)&v199[1] = v120 / *((float *)v233[0] + 132);
                  *(float *)v199 = v186;
                  ERECTL::vScale((ERECTL *)&v215, (const struct POINTFL *)v199);
                  ERECTL::vScale((ERECTL *)&v224, (const struct POINTFL *)v199);
                  v53 = v188;
                  v123 = v233[0];
                  v117 = v215;
                  v115 = v210;
                  v203 = (struct Gre::Base::SESSION_GLOBALS *)v112;
                }
                v125 = _mm_cvtsi128_si32(v71);
                v208 = (RECTL)v71;
                v126 = v224.left - v125;
                v127 = _mm_cvtsi128_si32(_mm_srli_si128(v71, 4));
                v191 = v224.left - v125;
                v128 = _mm_srli_si128(v71, 8);
                v129 = v115 <= v125;
                v195 = v224.top - v127;
                v130 = v71.m128i_i32[3];
                v131 = _mm_cvtsi128_si32(v71);
                v132 = _mm_srli_si128(v71, 12);
                if ( !v129 )
                  v131 = v115;
                v133 = v208.top;
                if ( v211 > v127 )
                  v133 = v211;
                v134 = v208.right;
                if ( v212 < _mm_cvtsi128_si32(v128) )
                  v134 = v212;
                LODWORD(v201) = v134;
                if ( v213 < _mm_cvtsi128_si32(v132) )
                  v130 = v213;
                if ( v134 < v131 )
                {
                  v131 = v134;
                }
                else if ( v130 < v133 )
                {
                  v133 = v130;
                }
                v135 = v195 + v130;
                v136 = v126 + v131;
                v137 = v134 + v126;
                v138 = v133 + v195;
                if ( v117 > v136 )
                  v136 = v117;
                v208.left = v136;
                if ( v216 > v138 )
                  v138 = v216;
                v208.top = v138;
                if ( v217 < v137 )
                  v137 = v217;
                v208.right = v137;
                if ( v218 < v135 )
                  v135 = v218;
                v208.bottom = v135;
                if ( v137 < v136 )
                {
                  v136 = v137;
                  v208.left = v137;
                }
                else
                {
                  if ( v135 < v138 )
                    v138 = v135;
                  v208.top = v138;
                }
                v139 = v208;
                v140 = v138 - v195;
                v113 = (unsigned int)(v135 - v195);
                v208.left = v136 - v191;
                v208.right = v137 - v191;
                v208.top = v140;
                v208.bottom = v113;
                v141 = v208;
                v228 = (__m128i)v208;
                v224 = v139;
                if ( v136 - v191 >= v137 - v191 || v140 >= (int)v113 )
                {
                  v189 = 0;
                  v203 = (struct Gre::Base::SESSION_GLOBALS *)v112;
                  v188 = v53;
                }
                else
                {
                  v113 = *(_QWORD *)v34;
                  v149 = *(_DWORD *)(*(_QWORD *)v34 + 520LL);
                  if ( (v149 & 1) == 0 || (v149 & 2) != 0 )
                  {
                    v203 = (struct Gre::Base::SESSION_GLOBALS *)v112;
                    v188 = v53;
                  }
                  else
                  {
                    v230 = *(_QWORD *)(v113 + 524);
                    ERECTL::vScale((ERECTL *)&v228, (const struct POINTFL *)&v230);
                    v141 = (RECTL)v228;
                    v123 = v233[0];
                  }
                  v150 = *((_DWORD *)v123 + 130);
                  if ( (v150 & 1) != 0 && (v150 & 2) == 0 )
                  {
                    v227 = *(_QWORD *)((char *)v123 + 524);
                    ERECTL::vScale((ERECTL *)&v224, (const struct POINTFL *)&v227);
                    v139 = v224;
                    v203 = (struct Gre::Base::SESSION_GLOBALS *)v112;
                  }
                  *(RECTL *)&v252[0].x = v139;
                  v251 = v141;
                  v189 = 1;
                  ++*((_DWORD *)v205 + 23);
                  v123 = v233[0];
                }
                v142 = *((_QWORD *)v123 + 6);
                v201 = *(_QWORD *)v34;
                if ( *(_QWORD *)(v201 + 48) == v142
                  || (v170 = XDCOBJ::bRedirHooked(v34), v123 = v233[0], v170)
                  && (v171 = *((_QWORD *)v233[0] + 6),
                      v201 = *(_QWORD *)v34,
                      v113 = *(_QWORD *)(v201 + 48),
                      *(_QWORD *)(v113 + 3512) == v171)
                  || !*((_WORD *)v188 + 50)
                  && !*((_QWORD *)v188 + 3)
                  && (v201 = *(_QWORD *)v34,
                      v113 = *(unsigned int *)(*(_QWORD *)(v201 + 48) + 40LL),
                      (v113 & 0x80u) == 0LL) )
                {
                  if ( v198 == 52428 )
                  {
                    v143 = *((_QWORD *)v205 + 6);
                    v144 = a11 & 1;
                    v145 = v144;
                    if ( (a11 & 1) != 0 )
                    {
                      v173 = v229.m128i_i32[1] - v229.m128i_i32[3];
                      if ( v229.m128i_i32[1] - v229.m128i_i32[3] < 0 )
                        v173 = v229.m128i_i32[3] - v229.m128i_i32[1];
                      v174 = v229.m128i_i32[3] - v229.m128i_i32[2];
                      if ( v229.m128i_i32[3] - v229.m128i_i32[2] < 0 )
                        v174 = v229.m128i_i32[2] - v229.m128i_i32[3];
                      EtwWindowRendering(
                        *(_QWORD *)(v201 + 464),
                        *(_QWORD *)(v201 + 472),
                        **(_QWORD **)(v201 + 496),
                        v229.m128i_u32[0],
                        v229.m128i_i32[1],
                        v229.m128i_i32[2],
                        v229.m128i_i32[3],
                        *((_QWORD *)v123 + 58),
                        *((_QWORD *)v123 + 59),
                        **((_QWORD **)v123 + 62),
                        v232,
                        DWORD1(v232),
                        v232 + v174,
                        DWORD1(v232) + v173);
                      v146 = v205;
                      *((_WORD *)v205 + 51) |= 0x40u;
                      v175 = GreGetCurrentThread();
                      v145 = a11 & 1;
                      if ( v175 )
                      {
                        *((_DWORD *)v175 + 86) &= ~1u;
                        v145 = a11 & 1;
                      }
                      GreClientRgnUpdated(0LL);
                      GreClientRgnUpdatedStable();
                      v144 = a11 & 1;
                      v34 = (XDCOBJ *)a1;
                    }
                    else
                    {
                      v146 = v205;
                    }
                    if ( v189 )
                    {
                      if ( (*((_DWORD *)v146 + 28) & 0x400) != 0 )
                        v147 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, struct Gre::Base::SESSION_GLOBALS *, RECTL *, POINTL *))(v143 + 2832))(
                                 (__int64)v146 + 24,
                                 (__int64)v188 + 24,
                                 v219,
                                 v203,
                                 &v251,
                                 v252);
                      else
                        v147 = ((__int64 (__fastcall *)(char *, char *, _DWORD *, struct Gre::Base::SESSION_GLOBALS *, RECTL *, POINTL *))EngCopyBits)(
                                 (char *)v146 + 24,
                                 (char *)v188 + 24,
                                 v219,
                                 v203,
                                 &v251,
                                 v252);
                      v18 = v147;
                      v144 = v145;
                    }
                    if ( v144 )
                    {
                      *((_WORD *)v146 + 51) &= ~0x40u;
                      v176 = GreGetCurrentThread();
                      if ( v176 )
                        *((_DWORD *)v176 + 86) |= 1u;
                    }
                  }
                  else if ( v189 )
                  {
                    v160 = SURFACE::pfnBitBlt(v205);
                    v18 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _DWORD *, XLATEOBJ *, RECTL *, POINTL *, _QWORD, __int64, __int64, int))v160)(
                            v163 + 24,
                            v161 + 24,
                            0LL,
                            v219,
                            v112,
                            &v251,
                            v252,
                            0LL,
                            v222,
                            v162 + 1192,
                            v164);
                  }
                }
                else if ( v189 )
                {
                  v172 = v235;
                  if ( (*(_DWORD *)(*((_QWORD *)v205 + 6) + 40LL) & 0x80u) == 0 )
                    v172 = 0LL;
                  v18 = SimBitBlt(
                          (SURFOBJ *)((char *)v205 + 24),
                          (SURFOBJ *)((char *)v188 + 24),
                          v112,
                          &v251,
                          v252,
                          0LL,
                          v222,
                          (POINTL *)(*(_QWORD *)v34 + 1192LL),
                          v198,
                          (__int64)v172);
                }
LABEL_222:
                if ( XlateObject )
                {
                  cEntries = XlateObject[1].cEntries;
                  if ( cEntries >= 0 )
                  {
                    _InterlockedDecrement(
                      (volatile signed __int32 *)Gre::Base::Globals((Gre::Base *)v113)
                    + 8 * (int)XlateObject[1].cEntries
                    + 1072);
                  }
                  else if ( cEntries == -1 )
                  {
                    FreeThreadBufferWithTag(XlateObject);
                  }
                }
                goto LABEL_67;
              }
              if ( v62 )
              {
                v188 = v204;
                v53 = v204;
                if ( !v44 )
                {
                  v188 = v204;
                  goto LABEL_179;
                }
                if ( (XlateObject[3].flXlate & 0x200) != 0 )
                {
LABEL_179:
                  v18 = 1;
                  goto LABEL_180;
                }
                v203 = Gre::Base::Globals(v96);
                SEMOBJ<13>::SEMOBJ<13>(&v204, v203);
                v97 = 0;
                v98 = v203;
                while ( v97 < 8 )
                {
                  v99 = *((unsigned int *)v98 + 1136);
                  v100 = *((_QWORD *)v98 + 4 * v99 + 537);
                  if ( !v100 )
                    goto LABEL_157;
                  if ( !*((_DWORD *)v98 + 8 * v99 + 1072) )
                  {
                    FreeThreadBufferWithTag(v100);
LABEL_157:
                    PopThreadGuardedObject(&XlateObject[-2].pulXlate);
                    *((_DWORD *)v98 + 8 * *((unsigned int *)v98 + 1136) + 1072) = 1;
                    *((_QWORD *)v98 + 4 * *((unsigned int *)v98 + 1136) + 537) = XlateObject;
                    v101 = *(_QWORD *)(v62 + 120);
                    if ( v101 == v62 )
                      v102 = *(_DWORD *)(v62 + 32);
                    else
                      v102 = *(_DWORD *)(v101 + 32);
                    *((_DWORD *)v98 + 8 * *((unsigned int *)v98 + 1136) + 1076) = v102;
                    v103 = *(_QWORD *)(v44 + 120);
                    if ( v103 == v44 )
                      v104 = *(_DWORD *)(v44 + 32);
                    else
                      v104 = *(_DWORD *)(v103 + 32);
                    *((_DWORD *)v98 + 8 * *((unsigned int *)v98 + 1136) + 1077) = v104;
                    v105 = *(_QWORD *)(v83 + 120);
                    if ( v105 == v83 )
                      v106 = *(_DWORD *)(v83 + 32);
                    else
                      v106 = *(_DWORD *)(v105 + 32);
                    *((_DWORD *)v98 + 8 * *((unsigned int *)v98 + 1136) + 1078) = v106;
                    v107 = *(_QWORD *)(v45 + 120);
                    if ( v107 == v45 )
                      v108 = *(_DWORD *)(v45 + 32);
                    else
                      v108 = *(_DWORD *)(v107 + 32);
                    *((_DWORD *)v98 + 8 * *((unsigned int *)v98 + 1136) + 1079) = v108;
                    XlateObject[1].cEntries = *((_DWORD *)v98 + 1136);
                    *(_DWORD *)(v62 + 56) = *((_DWORD *)v98 + 1136);
                    *((_DWORD *)v98 + 1136) = ((unsigned __int8)*((_DWORD *)v98 + 1136) + 1) & 7;
                    break;
                  }
                  *((_DWORD *)v98 + 1136) = ((_BYTE)v99 + 1) & 7;
                  ++v97;
                }
                SEMOBJ<13>::vUnlock(&v204);
              }
              v53 = v188;
              goto LABEL_179;
            }
            goto LABEL_131;
          }
          v78 = *((_DWORD *)v72 + 270);
          if ( v78 == *((_DWORD *)v72 + 272) || *((_DWORD *)v72 + 271) == *((_DWORD *)v72 + 273) )
          {
            v53 = v206;
            *(__m128i *)((char *)v72 + 1080) = v253;
          }
          else
          {
            if ( v75 < v78 )
            {
              *((_DWORD *)v72 + 270) = v75;
              v58 = v251.left;
              v71 = (__m128i)v251;
              v76 = v253.m128i_i32[2];
              v77 = v253.m128i_i32[1];
            }
            if ( v77 < *((_DWORD *)v72 + 271) )
            {
              *((_DWORD *)v72 + 271) = v77;
              v58 = v251.left;
              v71 = (__m128i)v251;
              v76 = v253.m128i_i32[2];
            }
            if ( v76 > *((_DWORD *)v72 + 272) )
            {
              *((_DWORD *)v72 + 272) = v76;
              v58 = v251.left;
              v71 = (__m128i)v251;
            }
            v53 = v206;
            v188 = v206;
            if ( v253.m128i_i32[3] <= *((_DWORD *)v72 + 273) )
            {
LABEL_119:
              v221 = *((_QWORD *)*v47 + 148);
              if ( !v221 )
                goto LABEL_126;
              v188 = v53;
              v79 = v53;
              Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v206);
              RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v206, 0x70u);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v206);
              Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v209);
              RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v209, 0x70u);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v209);
              if ( v206 && v209 )
              {
                RGNOBJ::vSet((RGNOBJ *)&v209, (const struct _RECTL *const)&v253);
                if ( !RGNOBJ::bMerge((RGNOBJ *)&v206, (struct RGNOBJ *)&v221, (struct RGNOBJ *)&v209, 0xEu) )
                {
LABEL_125:
                  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v209);
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v209);
                  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v206);
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v206);
                  v58 = v251.left;
                  v71 = (__m128i)v251;
                  v53 = v188;
                  goto LABEL_126;
                }
                RGNOBJ::vSwap((RGNOBJ *)&v221, (struct RGNOBJ *)&v206);
                *((_QWORD *)*v47 + 148) = v221;
              }
              v188 = v79;
              goto LABEL_125;
            }
            *((_DWORD *)v72 + 273) = v253.m128i_i32[3];
          }
          v71 = (__m128i)v251;
          v58 = v251.left;
          v188 = v53;
          goto LABEL_119;
        }
        v151 = (_DWORD *)((char *)v70 + 1768);
        v219 = (_DWORD *)((char *)v70 + 1768);
        v152 = XDCOBJ::prgnEffRao(v47);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v151, v152, (const struct ERECTL *)&v251, 2);
        v71 = *(__m128i *)(v151 + 1);
        v58 = _mm_cvtsi128_si32(v71);
        v251 = (RECTL)v71;
        if ( v58 != _mm_cvtsi128_si32(_mm_srli_si128(v71, 8)) && v71.m128i_i32[1] != _mm_srli_si128(v71, 8).m128i_i32[1] )
        {
          v53 = v188;
          v251.top = _mm_cvtsi128_si32(_mm_srli_si128(v71, 4));
          goto LABEL_106;
        }
      }
LABEL_66:
      v34 = (XDCOBJ *)a1;
      v18 = 1;
LABEL_67:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v235);
LABEL_68:
      if ( v207[0] )
        DC::dwSetLayout(*(DC **)v34, -1, v214);
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v233);
      goto LABEL_71;
    }
    if ( *((_BYTE *)a6 + 113) == 1 )
    {
LABEL_71:
      if ( v16 )
      {
        v177 = GreGetCurrentThread();
        *((_DWORD *)v177 + 86) &= ~8u;
      }
      return v18;
    }
    XDCOBJ::vLockIgnoreAttributes(a6, *((HDC *)a6 + 13));
    if ( *(_QWORD *)a6 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)a6 + 44LL) & 2) == 0 )
      {
        if ( (*((_DWORD *)a6 + 8) & 2) == 0 )
        {
          UserAttr = XDCOBJ::GetUserAttr(a6);
          if ( UserAttr )
          {
            if ( !DC::SaveAttributes(*(DC **)a6, UserAttr) )
            {
              OBJECT::InterlockedDecrementExclusiveLockCount(*(OBJECT **)a6);
              *(_QWORD *)a6 = 0LL;
              goto LABEL_14;
            }
          }
        }
        *(_DWORD *)(*(_QWORD *)a6 + 44LL) |= 2u;
        *((_DWORD *)a6 + 2) = 1;
      }
      v22 = *(DC **)a6;
      if ( (*(_DWORD *)(*(_QWORD *)a6 + 520LL) & 4) != 0 )
        DC::vMarkTransformDirty(v22);
    }
LABEL_14:
    v25 = *(struct Gre::Base::SESSION_GLOBALS **)a6;
    *((_BYTE *)a6 + 113) = 1;
    if ( v25 )
    {
      if ( *((_WORD *)v25 + 6) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
      if ( *(_WORD *)(*(_QWORD *)a6 + 12LL) == 1 )
        goto LABEL_18;
      XDCOBJ::vUnlockNoNullSet(a6);
      *(_QWORD *)a6 = 0LL;
    }
    goto LABEL_71;
  }
  v178 = GrepStretchBlt(
           v11,
           left,
           a3,
           a4,
           v12,
           a6,
           a7,
           v15,
           a4,
           v12,
           a9 & 0xDFFFFFFF,
           a10,
           (a9 & 0x20000000) != 0 ? 2 : 0);
  if ( v16 )
  {
    v181 = GreGetCurrentThread();
    *((_DWORD *)v181 + 86) &= ~8u;
  }
  return v178;
}
