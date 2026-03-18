/*
 * XREFs of ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C010C7E0
 * Callers:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x1C00C363C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@KAEBUTag@RFONTOBJ@@@Z @ 0x1C01092D8 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@KAEBUTag@RFONTOBJ@@@Z.c)
 *     ?GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0119E44 (-GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrePolyTextOutW@@YAHPEAUHDC__@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02D6D24 (-GrePolyTextOutW@@YAHPEAUHDC__@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0010D3C (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004DD9C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     bFToL @ 0x1C0078740 (bFToL.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008C210 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C00BB2EC (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00C3A9C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00FF350 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C010D84C (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010D900 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C010EC40 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0159E14 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C02843EC (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0285AE4 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0285C44 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C029F228 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C029FD2C (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C02B44C0 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C02BF3E0 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C02BF54C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02BF820 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C02D6F0C (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1C02D6F78 (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vMopUp@TXTCLEANUP@@QEAAXXZ @ 0x1C02D7124 (-vMopUp@TXTCLEANUP@@QEAAXXZ.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02D9160 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02D9614 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02D980C (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall GreExtTextOutWLocked(
        struct XDCOBJ *a1,
        LONG a2,
        LONG a3,
        int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        int a7,
        int *a8,
        unsigned int a9,
        void *a10,
        unsigned int a11,
        const struct RFONTOBJ::Tag *a12)
{
  unsigned __int64 v12; // r11
  struct tagRECT *v13; // rbx
  struct XDCOBJ *v14; // r15
  int v16; // edi
  int v17; // esi
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // r14d
  DC *v21; // rdx
  int v22; // eax
  int v23; // r12d
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r10
  unsigned int v26; // r9d
  __int64 v27; // rax
  int v28; // r12d
  __int64 v29; // rax
  char *v30; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // r8d
  LONG v34; // r9d
  int v35; // eax
  int v36; // edx
  int v37; // edx
  LONG v38; // ebx
  LONG v39; // edx
  LONG v40; // ecx
  signed int v41; // eax
  unsigned __int64 v42; // rdx
  int v43; // r9d
  LONG v44; // r11d
  LONG v45; // r10d
  struct DC *v46; // r8
  BOOL v47; // ebx
  bool v48; // zf
  __int64 v49; // rcx
  unsigned int v50; // ebx
  int v51; // eax
  int v52; // r13d
  int v53; // r8d
  int v54; // eax
  int v55; // r12d
  int v56; // r8d
  int v57; // ecx
  struct _RECTL *p_rclBkGround; // r12
  BOOL v59; // edi
  struct _RECTL *v60; // rdi
  int v61; // r13d
  SURFACE *v62; // r8
  int v63; // ecx
  unsigned int v64; // r14d
  __int64 v65; // r11
  int v66; // r10d
  struct REGION *v67; // rdx
  RECTL rclBounds; // xmm2
  __m128i v69; // xmm0
  __int64 v70; // rcx
  __int64 v71; // r14
  int v72; // eax
  int v73; // eax
  struct _SURFOBJ *v74; // r9
  __int64 v75; // rbx
  int v76; // r10d
  int v77; // r11d
  DC *v78; // rax
  int v79; // ecx
  __int64 v80; // rdi
  Gre::Base *v81; // rcx
  struct _POINTL *v82; // rdi
  LONG v83; // eax
  LONG v84; // ebx
  int v85; // ecx
  __m128i si128; // xmm1
  int v87; // r13d
  __m128i v88; // xmm0
  int v89; // r13d
  __m128i v90; // xmm0
  __m128i v91; // xmm1
  int v92; // r12d
  int v93; // r13d
  int v94; // ebx
  __int64 v95; // rax
  BOOL (__stdcall *v96)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rax
  struct _RECTL *v97; // rbx
  __int16 v98; // dx
  struct _BRUSHOBJ *v99; // r13
  __int64 *ThreadWin32Thread; // rax
  __int64 v101; // rax
  __int64 v102; // rcx
  BOOL (__stdcall *v103)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // r13
  int v104; // ecx
  DC *v105; // rax
  __int64 v106; // rcx
  int v107; // eax
  _DWORD *v108; // r12
  __int64 v109; // rcx
  int v110; // eax
  __int64 v111; // rbx
  __int64 *v112; // rax
  void *v113; // rcx
  struct Gre::Base::SESSION_GLOBALS *v115; // rax
  DC *v116; // rdx
  unsigned __int16 *v117; // r11
  __int64 v118; // rax
  int v119; // eax
  char *v120; // rdi
  DC *v121; // r13
  int v122; // eax
  unsigned int v123; // r8d
  DC *v124; // rax
  __int64 v125; // rax
  LONG left; // edx
  float right; // xmm0_4
  float v128; // xmm0_4
  float v129; // xmm0_4
  float v130; // xmm0_4
  unsigned int v131; // r8d
  float bottom; // xmm0_4
  float v133; // xmm0_4
  LONG v134; // ecx
  LONG v135; // eax
  int v136; // r11d
  unsigned __int64 v137; // rcx
  int v138; // r8d
  int v139; // r9d
  unsigned __int64 v140; // rcx
  int v141; // ebx
  int v142; // edx
  struct EXFORMOBJ *v143; // rdx
  int v144; // r9d
  DC *v145; // rcx
  DC *v146; // rax
  char v147; // bl
  int v148; // edi
  int v149; // eax
  int v150; // r8d
  DC *v151; // rdx
  struct _POINTL *v152; // rcx
  float x; // xmm0_4
  unsigned int v154; // r8d
  unsigned int v155; // r8d
  ERECTL *i; // rcx
  struct _RECTL *v157; // rcx
  LONG v158; // eax
  LONG v159; // eax
  LONG v160; // eax
  struct EXFORMOBJ *v161; // rdx
  struct XDCOBJ *v162; // r8
  int v163; // r9d
  int v164; // eax
  __int64 v165; // rax
  int v166; // eax
  int *v167; // rbx
  struct EXFORMOBJ *v168; // rdx
  int v169; // r9d
  int v170; // eax
  LONG v171; // ecx
  LONG v172; // eax
  int v173; // edx
  unsigned __int64 v174; // r8
  struct XDCOBJ *v175; // r8
  int v176; // eax
  __int64 v177; // rax
  __int64 v178; // rax
  struct XDCOBJ *v179; // r8
  int v180; // eax
  int v181; // eax
  __int64 v182; // rbx
  __int64 j; // rdx
  __int64 v184; // rbx
  __int64 k; // rdx
  int v186; // eax
  struct _BRUSHOBJ *v187; // r15
  LONG *v188; // rbx
  RECTL v189; // xmm6
  LONG *v190; // rcx
  struct _SURFOBJ *v191; // r9
  LONG v192; // ecx
  LONG v193; // eax
  LONG v194; // ecx
  LONG v195; // eax
  struct _XLATEOBJ *p_rclBounds; // [rsp+28h] [rbp-E8h]
  struct _POINTL *v197; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v198; // [rsp+40h] [rbp-D0h]
  unsigned int v199; // [rsp+48h] [rbp-C8h]
  unsigned int v200; // [rsp+58h] [rbp-B8h]
  struct _BRUSHOBJ *v201; // [rsp+90h] [rbp-80h] BYREF
  unsigned int top; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v203; // [rsp+A0h] [rbp-70h]
  unsigned int v204; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v205; // [rsp+B0h] [rbp-60h] BYREF
  LONG v206; // [rsp+B8h] [rbp-58h]
  struct _BRUSHOBJ *v207; // [rsp+C0h] [rbp-50h]
  int v208; // [rsp+D0h] [rbp-40h]
  __int64 v209; // [rsp+D8h] [rbp-38h] BYREF
  int v210; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v211; // [rsp+E8h] [rbp-28h] BYREF
  int *v212; // [rsp+F0h] [rbp-20h] BYREF
  unsigned __int16 *v213[2]; // [rsp+F8h] [rbp-18h] BYREF
  char *v214; // [rsp+108h] [rbp-8h] BYREF
  int v215; // [rsp+110h] [rbp+0h]
  int v216; // [rsp+114h] [rbp+4h]
  struct RFONTOBJ::Tag *v217; // [rsp+118h] [rbp+8h]
  struct XDCOBJ *v218; // [rsp+120h] [rbp+10h] BYREF
  PATHOBJ ppo; // [rsp+130h] [rbp+20h] BYREF
  __int64 v220; // [rsp+138h] [rbp+28h]
  void *v221; // [rsp+1B0h] [rbp+A0h]
  int *v222; // [rsp+1B8h] [rbp+A8h]
  struct XDCOBJ *v223; // [rsp+1C0h] [rbp+B0h]
  PATHOBJ v224; // [rsp+1D0h] [rbp+C0h] BYREF
  __int64 v225; // [rsp+1D8h] [rbp+C8h]
  struct _RECTL rclBkGround; // [rsp+250h] [rbp+140h] BYREF
  struct _RECTL v227; // [rsp+260h] [rbp+150h] BYREF
  struct _RECTL *v228[2]; // [rsp+270h] [rbp+160h] BYREF
  struct _CLIPOBJ v229; // [rsp+280h] [rbp+170h] BYREF
  __int64 v230; // [rsp+2B8h] [rbp+1A8h]
  __int64 v231; // [rsp+2D0h] [rbp+1C0h]
  int v232; // [rsp+2D8h] [rbp+1C8h]
  int v233; // [rsp+300h] [rbp+1F0h]
  __int64 v234; // [rsp+310h] [rbp+200h]
  STROBJ pstro; // [rsp+320h] [rbp+210h] BYREF
  __int64 v236; // [rsp+360h] [rbp+250h]
  int v237; // [rsp+370h] [rbp+260h]
  int v238; // [rsp+374h] [rbp+264h]
  int v239; // [rsp+3A0h] [rbp+290h]
  _BYTE v240[100]; // [rsp+3A4h] [rbp+294h] BYREF
  int v241; // [rsp+408h] [rbp+2F8h]
  void *v242; // [rsp+428h] [rbp+318h]
  struct _POINTL v243; // [rsp+460h] [rbp+350h] BYREF
  LONG v244; // [rsp+468h] [rbp+358h]
  LONG v245; // [rsp+46Ch] [rbp+35Ch]
  LONG v246; // [rsp+470h] [rbp+360h]
  LONG v247; // [rsp+474h] [rbp+364h]
  int v248; // [rsp+478h] [rbp+368h]
  int v249; // [rsp+47Ch] [rbp+36Ch]
  struct _POINTFIX v250; // [rsp+480h] [rbp+370h] BYREF
  _BYTE v251[40]; // [rsp+4A0h] [rbp+390h] BYREF

  LODWORD(v12) = 0;
  v13 = a5;
  v14 = a1;
  LODWORD(v207) = a7;
  v213[0] = a6;
  v16 = a3;
  v17 = 128;
  v221 = a10;
  v217 = a12;
  v18 = 4;
  v223 = a1;
  if ( (a4 & 0x10) == 0 )
    v18 = 2;
  v206 = a3;
  v19 = *(_QWORD *)a1;
  LODWORD(v201) = v18;
  v222 = a8;
  if ( (*(_DWORD *)(v19 + 248) & 1) == 0 || (a4 & 4) == 0 )
  {
    if ( (*(_DWORD *)(v19 + 36) & 0x10000) != 0 )
    {
      EngSetLastError(6u);
      return 0LL;
    }
    LODWORD(v212) = a4 & 0x2000;
    if ( (a4 & 0x2000) == 0 || a8 )
    {
      v20 = a4 & 0xFFFFC36F;
      if ( a5 )
      {
        if ( a5->left == a5->right || a5->top == a5->bottom )
        {
          a5->right = a2;
          a5->left = a2;
          a5->bottom = a3;
          a5->top = a3;
          if ( (a4 & 6) == 2 )
          {
            v13 = 0LL;
            v20 = a4 & 0xFFFFC36D;
          }
        }
      }
      else
      {
        v20 = a4 & 0xFFFFC369;
      }
      v21 = *(DC **)v14;
      if ( !*(_QWORD *)v14 || v20 && (!v13 || (v20 & 0xFFFFFFF9) != 0) )
        return 0;
      v22 = *((_DWORD *)v21 + 62) & 1;
      if ( v22 )
      {
        if ( (v20 & 4) != 0 )
          return 0;
      }
      rclBkGround = 0LL;
      if ( v22 )
      {
        v208 = 0;
        LODWORD(v228[0]) = 0;
        v26 = 0;
        v23 = 0;
        LODWORD(v211) = 0;
        LODWORD(v24) = 0;
        LODWORD(v25) = 0;
      }
      else
      {
        v218 = (struct XDCOBJ *)*((_QWORD *)v21 + (*((_DWORD *)v21 + 10) & 1) + 127);
        v23 = (int)v218;
        v211 = (struct _RECTL *)((unsigned __int64)v218 >> 32);
        v24 = (unsigned __int64)v218 >> 32;
        v25 = (unsigned __int64)v218 >> 32;
        v12 = (unsigned __int64)v218 >> 32;
        v228[0] = (struct _RECTL *)((unsigned __int64)v218 >> 32);
        v26 = (unsigned int)v218;
        v208 = HIDWORD(v218);
      }
      v27 = *((_QWORD *)v21 + 122);
      v28 = 16 * v23;
      v203 = v26;
      v215 = *(_DWORD *)(v27 + 208);
      v29 = *((_QWORD *)v21 + 122);
      v209 = (unsigned int)(16 * v24);
      v216 = *(_DWORD *)(v29 + 108) & 1;
      if ( (*(_DWORD *)(*((_QWORD *)v21 + 122) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v214, v14, 0x204u, 0);
        LODWORD(v25) = (_DWORD)v211;
        LODWORD(v12) = v228[0];
        v30 = v214;
        v26 = v203;
      }
      else
      {
        v30 = (char *)v21 + 320;
        v214 = (char *)v21 + 320;
      }
      v218 = 0LL;
      if ( v13 )
      {
        top = v20 & 2;
        v31 = 136;
        if ( (v20 & 2) == 0 )
          v31 = 128;
        v17 = v31;
        v32 = *((_DWORD *)v30 + 8);
        if ( (v32 & 2) != 0 )
        {
          v33 = v13->left + v26 + ((*((_DWORD *)v30 + 6) + 8) >> 4);
          v227.left = v33;
          v34 = v203 + v13->right + ((*((_DWORD *)v30 + 6) + 8) >> 4);
          v227.right = v34;
          v35 = *((_DWORD *)v30 + 7) + 8;
          v203 = v34;
          v227.top = v25 + v13->top + (v35 >> 4);
          v36 = *((_DWORD *)v30 + 7) + 8;
          top = v227.top;
          v37 = v13->bottom + (v36 >> 4);
          v38 = v227.top;
          v39 = v12 + v37;
          v204 = v39;
          v227.bottom = v39;
        }
        else
        {
          left = v13->left;
          if ( (v32 & 1) != 0 )
          {
            top = 0;
            bFToL((float)left * *(float *)v30, (int *)&top, 0);
            right = (float)v13->right;
            v227.left = v203 + ((int)(*((_DWORD *)v214 + 6) + top + 8) >> 4);
            LODWORD(v207) = v227.left;
            v128 = right * *(float *)v214;
            top = 0;
            bFToL(v128, (int *)&top, 0);
            v129 = (float)v13->top;
            v227.right = v203 + ((int)(*((_DWORD *)v214 + 6) + top + 8) >> 4);
            v130 = v129 * *((float *)v214 + 3);
            v203 = v227.right;
            top = 0;
            bFToL(v130, (int *)&top, v131);
            bottom = (float)v13->bottom;
            v227.top = v208 + ((int)(*((_DWORD *)v214 + 7) + top + 8) >> 4);
            top = v227.top;
            v133 = bottom * *((float *)v214 + 3);
            v204 = 0;
            bFToL(v133, (int *)&v204, 0);
            v34 = v203;
            v38 = top;
            v33 = (int)v207;
            v39 = v208 + ((int)(*((_DWORD *)v214 + 7) + v204 + 8) >> 4);
            v204 = v39;
            v227.bottom = v39;
          }
          else
          {
            v134 = v13->top;
            v243.y = v13->bottom;
            v135 = v13->right;
            v245 = v134;
            v247 = v134;
            v243.x = left;
            v244 = left;
            v246 = v135;
            EXFORMOBJ::bXform((EXFORMOBJ *)&v214, &v243, (struct _POINTFIX *)&v243, 3uLL);
            v136 = v243.x + v246 - v244;
            v249 = v243.y + v247 - v245;
            LODWORD(v228[0]) = v249;
            v248 = v136;
            v137 = (v244 > v243.x) ^ (unsigned __int64)(v244 <= v246);
            v138 = *(&v243.x + 2 * v137);
            v139 = *(&v246 + 2 * v137);
            if ( v138 > v139 )
              v138 += 15;
            else
              v139 += 15;
            v33 = v203 + (v138 >> 4);
            v34 = v203 + (v139 >> 4);
            v227.right = v34;
            v203 = v34;
            v227.left = v33;
            v140 = (v245 > v243.y) ^ (unsigned __int64)(v245 <= v247);
            v141 = *(&v243.y + 2 * v140);
            v142 = *(&v247 + 2 * v140);
            if ( v141 > v142 )
              v141 += 15;
            else
              v142 += 15;
            v38 = v208 + (v141 >> 4);
            v39 = v208 + (v142 >> 4);
            v227.bottom = v39;
            v204 = v39;
            v227.top = v38;
            if ( (v20 & 4) != 0 )
            {
              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
              if ( v220 )
              {
                if ( (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v143, &v243, v144) )
                {
                  v145 = *(DC **)v14;
                  *(_OWORD *)v228 = 0LL;
                  HIDWORD(v228[0]) = 16 * (*((_DWORD *)v145 + 251) - v208);
                  HIDWORD(v228[1]) = 16 * (*((_DWORD *)v145 + 253) - v208);
                  v211 = 0LL;
                  RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v211, (struct EPATHOBJ *)&ppo, 1u, (struct _RECTL *)v228);
                  if ( v211 )
                  {
                    v146 = *(DC **)v14;
                    v218 = v14;
                    *((_QWORD *)v146 + 141) = v211;
                    if ( (unsigned int)DC::bTightenRao(*(DC **)v14) )
                      LOBYTE(v20) = v20 & 0xFB;
                  }
                }
              }
              v147 = v20;
              v148 = v20 & 4;
              if ( (v20 & 4) != 0 )
                v17 = 0;
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
              v39 = v227.bottom;
              v149 = 0;
              v34 = v227.right;
              v33 = v227.left;
              LOBYTE(v20) = 0;
              if ( !v148 )
              {
                v149 = (int)v207;
                LOBYTE(v20) = v147;
              }
              v38 = v227.top;
              v16 = v206;
              a7 = v149;
              v204 = v227.bottom;
              v203 = v227.right;
            }
            else if ( top )
            {
              v243.y += v209;
              v247 += v209;
              v17 = 130;
              v243.x += v28;
              v244 += v28;
              v246 += v28;
              v245 += v209;
              v249 = v209 + LODWORD(v228[0]);
              v248 = v28 + v136;
            }
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 108LL) & 1) != 0 )
        {
          ++v33;
          ++v34;
          v227.left = v33;
          v203 = v34;
          v227.right = v34;
        }
        if ( v33 > v34 )
        {
          v227.left = v34;
          v40 = v33;
          v227.right = v33;
          v33 = v34;
        }
        else
        {
          v40 = v203;
        }
        if ( v38 > v39 )
        {
          v41 = v38;
          v227.top = v39;
          v227.bottom = v38;
          v38 = v39;
        }
        else
        {
          v41 = v204;
        }
        if ( (v17 & 0xA) != 0 )
        {
          v42 = (unsigned int)rclBkGround.left;
          v43 = rclBkGround.right;
          if ( rclBkGround.left != rclBkGround.right )
          {
            v44 = rclBkGround.top;
            v45 = rclBkGround.bottom;
            if ( rclBkGround.top != rclBkGround.bottom )
            {
              if ( v33 < rclBkGround.left )
                v42 = (unsigned int)v33;
              rclBkGround.left = v42;
              if ( v38 < rclBkGround.top )
                v44 = v38;
              rclBkGround.top = v44;
              if ( v40 > rclBkGround.right )
                v43 = v40;
              rclBkGround.right = v43;
              if ( v41 > rclBkGround.bottom )
              {
                v45 = v41;
                rclBkGround.bottom = v41;
              }
LABEL_33:
              v207 = 0LL;
              v228[0] = 0LL;
              v205 = 0LL;
              v241 = 0;
              v203 = 1;
              if ( !a7 )
              {
                p_rclBkGround = 0LL;
                v61 = 0;
                v60 = 0LL;
                goto LABEL_89;
              }
              v46 = *(struct DC **)v14;
              v47 = (*(_DWORD *)(*(_QWORD *)v14 + 248LL) & 1) != 0;
              v48 = (*(_DWORD *)(*(_QWORD *)v14 + 36LL) & 0x4000) == 0;
              v211 = 0LL;
              if ( !v48 )
              {
                v211 = (struct _RECTL *)*((_QWORD *)v46 + 62);
                SURFACE::bUnMap((SURFACE *)v211, 0LL, v46);
              }
              if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v205, v14, v47, (unsigned int)v201, v217) )
                GreAcquireSemaphore(*(_QWORD *)(v205 + 504));
              if ( v211 )
                SURFACE::Map(v211, 0LL);
              if ( !v205 )
              {
                v45 = rclBkGround.bottom;
                v17 = 0;
                v43 = rclBkGround.right;
                p_rclBkGround = 0LL;
                v44 = rclBkGround.top;
                v61 = 0;
                v42 = (unsigned int)rclBkGround.left;
                v60 = 0LL;
                v203 = 1;
                goto LABEL_89;
              }
              v210 = *(_DWORD *)(v205 + 88) & 2;
              v203 = !v210 || (*(_DWORD *)(v205 + 716) & 0x8000) != 0;
              v49 = *(_QWORD *)(*(_QWORD *)v14 + 976LL);
              v50 = *(_DWORD *)(*(_QWORD *)v14 + 1752LL) | *(_DWORD *)(v49 + 272) & 0x11F;
              if ( *(_BYTE *)(*(_QWORD *)v14 + 1752LL) & 1 | *(_BYTE *)(v49 + 272) & 1 )
              {
                v119 = *(_DWORD *)(v49 + 152);
                if ( (v119 & 0x200) == 0 )
                {
                  v150 = v209;
                  *(_DWORD *)(v49 + 152) = v119 | 0x100;
                  v151 = *(DC **)v14;
                  v52 = v28 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 8LL);
                  LODWORD(v201) = v52;
                  v53 = *(_DWORD *)(*((_QWORD *)v151 + 122) + 12LL) + v150;
                  goto LABEL_205;
                }
                *(_DWORD *)(v49 + 152) = v119 & 0xFFFFFDFF;
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 152LL) |= 0x100u;
                v120 = v214;
                v121 = *(DC **)v14;
                v122 = *((_DWORD *)v214 + 8);
                if ( (v122 & 2) != 0 )
                {
                  LODWORD(v201) = *((_DWORD *)v214 + 6) + 16 * *(_DWORD *)(*((_QWORD *)v121 + 122) + 216LL);
                  HIDWORD(v201) = *((_DWORD *)v214 + 7) + 16 * *(_DWORD *)(*((_QWORD *)v121 + 122) + 220LL);
                }
                else
                {
                  v152 = (struct _POINTL *)*((_QWORD *)v121 + 122);
                  if ( (v122 & 1) != 0 )
                  {
                    x = (float)v152[27].x;
                    top = 0;
                    bFToL(x * *(float *)v214, (int *)&top, 0);
                    LODWORD(v201) = *((_DWORD *)v120 + 6) + top;
                    top = 0;
                    bFToL((float)*(int *)(*((_QWORD *)v121 + 122) + 220LL) * *((float *)v120 + 3), (int *)&top, v154);
                    HIDWORD(v201) = *((_DWORD *)v120 + 7) + top;
                  }
                  else
                  {
                    EXFORMOBJ::bXform((EXFORMOBJ *)&v214, v152 + 27, (struct _POINTFIX *)&v201, 1uLL);
                  }
                }
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 8LL) = v201;
              }
              else
              {
                v51 = *((_DWORD *)v214 + 8);
                if ( (v51 & 2) != 0 )
                {
                  v52 = v28 + *((_DWORD *)v214 + 6) + 16 * a2;
                  LODWORD(v201) = v52;
                  v206 = v209 + *((_DWORD *)v214 + 7) + 16 * v206;
                  v53 = v206;
                  HIDWORD(v201) = v206;
                  goto LABEL_46;
                }
                if ( (v51 & 1) != 0 )
                {
                  top = 0;
                  bFToL((float)a2 * *(float *)v214, (int *)&top, 0);
                  v52 = v28 + top + *((_DWORD *)v214 + 6);
                  top = v155;
                  LODWORD(v201) = v52;
                  bFToL((float)v16 * *((float *)v214 + 3), (int *)&top, v155);
                  v123 = top + *((_DWORD *)v214 + 7);
                  goto LABEL_204;
                }
                v201 = (struct _BRUSHOBJ *)__PAIR64__(v16, a2);
                EXFORMOBJ::bXform((EXFORMOBJ *)&v214, (struct _POINTL *)&v201, (struct _POINTFIX *)&v201, 1uLL);
              }
              v123 = HIDWORD(v201);
              v52 = v28 + (_DWORD)v201;
              LODWORD(v201) = v28 + (_DWORD)v201;
LABEL_204:
              v53 = v209 + v123;
LABEL_205:
              HIDWORD(v201) = v53;
LABEL_46:
              ESTROBJ::vInit(
                (ESTROBJ *)&pstro,
                v213[0],
                a7,
                v14,
                (struct RFONTOBJ *)&v205,
                (struct EXFORMOBJ *)&v214,
                v222,
                (int)v212,
                *(_DWORD *)(*(_QWORD *)v14 + 1756LL),
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 280LL),
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 284LL),
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 288LL),
                v52,
                v53,
                v50,
                0LL,
                v221,
                a11);
              if ( (v241 & 4) == 0 )
              {
                v45 = rclBkGround.bottom;
                v17 = 0;
                v43 = rclBkGround.right;
                p_rclBkGround = 0LL;
                v44 = rclBkGround.top;
                v60 = 0LL;
                v42 = (unsigned int)rclBkGround.left;
                goto LABEL_87;
              }
              v54 = ESTROBJ::bOpaqueArea((ESTROBJ *)&pstro, &v250, &pstro.rclBkGround);
              v55 = v54;
              v56 = pstro.rclBkGround.right;
              v57 = pstro.rclBkGround.left;
              if ( (*(_DWORD *)(v205 + 12) & 0x10000000) != 0 )
              {
                v57 = pstro.rclBkGround.left - 1;
                v56 = pstro.rclBkGround.right + 1;
                --pstro.rclBkGround.left;
                ++pstro.rclBkGround.right;
              }
              if ( (v241 & 0x1400) != 0 )
              {
                ESTROBJ::vEudcOpaqueArea((ESTROBJ *)&pstro, &v250, v54);
                v56 = pstro.rclBkGround.right;
                v57 = pstro.rclBkGround.left;
              }
              v42 = (unsigned int)rclBkGround.left;
              v43 = rclBkGround.right;
              if ( rclBkGround.left == rclBkGround.right
                || (v45 = rclBkGround.bottom, v204 = rclBkGround.top, rclBkGround.top == rclBkGround.bottom) )
              {
                rclBkGround = pstro.rclBkGround;
                v45 = pstro.rclBkGround.bottom;
                v43 = pstro.rclBkGround.right;
                v42 = (unsigned int)pstro.rclBkGround.left;
                v204 = pstro.rclBkGround.top;
              }
              else
              {
                if ( v57 < rclBkGround.left )
                {
                  v42 = (unsigned int)v57;
                  rclBkGround.left = v57;
                }
                if ( pstro.rclBkGround.top < rclBkGround.top )
                {
                  v204 = pstro.rclBkGround.top;
                  rclBkGround.top = pstro.rclBkGround.top;
                }
                if ( v56 > rclBkGround.right )
                {
                  v43 = v56;
                  rclBkGround.right = v56;
                }
                if ( pstro.rclBkGround.bottom > rclBkGround.bottom )
                {
                  v45 = pstro.rclBkGround.bottom;
                  rclBkGround.bottom = pstro.rclBkGround.bottom;
                }
              }
              if ( a9 == 2 )
              {
                if ( !v55 )
                {
                  p_rclBkGround = &pstro.rclBkGround;
LABEL_64:
                  v59 = v57 >= v56 || pstro.rclBkGround.top >= pstro.rclBkGround.bottom;
                  if ( (v17 & 8) == 0
                    || v227.left > v57
                    || v227.right < v56
                    || v227.top > pstro.rclBkGround.top
                    || v227.bottom < pstro.rclBkGround.bottom
                    || v59 )
                  {
                    if ( !p_rclBkGround )
                    {
                      if ( v59 )
                        goto LABEL_73;
                      goto LABEL_72;
                    }
                  }
                  else
                  {
                    p_rclBkGround = &v227;
                    v17 &= ~8u;
                  }
                  if ( p_rclBkGround->left >= p_rclBkGround->right || p_rclBkGround->top >= p_rclBkGround->bottom )
                    goto LABEL_73;
LABEL_72:
                  v17 |= 1u;
LABEL_73:
                  v44 = v204;
                  if ( (v50 & 0xA0) != 0 )
                  {
                    if ( v239 )
                    {
                      v60 = (struct _RECTL *)v240;
                      for ( i = (ERECTL *)v240; !ERECTL::bEmpty(i); i = (ERECTL *)&v157[1] )
                      {
                        if ( (_DWORD)v42 == v43 || v44 == v45 )
                        {
                          rclBkGround = *v157;
                        }
                        else
                        {
                          if ( v157->left < (int)v42 )
                            LODWORD(v42) = v157->left;
                          v158 = v157->top;
                          rclBkGround.left = v42;
                          if ( v158 < v44 )
                            v44 = v158;
                          v159 = v157->right;
                          rclBkGround.top = v44;
                          if ( v159 > v43 )
                            v43 = v159;
                          v160 = v157->bottom;
                          rclBkGround.right = v43;
                          if ( v160 > v45 )
                            rclBkGround.bottom = v160;
                        }
                      }
                    }
                    else
                    {
                      v60 = 0LL;
                      v17 |= 4u;
                    }
                  }
                  else
                  {
                    v60 = v228[0];
                  }
                  if ( (v20 & 4) == 0 )
                    goto LABEL_87;
                  if ( v227.left > (int)v42 )
                  {
LABEL_77:
                    v42 = (unsigned int)v227.left;
                    rclBkGround.left = v227.left;
LABEL_78:
                    if ( v227.top > v44 )
                    {
                      v44 = v227.top;
                      rclBkGround.top = v227.top;
                    }
                    if ( v227.right < v43 )
                    {
                      v43 = v227.right;
                      rclBkGround.right = v227.right;
                    }
                    if ( v227.bottom < v45 )
                      v45 = v227.bottom;
                    rclBkGround.bottom = v45;
                    if ( v43 < (int)v42 )
                    {
                      v42 = (unsigned int)v43;
                      rclBkGround.left = v43;
                    }
                    else if ( v45 < v44 )
                    {
                      v44 = v45;
                      rclBkGround.top = v45;
                    }
                    goto LABEL_87;
                  }
                  if ( v227.right < v43 || v227.top > rclBkGround.top || v227.bottom < rclBkGround.bottom )
                  {
                    if ( v227.left <= (int)v42 )
                      goto LABEL_78;
                    goto LABEL_77;
                  }
                  LOBYTE(v20) = -5;
LABEL_87:
                  v61 = v210;
                  v228[0] = v60;
                  if ( (v50 & 1) != 0 )
                  {
                    v124 = *(DC **)v14;
                    v228[0] = v60;
                    *(_DWORD *)(*((_QWORD *)v124 + 122) + 8LL) += v237;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 12LL) += v238;
                    v45 = rclBkGround.bottom;
                    v43 = rclBkGround.right;
                    v44 = rclBkGround.top;
                    v42 = (unsigned int)rclBkGround.left;
                  }
LABEL_89:
                  v62 = *(SURFACE **)v14;
                  v63 = v17;
                  if ( (*(_DWORD *)(*(_QWORD *)v14 + 248LL) & 1) == 0 )
                  {
                    if ( (_DWORD)v42 != v43 && v44 != v45 )
                    {
                      if ( (*((_DWORD *)v62 + 9) & 0xE0) != 0 )
                      {
                        XDCOBJ::vAccumulate(v14, (struct ECLIPOBJ *)v42, (__m128i *)&rclBkGround);
                        v62 = *(SURFACE **)v14;
                      }
                      if ( v61 || (v20 & 4) != 0 )
                      {
                        v64 = 1;
                        v65 = 0LL;
                        v66 = 1;
                      }
                      else
                      {
                        v65 = 0LL;
                        v66 = 0;
                        v64 = 1;
                      }
                      if ( *((_QWORD *)v62 + 146)
                        && (*((_DWORD *)v62 + 10) & 2) != 0
                        && (unsigned int)DC::bDpiScaledSurface(v62)
                        || *((_QWORD *)v62 + 144) )
                      {
                        v67 = DC::prgnRao(v62);
                      }
                      else if ( !*((_QWORD *)v62 + 145)
                             || (*((_DWORD *)v62 + 10) & 2) == 0
                             || !(unsigned int)DC::bDpiScaledSurface(v62) )
                      {
                        v67 = (struct REGION *)*((_QWORD *)v62 + 143);
                      }
                      v230 = v65;
                      v231 = v65;
                      v232 = v65;
                      v233 = 1;
                      v234 = v65;
                      XCLIPOBJ::vSetup((XCLIPOBJ *)&v229, v67, (struct ERECTL *)&rclBkGround, v66);
                      rclBounds = v229.rclBounds;
                      v69 = _mm_srli_si128((__m128i)v229.rclBounds, 8);
                      rclBkGround = v229.rclBounds;
                      v229.rclBounds.left = _mm_cvtsi128_si32((__m128i)v229.rclBounds);
                      if ( v229.rclBounds.left == _mm_cvtsi128_si32(v69)
                        || _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rclBounds, 4)) == _mm_cvtsi128_si32(
                                                                                         _mm_srli_si128(
                                                                                           (__m128i)rclBounds,
                                                                                           12)) )
                      {
LABEL_169:
                        if ( (v241 & 0x801) != 0 )
                        {
                          if ( (v241 & 1) != 0 )
                            FreeTmpBuffer(v236, v42, v62);
                          if ( (v241 & 0x800) != 0 )
                            Win32FreePool(v242);
                        }
                        if ( v205 )
                        {
                          if ( (*(_DWORD *)(v205 + 712) & 0x81) != 0 )
                            RFONTOBJ::dtorHelper((RFONTOBJ *)&v205);
                          v113 = *(void **)(v205 + 616);
                          if ( v113 )
                          {
                            Win32FreePool(v113);
                            *(_QWORD *)(v205 + 624) = 0LL;
                            *(_QWORD *)(v205 + 616) = 0LL;
                          }
                          EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache");
                          GreReleaseSemaphoreInternal(*(_QWORD *)(v205 + 504));
                        }
                        if ( v218 )
                          TXTCLEANUP::vMopUp((TXTCLEANUP *)&v218);
                        if ( v17 )
                          return v64;
                        return 0;
                      }
                      v70 = *(unsigned int *)(*(_QWORD *)v14 + 36LL);
                      if ( (v70 & 0xE0) != 0 )
                      {
                        *(RECTL *)v213 = rclBounds;
                        XDCOBJ::vAccumulateTight(v14, (struct ECLIPOBJ *)v42, (__m128i *)v213);
                      }
                      v71 = *(_QWORD *)(*(_QWORD *)v14 + 496LL);
                      if ( v71 )
                      {
                        if ( (*(_DWORD *)(v71 + 116) & 8) == 0 && !*(_QWORD *)(v71 + 224)
                          || !_bittest16((const signed __int16 *)(v71 + 102), 9u) )
                        {
                          v72 = *(_DWORD *)(v71 + 112);
                          if ( (v72 & 0x800) != 0 )
                          {
                            v73 = UserSurfaceAccessCheck(*(_QWORD *)(v71 + 648));
                          }
                          else
                          {
                            if ( (v72 & 0x10000000) == 0 )
                            {
                              LODWORD(v42) = v203;
                              v228[0] = v60;
                              goto LABEL_113;
                            }
                            v73 = UserScreenAccessCheck(v70, v42, v62);
                            v228[0] = v60;
                          }
                          v42 = v203;
                          if ( v73 )
                          {
LABEL_113:
                            v74 = (struct _SURFOBJ *)p_rclBkGround;
                            v75 = *(_QWORD *)(v71 + 128);
                            v76 = v17;
                            v209 = *(_QWORD *)(v71 + 48);
                            v77 = v61;
                            v78 = *(DC **)v14;
                            v211 = v60;
                            v217 = (struct RFONTOBJ::Tag *)p_rclBkGround;
                            v210 = v17;
                            v79 = *((_DWORD *)v78 + 18);
                            v80 = *((_QWORD *)v78 + 11);
                            v207 = (struct _BRUSHOBJ *)((char *)v78 + 1472);
                            v201 = (struct _BRUSHOBJ *)((char *)v78 + 1608);
                            top = 0;
                            v62 = (SURFACE *)v211;
                            v206 = v61;
                            v208 = v79;
                            if ( (v79 & 0x10000000) != 0 )
                            {
                              v165 = *((_QWORD *)v78 + 122);
                              top = v42;
                              *(_DWORD *)(v165 + 152) |= 4u;
                              --*(&v207[5].iSolidColor + 1);
                            }
                            v81 = *(Gre::Base **)(*(_QWORD *)v14 + 976LL);
                            v42 = *(unsigned int *)(*(_QWORD *)v14 + 316LL);
                            if ( (((unsigned __int8)v42 | *((_BYTE *)v81 + 152)) & 0xC) != 0 )
                            {
                              v115 = Gre::Base::Globals(v81);
                              v116 = *(DC **)v14;
                              v117 = (unsigned __int16 *)v115;
                              v213[0] = (unsigned __int16 *)v115;
                              if ( ((*((_BYTE *)v116 + 316) | *(_BYTE *)(*((_QWORD *)v116 + 122) + 152LL)) & 4) != 0 )
                              {
                                EBRUSHOBJ::vInitBrush(v207, v116, *((_QWORD *)v115 + 29), v80, v75, v71, top);
                                v117 = v213[0];
                              }
                              v118 = *(_QWORD *)(*(_QWORD *)v14 + 976LL);
                              v42 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v14 + 316LL) | *(_DWORD *)(v118 + 152));
                              if ( ((*(_BYTE *)(*(_QWORD *)v14 + 316LL) | *(_BYTE *)(v118 + 152)) & 8) != 0 )
                                EBRUSHOBJ::vInitBrush(
                                  v201,
                                  *(_QWORD *)v14,
                                  *((_QWORD *)v117 + 31),
                                  v80,
                                  v75,
                                  v71,
                                  (v208 & 0x8000) != 0);
                              v74 = (struct _SURFOBJ *)p_rclBkGround;
                              v62 = (SURFACE *)v211;
                              v76 = v17;
                              v77 = v61;
                              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 152LL) &= 0xFFFFFFF3;
                              *(_DWORD *)(*(_QWORD *)v14 + 316LL) &= 0xFFFFFFF3;
                            }
                            v82 = (struct _POINTL *)(*(_QWORD *)v14 + 1192LL);
                            if ( (v17 & 0x1A) != 0 )
                            {
                              if ( (v17 & 8) != 0 )
                              {
                                v83 = v227.left;
                                v84 = v227.right;
                                if ( v227.left != v227.right )
                                {
                                  v85 = v227.top;
                                  v42 = (unsigned int)v227.bottom;
                                  if ( v227.top != v227.bottom )
                                  {
                                    si128 = _mm_load_si128((const __m128i *)&rclBkGround);
                                    v17 = v76;
                                    v87 = _mm_cvtsi128_si32(si128);
                                    v88 = _mm_srli_si128(si128, 8);
                                    v228[0] = (struct _RECTL *)v62;
                                    rclBkGround.left = v87;
                                    if ( v87 > v227.left )
                                      v83 = v87;
                                    v89 = _mm_cvtsi128_si32(v88);
                                    LODWORD(v212) = v83;
                                    v90 = _mm_srli_si128(si128, 4);
                                    rclBkGround.right = v89;
                                    v91 = _mm_srli_si128(si128, 12);
                                    if ( v89 < v227.right )
                                      v84 = v89;
                                    v92 = _mm_cvtsi128_si32(v91);
                                    v93 = _mm_cvtsi128_si32(v90);
                                    v229.rclBounds.left = v83;
                                    rclBkGround.bottom = v92;
                                    rclBkGround.top = v93;
                                    v229.rclBounds.right = v84;
                                    if ( v93 > v227.top )
                                      v85 = v93;
                                    v229.rclBounds.top = v85;
                                    v61 = v77;
                                    if ( v92 < v227.bottom )
                                      v42 = (unsigned int)v92;
                                    p_rclBkGround = (struct _RECTL *)v74;
                                    v229.rclBounds.bottom = v42;
                                    if ( v83 < v84 )
                                    {
                                      v228[0] = (struct _RECTL *)v62;
                                      if ( v85 < (int)v42 )
                                      {
                                        ++*(_DWORD *)(v71 + 92);
                                        v94 = 0;
                                        v204 = 0;
                                        top = 0;
                                        v212 = (int *)v251;
                                        v95 = *(_QWORD *)(v71 + 48);
                                        v228[0] = (struct _RECTL *)v62;
                                        if ( (*(_DWORD *)(v95 + 40) & 0x8080) == 0x8080 )
                                        {
                                          if ( v205 )
                                          {
                                            v166 = UMPDReleaseRFONTSem(
                                                     (struct RFONTOBJ *)&v205,
                                                     0LL,
                                                     &v204,
                                                     &top,
                                                     &v212);
                                            v61 = v206;
                                            v94 = v166;
                                            v17 = v210;
                                            p_rclBkGround = (struct _RECTL *)v217;
                                            v228[0] = v211;
                                          }
                                          else
                                          {
                                            v228[0] = (struct _RECTL *)v62;
                                          }
                                        }
                                        if ( (*(_DWORD *)(v71 + 112) & 1) != 0 )
                                          v96 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v71 + 48) + 2808LL);
                                        else
                                          v96 = EngBitBlt;
                                        v199 = (unsigned int)v82;
                                        v198 = (struct _POINTL *)v201;
                                        v197 = 0LL;
                                        p_rclBounds = (struct _XLATEOBJ *)&v229.rclBounds;
                                        ((void (__fastcall *)(__int64, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD))v96)(
                                          v71 + 24,
                                          0LL,
                                          0LL,
                                          &v229,
                                          0LL);
                                        if ( v94 )
                                        {
                                          v167 = v212;
                                          UMPDAcquireRFONTSem((struct RFONTOBJ *)&v205, 0LL, v204, top, v212);
                                          if ( v167 )
                                          {
                                            if ( v167 != (int *)v251 )
                                              Win32FreePool(v167);
                                          }
                                        }
                                      }
                                    }
                                    v229.rclBounds = rclBkGround;
                                  }
                                }
                              }
                              v97 = v228[0];
                              LODWORD(v212) = v17;
                              if ( (v17 & 0x12) != 0 )
                              {
                                PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                                if ( v220 )
                                {
                                  if ( (v17 = (int)v212, ((unsigned __int8)v212 & 2) != 0)
                                    && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v168, &v243, v169)
                                    || (v17 & 0x10) != 0
                                    && !(unsigned int)EPATHOBJ::bAddPolygon(
                                                        (EPATHOBJ *)&ppo,
                                                        v168,
                                                        (struct _POINTL *)&v250,
                                                        v169)
                                    || (v228[0] = v97,
                                        !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                         &ppo,
                                                         v14,
                                                         (struct RFONTOBJ *)&v205,
                                                         (struct PDEVOBJ *)&v209,
                                                         (struct SURFACE *)v71,
                                                         &v229,
                                                         v201,
                                                         v82,
                                                         (unsigned int)v198,
                                                         v199)) )
                                  {
                                    v228[0] = v97;
                                    v17 = 0;
                                  }
                                }
                                PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                              }
                            }
                            else
                            {
                              v97 = v228[0];
                            }
                            if ( (v17 & 1) == 0 )
                              goto LABEL_167;
                            v217 = 0LL;
                            if ( v61 )
                            {
                              v98 = -257;
                              v170 = 64;
                              if ( (*(_DWORD *)(v205 + 716) & 0x8000) == 0 )
                                v170 = 32;
                              v17 |= v170;
                            }
                            else
                            {
                              v98 = v208;
                            }
                            if ( p_rclBkGround && (v98 & 0x100) == 0 )
                            {
                              v171 = p_rclBkGround->left;
                              v172 = p_rclBkGround->right;
                              if ( rclBkGround.left > p_rclBkGround->left )
                                v171 = rclBkGround.left;
                              v173 = p_rclBkGround->top;
                              if ( rclBkGround.right < v172 )
                                v172 = rclBkGround.right;
                              v174 = (unsigned int)p_rclBkGround->bottom;
                              if ( rclBkGround.top > v173 )
                                v173 = rclBkGround.top;
                              v99 = v201;
                              if ( rclBkGround.bottom < (int)v174 )
                                v174 = (unsigned int)rclBkGround.bottom;
                              v229.rclBounds.bottom = v174;
                              v229.rclBounds.left = v171;
                              v229.rclBounds.right = v172;
                              v229.rclBounds.top = v173;
                              if ( v171 < v172 && v173 < (int)v174 )
                              {
                                ++*(_DWORD *)(v71 + 92);
                                TextOutBitBlt(
                                  (struct SURFACE *)v71,
                                  (struct RFONTOBJ *)&v205,
                                  (struct _SURFOBJ *)v174,
                                  v74,
                                  &v229,
                                  p_rclBounds,
                                  &v229.rclBounds,
                                  v197,
                                  v198,
                                  v99,
                                  v82,
                                  v200);
                              }
                              v229.rclBounds = rclBkGround;
                              p_rclBkGround = 0LL;
                            }
                            else
                            {
                              v99 = v201;
                            }
                            if ( v97 && *(_DWORD *)(v209 + 2108) != 4 )
                            {
                              v217 = (struct RFONTOBJ::Tag *)v97;
                              v97 = 0LL;
                              v228[0] = 0LL;
                            }
                            if ( (v17 & 0x20) != 0 )
                            {
                              if ( (v241 & 0x1400) != 0 )
                              {
                                if ( !(unsigned int)bProxyDrvTextOut(
                                                      v14,
                                                      (struct SURFACE *)v71,
                                                      &pstro,
                                                      &v229,
                                                      0LL,
                                                      0LL,
                                                      v207,
                                                      v99,
                                                      v82,
                                                      (struct RFONTOBJ *)&v205,
                                                      (struct PDEVOBJ *)&v209,
                                                      *(_DWORD *)(*(_QWORD *)v14 + 72LL),
                                                      &rclBkGround) )
                                  v17 = 0;
                              }
                              else
                              {
                                PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                                if ( !v220
                                  || ((v241 & 0x1400) == 0
                                    ? (v176 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&ppo))
                                    : (v176 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&ppo, v175)),
                                      !v176
                                   || !(unsigned int)EPATHOBJ::bTextOutSimpleStroke1(
                                                       &ppo,
                                                       v14,
                                                       (struct RFONTOBJ *)&v205,
                                                       (struct PDEVOBJ *)&v209,
                                                       (struct SURFACE *)v71,
                                                       &v229,
                                                       v207,
                                                       v82,
                                                       (unsigned int)v198)) )
                                {
                                  v17 = 0;
                                }
                                PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                              }
                              v108 = (_DWORD *)(v71 + 92);
                              goto LABEL_166;
                            }
                            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                            if ( ThreadWin32Thread && (v101 = *ThreadWin32Thread) != 0 )
                              v102 = *(_QWORD *)(v101 + 304);
                            else
                              v102 = *(_QWORD *)(v71 + 104);
                            if ( v102 )
                            {
                              *(_QWORD *)(v71 + 104) = 0LL;
                              v177 = W32GetThreadWin32Thread(KeGetCurrentThread());
                              if ( v177 )
                                *(_QWORD *)(v177 + 304) = 0LL;
                            }
                            if ( (*(_DWORD *)(v71 + 112) & 8) != 0 )
                              v103 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v71 + 48) + 2848LL);
                            else
                              v103 = EngTextOut;
                            if ( (char *)v103 == (char *)SpTextOut || (char *)v103 == (char *)BmpDevTextOut )
                            {
                              if ( (*(_DWORD *)(v205 + 12) & 0x10010000) != 0 )
                              {
                                *(_QWORD *)(v71 + 104) = v14;
                                v125 = W32GetThreadWin32Thread(KeGetCurrentThread());
                                if ( v125 )
                                  *(_QWORD *)(v125 + 304) = v14;
                              }
                            }
                            else
                            {
                              v104 = *(_DWORD *)(v205 + 12);
                              if ( (v104 & 0x10000) == 0 )
                                goto LABEL_155;
                              v105 = *(DC **)v14;
                              if ( (v104 & 0x10000000) != 0 )
                              {
                                if ( (*((_DWORD *)v105 + 19) & 0x4000) != 0 )
                                  goto LABEL_155;
                              }
                              else if ( (*((_DWORD *)v105 + 18) & 0x1000000) != 0 )
                              {
                                goto LABEL_155;
                              }
                              if ( v103 != EngTextOut )
                              {
                                *(_QWORD *)(v71 + 104) = v14;
                                v178 = W32GetThreadWin32Thread(KeGetCurrentThread());
                                if ( v178 )
                                  *(_QWORD *)(v178 + 304) = v14;
                              }
                              v103 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
                            }
LABEL_155:
                            if ( (v17 & 0x40) != 0 )
                            {
                              if ( (v241 & 0x1400) != 0 )
                              {
                                if ( !(unsigned int)bProxyDrvTextOut(
                                                      v14,
                                                      (struct SURFACE *)v71,
                                                      &pstro,
                                                      &v229,
                                                      0LL,
                                                      0LL,
                                                      v207,
                                                      v201,
                                                      v82,
                                                      (struct RFONTOBJ *)&v205,
                                                      (struct PDEVOBJ *)&v209,
                                                      *(_DWORD *)(*(_QWORD *)v14 + 72LL),
                                                      &rclBkGround) )
                                  v17 = 0;
                                goto LABEL_419;
                              }
                              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                              if ( !v220
                                || ((v241 & 0x1400) == 0
                                  ? (v180 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&ppo))
                                  : (v180 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&ppo, v179)),
                                    !v180
                                 || ppo.cCurves > 1
                                 && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                     &ppo,
                                                     v14,
                                                     (struct RFONTOBJ *)&v205,
                                                     (struct PDEVOBJ *)&v209,
                                                     (struct SURFACE *)v71,
                                                     &v229,
                                                     v207,
                                                     v82,
                                                     (unsigned int)v198,
                                                     v199)) )
                              {
                                v17 = 0;
                              }
                              goto LABEL_392;
                            }
                            ++*(_DWORD *)(v71 + 92);
                            if ( (v17 & 4) == 0 )
                            {
                              if ( (v241 & 0x1400) != 0 )
                              {
                                v181 = bProxyDrvTextOut(
                                         v14,
                                         (struct SURFACE *)v71,
                                         &pstro,
                                         &v229,
                                         v97,
                                         p_rclBkGround,
                                         v207,
                                         v201,
                                         v82,
                                         (struct RFONTOBJ *)&v205,
                                         (struct PDEVOBJ *)&v209,
                                         0,
                                         &rclBkGround);
                                v108 = (_DWORD *)(v71 + 92);
                                if ( !v181 )
                                  v17 = 0;
                                goto LABEL_162;
                              }
                              v106 = *(_QWORD *)(*(_QWORD *)v14 + 48LL);
                              v107 = *(_DWORD *)(v106 + 40);
                              if ( (v107 & 0x80u) != 0 && (v107 & 0x8000) == 0 && !*(_DWORD *)(v205 + 92) )
                              {
                                v182 = *(_QWORD *)(SGDGetSessionState(v106) + 32);
                                v213[0] = *(unsigned __int16 **)(v182 + 23400);
                                GreAcquireSemaphore(v213[0]);
                                for ( j = *(_QWORD *)(v182 + 23392); j; j = *(_QWORD *)(j + 32) )
                                {
                                  if ( *(_QWORD *)j == *(_QWORD *)(*(_QWORD *)(v205 + 128) + 80LL) )
                                    ++*(_DWORD *)(j + 12);
                                }
                                SEMOBJ::vUnlock((SEMOBJ *)v213);
                                v97 = v228[0];
                              }
                              v199 = 3341;
                              v198 = v82;
                              v197 = (struct _POINTL *)v201;
                              p_rclBounds = (struct _XLATEOBJ *)p_rclBkGround;
                              if ( !((unsigned int (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, struct _RECTL *))v103)(
                                      v71 + 24,
                                      &pstro,
                                      v205,
                                      &v229,
                                      v97) )
                                v17 = 0;
                              v108 = (_DWORD *)(v71 + 92);
                              v109 = *(_QWORD *)(*(_QWORD *)v14 + 48LL);
                              v110 = *(_DWORD *)(v109 + 40);
                              if ( (v110 & 0x80u) == 0
                                || (v108 = (_DWORD *)(v71 + 92), (v110 & 0x8000) != 0)
                                || (v108 = (_DWORD *)(v71 + 92), *(_DWORD *)(v205 + 92)) )
                              {
LABEL_162:
                                *(_QWORD *)(v71 + 104) = 0LL;
                                v111 = 0LL;
                                v112 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                                if ( v112 )
                                  v111 = *v112;
                                if ( v111 )
                                  *(_QWORD *)(v111 + 304) = 0LL;
LABEL_166:
                                if ( v217 )
                                {
                                  v187 = v207;
                                  v188 = (LONG *)((char *)v217 + 4);
                                  v189 = v229.rclBounds;
                                  ++*v108;
                                  *(RECTL *)v213 = v189;
                                  while ( !ERECTL::bEmpty((ERECTL *)(v188 - 1)) )
                                  {
                                    v192 = *v190;
                                    v193 = v188[1];
                                    if ( (int)v62 > v192 )
                                      v192 = (int)v62;
                                    v229.rclBounds.left = v192;
                                    if ( (int)v42 < v193 )
                                      v193 = v42;
                                    v229.rclBounds.right = v193;
                                    if ( v192 < v193 )
                                    {
                                      v194 = *v188;
                                      v195 = v188[2];
                                      if ( v189.top > *v188 )
                                        v194 = v189.top;
                                      v229.rclBounds.top = v194;
                                      if ( v189.bottom < v195 )
                                        v195 = v189.bottom;
                                      v229.rclBounds.bottom = v195;
                                      if ( v194 < v195 )
                                        TextOutBitBlt(
                                          (struct SURFACE *)v71,
                                          (struct RFONTOBJ *)&v205,
                                          (struct _SURFOBJ *)v62,
                                          v191,
                                          &v229,
                                          p_rclBounds,
                                          &v229.rclBounds,
                                          v197,
                                          v198,
                                          v187,
                                          v82,
                                          v200);
                                    }
                                    v188 += 4;
                                  }
                                  v14 = v223;
                                  v229.rclBounds = v189;
                                }
LABEL_167:
                                if ( (v17 & 4) != 0 )
                                {
                                  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v224);
                                  if ( !v225
                                    || !(unsigned int)ESTROBJ::bExtraRectsToPath(
                                                        (ESTROBJ *)&pstro,
                                                        (struct EPATHOBJ *)&v224)
                                    || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                        &v224,
                                                        v14,
                                                        (struct RFONTOBJ *)&v205,
                                                        (struct PDEVOBJ *)&v209,
                                                        (struct SURFACE *)v71,
                                                        &v229,
                                                        v207,
                                                        v82,
                                                        (unsigned int)v198,
                                                        v199) )
                                  {
                                    v17 = 0;
                                  }
                                  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v224);
                                }
                                goto LABEL_168;
                              }
                              v184 = *(_QWORD *)(SGDGetSessionState(v109) + 32);
                              v213[0] = *(unsigned __int16 **)(v184 + 23400);
                              GreAcquireSemaphore(v213[0]);
                              for ( k = *(_QWORD *)(v184 + 23392); k; k = *(_QWORD *)(k + 32) )
                              {
                                if ( *(_QWORD *)k == *(_QWORD *)(*(_QWORD *)(v205 + 128) + 80LL) )
                                {
                                  v186 = *(_DWORD *)(k + 12);
                                  if ( v186 )
                                    *(_DWORD *)(k + 12) = v186 - 1;
                                }
                              }
                              SEMOBJ::vUnlock((SEMOBJ *)v213);
LABEL_419:
                              v108 = (_DWORD *)(v71 + 92);
                              goto LABEL_162;
                            }
                            PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                            if ( v220
                              && (unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&ppo) )
                            {
                              if ( (v241 & 0x1400) != 0 )
                              {
                                if ( (unsigned int)bProxyDrvTextOut(
                                                     v14,
                                                     (struct SURFACE *)v71,
                                                     &pstro,
                                                     &v229,
                                                     v97,
                                                     p_rclBkGround,
                                                     v207,
                                                     v201,
                                                     v82,
                                                     (struct RFONTOBJ *)&v205,
                                                     0LL,
                                                     0,
                                                     &rclBkGround) )
                                {
LABEL_399:
                                  if ( (unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                       &ppo,
                                                       v14,
                                                       (struct RFONTOBJ *)&v205,
                                                       (struct PDEVOBJ *)&v209,
                                                       (struct SURFACE *)v71,
                                                       &v229,
                                                       v207,
                                                       v82,
                                                       (unsigned int)v198,
                                                       v199) )
                                    goto LABEL_391;
                                }
                              }
                              else
                              {
                                v199 = 3341;
                                v198 = v82;
                                v197 = (struct _POINTL *)v201;
                                p_rclBounds = (struct _XLATEOBJ *)p_rclBkGround;
                                if ( ((unsigned int (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, struct _RECTL *))v103)(
                                       v71 + 24,
                                       &pstro,
                                       v205,
                                       &v229,
                                       v97) )
                                {
                                  goto LABEL_399;
                                }
                              }
                            }
                            v17 = 0;
LABEL_391:
                            v17 &= ~4u;
LABEL_392:
                            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                            goto LABEL_419;
                          }
                        }
                      }
                    }
LABEL_168:
                    v64 = 1;
                    goto LABEL_169;
                  }
                  v17 = 0;
                  if ( (v20 & 4) == 0 )
                    v17 = v63;
                  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, v14);
                  if ( !v220 )
                  {
LABEL_317:
                    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
                    goto LABEL_168;
                  }
                  if ( ((v17 & 8) == 0 || (unsigned int)bAddRectToPath((struct EPATHOBJ *)&ppo, &v227))
                    && ((v17 & 2) == 0 || (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v161, &v243, v163))
                    && ((v17 & 0x10) == 0
                     || (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v161, (struct _POINTL *)&v250, v163)) )
                  {
                    if ( (v17 & 1) == 0
                      || p_rclBkGround && !(unsigned int)bAddRectToPath((struct EPATHOBJ *)&ppo, p_rclBkGround) )
                    {
                      goto LABEL_314;
                    }
                    if ( (v241 & 0x1400) != 0 )
                      v164 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&ppo, v162);
                    else
                      v164 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&ppo);
                    if ( v164 )
                    {
                      if ( v60 )
                      {
                        while ( !ERECTL::bEmpty((ERECTL *)v60) )
                        {
                          if ( !(unsigned int)bAddRectToPath((struct EPATHOBJ *)&ppo, v60) )
                            goto LABEL_316;
                          ++v60;
                        }
                      }
LABEL_314:
                      if ( (v17 & 4) == 0
                        || (unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&ppo) )
                      {
                        goto LABEL_317;
                      }
                    }
                  }
LABEL_316:
                  v17 = 0;
                  goto LABEL_317;
                }
                v17 |= 0x10u;
              }
              p_rclBkGround = (struct _RECTL *)v207;
              goto LABEL_64;
            }
          }
          rclBkGround = v227;
        }
      }
      v42 = (unsigned int)rclBkGround.left;
      v44 = rclBkGround.top;
      v43 = rclBkGround.right;
      v45 = rclBkGround.bottom;
      goto LABEL_33;
    }
  }
  EngSetLastError(0x57u);
  return 0LL;
}
