/*
 * XREFs of GreAlphaBlend @ 0x140010F88
 * Callers:
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     BltIcon @ 0x140079FFC (BltIcon.c)
 *     NtGdiAlphaBlend @ 0x14018B4B0 (NtGdiAlphaBlend.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402E8A4C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x14000A568 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x14000D8A0 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     EngCopyBits @ 0x14000DA80 (EngCopyBits.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x140010370 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x140013568 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x140015954 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z @ 0x14001A56C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001D0CC (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14001F7E4 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140059708 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ??1MAPIDCOBJ@@QEAA@XZ @ 0x1400C3704 (--1MAPIDCOBJ@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400CE708 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x1400D2138 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x1400D22EC (--$GrepAcquireLockValidate@$0N@@@YAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DFA4C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x14010CBB0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     EngPlgBlt @ 0x140141960 (EngPlgBlt.c)
 *     ?vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z @ 0x140147E70 (-vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?LongLongToLong@@YAJ_JPEAJ@Z @ 0x14016E6A4 (-LongLongToLong@@YAJ_JPEAJ@Z.c)
 *     ?vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z @ 0x140178E70 (-vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x1401A4910 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     ??0EPOINTFIX@@QEAA@XZ @ 0x1401A4920 (--0EPOINTFIX@@QEAA@XZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x140213F34 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     ?vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z @ 0x140313080 (-vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z @ 0x1403132A0 (-vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z @ 0x140313320 (-vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z @ 0x1403133B0 (-vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAlphaBlend(
        HDC a1,
        int a2,
        unsigned int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v13; // r15d
  float v14; // xmm4_4
  __int64 v15; // r14
  LONG left; // edi
  int top; // r9d
  LONG right; // edx
  int bottom; // r8d
  int v21; // eax
  LONG v22; // edi
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r14
  int v26; // edi
  int v27; // r9d
  int v28; // eax
  int v29; // eax
  Gre::Base *v30; // rcx
  struct SURFACE *v31; // r13
  __int64 v32; // r12
  __int64 v33; // rdi
  struct Gre::Base::SESSION_GLOBALS *v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rax
  int v37; // r11d
  __int64 v38; // rcx
  __int64 v39; // r13
  ULONG v40; // ecx
  __int32 v42; // eax
  __int32 v43; // eax
  FIX x; // r9d
  FIX v45; // edi
  FIX v46; // r11d
  int v47; // r8d
  FIX y; // r10d
  int v49; // r9d
  int v50; // edi
  __int64 v51; // rcx
  int v52; // edi
  __int64 v53; // rax
  int v54; // r9d
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // r11
  int v58; // r10d
  LONG v59; // r9d
  LONG v60; // edx
  LONG v61; // r8d
  struct Gre::Base::SESSION_GLOBALS *v62; // r13
  XLATEOBJ *v63; // rax
  int v64; // r14d
  int v65; // eax
  __int64 v66; // rsi
  __int64 v67; // r14
  _DWORD *v68; // rax
  __int64 v69; // r15
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  int v72; // edx
  __int64 v73; // rax
  unsigned int v74; // eax
  unsigned int i; // r8d
  __int64 v76; // rax
  int v77; // ecx
  __int64 v78; // r9
  Gre::Base *v79; // rcx
  XLATEOBJ *v80; // rax
  __int64 v81; // rcx
  int v82; // r8d
  int v83; // edx
  struct Gre::Base::SESSION_GLOBALS *v84; // r13
  unsigned int v85; // eax
  unsigned int j; // r8d
  __int64 v87; // rax
  int v88; // ecx
  __int64 v89; // r9
  XLATEOBJ *v90; // r13
  XLATEOBJ *v91; // rsi
  int v92; // eax
  Gre::Base *v93; // rcx
  __int64 v94; // rax
  int v95; // edx
  __int64 v96; // rax
  struct Gre::Base::SESSION_GLOBALS *v97; // r11
  unsigned int v98; // eax
  __int64 v99; // rax
  int v100; // ecx
  __int64 v101; // r8
  struct Gre::Base::SESSION_GLOBALS *v102; // r14
  int v103; // eax
  XLATEOBJ *v104; // rcx
  XLATEOBJ *v105; // rax
  __int64 v106; // rcx
  int v107; // r8d
  int v108; // edx
  unsigned int v109; // esi
  struct Gre::Base::SESSION_GLOBALS *v110; // r11
  unsigned int v111; // eax
  unsigned int v112; // r9d
  __int64 v113; // rax
  int v114; // ecx
  __int64 v115; // rdx
  struct Gre::Base::SESSION_GLOBALS *v116; // rsi
  XLATEOBJ *v117; // rdi
  int v118; // ecx
  struct REGION *v119; // rdx
  struct ECLIPOBJ *v120; // rdx
  __int64 v121; // r12
  stretch *v122; // r15
  __int64 v123; // rdi
  BOOL (__stdcall *v124)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  char *v125; // rdx
  Gre::Base *v126; // rcx
  int v127; // eax
  int v128; // eax
  int v129; // eax
  __int64 v130; // rdi
  int v131; // eax
  int v132; // eax
  __int64 v133; // rax
  struct Gre::Base::SESSION_GLOBALS *v134; // rax
  __int64 v135; // rax
  struct Gre::Base::SESSION_GLOBALS *v136; // rax
  struct Gre::Base::SESSION_GLOBALS *v137; // rax
  struct Gre::Base::SESSION_GLOBALS *v138; // rax
  __int64 v139; // rax
  int v140; // r8d
  __int64 v141; // rax
  int v142; // r9d
  char v143; // si
  __int64 *v144; // rax
  bool v145; // zf
  BOOL (__stdcall *v146)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v147; // edx
  ULONG v148; // ecx
  __int64 v149; // rax
  int v150; // ecx
  __int64 v151; // rax
  int v152; // ecx
  _DWORD *v153; // rdx
  int v154; // r11d
  int v155; // r10d
  struct Gre::Base::SESSION_GLOBALS *v156; // rcx
  __int64 v157; // rax
  int v158; // ecx
  __int64 v159; // rax
  int v160; // ecx
  _DWORD *v161; // rdx
  int v162; // r11d
  int v163; // r10d
  __int64 v164; // rax
  int v165; // ecx
  __int64 v166; // rax
  int v167; // ecx
  struct Gre::Base::SESSION_GLOBALS *v168; // rdx
  int v169; // r10d
  int v170; // r9d
  __int64 v171; // rax
  int v172; // ecx
  __int64 v173; // rax
  int v174; // ecx
  struct Gre::Base::SESSION_GLOBALS *v175; // rdx
  int v176; // r10d
  int v177; // r8d
  struct Gre::Base::SESSION_GLOBALS *v178; // rax
  struct Gre::Base::SESSION_GLOBALS *v179; // rax
  struct Gre::Base::SESSION_GLOBALS *v180; // rax
  struct Gre::Base::SESSION_GLOBALS *v181; // rax
  unsigned int v182; // eax
  unsigned int v183; // eax
  unsigned int v184; // eax
  unsigned int v185; // eax
  __int64 v186; // rax
  __int64 v187; // rax
  _QWORD *v188; // r15
  int v189; // r9d
  __int64 *v190; // rax
  __int64 v191; // r11
  __int64 v192; // r9
  int v193; // r9d
  int v194; // r10d
  int v195; // r11d
  int v196; // r10d
  int v197; // r9d
  LONG v198; // r11d
  int *v199; // rcx
  XLATEOBJ *v200; // rdx
  int v201; // r12d
  _DWORD *v202; // r8
  unsigned __int64 v203; // rdx
  POINTFIX *v204; // r12
  __int64 v205; // r15
  SURFOBJ *v206; // rdx
  SURFOBJ *v207; // rcx
  __int64 v208; // rsi
  int inited; // eax
  struct BLTINFO *v210; // r15
  XLATEOBJ *v211; // r8
  int v212; // eax
  LONG v213; // ecx
  XLATEOBJ *v214; // r9
  int v215; // ecx
  LONG cEntries; // r10d
  SURFOBJ *v217; // rcx
  ULONG v218; // ecx
  int v219; // r15d
  POINTL *pptlBrushOrg; // [rsp+30h] [rbp-D0h]
  POINTFIX *pptfx; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  POINTL *pptl; // [rsp+48h] [rbp-B8h]
  int v225[2]; // [rsp+70h] [rbp-90h]
  XLATEOBJ *v226; // [rsp+70h] [rbp-90h]
  int v227[2]; // [rsp+70h] [rbp-90h]
  int v228[2]; // [rsp+70h] [rbp-90h]
  LONG v229; // [rsp+70h] [rbp-90h]
  unsigned int v230; // [rsp+78h] [rbp-88h]
  int v231; // [rsp+78h] [rbp-88h]
  int v232; // [rsp+78h] [rbp-88h]
  int v233; // [rsp+78h] [rbp-88h]
  int v234; // [rsp+78h] [rbp-88h]
  int DIB; // [rsp+78h] [rbp-88h]
  int v236; // [rsp+80h] [rbp-80h]
  unsigned int v237; // [rsp+80h] [rbp-80h]
  int v238; // [rsp+80h] [rbp-80h]
  unsigned int v239; // [rsp+80h] [rbp-80h]
  int k; // [rsp+80h] [rbp-80h]
  int v241; // [rsp+80h] [rbp-80h]
  int m; // [rsp+80h] [rbp-80h]
  unsigned int v243; // [rsp+80h] [rbp-80h]
  int v244[2]; // [rsp+80h] [rbp-80h]
  stretch *v245; // [rsp+80h] [rbp-80h]
  int v246[2]; // [rsp+80h] [rbp-80h]
  int v247; // [rsp+8Ch] [rbp-74h]
  int v248; // [rsp+8Ch] [rbp-74h]
  int v249; // [rsp+8Ch] [rbp-74h]
  int v250; // [rsp+8Ch] [rbp-74h]
  int pulXlate; // [rsp+8Ch] [rbp-74h]
  int v252; // [rsp+8Ch] [rbp-74h]
  struct Gre::Base::SESSION_GLOBALS *v253; // [rsp+90h] [rbp-70h] BYREF
  int v254; // [rsp+98h] [rbp-68h]
  int v255[2]; // [rsp+A0h] [rbp-60h]
  int v256[2]; // [rsp+A8h] [rbp-58h]
  struct Gre::Base::SESSION_GLOBALS *v257; // [rsp+B0h] [rbp-50h] BYREF
  int v258[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v259; // [rsp+C0h] [rbp-40h] BYREF
  POINTFIX v260; // [rsp+C4h] [rbp-3Ch]
  _DWORD *XlateObject; // [rsp+D0h] [rbp-30h] BYREF
  XLATEOBJ *pxlo; // [rsp+D8h] [rbp-28h]
  __int64 v263; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v264; // [rsp+E8h] [rbp-18h]
  _QWORD *v265; // [rsp+F0h] [rbp-10h]
  POINTL pptlSrc; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v267; // [rsp+100h] [rbp+0h]
  stretch *v268; // [rsp+108h] [rbp+8h] BYREF
  char v269; // [rsp+110h] [rbp+10h]
  int v270; // [rsp+114h] [rbp+14h]
  struct SURFACE *v271; // [rsp+118h] [rbp+18h]
  __int64 v272; // [rsp+120h] [rbp+20h] BYREF
  char v273; // [rsp+128h] [rbp+28h]
  int v274; // [rsp+12Ch] [rbp+2Ch]
  __int64 v275; // [rsp+130h] [rbp+30h] BYREF
  char v276; // [rsp+138h] [rbp+38h]
  int v277; // [rsp+13Ch] [rbp+3Ch]
  __int64 v278; // [rsp+140h] [rbp+40h] BYREF
  XLATEOBJ *v279; // [rsp+148h] [rbp+48h]
  __int64 v280; // [rsp+150h] [rbp+50h] BYREF
  __m128i v281; // [rsp+160h] [rbp+60h] BYREF
  HSEMAPHORE v282; // [rsp+170h] [rbp+70h] BYREF
  __int64 v283; // [rsp+178h] [rbp+78h] BYREF
  HSEMAPHORE v284; // [rsp+180h] [rbp+80h] BYREF
  __int64 v285; // [rsp+188h] [rbp+88h] BYREF
  HSEMAPHORE v286; // [rsp+190h] [rbp+90h] BYREF
  __int64 v287; // [rsp+198h] [rbp+98h] BYREF
  __int64 v288; // [rsp+1A0h] [rbp+A0h]
  HSEMAPHORE v289; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v290; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v291; // [rsp+1B8h] [rbp+B8h] BYREF
  _DWORD v292[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v293; // [rsp+1D0h] [rbp+D0h]
  __int64 v294; // [rsp+1D8h] [rbp+D8h]
  _DWORD v295[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v296; // [rsp+1F0h] [rbp+F0h]
  __int64 v297; // [rsp+1F8h] [rbp+F8h]
  _DWORD v298[4]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v299; // [rsp+210h] [rbp+110h]
  __int64 v300; // [rsp+218h] [rbp+118h]
  _DWORD v301[2]; // [rsp+220h] [rbp+120h] BYREF
  XLATEOBJ *v302; // [rsp+228h] [rbp+128h]
  struct Gre::Base::SESSION_GLOBALS *v303; // [rsp+230h] [rbp+130h]
  struct Gre::Base::SESSION_GLOBALS *v304; // [rsp+238h] [rbp+138h]
  _QWORD v305[3]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v306; // [rsp+258h] [rbp+158h]
  RECTL v307; // [rsp+2B0h] [rbp+1B0h] BYREF
  _QWORD v308[14]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v309[128]; // [rsp+330h] [rbp+230h] BYREF
  _BYTE v310[112]; // [rsp+3B0h] [rbp+2B0h] BYREF
  int v311; // [rsp+420h] [rbp+320h]
  RECTL prclDest; // [rsp+510h] [rbp+410h] BYREF
  __m128i v313; // [rsp+520h] [rbp+420h] BYREF
  __int64 v314; // [rsp+530h] [rbp+430h] BYREF
  int v315; // [rsp+538h] [rbp+438h]
  ULONG v316; // [rsp+53Ch] [rbp+43Ch]
  _BYTE v317[4]; // [rsp+540h] [rbp+440h] BYREF
  int v318; // [rsp+544h] [rbp+444h]
  int v319; // [rsp+548h] [rbp+448h]
  int v320; // [rsp+54Ch] [rbp+44Ch]
  int v321; // [rsp+550h] [rbp+450h]
  struct _POINTFIX v322; // [rsp+5E0h] [rbp+4E0h] BYREF
  FIX v323; // [rsp+5E8h] [rbp+4E8h]
  int v324; // [rsp+5ECh] [rbp+4ECh]
  int v325; // [rsp+5F0h] [rbp+4F0h]
  FIX v326; // [rsp+5F4h] [rbp+4F4h]
  FIX v327; // [rsp+5F8h] [rbp+4F8h]
  int v328; // [rsp+5FCh] [rbp+4FCh]
  struct _POINTL v329; // [rsp+600h] [rbp+500h] BYREF
  int v330; // [rsp+608h] [rbp+508h]
  unsigned int v331; // [rsp+60Ch] [rbp+50Ch]
  int v332; // [rsp+610h] [rbp+510h]
  int v333; // [rsp+614h] [rbp+514h]
  POINTFIX v334; // [rsp+618h] [rbp+518h] BYREF
  POINTFIX v335; // [rsp+620h] [rbp+520h]
  POINTFIX v336; // [rsp+628h] [rbp+528h]
  __int64 v337; // [rsp+630h] [rbp+530h] BYREF

  v254 = a7;
  v13 = 1;
  v258[0] = a3;
  v255[0] = a8;
  v259 = a4;
  v256[0] = a10;
  if ( (_BYTE)a11 || (a11 & 0xFE000000) != 0 )
    goto LABEL_475;
  if ( !a9 || !a10 )
    return 1LL;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
LABEL_475:
    EngSetLastError(0x57u);
    return 0LL;
  }
  LODWORD(v257) = BYTE1(a11);
  v260.x = BYTE1(a11) & 0x80;
  BYTE1(a11) &= ~0x80u;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v308, a1);
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v309, a6, (struct XDCOBJ *)v308);
  if ( !v308[0] || (*(_DWORD *)(v308[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_59;
  }
  v267 = v308[2];
  if ( !OPTAPIDCOBJ::bValid((OPTAPIDCOBJ *)v309) )
  {
    v13 = 0;
    EngSetLastError(0x57u);
    goto LABEL_57;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v305, (struct OPTAPIDCOBJ *)v309);
  bSpDwmValidateSurface((struct XDCOBJ *)v305, v254, v255[0], a9, a10);
  bSpDwmValidateSurface((struct XDCOBJ *)v308, a2, a3, v259, a5);
  DC::QuickInitXform(v308[0], &v278, 516LL);
  DC::QuickInitXform(v305[0], &v291, 516LL);
  v14 = 0.0;
  v15 = v305[0];
  if ( (*(_BYTE *)(v291 + 32) & 1) == 0
    || (*(_BYTE *)(*(_QWORD *)(v305[0] + 976LL) + 108LL) & 1) == 0
    && (*(float *)v291 < 0.0 || *(float *)(v291 + 12) < 0.0) )
  {
    v13 = 0;
    EngSetLastError(0x57u);
    goto LABEL_56;
  }
  left = v254;
  top = v255[0];
  prclDest.left = v254;
  right = a9 + v254;
  prclDest.top = v255[0];
  bottom = v256[0] + v255[0];
  prclDest.right = a9 + v254;
  prclDest.bottom = v256[0] + v255[0];
  if ( (*(_BYTE *)(v291 + 32) & 0x43) == 0x43
    || (v21 = bCvtPts1(v291, &prclDest, 2LL, (unsigned int)v255[0]),
        bottom = prclDest.bottom,
        right = prclDest.right,
        top = prclDest.top,
        left = prclDest.left,
        v21) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v15 + 976) + 108LL) & 1) != 0 )
    {
      ++left;
      ++right;
      prclDest.left = left;
      prclDest.right = right;
    }
  }
  if ( left > right )
  {
    prclDest.left = right;
    prclDest.right = left;
  }
  if ( top > bottom )
  {
    prclDest.top = bottom;
    prclDest.bottom = top;
  }
  v22 = (*(_BYTE *)(v278 + 32) & 1) == 0
     || (*(_BYTE *)(*(_QWORD *)(v308[0] + 976LL) + 108LL) & 1) == 0
     && (v14 > *(float *)v278 || v14 > *(float *)(v278 + 12));
  v23 = a2 + v259;
  v24 = a3 + a5;
  pptlSrc.x = v22;
  if ( v22 )
  {
    v330 = a2 + v259;
    v333 = a3 + a5;
    v329.x = a2;
    v329.y = a3;
    v331 = a3;
    v332 = a2;
    EXFORMOBJ::bXform((EXFORMOBJ *)&v278, &v329, &v322, 3uLL);
    x = v322.x;
    v45 = v323;
    if ( (*(_BYTE *)(v278 + 32) & 1) != 0 )
    {
      if ( v322.x > v323 )
      {
        x = v322.x + 16;
        v45 = v323 + 16;
        v325 += 16;
        v322.x += 16;
        v323 += 16;
      }
      y = v322.y;
      v46 = v326;
      v47 = v324;
      if ( v322.y > v326 )
      {
        y = v322.y + 16;
        v47 = v324 + 16;
        v46 = v326 + 16;
        v322.y += 16;
        v326 += 16;
        v324 += 16;
      }
    }
    else
    {
      v46 = v326;
      v47 = v324;
      y = v322.y;
    }
    v327 = v45 + v325 - x;
    v328 = v46 + v47 - y;
    v49 = (v45 > x) ^ (v45 <= v327);
    v50 = (v47 > y) ^ (v47 <= v328);
    if ( *(&v322.x + 2 * v49) > *(&v322.x + 2 * (v49 ^ 3LL)) )
      v49 ^= 3u;
    if ( *(&v322.y + 2 * v50) > *(&v322.y + 2 * (v50 ^ 3LL)) )
      v50 ^= 3u;
    v51 = v50;
    v52 = *(&v322.x + 2 * v49);
    v53 = v49 ^ 3LL;
    v54 = *(&v322.y + 2 * v51);
    v26 = (v52 + 15) >> 4;
    v313.m128i_i32[0] = v26;
    v27 = (v54 + 15) >> 4;
    v23 = (*(&v322.x + 2 * v53) + 15) >> 4;
    v24 = (*(&v322.y + 2 * (v51 ^ 3)) + 15) >> 4;
    v313.m128i_i32[1] = v27;
    v313.m128i_i64[1] = __PAIR64__(v24, v23);
  }
  else
  {
    v25 = v308[0];
    v26 = a2;
    v313.m128i_i64[0] = __PAIR64__(a3, a2);
    v27 = a3;
    v313.m128i_i32[2] = a2 + v259;
    v313.m128i_i32[3] = a3 + a5;
    if ( (*(_BYTE *)(v278 + 32) & 0x43) == 0x43
      || (v28 = bCvtPts1(v278, &v313, 2LL, a3),
          v24 = v313.m128i_i32[3],
          v23 = v313.m128i_i32[2],
          v27 = v313.m128i_i32[1],
          v26 = v313.m128i_i32[0],
          v28) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v25 + 976) + 108LL) & 1) != 0 )
      {
        ++v26;
        ++v23;
        v313.m128i_i32[0] = v26;
        v313.m128i_i32[2] = v23;
      }
    }
    if ( v26 > v23 )
    {
      v43 = v26;
      v313.m128i_i32[0] = v23;
      v26 = v23;
      v313.m128i_i32[2] = v43;
      v23 = v43;
    }
    if ( v27 > v24 )
    {
      v42 = v27;
      v313.m128i_i32[1] = v24;
      v27 = v24;
      v313.m128i_i32[3] = v42;
      v24 = v42;
    }
  }
  if ( v26 == v23 || (v29 = 0, v27 == v24) )
    v29 = 1;
  if ( v29 )
    goto LABEL_56;
  if ( (*(_DWORD *)(v308[0] + 36LL) & 0xE0) != 0 )
    XDCOBJ::vAccumulate((XDCOBJ *)v308, (struct ERECTL *)&v313);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v310);
  if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v310, (struct XDCOBJ *)v308, (struct XDCOBJ *)v305) )
  {
    v219 = XDCOBJ::bFullScreen((XDCOBJ *)v305);
    v13 = XDCOBJ::bFullScreen((XDCOBJ *)v308) | v219;
    goto LABEL_55;
  }
  v31 = *(struct SURFACE **)(v308[0] + 496LL);
  v271 = v31;
  if ( !v31
    || (v32 = *((_QWORD *)v31 + 16),
        v33 = *(_QWORD *)(v308[0] + 88LL),
        v288 = v32,
        v264 = v33,
        !*(_QWORD *)(v305[0] + 496LL)) )
  {
LABEL_55:
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v310);
LABEL_56:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v305);
LABEL_57:
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v309);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v308);
    return v13;
  }
  v34 = Gre::Base::Globals(v30);
  v35 = *(_QWORD *)(v305[0] + 496LL);
  if ( v35 )
  {
    v36 = v306;
    if ( !v306 )
      goto LABEL_49;
  }
  else
  {
    v36 = *((_QWORD *)v34 + 533);
  }
  v35 = v36;
  if ( !v36 )
    goto LABEL_55;
LABEL_49:
  if ( (v311 & 0x400000) == 0 || !(unsigned int)DestSurfaceAccessCheck(v31) )
  {
    v40 = 6;
    goto LABEL_54;
  }
  if ( (a11 & 0x1000000) != 0 && !(unsigned int)bIsSourceBGRA((struct SURFACE *)v35) )
  {
    EngSetLastError(0x57u);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v310);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v305);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v309);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v308);
    return 0LL;
  }
  v37 = _mm_cvtsi128_si32(v313);
  v281 = v313;
  v38 = *(_DWORD *)(v308[0] + 40LL) & 1LL;
  v39 = *(int *)(v308[0] + 8 * v38 + 1016);
  if ( (unsigned __int64)(v39 + v37 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_53;
  if ( (unsigned __int64)(v313.m128i_i32[2] + v39 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_53;
  v55 = *(int *)(v308[0] + 8 * v38 + 1020);
  if ( (unsigned __int64)(v55 + v313.m128i_i32[1] + 0x80000000LL) > 0xFFFFFFFF
    || (unsigned __int64)(v55 + v313.m128i_i32[3] + 0x80000000LL) > 0xFFFFFFFF
    || (v313.m128i_i32[0] = v39 + v37,
        v313.m128i_i32[2] += *(_DWORD *)(v308[0] + 8 * v38 + 1016),
        v313.m128i_i32[1] += *(_DWORD *)(v308[0] + 8 * v38 + 1020),
        v313.m128i_i32[3] += *(_DWORD *)(v308[0] + 8 * v38 + 1020),
        v56 = *(_DWORD *)(v305[0] + 40LL) & 1LL,
        v247 = *(_DWORD *)(v305[0] + 8 * v56 + 1016),
        (unsigned __int64)(prclDest.left + (__int64)v247 + 0x80000000LL) > 0xFFFFFFFF)
    || (unsigned __int64)(v247 + (__int64)prclDest.right + 0x80000000LL) > 0xFFFFFFFF
    || (v57 = *(int *)(v305[0] + 8 * v56 + 1020), (unsigned __int64)(v57 + prclDest.top + 0x80000000LL) > 0xFFFFFFFF)
    || (unsigned __int64)(v57 + prclDest.bottom + 0x80000000LL) > 0xFFFFFFFF )
  {
LABEL_53:
    v40 = 534;
LABEL_54:
    EngSetLastError(v40);
    v13 = 0;
    goto LABEL_55;
  }
  v58 = v247 + prclDest.left;
  prclDest.left += v247;
  v59 = *(_DWORD *)(v305[0] + 8 * v56 + 1016) + prclDest.right;
  prclDest.right = v59;
  v60 = *(_DWORD *)(v305[0] + 8 * v56 + 1020) + prclDest.top;
  prclDest.top = v60;
  v61 = *(_DWORD *)(v305[0] + 8 * v56 + 1020) + prclDest.bottom;
  v62 = (struct Gre::Base::SESSION_GLOBALS *)v35;
  prclDest.bottom = v61;
  v63 = *(XLATEOBJ **)(v35 + 48);
  v279 = v63;
  v253 = (struct Gre::Base::SESSION_GLOBALS *)v35;
  if ( *(_WORD *)(v35 + 100) == 1
    && (v253 = (struct Gre::Base::SESSION_GLOBALS *)v35, v63)
    && ((__int64)v63[1].pulXlate & 0x20000) != 0 )
  {
    v215 = *(_DWORD *)&v63[107].iSrcType;
    if ( v58 < v215
      || (cEntries = v63[107].cEntries, v60 < cEntries)
      || v59 > *(_DWORD *)(v35 + 56) + v215
      || (v252 = 0, v61 > cEntries + *(_DWORD *)(v35 + 60)) )
    {
      v252 = 1;
    }
    v253 = (struct Gre::Base::SESSION_GLOBALS *)v35;
    v64 = v252;
  }
  else if ( v58 < 0 || v60 < 0 || v59 > *(_DWORD *)(v35 + 56) || (v64 = 0, v61 > *((_DWORD *)v62 + 15)) )
  {
    v64 = 1;
  }
  if ( v62 == v271
    && (v307 = prclDest, ERECTL::operator*=(&v307, &v313), !(unsigned int)ERECTL::bEmpty((ERECTL *)&v307))
    || v64 )
  {
    v40 = 87;
    goto LABEL_54;
  }
  v65 = 1;
  if ( (a11 & 0x1000000) == 0 && BYTE2(a11) == 0xFF && ((unsigned __int8)v257 & 1) == 0 )
  {
    v140 = v258[0];
    v141 = *(_QWORD *)(v308[0] + 976LL);
    v142 = v259;
    v143 = *(_BYTE *)(v141 + 215);
    *(_BYTE *)(v141 + 215) = 3;
    v13 = GrepStretchBlt(
            (struct XDCOBJ *)v308,
            a2,
            v140,
            v142,
            a5,
            (struct OPTAPIDCOBJ *)v309,
            v254,
            v255[0],
            a9,
            v256[0],
            0xCC0020u,
            0xFFFFFFFF,
            0);
    v65 = 0;
    *(_BYTE *)(*(_QWORD *)(v308[0] + 976LL) + 215LL) = v143;
  }
  if ( (v65 & v13) == 0 )
    goto LABEL_55;
  v66 = *((_QWORD *)v62 + 16);
  v263 = 0LL;
  v67 = *(_QWORD *)(v305[0] + 88LL);
  v68 = *(_DWORD **)(v305[0] + 976LL);
  v69 = *(_QWORD *)(v267 + 3776);
  v254 = v68[45];
  v70 = (unsigned int)v68[44];
  v248 = v68[46];
  v256[0] = v68[44];
  if ( !v66 )
  {
    if ( v32 )
    {
      if ( (*(_DWORD *)(v32 + 24) & 0x800) == 0 )
        goto LABEL_379;
      v70 = *(_QWORD *)(v33 + 80);
      v62 = v253;
      *(_QWORD *)v225 = v253;
      if ( v70 )
      {
        *(_QWORD *)v225 = v253;
        if ( v70 != *(_QWORD *)(v33 + 72) )
          goto LABEL_379;
      }
    }
    else
    {
      *(_QWORD *)v225 = v62;
    }
LABEL_243:
    v137 = Gre::Base::Globals((Gre::Base *)v70);
LABEL_244:
    XlateObject = (_DWORD *)((char *)v137 + 4552);
    goto LABEL_116;
  }
  if ( v32 )
    goto LABEL_96;
  if ( (*(_DWORD *)(v66 + 24) & 0x800) != 0 )
  {
    v139 = *(_QWORD *)(v33 + 80);
    if ( !v139 || (v62 = v253, v139 == *(_QWORD *)(v33 + 72)) )
    {
      v137 = Gre::Base::Globals((Gre::Base *)v70);
      v62 = v253;
      *(_QWORD *)v225 = v253;
      goto LABEL_244;
    }
  }
LABEL_379:
  v253 = v62;
  if ( !v66 )
    goto LABEL_112;
LABEL_96:
  *(_QWORD *)v225 = v62;
  if ( !v32 )
  {
    v62 = v253;
    goto LABEL_102;
  }
  v71 = *(_QWORD *)(v66 + 120);
  if ( v71 == v66 )
    v72 = *(_DWORD *)(v66 + 32);
  else
    v72 = *(_DWORD *)(v71 + 32);
  v73 = *(_QWORD *)(v32 + 120);
  if ( v73 == v32 )
    v70 = *(unsigned int *)(v32 + 32);
  else
    v70 = *(unsigned int *)(v73 + 32);
  if ( v72 == (_DWORD)v70 )
    goto LABEL_243;
LABEL_102:
  *(_QWORD *)v225 = v62;
  if ( !v32 )
  {
LABEL_112:
    *(_QWORD *)v225 = v62;
    goto LABEL_113;
  }
  v230 = *(_DWORD *)(v66 + 56);
  v290 = v67;
  v253 = Gre::Base::Globals((Gre::Base *)v70);
  v289 = (HSEMAPHORE)(*(_QWORD *)v253 + 312LL);
  GreAcquireSemaphoreInternal(v289);
  GrepAcquireLockValidate<13>();
  v74 = 0;
  v236 = 0;
  for ( i = 1; ; v236 += i )
  {
    if ( v74 >= 8 )
    {
      XlateObject = 0LL;
      v237 = 0;
      goto LABEL_110;
    }
    v76 = *(_QWORD *)(v66 + 120);
    if ( v76 == v66 )
      v77 = *(_DWORD *)(v66 + 32);
    else
      v77 = *(_DWORD *)(v76 + 32);
    v78 = 32LL * v230;
    if ( *(_DWORD *)((char *)v253 + v78 + 4304) != v77 )
      goto LABEL_108;
    v149 = *(_QWORD *)(v32 + 120);
    v150 = v149 == v32 ? *(_DWORD *)(v32 + 32) : *(_DWORD *)(v149 + 32);
    if ( *(_DWORD *)((char *)v253 + v78 + 4308) != v150 )
      goto LABEL_108;
    v151 = *(_QWORD *)(v33 + 120);
    v152 = v151 == v33 ? *(_DWORD *)(v33 + 32) : *(_DWORD *)(v151 + 32);
    if ( *(_DWORD *)((char *)v253 + v78 + 4316) != v152 )
      goto LABEL_108;
    v153 = *(_DWORD **)((char *)v253 + v78 + 4296);
    XlateObject = v153;
    v154 = v153[19];
    if ( (v154 & 0x6000) != 0 )
      goto LABEL_108;
    v155 = v153[1];
    if ( (v155 & 4) == 0 && (v153[19] & 0x100) == 0 )
      break;
    if ( (v155 & 4) != 0 && v254 == v153[6] )
    {
      v182 = XEPALOBJ::ulTime((XEPALOBJ *)&v290);
      v156 = v253;
      if ( *(_DWORD *)((char *)v253 + v78 + 4312) == v182 )
        goto LABEL_353;
    }
    else
    {
      v156 = v253;
    }
    if ( (v154 & 0x100) != 0 && v248 == v153[7] && v256[0] == v153[8] )
      goto LABEL_353;
LABEL_108:
    v74 = i + v236;
    v230 = ((_BYTE)v230 + 1) & 7;
  }
  v156 = v253;
LABEL_353:
  _InterlockedAdd((volatile signed __int32 *)((char *)v156 + v78 + 4288), i);
  *(_DWORD *)(v66 + 56) = v230;
  v237 = i;
LABEL_110:
  SEMOBJ<13>::vUnlock(&v289);
  if ( v237 )
    goto LABEL_116;
LABEL_113:
  LODWORD(pptl) = 0;
  LODWORD(prcl) = v254;
  LODWORD(pptfx) = v256[0];
  LODWORD(pptlBrushOrg) = v248;
  XlateObject = CreateXlateObject(0LL, 0, v66, v32, v67, v33, pptlBrushOrg, pptfx, prcl, pptl);
  if ( XlateObject )
  {
    if ( !v66 )
      goto LABEL_115;
    *(_QWORD *)v225 = v62;
    if ( v32 )
    {
      v33 = v264;
      if ( (XlateObject[19] & 0x200) == 0 )
      {
        EXLATEOBJ::vAddToCache((Gre::Base *)&XlateObject, v66, v32, v67, v264);
        *(_QWORD *)v225 = v62;
      }
    }
    else
    {
      *(_QWORD *)v225 = v62;
LABEL_115:
      v33 = v264;
    }
LABEL_116:
    v231 = 1;
  }
  else
  {
    v33 = v264;
    v231 = 0;
  }
  v265 = XlateObject;
  v79 = *(Gre::Base **)(v305[0] + 976LL);
  v256[0] = *((_DWORD *)v79 + 44);
  v249 = *((_DWORD *)v79 + 46);
  if ( !v66 )
  {
    if ( v69 )
    {
      v79 = v62;
      if ( (*(_DWORD *)(v69 + 24) & 0x800) == 0 )
        goto LABEL_384;
      v186 = *(_QWORD *)(v67 + 80);
      if ( v186 )
      {
        if ( v186 != *(_QWORD *)(v67 + 72) )
          goto LABEL_384;
      }
      v91 = (XLATEOBJ *)v62;
    }
    else
    {
      v91 = (XLATEOBJ *)v62;
    }
    v134 = Gre::Base::Globals(v79);
    goto LABEL_235;
  }
  if ( !v69 )
  {
    v79 = v62;
    if ( (*(_DWORD *)(v66 + 24) & 0x800) != 0 )
    {
      v133 = *(_QWORD *)(v67 + 80);
      if ( !v133 || v133 == *(_QWORD *)(v67 + 72) )
      {
LABEL_234:
        v134 = Gre::Base::Globals(v79);
        v91 = *(XLATEOBJ **)v225;
LABEL_235:
        v90 = (XLATEOBJ *)((char *)v134 + 4552);
        *(_QWORD *)v258 = (char *)v134 + 4552;
        goto LABEL_141;
      }
    }
LABEL_384:
    v62 = v79;
    if ( v66 )
      goto LABEL_119;
    v80 = (XLATEOBJ *)v79;
    v226 = (XLATEOBJ *)v79;
    goto LABEL_135;
  }
LABEL_119:
  v80 = (XLATEOBJ *)v62;
  *(_QWORD *)v225 = v62;
  if ( v69 )
  {
    v81 = *(_QWORD *)(v66 + 120);
    v82 = v81 == v66 ? *(_DWORD *)(v66 + 32) : *(_DWORD *)(v81 + 32);
    v79 = *(Gre::Base **)(v69 + 120);
    v83 = v79 == (Gre::Base *)v69 ? *(_DWORD *)(v69 + 32) : *((_DWORD *)v79 + 8);
    if ( v82 == v83 )
      goto LABEL_234;
  }
  v226 = (XLATEOBJ *)v62;
  if ( v69 )
  {
    v255[0] = *(_DWORD *)(v66 + 56);
    v287 = v67;
    v84 = Gre::Base::Globals(v79);
    v282 = (HSEMAPHORE)(*(_QWORD *)v84 + 312LL);
    GreAcquireSemaphoreInternal(v282);
    GrepAcquireLockValidate<13>();
    v85 = 0;
    v238 = 0;
    for ( j = 1; ; v238 += j )
    {
      if ( v85 >= 8 )
      {
        v90 = 0LL;
        *(_QWORD *)v258 = 0LL;
        v239 = 0;
        goto LABEL_133;
      }
      v87 = *(_QWORD *)(v66 + 120);
      v88 = v87 == v66 ? *(_DWORD *)(v66 + 32) : *(_DWORD *)(v87 + 32);
      v89 = 32LL * (unsigned int)v255[0];
      if ( *(_DWORD *)((char *)v84 + v89 + 4304) == v88 )
      {
        v157 = *(_QWORD *)(v69 + 120);
        v158 = v157 == v69 ? *(_DWORD *)(v69 + 32) : *(_DWORD *)(v157 + 32);
        if ( *(_DWORD *)((char *)v84 + v89 + 4308) == v158 )
        {
          v159 = *(_QWORD *)(v67 + 120);
          v160 = v159 == v67 ? *(_DWORD *)(v67 + 32) : *(_DWORD *)(v159 + 32);
          if ( *(_DWORD *)((char *)v84 + v89 + 4316) == v160 )
          {
            v161 = *(_DWORD **)((char *)v84 + v89 + 4296);
            *(_QWORD *)v258 = v161;
            v162 = v161[19];
            if ( (v162 & 0x6000) == 0 )
            {
              v163 = v161[1];
              if ( (v163 & 4) == 0 && (v161[19] & 0x100) == 0 )
                break;
              if ( (v163 & 4) != 0 && v254 == v161[6] )
              {
                v183 = XEPALOBJ::ulTime((XEPALOBJ *)&v287);
                if ( *(_DWORD *)((char *)v84 + v89 + 4312) == v183 )
                  break;
              }
              if ( (v162 & 0x100) != 0 && v249 == v161[7] && v256[0] == v161[8] )
                break;
            }
          }
        }
      }
      v85 = j + v238;
      v255[0] = (LOBYTE(v255[0]) + 1) & 7;
    }
    _InterlockedAdd((volatile signed __int32 *)((char *)v84 + v89 + 4288), j);
    v90 = *(XLATEOBJ **)v258;
    *(_DWORD *)(v66 + 56) = v255[0];
    v239 = j;
LABEL_133:
    SEMOBJ<13>::vUnlock(&v282);
    if ( !v239 )
    {
      v80 = v226;
      goto LABEL_135;
    }
LABEL_140:
    v91 = v226;
    goto LABEL_141;
  }
  v226 = (XLATEOBJ *)v62;
LABEL_135:
  LODWORD(pptl) = 0;
  pxlo = v80;
  LODWORD(prcl) = v254;
  LODWORD(pptfx) = v256[0];
  LODWORD(pptlBrushOrg) = v249;
  *(_QWORD *)v258 = CreateXlateObject(0LL, 0, v66, v69, v67, v67, pptlBrushOrg, pptfx, prcl, pptl);
  v90 = *(XLATEOBJ **)v258;
  if ( *(_QWORD *)v258 )
  {
    if ( !v66 )
      goto LABEL_140;
    v226 = pxlo;
    if ( v69 && (*(_DWORD *)(*(_QWORD *)v258 + 76LL) & 0x200) == 0 )
    {
      EXLATEOBJ::vAddToCache((Gre::Base *)v258, v66, v69, v67, v67);
      goto LABEL_140;
    }
    v91 = pxlo;
LABEL_141:
    v92 = 1;
  }
  else
  {
    v91 = v226;
    v92 = 0;
  }
  v232 = v92 & v231;
  pxlo = v90;
  v93 = *(Gre::Base **)(v305[0] + 976LL);
  v256[0] = *((_DWORD *)v93 + 44);
  v250 = *((_DWORD *)v93 + 46);
  if ( !v32 )
  {
    if ( v69 )
    {
      if ( (*(_DWORD *)(v69 + 24) & 0x800) == 0 )
        goto LABEL_389;
      v93 = *(Gre::Base **)(v33 + 80);
      *(_QWORD *)v227 = v91;
      if ( v93 )
      {
        *(_QWORD *)v227 = v91;
        if ( v93 != *(Gre::Base **)(v33 + 72) )
          goto LABEL_389;
      }
    }
    else
    {
      *(_QWORD *)v227 = v91;
    }
LABEL_250:
    v138 = Gre::Base::Globals(v93);
LABEL_251:
    v102 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v138 + 4552);
    v257 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v138 + 4552);
    goto LABEL_166;
  }
  if ( !v69 )
  {
    if ( (*(_DWORD *)(v32 + 24) & 0x800) != 0 )
    {
      v93 = *(Gre::Base **)(v33 + 80);
      if ( !v93 || v93 == *(Gre::Base **)(v33 + 72) )
      {
        v138 = Gre::Base::Globals(v93);
        *(_QWORD *)v227 = v91;
        goto LABEL_251;
      }
    }
LABEL_389:
    if ( v32 )
      goto LABEL_144;
    goto LABEL_160;
  }
LABEL_144:
  *(_QWORD *)v227 = v91;
  if ( v69 )
  {
    v94 = *(_QWORD *)(v32 + 120);
    v95 = v94 == v32 ? *(_DWORD *)(v32 + 32) : *(_DWORD *)(v94 + 32);
    v96 = *(_QWORD *)(v69 + 120);
    v93 = v96 == v69 ? (Gre::Base *)*(unsigned int *)(v69 + 32) : (Gre::Base *)*(unsigned int *)(v96 + 32);
    if ( v95 == (_DWORD)v93 )
      goto LABEL_250;
  }
  *(_QWORD *)v227 = v91;
  if ( !v69 )
  {
LABEL_160:
    *(_QWORD *)v227 = v91;
    goto LABEL_161;
  }
  v255[0] = *(_DWORD *)(v32 + 56);
  v283 = v33;
  v257 = Gre::Base::Globals(v93);
  v284 = (HSEMAPHORE)(*(_QWORD *)v257 + 312LL);
  GreAcquireSemaphoreInternal(v284);
  GrepAcquireLockValidate<13>();
  v97 = v257;
  v98 = 0;
  for ( k = 0; ; ++k )
  {
    if ( v98 >= 8 )
    {
      v102 = 0LL;
      v257 = 0LL;
      v241 = 0;
      goto LABEL_158;
    }
    v99 = *(_QWORD *)(v32 + 120);
    v100 = v99 == v32 ? *(_DWORD *)(v32 + 32) : *(_DWORD *)(v99 + 32);
    v101 = 32LL * (unsigned int)v255[0];
    if ( *(_DWORD *)((char *)v97 + v101 + 4304) == v100 )
    {
      v164 = *(_QWORD *)(v69 + 120);
      v165 = v164 == v69 ? *(_DWORD *)(v69 + 32) : *(_DWORD *)(v164 + 32);
      if ( *(_DWORD *)((char *)v97 + v101 + 4308) == v165 )
      {
        v166 = *(_QWORD *)(v33 + 120);
        v167 = v166 == v33 ? *(_DWORD *)(v33 + 32) : *(_DWORD *)(v166 + 32);
        if ( *(_DWORD *)((char *)v97 + v101 + 4316) == v167 )
        {
          v168 = *(struct Gre::Base::SESSION_GLOBALS **)((char *)v97 + v101 + 4296);
          v257 = v168;
          v169 = *((_DWORD *)v168 + 19);
          if ( (v169 & 0x6000) == 0 )
          {
            v170 = *((_DWORD *)v168 + 1);
            if ( (v170 & 4) == 0 && (*((_DWORD *)v168 + 19) & 0x100) == 0 )
              break;
            if ( (v170 & 4) != 0 && v254 == *((_DWORD *)v168 + 6) )
            {
              v184 = XEPALOBJ::ulTime((XEPALOBJ *)&v283);
              if ( *(_DWORD *)((char *)v97 + v101 + 4312) == v184 )
                break;
            }
            if ( (v169 & 0x100) != 0 && v250 == *((_DWORD *)v168 + 7) && v256[0] == *((_DWORD *)v168 + 8) )
              break;
          }
        }
      }
    }
    v98 = k + 1;
    v255[0] = (LOBYTE(v255[0]) + 1) & 7;
  }
  _InterlockedAdd((volatile signed __int32 *)((char *)v97 + v101 + 4288), 1u);
  v90 = *(XLATEOBJ **)v258;
  v241 = 1;
  v102 = v257;
  *(_DWORD *)(v32 + 56) = v255[0];
LABEL_158:
  SEMOBJ<13>::vUnlock(&v284);
  if ( v241 )
  {
LABEL_166:
    v103 = 1;
  }
  else
  {
LABEL_161:
    LODWORD(pptl) = 0;
    LODWORD(prcl) = v254;
    LODWORD(pptfx) = v256[0];
    LODWORD(pptlBrushOrg) = v250;
    v257 = (struct Gre::Base::SESSION_GLOBALS *)CreateXlateObject(
                                                  0LL,
                                                  0,
                                                  v32,
                                                  v69,
                                                  v33,
                                                  v33,
                                                  pptlBrushOrg,
                                                  pptfx,
                                                  prcl,
                                                  pptl);
    v102 = v257;
    if ( v257 )
    {
      if ( v32 )
      {
        *(_QWORD *)v227 = v91;
        if ( v69 )
        {
          if ( (*((_DWORD *)v257 + 19) & 0x200) == 0 )
          {
            EXLATEOBJ::vAddToCache((Gre::Base *)&v257, v32, v69, v33, v33);
            *(_QWORD *)v227 = v91;
          }
        }
        else
        {
          *(_QWORD *)v227 = v91;
        }
      }
      goto LABEL_166;
    }
    v103 = 0;
  }
  v233 = v103 & v232;
  v104 = *(XLATEOBJ **)(v305[0] + 976LL);
  v256[0] = *(_DWORD *)&v104[7].iSrcType;
  pulXlate = (int)v104[7].pulXlate;
  if ( !v69 )
  {
    if ( v32 )
    {
      v104 = v91;
      if ( (*(_DWORD *)(v32 + 24) & 0x800) == 0 )
        goto LABEL_394;
      v187 = *(_QWORD *)(v33 + 80);
      if ( v187 )
      {
        if ( v187 != *(_QWORD *)(v33 + 72) )
          goto LABEL_394;
      }
      v117 = v91;
    }
    else
    {
      v117 = v91;
    }
    v136 = Gre::Base::Globals((Gre::Base *)v104);
    goto LABEL_240;
  }
  if ( !v32 )
  {
    v104 = v91;
    if ( (*(_DWORD *)(v69 + 24) & 0x800) != 0 )
    {
      v135 = *(_QWORD *)(v33 + 80);
      if ( !v135 || v135 == *(_QWORD *)(v33 + 72) )
      {
LABEL_239:
        v136 = Gre::Base::Globals((Gre::Base *)v104);
        v117 = *(XLATEOBJ **)v227;
LABEL_240:
        v116 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v136 + 4552);
        *(_QWORD *)v255 = (char *)v136 + 4552;
        v253 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v136 + 4552);
        goto LABEL_191;
      }
    }
LABEL_394:
    v91 = v104;
    if ( v69 )
      goto LABEL_169;
    v105 = v104;
    *(_QWORD *)v228 = v104;
    goto LABEL_185;
  }
LABEL_169:
  v105 = v91;
  *(_QWORD *)v227 = v91;
  if ( v32 )
  {
    v106 = *(_QWORD *)(v69 + 120);
    v107 = v106 == v69 ? *(_DWORD *)(v69 + 32) : *(_DWORD *)(v106 + 32);
    v104 = *(XLATEOBJ **)(v32 + 120);
    v108 = v104 == (XLATEOBJ *)v32 ? *(_DWORD *)(v32 + 32) : *(_DWORD *)&v104[1].iSrcType;
    if ( v107 == v108 )
      goto LABEL_239;
  }
  *(_QWORD *)v228 = v91;
  if ( v32 )
  {
    v109 = *(_DWORD *)(v69 + 56);
    v285 = v33;
    v253 = Gre::Base::Globals((Gre::Base *)v104);
    v286 = (HSEMAPHORE)(*(_QWORD *)v253 + 312LL);
    GreAcquireSemaphoreInternal(v286);
    GrepAcquireLockValidate<13>();
    v110 = v253;
    v111 = 0;
    v112 = 1;
    for ( m = 0; ; m += v112 )
    {
      if ( v111 >= 8 )
      {
        v116 = 0LL;
        *(_QWORD *)v255 = 0LL;
        v253 = 0LL;
        v243 = 0;
        goto LABEL_183;
      }
      v113 = *(_QWORD *)(v69 + 120);
      v114 = v113 == v69 ? *(_DWORD *)(v69 + 32) : *(_DWORD *)(v113 + 32);
      v115 = 32LL * v109;
      if ( *(_DWORD *)((char *)v110 + v115 + 4304) == v114 )
      {
        v171 = *(_QWORD *)(v32 + 120);
        v172 = v171 == v32 ? *(_DWORD *)(v32 + 32) : *(_DWORD *)(v171 + 32);
        if ( *(_DWORD *)((char *)v110 + v115 + 4308) == v172 )
        {
          v173 = *(_QWORD *)(v33 + 120);
          v174 = v173 == v33 ? *(_DWORD *)(v33 + 32) : *(_DWORD *)(v173 + 32);
          if ( *(_DWORD *)((char *)v110 + v115 + 4316) == v174 )
          {
            v175 = *(struct Gre::Base::SESSION_GLOBALS **)((char *)v110 + v115 + 4296);
            v253 = v175;
            v176 = *((_DWORD *)v175 + 19);
            if ( (v176 & 0x6000) == 0 )
            {
              v177 = *((_DWORD *)v175 + 1);
              if ( (v177 & 4) == 0 && (*((_DWORD *)v175 + 19) & 0x100) == 0 )
                break;
              if ( (v177 & 4) != 0 && v254 == *((_DWORD *)v175 + 6) )
              {
                v185 = XEPALOBJ::ulTime((XEPALOBJ *)&v285);
                if ( *((_DWORD *)v110 + 8 * v109 + 1078) == v185 )
                  break;
              }
              if ( (v176 & 0x100) != 0 && pulXlate == *((_DWORD *)v175 + 7) && v256[0] == *((_DWORD *)v175 + 8) )
                break;
            }
          }
        }
      }
      v109 = ((_BYTE)v109 + 1) & 7;
      v111 = v112 + m;
    }
    _InterlockedAdd((volatile signed __int32 *)v110 + 8 * v109 + 1072, v112);
    v90 = *(XLATEOBJ **)v258;
    v102 = v257;
    *(_DWORD *)(v69 + 56) = v109;
    v116 = v253;
    *(_QWORD *)v255 = v253;
    v243 = v112;
LABEL_183:
    SEMOBJ<13>::vUnlock(&v286);
    if ( !v243 )
    {
      v105 = *(XLATEOBJ **)v228;
      goto LABEL_185;
    }
LABEL_190:
    v117 = *(XLATEOBJ **)v228;
    goto LABEL_191;
  }
  *(_QWORD *)v228 = v91;
LABEL_185:
  LODWORD(pptl) = 0;
  *(_QWORD *)v244 = v105;
  LODWORD(prcl) = v254;
  LODWORD(pptfx) = v256[0];
  LODWORD(pptlBrushOrg) = pulXlate;
  *(_QWORD *)v255 = CreateXlateObject(0LL, 0, v69, v32, v33, v33, pptlBrushOrg, pptfx, prcl, pptl);
  v116 = *(struct Gre::Base::SESSION_GLOBALS **)v255;
  v253 = *(struct Gre::Base::SESSION_GLOBALS **)v255;
  if ( *(_QWORD *)v255 )
  {
    if ( !v69 )
      goto LABEL_190;
    *(_QWORD *)v228 = *(_QWORD *)v244;
    if ( v32 && (*(_DWORD *)(*(_QWORD *)v255 + 76LL) & 0x200) == 0 )
    {
      EXLATEOBJ::vAddToCache((Gre::Base *)&v253, v69, v32, v33, v33);
      goto LABEL_190;
    }
    v117 = *(XLATEOBJ **)v244;
LABEL_191:
    v13 = 1;
    v118 = 1;
  }
  else
  {
    v117 = *(XLATEOBJ **)v228;
    v118 = 0;
    v13 = 1;
  }
  v234 = v118 & v233;
  XDCOBJ::prgnEffRao((XDCOBJ *)v308);
  XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v317);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v317, v119, (const struct ERECTL *)&v313, 0);
  if ( v318 == v320 || v319 == v321 )
  {
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v253);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v257);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v258);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v263);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&XlateObject);
    goto LABEL_55;
  }
  v268 = 0LL;
  v269 = 0;
  v270 = 0;
  v121 = *((_QWORD *)v271 + 6);
  *(_QWORD *)v256 = v121;
  v245 = (stretch *)v117;
  if ( !v260.x
    || (v245 = (stretch *)v117,
        v120 = (struct ECLIPOBJ *)*(unsigned int *)(*(_QWORD *)(v308[0] + 976LL) + 108LL),
        ((unsigned __int8)v120 & 1) == 0)
    || (v120 = (struct ECLIPOBJ *)((unsigned __int8)v120 & 9), v245 = (stretch *)v117, (_BYTE)v120 == 9) )
  {
    v122 = (stretch *)v117;
    goto LABEL_196;
  }
  v295[1] = *(_DWORD *)&v117[2].iSrcType;
  v295[2] = v117[2].cEntries;
  v295[0] = v117[4].iUniq;
  v144 = *(__int64 **)&v117[5].iSrcType;
  v295[3] = 0;
  v297 = 0LL;
  v296 = *v144;
  SURFMEM::bCreateDIB((SURFMEM *)&v268, (struct _DEVBITMAPINFO *)v295, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( v268 )
  {
    v145 = ((__int64)v117[4].pulXlate & 0x400) == 0;
    v315 = *(_DWORD *)&v117[2].iSrcType;
    v316 = v117[2].cEntries;
    v314 = 0LL;
    v280 = 0LL;
    v146 = v145
         ? EngCopyBits
         : *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))&v279[118].iUniq;
    if ( ((unsigned int (__fastcall *)(char *, XLATEOBJ *, _QWORD, _QWORD, __int64 *, __int64 *))v146)(
           (char *)v268 + 24,
           &v117[1],
           0LL,
           0LL,
           &v314,
           &v280) )
    {
      v147 = *((_DWORD *)v268 + 24);
      if ( (unsigned int)(v147 - 1) <= 5 )
      {
        ((void (*)(void))(&stretch::apfnMirror)[v147])();
        v122 = v268;
        v245 = v268;
LABEL_196:
        v275 = 0LL;
        v276 = 0;
        v277 = 0;
        v272 = 0LL;
        v273 = 0;
        v274 = 0;
        if ( !pptlSrc.x )
        {
LABEL_197:
          if ( !v234 )
          {
            v148 = 6;
            goto LABEL_288;
          }
          ++*((_DWORD *)v271 + 23);
          v123 = v308[0];
          if ( *(_QWORD *)(v308[0] + 48LL) == *(_QWORD *)(v305[0] + 48LL)
            || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v308)
            && (v123 = v308[0],
                v120 = *(struct ECLIPOBJ **)(v308[0] + 48LL),
                *((_QWORD *)v120 + 439) == *(_QWORD *)(v305[0] + 48LL)) )
          {
            if ( (*(_DWORD *)(v123 + 36) & 0xE0) != 0 )
            {
              v281 = v313;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v308, v120, (struct ERECTL *)&v281);
            }
            v301[1] = 0;
            v301[0] = a11;
            v302 = pxlo;
            v303 = v102;
            v304 = v116;
            if ( v313.m128i_i32[2] - v313.m128i_i32[0] == prclDest.right - prclDest.left
              && v313.m128i_i32[3] - v313.m128i_i32[1] == prclDest.bottom - prclDest.top )
            {
              BYTE1(v301[0]) = BYTE1(a11) & 0xFE;
            }
            if ( (*((_DWORD *)v271 + 28) & 0x10000) != 0 )
              v124 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v121 + 3248);
            else
              v124 = EngAlphaBlend;
            v125 = (char *)v122 + 24;
            if ( !v122 )
              v125 = 0LL;
            v13 = ((__int64 (__fastcall *)(char *, char *, _BYTE *, _QWORD *, __m128i *, RECTL *, _DWORD *))v124)(
                    (char *)v271 + 24,
                    v125,
                    v317,
                    v265,
                    &v313,
                    &prclDest,
                    v301);
          }
          else
          {
            v148 = 87;
LABEL_288:
            EngSetLastError(v148);
            v13 = 0;
          }
          SURFMEM::~SURFMEM((SURFMEM *)&v272);
          SURFMEM::~SURFMEM((SURFMEM *)&v275);
          SURFMEM::~SURFMEM((SURFMEM *)&v268);
          if ( v116 )
          {
            v127 = *((_DWORD *)v116 + 9);
            if ( v127 >= 0 )
            {
              v178 = Gre::Base::Globals(v126);
              v126 = (Gre::Base *)(32 * (*((int *)v116 + 9) + 134LL));
              _InterlockedAdd((volatile signed __int32 *)((char *)v178 + (_QWORD)v126), 0xFFFFFFFF);
              v90 = *(XLATEOBJ **)v258;
              v102 = v257;
            }
            else if ( v127 == -1 )
            {
              FreeThreadBufferWithTag(v116);
            }
          }
          if ( v102 )
          {
            v128 = *((_DWORD *)v102 + 9);
            if ( v128 >= 0 )
            {
              v179 = Gre::Base::Globals(v126);
              v126 = (Gre::Base *)(32 * (*((int *)v102 + 9) + 134LL));
              _InterlockedAdd((volatile signed __int32 *)((char *)v179 + (_QWORD)v126), 0xFFFFFFFF);
              v90 = *(XLATEOBJ **)v258;
            }
            else if ( v128 == -1 )
            {
              FreeThreadBufferWithTag(v102);
            }
          }
          if ( v90 )
          {
            v129 = v90[1].cEntries;
            if ( v129 >= 0 )
            {
              v180 = Gre::Base::Globals(v126);
              v126 = (Gre::Base *)(32 * ((int)v90[1].cEntries + 134LL));
              _InterlockedAdd((volatile signed __int32 *)((char *)v180 + (_QWORD)v126), 0xFFFFFFFF);
            }
            else if ( v129 == -1 )
            {
              FreeThreadBufferWithTag(v90);
            }
          }
          v130 = v263;
          if ( v263 )
          {
            v131 = *(_DWORD *)(v263 + 36);
            if ( v131 >= 0 )
            {
              v181 = Gre::Base::Globals(v126);
              v126 = (Gre::Base *)(32 * (*(int *)(v130 + 36) + 134LL));
              _InterlockedAdd((volatile signed __int32 *)((char *)v181 + (_QWORD)v126), 0xFFFFFFFF);
            }
            else if ( v131 == -1 )
            {
              FreeThreadBufferWithTag(v263);
            }
          }
          if ( XlateObject )
          {
            v132 = XlateObject[9];
            if ( v132 >= 0 )
            {
              _InterlockedAdd(
                (volatile signed __int32 *)Gre::Base::Globals(v126) + 8 * XlateObject[9] + 1072,
                0xFFFFFFFF);
            }
            else if ( v132 == -1 )
            {
              FreeThreadBufferWithTag(XlateObject);
            }
          }
          goto LABEL_55;
        }
        v292[1] = v313.m128i_i32[2] - v313.m128i_i32[0];
        v292[2] = v313.m128i_i32[3] - v313.m128i_i32[1];
        v292[3] = 0;
        v294 = 0LL;
        v188 = *(_QWORD **)(v267 + 3776);
        v292[0] = 6;
        v293 = *v188;
        v265 = v188;
        v189 = SURFMEM::bCreateDIB((SURFMEM *)&v275, (struct _DEVBITMAPINFO *)v292, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) & v234;
        if ( !v189 )
          goto LABEL_426;
        if ( (a11 & 0x1000000) != 0 )
          goto LABEL_420;
        v298[1] = prclDest.right - prclDest.left;
        v298[2] = prclDest.bottom - prclDest.top;
        v298[3] = 0;
        v190 = *(__int64 **)(v267 + 3776);
        v300 = 0LL;
        v298[0] = 6;
        v299 = *v190;
        DIB = SURFMEM::bCreateDIB((SURFMEM *)&v272, (struct _DEVBITMAPINFO *)v298, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        v189 = DIB;
        if ( !DIB )
          goto LABEL_420;
        v229 = prclDest.left;
        pptlSrc.x = prclDest.left;
        v260.x = prclDest.top;
        pptlSrc.y = prclDest.top;
        if ( (int)LongLongToLong(0LL, &v259) < 0
          || (int)LongLongToLong(prclDest.right - v191, &v259) < 0
          || (int)LongLongToLong(0LL, &v259) < 0
          || (int)LongLongToLong(prclDest.bottom - v192, &v259) < 0 )
        {
          v218 = 87;
        }
        else
        {
          v196 = v194 - v195;
          v197 = v193 - v260.x;
          *(_QWORD *)&prclDest.left = 0LL;
          prclDest.right = v196;
          v198 = 0;
          prclDest.bottom = v197;
          if ( v196 > 0 && v197 > 0 && v229 <= *((_DWORD *)v245 + 14) && v260.x <= *((_DWORD *)v245 + 15) )
          {
            v217 = (SURFOBJ *)(v272 + 24);
            if ( !v272 )
              v217 = 0LL;
            EngCopyBits(v217, (SURFOBJ *)((char *)v245 + 24), 0LL, v90, &prclDest, &pptlSrc);
            v197 = prclDest.bottom;
            v196 = prclDest.right;
            v198 = prclDest.top;
          }
          v199 = (int *)v272;
          v245 = (stretch *)v272;
          v200 = *(XLATEOBJ **)(v272 + 80);
          v279 = (XLATEOBJ *)((char *)v200 + *(_DWORD *)(v272 + 60) * *(_DWORD *)(v272 + 88));
          if ( v200 != v279 )
          {
            v201 = 0;
            do
            {
              if ( v201 < v197 && v201 >= v198 )
              {
                v211 = v200;
                pxlo = (XLATEOBJ *)((char *)v200 + 4 * v199[14]);
                v212 = 0;
                if ( v200 != pxlo )
                {
                  v213 = prclDest.left;
                  v214 = pxlo;
                  do
                  {
                    if ( v212 < v196 && v212 >= v213 )
                    {
                      v211->iUniq |= 0xFF000000;
                      v196 = prclDest.right;
                      v213 = prclDest.left;
                    }
                    ++v212;
                    v211 = (XLATEOBJ *)((char *)v211 + 4);
                  }
                  while ( v211 != v214 );
                  v197 = prclDest.bottom;
                  v198 = prclDest.top;
                  v199 = (int *)v272;
                }
              }
              ++v201;
              v200 = (XLATEOBJ *)((char *)v200 + v199[22]);
            }
            while ( v200 != v279 );
            v245 = (stretch *)v199;
          }
          v189 = DIB;
          HIBYTE(a11) |= 1u;
          pxlo = (XLATEOBJ *)(v267 + 4552);
LABEL_420:
          v202 = *(_DWORD **)(v275 + 72);
          v203 = (unsigned __int64)*(unsigned int *)(v275 + 64) >> 2;
          if ( v203 )
          {
            if ( ((unsigned __int8)v202 & 4) != 0 )
            {
              *v202 = 0;
              if ( --v203 )
              {
                ++v202;
                goto LABEL_424;
              }
            }
            else
            {
LABEL_424:
              memset(v202, 0, 8 * (v203 >> 1));
              if ( (v203 & 1) != 0 )
                v202[v203 - 1] = 0;
            }
          }
LABEL_426:
          if ( v189 )
          {
            v204 = &v334;
            v205 = 3LL;
            do
            {
              EPOINTFIX::EPOINTFIX((EPOINTFIX *)v204++);
              --v205;
            }
            while ( v205 );
            v260.x = v322.x - 16 * v281.m128i_i32[0];
            v260.y = v322.y - 16 * v281.m128i_i32[1];
            v334 = v260;
            v260.x = v323 - 16 * v281.m128i_i32[0];
            v260.y = v324 - 16 * v281.m128i_i32[1];
            v335 = v260;
            v260.x = v325 - 16 * v281.m128i_i32[0];
            v260.y = v326 - 16 * v281.m128i_i32[1];
            v336 = v260;
            v206 = (SURFOBJ *)((char *)v245 + 24);
            if ( !v245 )
              v206 = 0LL;
            v207 = (SURFOBJ *)(v275 + 24);
            if ( !v275 )
              v207 = 0LL;
            v208 = 3LL;
            EngPlgBlt(v207, v206, 0LL, 0LL, pxlo, 0LL, 0LL, &v334, &prclDest, 0LL, 3u);
            inited = EXLATEOBJ::bInitXlateObj(
                       (Gre::Base *)&v263,
                       0LL,
                       0,
                       (__int64)v265,
                       v288,
                       0LL,
                       v264,
                       *(_DWORD *)(*(_QWORD *)(v305[0] + 976LL) + 184LL),
                       *(_DWORD *)(*(_QWORD *)(v305[0] + 976LL) + 176LL),
                       v254,
                       0);
            v121 = *(_QWORD *)v256;
            v234 = inited;
            v265 = (_QWORD *)v263;
            *(_QWORD *)v246 = v275;
            pxlo = (XLATEOBJ *)(v267 + 4552);
            v210 = (struct BLTINFO *)&v337;
            prclDest.right = v313.m128i_i32[2] - v313.m128i_i32[0];
            prclDest.bottom = v313.m128i_i32[3] - v313.m128i_i32[1];
            *(_QWORD *)&prclDest.left = 0LL;
            do
            {
              v210 = (struct BLTINFO *)((char *)v210 - 8);
              vSrcCopyDummy(v210);
              --v208;
            }
            while ( v208 );
            v116 = *(struct Gre::Base::SESSION_GLOBALS **)v255;
            v122 = *(stretch **)v246;
            goto LABEL_197;
          }
          v218 = 8;
        }
        EngSetLastError(v218);
        SURFMEM::~SURFMEM((SURFMEM *)&v272);
        SURFMEM::~SURFMEM((SURFMEM *)&v275);
      }
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v268);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v253);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v257);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v258);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v263);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&XlateObject);
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v310);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v305);
LABEL_59:
  MAPIDCOBJ::~MAPIDCOBJ((MAPIDCOBJ *)v308);
  return 0LL;
}
