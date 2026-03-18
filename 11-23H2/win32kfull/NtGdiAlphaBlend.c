/*
 * XREFs of NtGdiAlphaBlend @ 0x1C00FBB30
 * Callers:
 *     BltIcon @ 0x1C0041788 (BltIcon.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0232B64 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0236080 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0010D3C (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     EngCopyBits @ 0x1C004D530 (EngCopyBits.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004DD9C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0075DF4 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007A678 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C008A7A4 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00BB358 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00BC430 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00C2470 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00C3A60 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00C3A9C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     bCvtPts1 @ 0x1C00F80F0 (bCvtPts1.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00F98B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FB100 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FF6A0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreStretchBltInternal @ 0x1C0100110 (GreStretchBltInternal.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0102AF0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0103430 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013DB9C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013DC2C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C014DF48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0238C0C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C0264524 (--1EXLATEOBJ@@QEAA@XZ.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C0264E7C (--1SEMOBJ@@QEAA@XZ.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0265C84 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026632C (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     EngPlgBlt @ 0x1C028F060 (EngPlgBlt.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C02BFF84 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiAlphaBlend(
        Gre::Base *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        XLATEOBJ *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 v14; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // zf
  struct UMPDOBJ *v19; // rax
  DC *v20; // rdx
  int v21; // edi
  struct _DC_ATTR *UserAttr; // rax
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  struct UMPDOBJ *v27; // rax
  DC *v28; // rdx
  int v29; // edi
  unsigned int v30; // r12d
  struct _DC_ATTR *v31; // rax
  __int64 v32; // rsi
  DC *v33; // rcx
  struct _DC_ATTR *v34; // rax
  __int64 v35; // rdi
  struct _DC_ATTR *v36; // rax
  char *v37; // r9
  int v38; // r8d
  char *v39; // rcx
  int v40; // edi
  float v41; // xmm4_4
  LONG left; // edx
  LONG top; // r11d
  LONG right; // eax
  LONG bottom; // r10d
  int v46; // edi
  int v47; // ecx
  int v48; // edx
  int v49; // r8d
  int v50; // esi
  __int32 v51; // eax
  __int32 v52; // eax
  FIX v53; // r8d
  FIX x; // r10d
  FIX v55; // ecx
  FIX y; // r11d
  int v57; // r9d
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  int v62; // r8d
  __int64 v63; // rdx
  struct DC *v64; // r8
  DC *v65; // r14
  __int64 v66; // r15
  __int64 v67; // r12
  __int64 v68; // r13
  __int64 v69; // rdi
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  __int64 v74; // rax
  int v75; // ecx
  _DWORD *v76; // rcx
  ULONG v77; // ecx
  __int64 v78; // rcx
  int v79; // r10d
  __int64 v80; // r11
  __int64 v81; // rdi
  DC *v82; // r10
  __int64 v83; // rcx
  __int64 v84; // r15
  __int64 v85; // rdx
  int v86; // r11d
  int v87; // edx
  LONG v88; // r9d
  LONG v89; // edi
  LONG v90; // r8d
  _DWORD *v91; // rax
  int v92; // ecx
  LONG v93; // edx
  int v94; // edi
  __int64 v95; // rax
  char v96; // di
  __int64 v97; // rdx
  struct DC *v98; // r8
  unsigned int *v99; // rax
  __int64 v100; // rdi
  __int64 v101; // r14
  Gre::Base *v102; // rcx
  __int64 v103; // r15
  int v104; // esi
  __int64 v105; // rax
  int v106; // esi
  Gre::Base *v107; // r9
  __int64 v108; // rcx
  int v109; // r10d
  int v110; // r11d
  __int64 v111; // rax
  int v112; // r8d
  __int64 v113; // rax
  int v114; // edx
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rsi
  XLATEOBJ *v118; // rax
  int v119; // eax
  int v120; // eax
  unsigned int v121; // r9d
  __int64 v122; // rdx
  __int64 v123; // r11
  int v124; // eax
  __int64 v125; // rdx
  unsigned int v126; // r9d
  __int64 v127; // r11
  Gre::Base *v128; // rdx
  int v129; // r10d
  struct Gre::Base::SESSION_GLOBALS *v130; // r9
  int v131; // eax
  __int64 v132; // rcx
  unsigned int v133; // esi
  Gre::Base *XlateObject; // rax
  Gre::Base *v135; // r13
  unsigned int v136; // edx
  unsigned __int64 v137; // rcx
  unsigned int v138; // r12d
  Gre::Base *v139; // r8
  __int64 v140; // rax
  struct Gre::Base::SESSION_GLOBALS *v141; // rax
  unsigned int v142; // edx
  Gre::Base *v143; // rdi
  struct Gre::Base::SESSION_GLOBALS *v144; // rax
  __int64 v145; // rdx
  Gre::Base *v146; // rax
  int v147; // r8d
  int v148; // esi
  int v149; // r11d
  int v150; // r9d
  __int64 v151; // r11
  __int64 v152; // rax
  int v153; // edx
  __int64 v154; // rax
  XLATEOBJ *v155; // r12
  Gre::Base *v156; // r14
  int v157; // eax
  __int64 v158; // rsi
  Gre::Base *v159; // rcx
  unsigned int v160; // r8d
  Gre::Base *v161; // r9
  __int64 v162; // rax
  struct Gre::Base::SESSION_GLOBALS *v163; // rax
  unsigned int v164; // edx
  unsigned int v165; // r10d
  Gre::Base *v166; // r13
  __int64 v167; // rcx
  Gre::Base *v168; // rax
  int v169; // r9d
  int v170; // r11d
  ULONG *pulXlate; // rsi
  __int64 v172; // rcx
  int v173; // eax
  __int64 v174; // rdx
  int v175; // eax
  int v176; // eax
  __int64 v177; // rdx
  __int64 v178; // r10
  int v179; // eax
  __int64 v180; // rdx
  __int64 v181; // r10
  Gre::Base *v182; // rdx
  int v183; // r10d
  int v184; // eax
  int v185; // r9d
  Gre::Base *v186; // rsi
  __int64 v187; // rax
  __int64 v188; // rax
  int v189; // edx
  __int64 v190; // rax
  struct Gre::Base::SESSION_GLOBALS *v191; // rax
  __int64 v192; // rcx
  __int64 v193; // rdi
  __int64 v194; // rax
  int v195; // eax
  int v196; // eax
  unsigned int v197; // r10d
  __int64 v198; // rdx
  __int64 v199; // r11
  int v200; // eax
  __int64 v201; // rdx
  unsigned int v202; // r10d
  __int64 v203; // r11
  Gre::Base *v204; // rdx
  int v205; // r11d
  struct Gre::Base::SESSION_GLOBALS *v206; // r10
  int v207; // eax
  __int64 v208; // rcx
  Gre::Base *v209; // rdi
  int v210; // eax
  __int64 v211; // rcx
  unsigned int v212; // edi
  int v213; // edx
  Gre::Base *v214; // rcx
  unsigned int v215; // r8d
  Gre::Base *v216; // r10
  __int64 v217; // rax
  __int64 v218; // rdx
  int v219; // r9d
  Gre::Base *v220; // rsi
  Gre::Base *v221; // rdx
  unsigned int v222; // edi
  __int64 v223; // rcx
  int v224; // edi
  int v225; // edx
  struct Gre::Base::SESSION_GLOBALS *v226; // rax
  __int64 v227; // rdi
  __int64 v228; // rax
  int v229; // ecx
  int v230; // eax
  unsigned int v231; // r9d
  __int64 v232; // r11
  int v233; // eax
  unsigned int v234; // r9d
  __int64 v235; // r11
  Gre::Base *v236; // rdx
  int v237; // r11d
  unsigned int v238; // r9d
  __int64 v239; // rdi
  int v240; // ecx
  DC *v241; // rdx
  __int64 v242; // r10
  struct REGION *v243; // r10
  struct ECLIPOBJ *v244; // rdx
  __int64 v245; // r15
  unsigned int v246; // eax
  int v247; // r8d
  __int64 *v248; // rax
  BOOL (__stdcall *v249)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v250; // edx
  __int64 *v251; // r14
  int v252; // r9d
  __int64 *v253; // rax
  LONG v254; // edi
  Gre::Base *v255; // rcx
  __int64 v256; // rdx
  struct DC *v257; // r8
  SURFOBJ *v258; // rcx
  __int64 v259; // r10
  LONG v260; // r8d
  Gre::Base *v261; // rdx
  Gre::Base *v262; // r9
  Gre::Base *v263; // rdi
  LONG v264; // eax
  struct Gre::Base::SESSION_GLOBALS *v265; // rax
  _DWORD *v266; // r8
  unsigned __int64 v267; // rdx
  SURFOBJ *v268; // rdx
  SURFOBJ *v269; // rcx
  Gre::Base *v270; // rcx
  struct Gre::Base::SESSION_GLOBALS *v271; // rax
  DC *v272; // rdi
  ULONG v273; // ecx
  BOOL (__stdcall *v274)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  __int64 v275; // rdx
  __int64 v276; // rdx
  Gre::Base *v277; // rcx
  struct DC *v278; // r8
  int v279; // eax
  struct Gre::Base::SESSION_GLOBALS *v280; // rax
  int v281; // eax
  struct Gre::Base::SESSION_GLOBALS *v282; // rax
  int cEntries; // eax
  struct Gre::Base::SESSION_GLOBALS *v284; // rax
  Gre::Base *v285; // rdi
  int v286; // eax
  struct Gre::Base::SESSION_GLOBALS *v287; // rax
  int v288; // eax
  __int64 v289; // rdx
  struct DC *v290; // r8
  __int64 v291; // rdx
  struct DC *v292; // r8
  __int64 v293; // rdx
  struct DC *v294; // r8
  __int64 v295; // rdx
  struct DC *v296; // r8
  int v297; // r12d
  __int64 v298; // rdx
  struct DC *v299; // r8
  unsigned int v300; // [rsp+70h] [rbp-90h]
  int v301; // [rsp+70h] [rbp-90h]
  unsigned int v302; // [rsp+70h] [rbp-90h]
  unsigned int v303; // [rsp+70h] [rbp-90h]
  int inited; // [rsp+70h] [rbp-90h]
  int DIB; // [rsp+70h] [rbp-90h]
  int v306; // [rsp+74h] [rbp-8Ch]
  unsigned int v307; // [rsp+74h] [rbp-8Ch]
  int v308; // [rsp+74h] [rbp-8Ch]
  unsigned int v309; // [rsp+74h] [rbp-8Ch]
  int v310; // [rsp+74h] [rbp-8Ch]
  unsigned int v311; // [rsp+74h] [rbp-8Ch]
  int v312; // [rsp+78h] [rbp-88h]
  int v313; // [rsp+78h] [rbp-88h]
  int v314; // [rsp+78h] [rbp-88h]
  int v315; // [rsp+78h] [rbp-88h]
  unsigned int v316; // [rsp+78h] [rbp-88h]
  unsigned int v317; // [rsp+78h] [rbp-88h]
  int v318; // [rsp+7Ch] [rbp-84h]
  int v319; // [rsp+7Ch] [rbp-84h]
  int v320; // [rsp+7Ch] [rbp-84h]
  Gre::Base *v321; // [rsp+80h] [rbp-80h]
  Gre::Base *v322; // [rsp+80h] [rbp-80h]
  Gre::Base *v323; // [rsp+80h] [rbp-80h]
  Gre::Base *v324; // [rsp+80h] [rbp-80h]
  int v325; // [rsp+88h] [rbp-78h]
  unsigned int v326; // [rsp+88h] [rbp-78h]
  unsigned int v327; // [rsp+88h] [rbp-78h]
  int v328; // [rsp+8Ch] [rbp-74h]
  int v329; // [rsp+8Ch] [rbp-74h]
  int v330; // [rsp+8Ch] [rbp-74h]
  unsigned int v331; // [rsp+8Ch] [rbp-74h]
  int v332; // [rsp+8Ch] [rbp-74h]
  unsigned int v333; // [rsp+8Ch] [rbp-74h]
  HDC v335; // [rsp+90h] [rbp-70h]
  HDC v336; // [rsp+90h] [rbp-70h]
  HDC v337; // [rsp+90h] [rbp-70h]
  HDC v338; // [rsp+90h] [rbp-70h]
  int v339; // [rsp+98h] [rbp-68h]
  int v340; // [rsp+98h] [rbp-68h]
  unsigned int v341; // [rsp+98h] [rbp-68h]
  int v342; // [rsp+98h] [rbp-68h]
  unsigned int v343; // [rsp+98h] [rbp-68h]
  int v344; // [rsp+9Ch] [rbp-64h]
  char v345; // [rsp+A0h] [rbp-60h]
  int v346; // [rsp+A4h] [rbp-5Ch]
  int v347; // [rsp+A4h] [rbp-5Ch]
  Gre::Base *v348; // [rsp+A8h] [rbp-58h]
  struct Gre::Base::SESSION_GLOBALS *v349; // [rsp+A8h] [rbp-58h]
  Gre::Base *v350; // [rsp+B0h] [rbp-50h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v351; // [rsp+B8h] [rbp-48h]
  XLATEOBJ *v352; // [rsp+C0h] [rbp-40h] BYREF
  XLATEOBJ *pxlo; // [rsp+C8h] [rbp-38h]
  Gre::Base *v354; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v355; // [rsp+D8h] [rbp-28h]
  __int64 v356; // [rsp+E0h] [rbp-20h]
  __int64 v357; // [rsp+E8h] [rbp-18h]
  Gre::Base *v358; // [rsp+F0h] [rbp-10h] BYREF
  DC *v359; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v360; // [rsp+100h] [rbp+0h]
  _BYTE v361[32]; // [rsp+108h] [rbp+8h] BYREF
  DC *v362; // [rsp+128h] [rbp+28h] BYREF
  __int64 v363; // [rsp+130h] [rbp+30h]
  _BYTE v364[32]; // [rsp+138h] [rbp+38h] BYREF
  int v365; // [rsp+158h] [rbp+58h] BYREF
  int v366; // [rsp+15Ch] [rbp+5Ch] BYREF
  Gre::Base *v367; // [rsp+160h] [rbp+60h] BYREF
  int v368; // [rsp+168h] [rbp+68h]
  POINTL pptlSrc; // [rsp+170h] [rbp+70h] BYREF
  __int64 v370; // [rsp+178h] [rbp+78h]
  __int64 v371; // [rsp+180h] [rbp+80h]
  char *v372; // [rsp+188h] [rbp+88h] BYREF
  int v373; // [rsp+190h] [rbp+90h]
  int v374; // [rsp+194h] [rbp+94h]
  __int64 v375; // [rsp+198h] [rbp+98h] BYREF
  char v376; // [rsp+1A0h] [rbp+A0h]
  int v377; // [rsp+1A4h] [rbp+A4h]
  __int64 v378; // [rsp+1A8h] [rbp+A8h]
  __int64 v379; // [rsp+1B0h] [rbp+B0h] BYREF
  char v380; // [rsp+1B8h] [rbp+B8h]
  int v381; // [rsp+1BCh] [rbp+BCh]
  __int64 v382; // [rsp+1C0h] [rbp+C0h] BYREF
  char v383; // [rsp+1C8h] [rbp+C8h]
  int v384; // [rsp+1CCh] [rbp+CCh]
  __int64 v385; // [rsp+1D0h] [rbp+D0h]
  char *v386; // [rsp+1D8h] [rbp+D8h] BYREF
  int v387; // [rsp+1E0h] [rbp+E0h]
  int v388; // [rsp+1E4h] [rbp+E4h]
  __int64 v389; // [rsp+1E8h] [rbp+E8h] BYREF
  ULONG *v390; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v391; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v392; // [rsp+200h] [rbp+100h] BYREF
  __int64 v393; // [rsp+208h] [rbp+108h] BYREF
  __int64 v394; // [rsp+210h] [rbp+110h] BYREF
  __int64 v395; // [rsp+218h] [rbp+118h] BYREF
  __int64 v396; // [rsp+220h] [rbp+120h] BYREF
  __int64 v397; // [rsp+228h] [rbp+128h] BYREF
  __int64 v398; // [rsp+230h] [rbp+130h] BYREF
  _DWORD *v399; // [rsp+238h] [rbp+138h]
  __int64 v400; // [rsp+240h] [rbp+140h] BYREF
  __int64 v401; // [rsp+248h] [rbp+148h] BYREF
  __int64 v402; // [rsp+250h] [rbp+150h] BYREF
  __int64 v403; // [rsp+258h] [rbp+158h] BYREF
  __int64 v404; // [rsp+260h] [rbp+160h] BYREF
  _DWORD v405[4]; // [rsp+268h] [rbp+168h] BYREF
  __int64 v406; // [rsp+278h] [rbp+178h]
  __int64 v407; // [rsp+280h] [rbp+180h]
  _DWORD v408[4]; // [rsp+288h] [rbp+188h] BYREF
  __int64 v409; // [rsp+298h] [rbp+198h]
  __int64 v410; // [rsp+2A0h] [rbp+1A0h]
  _DWORD v411[4]; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int64 v412; // [rsp+2B8h] [rbp+1B8h]
  __int64 v413; // [rsp+2C0h] [rbp+1C0h]
  __int64 v414; // [rsp+2C8h] [rbp+1C8h] BYREF
  __int64 v415; // [rsp+2D0h] [rbp+1D0h] BYREF
  _DWORD v416[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  XLATEOBJ *v417; // [rsp+2E0h] [rbp+1E0h]
  Gre::Base *v418; // [rsp+2E8h] [rbp+1E8h]
  Gre::Base *v419; // [rsp+2F0h] [rbp+1F0h]
  RECTL v420; // [rsp+300h] [rbp+200h] BYREF
  __m128i v421; // [rsp+310h] [rbp+210h]
  _OWORD v422[2]; // [rsp+320h] [rbp+220h] BYREF
  __int64 v423; // [rsp+340h] [rbp+240h]
  __int64 v424; // [rsp+348h] [rbp+248h]
  char v425; // [rsp+350h] [rbp+250h]
  int v426; // [rsp+354h] [rbp+254h]
  int v427; // [rsp+378h] [rbp+278h]
  __int128 v428; // [rsp+380h] [rbp+280h]
  int v429; // [rsp+390h] [rbp+290h]
  __int64 v430; // [rsp+398h] [rbp+298h]
  __int64 v431; // [rsp+3A0h] [rbp+2A0h]
  char v432[32]; // [rsp+3A8h] [rbp+2A8h] BYREF
  __int16 v433; // [rsp+3C8h] [rbp+2C8h]
  __int64 v434; // [rsp+3D0h] [rbp+2D0h]
  __int64 v435; // [rsp+3D8h] [rbp+2D8h]
  char v436[32]; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int16 v437; // [rsp+400h] [rbp+300h]
  __int64 v438; // [rsp+408h] [rbp+308h]
  __int128 v439; // [rsp+410h] [rbp+310h]
  __int64 v440; // [rsp+420h] [rbp+320h]
  __int64 v441; // [rsp+428h] [rbp+328h]
  __int64 v442; // [rsp+430h] [rbp+330h]
  __int64 v443; // [rsp+438h] [rbp+338h]
  __m128i v444; // [rsp+440h] [rbp+340h] BYREF
  RECTL prclDest; // [rsp+450h] [rbp+350h] BYREF
  __m128i v446; // [rsp+460h] [rbp+360h] BYREF
  __int64 v447; // [rsp+470h] [rbp+370h] BYREF
  int v448; // [rsp+478h] [rbp+378h]
  int v449; // [rsp+47Ch] [rbp+37Ch]
  _BYTE v450[4]; // [rsp+480h] [rbp+380h] BYREF
  int v451; // [rsp+484h] [rbp+384h]
  int v452; // [rsp+488h] [rbp+388h]
  int v453; // [rsp+48Ch] [rbp+38Ch]
  int v454; // [rsp+490h] [rbp+390h]
  __int64 v455; // [rsp+4B8h] [rbp+3B8h]
  __int64 v456; // [rsp+4D0h] [rbp+3D0h]
  int v457; // [rsp+4D8h] [rbp+3D8h]
  int v458; // [rsp+500h] [rbp+400h]
  __int64 v459; // [rsp+510h] [rbp+410h]
  struct _POINTFIX v460; // [rsp+520h] [rbp+420h] BYREF
  FIX v461; // [rsp+528h] [rbp+428h]
  int v462; // [rsp+52Ch] [rbp+42Ch]
  int v463; // [rsp+530h] [rbp+430h]
  FIX v464; // [rsp+534h] [rbp+434h]
  FIX v465; // [rsp+538h] [rbp+438h]
  int v466; // [rsp+53Ch] [rbp+43Ch]
  struct _POINTL v467; // [rsp+540h] [rbp+440h] BYREF
  int v468; // [rsp+548h] [rbp+448h]
  int v469; // [rsp+54Ch] [rbp+44Ch]
  int v470; // [rsp+550h] [rbp+450h]
  int v471; // [rsp+554h] [rbp+454h]
  POINTFIX pptfx; // [rsp+558h] [rbp+458h] BYREF
  HDC v473; // [rsp+560h] [rbp+460h]
  HDC v474; // [rsp+568h] [rbp+468h]

  pxlo = a6;
  v365 = a9;
  v366 = a10;
  pptlSrc = (POINTL)Gre::Base::Globals(a1);
  if ( (_BYTE)a11 || (a11 & 0xFE000000) != 0 )
    goto LABEL_568;
  if ( !a9 || !a10 )
    return 1LL;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
LABEL_568:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v368 = BYTE1(a11) & 0x80;
  BYTE1(a11) &= ~0x80u;
  v363 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v364);
  LOBYTE(v14) = 1;
  v362 = (DC *)HmgLockEx(a1, v14, 0LL);
  if ( v362 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread
      || (v16 = *ThreadWin32Thread) == 0
      || (v17 = *(_QWORD *)(v16 + 40), v18 = v17 == v16 + 40, v19 = (struct UMPDOBJ *)(v17 - 40), v18) )
    {
      v19 = 0LL;
    }
    v20 = v362;
    if ( *((_WORD *)v362 + 6) == 1 )
    {
      *((_QWORD *)v362 + 271) = v19;
      *((_DWORD *)v362 + 544) = 0xFFFF;
      v20 = v362;
    }
    else if ( *((struct UMPDOBJ **)v362 + 271) != v19 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v362, v19);
      goto LABEL_26;
    }
    if ( HIDWORD(v363) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v20 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_20:
        _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
LABEL_21:
        v362 = 0LL;
LABEL_22:
        EngSetLastError(6u);
        goto LABEL_23;
      }
      v21 = *((_DWORD *)v20 + 528);
      if ( v21 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v20 = v362;
        goto LABEL_20;
      }
    }
    else
    {
      if ( !*((_DWORD *)v20 + 528) )
        goto LABEL_33;
      *((_DWORD *)v20 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v20 = v362;
LABEL_33:
  if ( !v20 )
    goto LABEL_22;
  if ( (*((_DWORD *)v20 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v363) )
    {
LABEL_39:
      *((_DWORD *)v20 + 11) |= 2u;
      v20 = v362;
      LODWORD(v363) = 1;
      goto LABEL_40;
    }
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v362);
    if ( !UserAttr || DC::SaveAttributes(v362, UserAttr) )
    {
      v20 = v362;
      goto LABEL_39;
    }
LABEL_26:
    _InterlockedDecrement((volatile signed __int32 *)v362 + 3);
    goto LABEL_21;
  }
LABEL_40:
  if ( (*((_DWORD *)v20 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v20);
    v20 = v362;
  }
  if ( !v20 || (*((_DWORD *)v20 + 9) & 0x10000) != 0 )
    goto LABEL_22;
  v360 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v361);
  v359 = (DC *)HmgLockEx(pxlo, 1LL, 0LL);
  if ( v359 )
  {
    v24 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !v24
      || (v25 = *v24) == 0
      || (v26 = *(_QWORD *)(v25 + 40), v18 = v26 == v25 + 40, v27 = (struct UMPDOBJ *)(v26 - 40), v18) )
    {
      v27 = 0LL;
    }
    v28 = v359;
    if ( *((_WORD *)v359 + 6) == 1 )
    {
      *((_QWORD *)v359 + 271) = v27;
      *((_DWORD *)v359 + 544) = 0xFFFF;
      v28 = v359;
    }
    else if ( *((struct UMPDOBJ **)v359 + 271) != v27 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v359, v27);
      goto LABEL_58;
    }
    if ( HIDWORD(v360) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v28 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_55:
        _InterlockedDecrement((volatile signed __int32 *)v28 + 3);
LABEL_59:
        v359 = 0LL;
LABEL_60:
        v30 = 0;
        EngSetLastError(0x57u);
        goto LABEL_61;
      }
      v29 = *((_DWORD *)v28 + 528);
      if ( v29 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v28 = v359;
        goto LABEL_55;
      }
    }
    else
    {
      if ( !*((_DWORD *)v28 + 528) )
        goto LABEL_86;
      *((_DWORD *)v28 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v28 = v359;
LABEL_86:
  if ( !v28 )
    goto LABEL_60;
  if ( (*((_DWORD *)v28 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v360) )
    {
LABEL_92:
      *((_DWORD *)v28 + 11) |= 2u;
      v28 = v359;
      LODWORD(v360) = 1;
      goto LABEL_93;
    }
    v36 = XDCOBJ::GetUserAttr((XDCOBJ *)&v359);
    if ( !v36 || DC::SaveAttributes(v359, v36) )
    {
      v28 = v359;
      goto LABEL_92;
    }
LABEL_58:
    _InterlockedDecrement((volatile signed __int32 *)v359 + 3);
    goto LABEL_59;
  }
LABEL_93:
  if ( (*((_DWORD *)v28 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v28);
    v28 = v359;
  }
  if ( !v28 )
    goto LABEL_60;
  bSpDwmValidateSurface((struct XDCOBJ *)&v359, a7, a8, a9, a10);
  bSpDwmValidateSurface((struct XDCOBJ *)&v362, a2, a3, a4, a5);
  v373 = *(_DWORD *)(*((_QWORD *)v362 + 122) + 208LL);
  v374 = *(_DWORD *)(*((_QWORD *)v362 + 122) + 108LL) & 1;
  if ( (*(_DWORD *)(*((_QWORD *)v362 + 122) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v372, (struct XDCOBJ *)&v362, 0x204u, 0);
    v37 = v372;
  }
  else
  {
    v37 = (char *)v362 + 320;
    v372 = (char *)v362 + 320;
  }
  v387 = *(_DWORD *)(*((_QWORD *)v359 + 122) + 208LL);
  v38 = *(_DWORD *)(*((_QWORD *)v359 + 122) + 108LL) & 1;
  v388 = v38;
  if ( (*(_DWORD *)(*((_QWORD *)v359 + 122) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v386, (struct XDCOBJ *)&v359, 0x204u, 0);
    v37 = v372;
    v38 = v388;
    v39 = v386;
  }
  else
  {
    v39 = (char *)v359 + 320;
    v386 = (char *)v359 + 320;
  }
  v40 = *((_DWORD *)v39 + 8);
  if ( (v40 & 1) == 0 )
    goto LABEL_60;
  v41 = 0.0;
  if ( !v38 && (*(float *)v39 < 0.0 || *((float *)v39 + 3) < 0.0) )
    goto LABEL_60;
  left = a7;
  prclDest.left = a7;
  top = a8;
  right = a9 + a7;
  prclDest.top = a8;
  bottom = a10 + a8;
  prclDest.right = a9 + a7;
  prclDest.bottom = a10 + a8;
  if ( (v40 & 0x43) != 0x43 )
  {
    bCvtPts1((__int64)v39, &prclDest.left, 2LL);
    v37 = v372;
    v38 = v388;
    bottom = prclDest.bottom;
    right = prclDest.right;
    top = prclDest.top;
    left = prclDest.left;
  }
  if ( v38 )
  {
    ++left;
    ++right;
    prclDest.left = left;
    prclDest.right = right;
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
  if ( (*((_DWORD *)v37 + 8) & 1) != 0 && (v374 || v41 <= *(float *)v37 && v41 <= *((float *)v37 + 3)) )
  {
    v46 = a2 + a4;
    v47 = a3 + a5;
    v48 = a2;
    v446.m128i_i32[3] = a3 + a5;
    v446.m128i_i64[0] = __PAIR64__(a3, a2);
    v49 = a3;
    v446.m128i_i32[2] = a2 + a4;
    if ( (v37[32] & 0x43) != 0x43 )
    {
      bCvtPts1((__int64)v37, v446.m128i_i32, 2LL);
      v47 = v446.m128i_i32[3];
      v49 = v446.m128i_i32[1];
      v48 = v446.m128i_i32[0];
      v46 = v446.m128i_i32[2];
    }
    v50 = 0;
    if ( v374 )
    {
      ++v48;
      ++v46;
      v446.m128i_i32[0] = v48;
      v446.m128i_i32[2] = v46;
    }
    if ( v48 > v46 )
    {
      v51 = v48;
      v48 = v46;
      v446.m128i_i32[0] = v46;
      v46 = v51;
      v446.m128i_i32[2] = v51;
    }
    v30 = 1;
    if ( v49 > v47 )
    {
      v52 = v49;
      v446.m128i_i32[1] = v47;
      v49 = v47;
      v446.m128i_i32[3] = v52;
      v47 = v52;
    }
    goto LABEL_135;
  }
  v467.x = a2;
  v468 = a2 + a4;
  v30 = 1;
  v467.y = a3;
  v469 = a3;
  v471 = a3 + a5;
  v50 = 1;
  v470 = a2;
  EXFORMOBJ::bXform((EXFORMOBJ *)&v372, &v467, &v460, 3uLL);
  v53 = v461;
  x = v460.x;
  if ( (*((_DWORD *)v372 + 8) & 1) != 0 )
  {
    if ( v460.x > v461 )
    {
      x = v460.x + 16;
      v53 = v461 + 16;
      v463 += 16;
      v460.x += 16;
      v461 += 16;
    }
    y = v460.y;
    v55 = v464;
    if ( v460.y > v464 )
    {
      y = v460.y + 16;
      v57 = v462 + 16;
      v460.y += 16;
      v55 = v464 + 16;
      v462 += 16;
      v464 += 16;
      goto LABEL_130;
    }
  }
  else
  {
    v55 = v464;
    y = v460.y;
  }
  v57 = v462;
LABEL_130:
  v465 = v53 + v463 - x;
  v466 = v55 + v57 - y;
  v58 = (v53 > x) ^ (unsigned int)(v53 <= v465);
  v59 = (v57 > y) ^ (unsigned int)(v57 <= v466);
  if ( *(&v460.x + 2 * v58) > *(&v460.x + 2 * ((unsigned int)v58 ^ 3LL)) )
    v58 = (unsigned int)v58 ^ 3;
  if ( *(&v460.y + 2 * v59) > *(&v460.y + 2 * ((unsigned int)v59 ^ 3LL)) )
    LODWORD(v59) = v59 ^ 3;
  v60 = (unsigned int)v59;
  v61 = (unsigned int)v58 ^ 3LL;
  v48 = (*(&v460.x + 2 * v58) + 15) >> 4;
  v62 = *(&v460.y + 2 * v60);
  v446.m128i_i32[0] = v48;
  v49 = (v62 + 15) >> 4;
  v46 = (*(&v460.x + 2 * v61) + 15) >> 4;
  v47 = (*(&v460.y + 2 * (v60 ^ 3)) + 15) >> 4;
  v446.m128i_i32[1] = v49;
  v446.m128i_i64[1] = __PAIR64__(v47, v46);
LABEL_135:
  if ( v48 == v46 || v49 == v47 )
    goto LABEL_61;
  if ( (*((_DWORD *)v362 + 9) & 0xE0) != 0 )
    XDCOBJ::vAccumulate((XDCOBJ *)&v362, (struct ERECTL *)&v446);
  v424 = 0LL;
  v425 = 0;
  v426 = 0;
  v427 = 0;
  v430 = 0LL;
  v431 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v432);
  v433 = 256;
  v434 = 0LL;
  v435 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v436);
  v437 = 256;
  memset(v422, 0, sizeof(v422));
  v428 = 0LL;
  v439 = 0LL;
  v423 = 0LL;
  v429 = 0;
  v438 = 0LL;
  v440 = 0LL;
  v443 = 0LL;
  v441 = 0LL;
  v442 = 0LL;
  v430 = 0LL;
  v434 = 0LL;
  if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v422, (struct XDCOBJ *)&v362, (struct XDCOBJ *)&v359, 0) )
  {
    v297 = XDCOBJ::bFullScreen((XDCOBJ *)&v359);
    v30 = XDCOBJ::bFullScreen((XDCOBJ *)&v362) | v297;
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v422, v298, v299);
    goto LABEL_61;
  }
  v65 = v362;
  v66 = *((_QWORD *)v362 + 62);
  v378 = v66;
  if ( !v66
    || (v67 = *(_QWORD *)(v66 + 128),
        v68 = *((_QWORD *)v362 + 11),
        v385 = v67,
        v69 = *((_QWORD *)v359 + 62),
        v355 = v68,
        (v357 = v69) == 0) )
  {
    v30 = 1;
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v422, v63, v64);
    goto LABEL_61;
  }
  if ( *(_DWORD *)(v69 + 656) )
  {
    if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v69 + 656) )
      goto LABEL_563;
    v65 = v362;
  }
  v70 = *(_DWORD *)(v69 + 112);
  if ( (v70 & 0x800) != 0 )
  {
    v71 = UserSurfaceAccessCheck(*(_QWORD *)(v69 + 648));
  }
  else
  {
    if ( (v70 & 0x10000000) == 0 )
      goto LABEL_155;
    v71 = UserScreenAccessCheck();
  }
  if ( !v71 )
    goto LABEL_563;
  v65 = v362;
LABEL_155:
  if ( ((*(_DWORD *)(v66 + 116) & 8) != 0 || *(_QWORD *)(v66 + 224))
    && _bittest16((const signed __int16 *)(v66 + 102), 9u) )
  {
    goto LABEL_563;
  }
  v72 = *(_DWORD *)(v66 + 112);
  if ( (v72 & 0x800) != 0 )
  {
    v73 = UserSurfaceAccessCheck(*(_QWORD *)(v66 + 648));
    goto LABEL_162;
  }
  if ( (v72 & 0x10000000) != 0 )
  {
    v73 = UserScreenAccessCheck();
LABEL_162:
    if ( v73 )
    {
      v65 = v362;
      goto LABEL_164;
    }
LABEL_563:
    EngSetLastError(6u);
    v30 = 0;
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v422, v295, v296);
    goto LABEL_61;
  }
LABEL_164:
  v345 = HIBYTE(a11) & 1;
  if ( (a11 & 0x1000000) != 0 )
  {
    v74 = *(_QWORD *)(v69 + 128);
    if ( *(_DWORD *)(v69 + 96) != 6
      || !v74
      || (v75 = *(_DWORD *)(v74 + 24), (v75 & 8) == 0)
      && ((v75 & 2) == 0 || (v76 = *(_DWORD **)(v74 + 112), *v76 != 16711680) || v76[1] != 65280 || v76[2] != 255) )
    {
      v77 = 87;
LABEL_561:
      EngSetLastError(v77);
      goto LABEL_562;
    }
  }
  v78 = *((_DWORD *)v65 + 10) & 1;
  v79 = _mm_cvtsi128_si32(v446);
  v421 = v446;
  v80 = *((int *)v65 + 2 * v78 + 254);
  v446.m128i_i32[0] = v79;
  if ( (unsigned __int64)(v80 + v79 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_560;
  if ( (unsigned __int64)(v80 + v446.m128i_i32[2] + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_560;
  v81 = *((int *)v65 + 2 * v78 + 255);
  if ( (unsigned __int64)(v81 + v446.m128i_i32[1] + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_560;
  if ( (unsigned __int64)(v81 + v446.m128i_i32[3] + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_560;
  v446.m128i_i32[0] = v80 + v79;
  v82 = v359;
  v446.m128i_i32[2] += *((_DWORD *)v65 + 2 * v78 + 254);
  v446.m128i_i32[1] += *((_DWORD *)v65 + 2 * v78 + 255);
  v446.m128i_i32[3] += *((_DWORD *)v65 + 2 * v78 + 255);
  v83 = *((_DWORD *)v359 + 10) & 1;
  v84 = *((int *)v359 + 2 * v83 + 254);
  if ( (unsigned __int64)(v84 + prclDest.left + 0x80000000LL) > 0xFFFFFFFF
    || (unsigned __int64)(v84 + prclDest.right + 0x80000000LL) > 0xFFFFFFFF
    || (v85 = *((int *)v359 + 2 * v83 + 255), (unsigned __int64)(v85 + prclDest.top + 0x80000000LL) > 0xFFFFFFFF)
    || (unsigned __int64)(v85 + prclDest.bottom + 0x80000000LL) > 0xFFFFFFFF )
  {
LABEL_560:
    v77 = 534;
    goto LABEL_561;
  }
  v86 = v84 + prclDest.left;
  v87 = v50;
  prclDest.left += v84;
  v88 = *((_DWORD *)v359 + 2 * v83 + 254) + prclDest.right;
  prclDest.right = v88;
  v89 = *((_DWORD *)v359 + 2 * v83 + 255) + prclDest.top;
  prclDest.top = v89;
  v90 = *((_DWORD *)v359 + 2 * v83 + 255) + prclDest.bottom;
  prclDest.bottom = v90;
  v18 = *(_WORD *)(v357 + 100) == 1;
  v91 = *(_DWORD **)(v357 + 48);
  v399 = v91;
  v306 = v50;
  if ( v18 && (v306 = v50, v91) && (v91[10] & 0x20000) != 0 )
  {
    v92 = v91[640];
    if ( v86 < v92
      || (v93 = v91[641], v89 < v93)
      || v88 > *(_DWORD *)(v357 + 56) + v92
      || (v94 = 0, v90 > v93 + *(_DWORD *)(v357 + 60)) )
    {
      v94 = 1;
    }
    v87 = v50;
    v306 = v50;
  }
  else if ( v86 < 0 || v89 < 0 || v88 > *(_DWORD *)(v357 + 56) || (v94 = 0, v90 > *(_DWORD *)(v357 + 60)) )
  {
    v94 = 1;
  }
  if ( v357 == v378 )
  {
    v420 = prclDest;
    ERECTL::operator*=(&v420.left, v446.m128i_i32);
    if ( !ERECTL::bEmpty((ERECTL *)&v420) )
    {
LABEL_559:
      EngSetLastError(0x57u);
      v30 = 0;
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v422, v293, v294);
      goto LABEL_61;
    }
    v87 = v306;
    v82 = v359;
  }
  if ( v94 )
    goto LABEL_559;
  if ( BYTE2(a11) == 0xFF && !v345 && (a11 & 0x100) == 0 )
  {
    v95 = *((_QWORD *)v65 + 122);
    v96 = *(_BYTE *)(v95 + 215);
    *(_BYTE *)(v95 + 215) = 3;
    v30 = GreStretchBltInternal((HDC)a1, a5, (__int64)pxlo, a7, a8, v365, v366, 13369376, -1, 0);
    v97 = *((_QWORD *)v362 + 122);
    *(_BYTE *)(v97 + 215) = v96;
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v422, v97, v98);
    goto LABEL_61;
  }
  v99 = (unsigned int *)*((_QWORD *)v82 + 122);
  v100 = *(_QWORD *)(v357 + 128);
  v101 = *((_QWORD *)v82 + 11);
  v344 = v99[45];
  v102 = (Gre::Base *)v99[44];
  v103 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 6008LL);
  v318 = v99[46];
  v367 = 0LL;
  v325 = (int)v102;
  if ( !v100 )
  {
    if ( v67 )
    {
      v104 = v87;
      if ( (*(_DWORD *)(v67 + 24) & 0x800) == 0
        || (v111 = *(_QWORD *)(v68 + 80), v301 = v87, v111) && (v301 = v87, v111 != *(_QWORD *)(v68 + 72)) )
      {
LABEL_213:
        v87 = v104;
        if ( !v100 )
        {
          v112 = v104;
          v300 = v104;
          goto LABEL_250;
        }
        goto LABEL_214;
      }
    }
    else
    {
      v301 = v87;
    }
    v144 = Gre::Base::Globals(v102);
    v137 = (unsigned __int64)v359;
    v106 = 1;
    v348 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v144 + 6896);
    v107 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v144 + 6896);
    v350 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v144 + 6896);
    v145 = *((_QWORD *)v359 + 122);
    v109 = *(_DWORD *)(v145 + 176);
    v110 = *(_DWORD *)(v145 + 184);
    v136 = v301;
    goto LABEL_269;
  }
  if ( !v67 )
  {
    v104 = v87;
    if ( (*(_DWORD *)(v100 + 24) & 0x800) != 0 )
    {
      v105 = *(_QWORD *)(v68 + 80);
      if ( !v105 || v105 == *(_QWORD *)(v68 + 72) )
      {
        v106 = 1;
        v300 = v306;
        v348 = (struct Gre::Base::SESSION_GLOBALS *)((char *)Gre::Base::Globals(v102) + 6896);
        v107 = v348;
        v350 = v348;
        v335 = (HDC)v348;
        v108 = *((_QWORD *)v359 + 122);
        v109 = *(_DWORD *)(v108 + 176);
        v110 = *(_DWORD *)(v108 + 184);
        goto LABEL_260;
      }
    }
    goto LABEL_213;
  }
LABEL_214:
  v300 = v87;
  v112 = v87;
  if ( v67 )
  {
    v113 = *(_QWORD *)(v100 + 120);
    v114 = v113 == v100 ? *(_DWORD *)(v100 + 32) : *(_DWORD *)(v113 + 32);
    v115 = *(_QWORD *)(v67 + 120);
    v102 = v115 == v67 ? (Gre::Base *)*(unsigned int *)(v67 + 32) : (Gre::Base *)*(unsigned int *)(v115 + 32);
    if ( v114 == (_DWORD)v102 )
    {
      v106 = 1;
      v348 = (struct Gre::Base::SESSION_GLOBALS *)((char *)Gre::Base::Globals(v102) + 6896);
      v107 = v348;
      v350 = v348;
      v116 = *((_QWORD *)v359 + 122);
      v335 = (HDC)v348;
      v109 = *(_DWORD *)(v116 + 176);
      v110 = *(_DWORD *)(v116 + 184);
      goto LABEL_261;
    }
  }
  v300 = v112;
  if ( !v67 )
  {
    v300 = v112;
    goto LABEL_250;
  }
  v307 = *(_DWORD *)(v100 + 56);
  v414 = v68;
  v415 = v101;
  v404 = v67;
  v349 = Gre::Base::Globals(v102);
  v117 = *((_QWORD *)v349 + 5);
  v400 = v117;
  GreAcquireSemaphore(v117);
  v118 = *(XLATEOBJ **)(v100 + 120);
  pxlo = v118;
  LODWORD(v351) = 0;
  while ( 1 )
  {
    if ( v118 == (XLATEOBJ *)v100 )
      v119 = *(_DWORD *)(v100 + 32);
    else
      v119 = *(_DWORD *)&v118[1].iSrcType;
    v112 = v300;
    if ( *((_DWORD *)v349 + 8 * v307 + 1662) != v119 )
      goto LABEL_242;
    v120 = XEPALOBJ::ulTime((XEPALOBJ *)&v404);
    if ( *(_DWORD *)(v123 + v122 + 6652) != v120 )
      goto LABEL_242;
    v300 = v121;
    v124 = XEPALOBJ::ulTime((XEPALOBJ *)&v414);
    if ( *(_DWORD *)(v127 + v125 + 6660) != v124 )
      goto LABEL_242;
    v128 = *(Gre::Base **)(v127 + v125 + 6640);
    v350 = v128;
    v300 = v126;
    if ( (*((_DWORD *)v128 + 19) & 0x6000) != 0 )
      goto LABEL_242;
    v129 = *((_DWORD *)v128 + 19) & 0x100;
    if ( (*((_DWORD *)v128 + 1) & 4) != 0 )
    {
      v300 = v126;
      if ( v344 == *((_DWORD *)v128 + 6) )
      {
        v300 = v126;
        v131 = XEPALOBJ::ulTime((XEPALOBJ *)&v415);
        v130 = v349;
        if ( *((_DWORD *)v349 + 8 * v307 + 1664) == v131 )
          goto LABEL_245;
      }
      else
      {
        v130 = v349;
      }
      if ( !v129 )
        goto LABEL_242;
      goto LABEL_240;
    }
    if ( !v129 )
      break;
    v300 = v126;
    v130 = v349;
LABEL_240:
    if ( v318 == *((_DWORD *)v128 + 7) && v325 == *((_DWORD *)v128 + 8) )
      goto LABEL_245;
LABEL_242:
    v307 = ((_BYTE)v307 + 1) & 7;
    LODWORD(v351) = (_DWORD)v351 + 1;
    if ( (unsigned int)v351 >= 8 )
    {
      if ( v117 )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem");
        GreReleaseSemaphoreInternal(v117);
        v112 = v300;
      }
LABEL_250:
      v133 = v112;
      XlateObject = (Gre::Base *)CreateXlateObject(0LL, 0LL, v100, v67, v101, v68, v318, v325, v344, 0);
      v348 = XlateObject;
      v135 = XlateObject;
      v350 = XlateObject;
      if ( XlateObject )
      {
        if ( v100 )
        {
          v300 = v133;
          if ( v67 )
          {
            if ( (*((_DWORD *)XlateObject + 19) & 0x200) == 0 )
            {
              EXLATEOBJ::vAddToCache((Gre::Base *)&v350, v100, v67, v101, v355);
              v300 = v133;
            }
            v136 = v133;
            v106 = 1;
          }
          else
          {
            v136 = v133;
            v106 = 1;
            v300 = v136;
          }
        }
        else
        {
          v136 = v300;
          v106 = 1;
        }
      }
      else
      {
        v136 = v300;
        v106 = 0;
      }
      v107 = v135;
      v335 = (HDC)v135;
      v137 = *((_QWORD *)v359 + 122);
      v109 = *(_DWORD *)(v137 + 176);
      v110 = *(_DWORD *)(v137 + 184);
      if ( v100 )
      {
LABEL_260:
        v68 = v355;
        goto LABEL_261;
      }
      v68 = v355;
LABEL_269:
      v313 = v106;
      v146 = v107;
      v319 = v110;
      v147 = v106;
      v321 = v107;
      v148 = v110;
      v300 = v136;
      v149 = v109;
      v308 = v109;
      v150 = v147;
      if ( v103 )
      {
        v138 = v136;
        v139 = v146;
        if ( (*(_DWORD *)(v103 + 24) & 0x800) == 0 )
          goto LABEL_275;
        v151 = *(_QWORD *)(v101 + 80);
        v300 = v136;
        v313 = v150;
        v321 = v146;
        if ( v151 )
        {
          v300 = v136;
          v308 = v109;
          v313 = v150;
          v321 = v146;
          v319 = v148;
          if ( v151 != *(_QWORD *)(v101 + 72) )
          {
            v149 = v109;
            goto LABEL_275;
          }
        }
      }
LABEL_284:
      v141 = Gre::Base::Globals((Gre::Base *)v137);
      v142 = v300;
      v143 = v321;
LABEL_285:
      v155 = (XLATEOBJ *)((char *)v141 + 6896);
      v352 = (XLATEOBJ *)((char *)v141 + 6896);
LABEL_286:
      v156 = v348;
LABEL_287:
      v157 = 1;
      goto LABEL_288;
    }
    v118 = pxlo;
  }
  v130 = v349;
LABEL_245:
  v300 = v112;
  _InterlockedIncrement((volatile signed __int32 *)((char *)v130 + v127 + 6632));
  *(_DWORD *)(v100 + 56) = v307;
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v400);
  v106 = 1;
  v132 = *((_QWORD *)v359 + 122);
  v348 = v350;
  v107 = v350;
  v335 = (HDC)v350;
  v109 = *(_DWORD *)(v132 + 176);
  v110 = *(_DWORD *)(v132 + 184);
LABEL_261:
  v137 = v300;
  v138 = v300;
  v312 = v106;
  v139 = v107;
  v308 = v109;
  v319 = v110;
  if ( !v103 )
  {
    v312 = v106;
    v308 = v109;
    v319 = v110;
    if ( (*(_DWORD *)(v100 + 24) & 0x800) != 0 )
    {
      v140 = *(_QWORD *)(v101 + 80);
      if ( !v140 || (v312 = v106, v308 = v109, v319 = v110, v140 == *(_QWORD *)(v101 + 72)) )
      {
        v141 = Gre::Base::Globals((Gre::Base *)v300);
        v142 = v300;
        v143 = (Gre::Base *)v335;
        v313 = v106;
        goto LABEL_285;
      }
    }
  }
  v150 = v312;
  v149 = v109;
  v148 = v319;
LABEL_275:
  v322 = v139;
  v313 = v150;
  v300 = v138;
  if ( !v100 )
  {
LABEL_327:
    v319 = v148;
    goto LABEL_320;
  }
  v321 = v139;
  v313 = v150;
  v300 = v138;
  if ( v103 )
  {
    v152 = *(_QWORD *)(v100 + 120);
    if ( v152 == v100 )
      v153 = *(_DWORD *)(v100 + 32);
    else
      v153 = *(_DWORD *)(v152 + 32);
    v154 = *(_QWORD *)(v103 + 120);
    if ( v154 == v103 )
      v137 = *(unsigned int *)(v103 + 32);
    else
      v137 = *(unsigned int *)(v154 + 32);
    if ( v153 == (_DWORD)v137 )
      goto LABEL_284;
  }
  else
  {
    v308 = v149;
    v319 = v148;
  }
  v322 = v139;
  v313 = v150;
  if ( !v103 )
  {
    v300 = v138;
    v313 = v150;
    v322 = v139;
    goto LABEL_327;
  }
  v326 = *(_DWORD *)(v100 + 56);
  v402 = v101;
  v403 = v101;
  v401 = v103;
  pxlo = (XLATEOBJ *)Gre::Base::Globals((Gre::Base *)v137);
  pulXlate = pxlo[1].pulXlate;
  v390 = pulXlate;
  GreAcquireSemaphore(pulXlate);
  v172 = *(_QWORD *)(v100 + 120);
  v149 = v308;
  v173 = v319;
  v174 = v326;
  v371 = v172;
  v328 = 0;
  while ( 1 )
  {
    v340 = v173;
    if ( v172 == v100 )
      v175 = *(_DWORD *)(v100 + 32);
    else
      v175 = *(_DWORD *)(v172 + 32);
    v139 = v322;
    LODWORD(v351) = v313;
    v370 = (unsigned int)v174;
    v356 = 32 * v174;
    v300 = v138;
    if ( *(&pxlo[277].iUniq + 8 * v174) != v175
      || (v300 = v138, v176 = XEPALOBJ::ulTime((XEPALOBJ *)&v401), *(_DWORD *)(v177 + v178 + 6652) != v176)
      || (v300 = v138, v179 = XEPALOBJ::ulTime((XEPALOBJ *)&v402), *(_DWORD *)(v180 + v181 + 6660) != v179)
      || (v182 = *(Gre::Base **)(v180 + v181 + 6640),
          v352 = (XLATEOBJ *)v182,
          v300 = v138,
          (*((_DWORD *)v182 + 19) & 0x6000) != 0) )
    {
LABEL_314:
      v173 = v319;
      goto LABEL_315;
    }
    v183 = *((_DWORD *)v182 + 19) & 0x100;
    if ( (*((_DWORD *)v182 + 1) & 4) != 0 )
    {
      v319 = v340;
      v300 = v138;
      v313 = (int)v351;
      v322 = v139;
      v308 = v149;
      if ( v344 == *((_DWORD *)v182 + 6) )
      {
        v313 = (int)v351;
        v300 = v138;
        v322 = v139;
        v308 = v149;
        v319 = v340;
        v184 = XEPALOBJ::ulTime((XEPALOBJ *)&v403);
        if ( *((_DWORD *)&pxlo[277].iSrcType + 8 * v370) == v184 )
          goto LABEL_313;
      }
      if ( !v183 )
        goto LABEL_314;
    }
    else
    {
      if ( !v183 )
        goto LABEL_312;
      v300 = v138;
    }
    v173 = v319;
    if ( v319 == *((_DWORD *)v182 + 7) && v149 == *((_DWORD *)v182 + 8) )
    {
LABEL_312:
      v185 = v313;
LABEL_313:
      v323 = v139;
      v313 = v185;
      v300 = v138;
      _InterlockedIncrement((volatile signed __int32 *)((char *)&pxlo[276].iSrcType + v356));
      *(_DWORD *)(v100 + 56) = v326;
      SEMOBJ::~SEMOBJ((SEMOBJ *)&v390);
      v156 = v350;
      v155 = v352;
      v142 = v300;
      v143 = v323;
      v348 = v350;
      goto LABEL_287;
    }
LABEL_315:
    v174 = ((_BYTE)v326 + 1) & 7;
    v326 = ((_BYTE)v326 + 1) & 7;
    if ( (unsigned int)++v328 >= 8 )
      break;
    v172 = v371;
  }
  if ( pulXlate )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(pulXlate);
    v139 = v322;
    v149 = v308;
  }
  v150 = v313;
LABEL_320:
  v186 = v139;
  v329 = v150;
  v341 = v138;
  v352 = (XLATEOBJ *)CreateXlateObject(0LL, 0LL, v100, v103, v101, v101, v319, v149, v344, 0);
  v155 = v352;
  if ( v352 )
  {
    if ( v100 )
    {
      v142 = v341;
      v313 = v329;
      v300 = v341;
      if ( v103 )
      {
        if ( (v352[3].flXlate & 0x200) == 0 )
        {
          EXLATEOBJ::vAddToCache((Gre::Base *)&v352, v100, v103, v101, v101);
          v142 = v341;
        }
        v143 = v186;
      }
      else
      {
        v300 = v341;
        v143 = v186;
        v313 = v329;
      }
    }
    else
    {
      v142 = v300;
      v143 = v322;
    }
    goto LABEL_286;
  }
  v156 = v348;
  v157 = 0;
  v142 = v300;
  v143 = v322;
LABEL_288:
  v314 = v157 & v313;
  v158 = v385;
  pxlo = v155;
  v159 = (Gre::Base *)*((_QWORD *)v359 + 122);
  v339 = *((_DWORD *)v159 + 44);
  v346 = *((_DWORD *)v159 + 46);
  if ( !v385 )
  {
    if ( v103 )
    {
      v160 = v142;
      v161 = v143;
      if ( (*(_DWORD *)(v103 + 24) & 0x800) == 0 )
        goto LABEL_335;
      v187 = *(_QWORD *)(v68 + 80);
      v302 = v142;
      v324 = v143;
      if ( v187 )
      {
        v302 = v142;
        v324 = v143;
        if ( v187 != *(_QWORD *)(v68 + 72) )
          goto LABEL_335;
      }
    }
    else
    {
      v302 = v142;
      v324 = v143;
    }
    v166 = (struct Gre::Base::SESSION_GLOBALS *)((char *)Gre::Base::Globals(v159) + 6896);
    v354 = v166;
    goto LABEL_381;
  }
  if ( !v103 )
  {
    v160 = v142;
    v161 = v143;
    if ( (*(_DWORD *)(v385 + 24) & 0x800) != 0 )
    {
      v162 = *(_QWORD *)(v68 + 80);
      if ( !v162 || v162 == *(_QWORD *)(v68 + 72) )
      {
        v163 = Gre::Base::Globals(v159);
        v164 = v300;
        v165 = v314 & 1;
        v166 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v163 + 6896);
        v354 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v163 + 6896);
        v167 = *((_QWORD *)v359 + 122);
        v168 = v143;
        v169 = *(_DWORD *)(v167 + 176);
        v170 = *(_DWORD *)(v167 + 184);
LABEL_390:
        v324 = v168;
        v214 = (Gre::Base *)v165;
        v303 = v165;
        v212 = v164;
        v320 = v170;
        v221 = v168;
        v310 = v169;
        if ( v158 )
        {
          v216 = v168;
          v217 = v355;
          v215 = v212;
          v303 = (unsigned int)v214;
          if ( (*(_DWORD *)(v158 + 24) & 0x800) == 0 )
          {
            v213 = v169;
            v219 = v170;
            goto LABEL_395;
          }
          v356 = *(_QWORD *)(v355 + 80);
          v303 = (unsigned int)v214;
          v324 = v221;
          if ( v356 )
          {
            v303 = (unsigned int)v214;
            v215 = v212;
            v214 = (Gre::Base *)v356;
            v310 = v169;
            v219 = v170;
            v320 = v170;
            v324 = v221;
            if ( v356 != *(_QWORD *)(v355 + 72) )
              goto LABEL_394;
          }
        }
        v226 = Gre::Base::Globals(v214);
LABEL_449:
        v220 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v226 + 6896);
        goto LABEL_450;
      }
    }
LABEL_335:
    v324 = v161;
    v143 = v161;
    v302 = v160;
    v142 = v160;
    if ( !v385 )
      goto LABEL_371;
  }
  v324 = v143;
  v161 = v143;
  v302 = v142;
  v160 = v142;
  if ( v103 )
  {
    v188 = *(_QWORD *)(v385 + 120);
    v189 = v188 == v385 ? *(_DWORD *)(v385 + 32) : *(_DWORD *)(v188 + 32);
    v190 = *(_QWORD *)(v103 + 120);
    v159 = v190 == v103 ? (Gre::Base *)*(unsigned int *)(v103 + 32) : (Gre::Base *)*(unsigned int *)(v190 + 32);
    if ( v189 == (_DWORD)v159 )
    {
      v191 = Gre::Base::Globals(v159);
      v165 = v314 & 1;
      v315 = v165;
      v166 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v191 + 6896);
      v354 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v191 + 6896);
      v192 = *((_QWORD *)v359 + 122);
      v169 = *(_DWORD *)(v192 + 176);
      v170 = *(_DWORD *)(v192 + 184);
      goto LABEL_384;
    }
  }
  v324 = v143;
  v302 = v160;
  if ( !v103 )
  {
    v302 = v160;
    v324 = v143;
    goto LABEL_371;
  }
  v309 = *(_DWORD *)(v385 + 56);
  v392 = v68;
  v393 = v68;
  v391 = v103;
  v351 = Gre::Base::Globals(v159);
  v193 = *((_QWORD *)v351 + 5);
  v394 = v193;
  GreAcquireSemaphore(v193);
  v194 = *(_QWORD *)(v158 + 120);
  v161 = v324;
  v371 = v194;
  v330 = 0;
  while ( 2 )
  {
    if ( v194 == v158 )
      v195 = *(_DWORD *)(v158 + 32);
    else
      v195 = *(_DWORD *)(v194 + 32);
    v160 = v302;
    v370 = 32LL * v309;
    if ( *(_DWORD *)((char *)v351 + v370 + 6648) == v195 )
    {
      v196 = XEPALOBJ::ulTime((XEPALOBJ *)&v391);
      if ( *(_DWORD *)(v198 + v199 + 6652) == v196 )
      {
        v302 = v197;
        v200 = XEPALOBJ::ulTime((XEPALOBJ *)&v392);
        if ( *(_DWORD *)(v201 + v203 + 6660) == v200 )
        {
          v204 = *(Gre::Base **)(v201 + v203 + 6640);
          v354 = v204;
          v302 = v202;
          if ( (*((_DWORD *)v204 + 19) & 0x6000) == 0 )
          {
            v205 = *((_DWORD *)v204 + 19) & 0x100;
            if ( (*((_DWORD *)v204 + 1) & 4) != 0 )
            {
              v324 = v161;
              v302 = v160;
              if ( v344 == *((_DWORD *)v204 + 6) )
              {
                v302 = v160;
                v324 = v161;
                v207 = XEPALOBJ::ulTime((XEPALOBJ *)&v393);
                v206 = v351;
                if ( *((_DWORD *)v351 + 8 * v309 + 1664) == v207 )
                  goto LABEL_367;
              }
              else
              {
                v206 = v351;
              }
              if ( v205 )
                goto LABEL_362;
            }
            else
            {
              if ( !v205 )
              {
                v206 = v351;
LABEL_367:
                v324 = v161;
                v302 = v160;
                _InterlockedIncrement((volatile signed __int32 *)((char *)v206 + v370 + 6632));
                *(_DWORD *)(v158 + 56) = v309;
                SEMOBJ::~SEMOBJ((SEMOBJ *)&v394);
                v165 = v314 & 1;
                v156 = v350;
                v155 = v352;
                v166 = v354;
                v208 = *((_QWORD *)v359 + 122);
                v315 = v165;
                v348 = v350;
                v169 = *(_DWORD *)(v208 + 176);
                v170 = *(_DWORD *)(v208 + 184);
                goto LABEL_384;
              }
              v302 = v202;
              v206 = v351;
LABEL_362:
              if ( v346 == *((_DWORD *)v204 + 7) && v339 == *((_DWORD *)v204 + 8) )
                goto LABEL_367;
            }
          }
        }
      }
    }
    v309 = ((_BYTE)v309 + 1) & 7;
    if ( (unsigned int)++v330 < 8 )
    {
      v194 = v371;
      continue;
    }
    break;
  }
  if ( v193 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v193);
    v160 = v302;
    v161 = v324;
  }
LABEL_371:
  v209 = v161;
  v356 = (__int64)v161;
  v331 = v160;
  v354 = (Gre::Base *)CreateXlateObject(0LL, 0LL, v158, v103, v68, v68, v346, v339, v344, 0);
  v166 = v354;
  if ( !v354 )
  {
    v164 = v302;
    v210 = 0;
    goto LABEL_383;
  }
  if ( !v158 )
  {
LABEL_381:
    v164 = v302;
    goto LABEL_382;
  }
  v324 = v209;
  v302 = v331;
  if ( v103 )
  {
    if ( (*((_DWORD *)v354 + 19) & 0x200) != 0 )
    {
      v164 = v331;
    }
    else
    {
      EXLATEOBJ::vAddToCache((Gre::Base *)&v354, v158, v103, v355, v355);
      v164 = v331;
      v302 = v331;
    }
  }
  else
  {
    v164 = v331;
    v302 = v331;
    v324 = (Gre::Base *)v356;
  }
LABEL_382:
  v210 = 1;
LABEL_383:
  v165 = v210 & v314;
  v315 = v210 & v314;
  v211 = *((_QWORD *)v359 + 122);
  v169 = *(_DWORD *)(v211 + 176);
  v170 = *(_DWORD *)(v211 + 184);
  if ( !v103 )
  {
    v168 = v324;
    goto LABEL_390;
  }
LABEL_384:
  v212 = v302;
  v213 = v169;
  v214 = v324;
  v215 = v302;
  v303 = v165;
  v216 = v324;
  v310 = v169;
  v320 = v170;
  if ( v158 )
  {
    v217 = v355;
    goto LABEL_400;
  }
  v303 = v315;
  v217 = v355;
  v310 = v169;
  v320 = v170;
  if ( (*(_DWORD *)(v103 + 24) & 0x800) == 0 )
  {
LABEL_400:
    v219 = v170;
    goto LABEL_395;
  }
  v218 = *(_QWORD *)(v355 + 80);
  if ( !v218 || (v303 = v315, v216 = v324, v310 = v169, v219 = v170, v320 = v170, v218 == *(_QWORD *)(v355 + 72)) )
  {
    v220 = (struct Gre::Base::SESSION_GLOBALS *)((char *)Gre::Base::Globals(v324) + 6896);
    v303 = v315;
LABEL_450:
    v358 = v220;
    goto LABEL_451;
  }
LABEL_394:
  v213 = v310;
LABEL_395:
  v222 = v303;
  v324 = v216;
  v316 = v215;
  if ( !v103 )
    goto LABEL_439;
  v324 = v216;
  v317 = v215;
  if ( v158 )
  {
    v223 = *(_QWORD *)(v103 + 120);
    if ( v223 == v103 )
      v224 = *(_DWORD *)(v103 + 32);
    else
      v224 = *(_DWORD *)(v223 + 32);
    v214 = *(Gre::Base **)(v158 + 120);
    if ( v214 == (Gre::Base *)v158 )
      v225 = *(_DWORD *)(v158 + 32);
    else
      v225 = *((_DWORD *)v214 + 8);
    if ( v224 == v225 )
    {
      v226 = Gre::Base::Globals(v214);
      v212 = v317;
      goto LABEL_449;
    }
    v213 = v310;
    v222 = v303;
  }
  else
  {
    v310 = v213;
    v320 = v219;
  }
  v324 = v216;
  v303 = v222;
  v316 = v215;
  if ( !v158 )
  {
    v316 = v215;
    v303 = v222;
    v324 = v216;
    goto LABEL_439;
  }
  v396 = v217;
  v397 = v217;
  v327 = *(_DWORD *)(v103 + 56);
  v395 = v158;
  v336 = (HDC)Gre::Base::Globals(v214);
  v227 = *((_QWORD *)v336 + 5);
  v398 = v227;
  GreAcquireSemaphore(v227);
  v228 = *(_QWORD *)(v103 + 120);
  v213 = v310;
  v219 = v320;
  v371 = v228;
  v347 = 0;
  while ( 2 )
  {
    v342 = v219;
    v332 = v213;
    if ( v228 == v103 )
      v229 = *(_DWORD *)(v103 + 32);
    else
      v229 = *(_DWORD *)(v228 + 32);
    v215 = v316;
    v216 = v324;
    LODWORD(v351) = v303;
    v370 = 32LL * v327;
    if ( *(_DWORD *)((char *)v336 + v370 + 6648) == v229
      && (v230 = XEPALOBJ::ulTime((XEPALOBJ *)&v395), *(_DWORD *)((char *)v336 + v232 + 6652) == v230)
      && (v316 = v231, v233 = XEPALOBJ::ulTime((XEPALOBJ *)&v396), *(_DWORD *)((char *)v336 + v235 + 6660) == v233) )
    {
      v236 = *(Gre::Base **)((char *)v336 + v235 + 6640);
      v358 = v236;
      v316 = v234;
      if ( (*((_DWORD *)v236 + 19) & 0x6000) != 0 )
        goto LABEL_432;
      v237 = *((_DWORD *)v236 + 19) & 0x100;
      if ( (*((_DWORD *)v236 + 1) & 4) == 0 )
      {
        if ( !v237 )
          goto LABEL_433;
        v316 = v234;
        goto LABEL_425;
      }
      v310 = v332;
      v320 = v342;
      v324 = v216;
      v316 = v215;
      v303 = (unsigned int)v351;
      if ( v344 == *((_DWORD *)v236 + 6) )
      {
        v303 = (unsigned int)v351;
        v310 = v332;
        v324 = v216;
        v320 = v342;
        v316 = v215;
        if ( *((_DWORD *)v336 + 8 * v327 + 1664) == (unsigned int)XEPALOBJ::ulTime((XEPALOBJ *)&v397) )
          goto LABEL_434;
      }
      if ( !v237 )
      {
LABEL_432:
        v213 = v310;
        goto LABEL_428;
      }
LABEL_425:
      v219 = v320;
      if ( v320 == *((_DWORD *)v236 + 7) )
      {
        if ( v310 == *((_DWORD *)v236 + 8) )
        {
LABEL_433:
          v238 = v303;
LABEL_434:
          v324 = v216;
          v303 = v238;
          v316 = v215;
          _InterlockedIncrement((volatile signed __int32 *)((char *)v336 + v370 + 6632));
          *(_DWORD *)(v103 + 56) = v327;
          SEMOBJ::~SEMOBJ((SEMOBJ *)&v398);
          v156 = v350;
          v155 = v352;
          v166 = v354;
          v220 = v358;
          v348 = v350;
          goto LABEL_435;
        }
        v213 = v310;
        goto LABEL_428;
      }
      v213 = v310;
    }
    else
    {
LABEL_428:
      v219 = v320;
    }
    v327 = ((_BYTE)v327 + 1) & 7;
    if ( (unsigned int)++v347 < 8 )
    {
      v228 = v371;
      continue;
    }
    break;
  }
  if ( v227 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v227);
    v215 = v316;
    v216 = v324;
    v213 = v310;
    v219 = v320;
  }
  v222 = v303;
LABEL_439:
  v343 = v215;
  v333 = v222;
  v239 = v355;
  v356 = (__int64)v216;
  v358 = (Gre::Base *)CreateXlateObject(0LL, 0LL, v103, v158, v355, v355, v219, v213, v344, 0);
  v220 = v358;
  if ( v358 )
  {
    if ( !v103 )
    {
LABEL_435:
      v212 = v316;
      goto LABEL_451;
    }
    v324 = (Gre::Base *)v356;
    v303 = v333;
    if ( v385 )
    {
      if ( (*((_DWORD *)v358 + 19) & 0x200) == 0 )
      {
        EXLATEOBJ::vAddToCache((Gre::Base *)&v358, v103, v385, v239, v239);
        v212 = v343;
        goto LABEL_451;
      }
    }
    else
    {
      v303 = v333;
      v324 = (Gre::Base *)v356;
    }
    v212 = v343;
LABEL_451:
    v240 = 1;
  }
  else
  {
    v212 = v316;
    v240 = 0;
  }
  v241 = v362;
  inited = v240 & v303;
  v242 = *((_QWORD *)v362 + 146);
  if ( v242 && (*((_DWORD *)v362 + 10) & 2) != 0 && (unsigned int)DC::bDpiScaledSurface(v362) )
  {
LABEL_457:
    if ( (*((_DWORD *)v241 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v241) )
      goto LABEL_459;
  }
  else if ( *((_QWORD *)v241 + 144) )
  {
    if ( v242 )
      goto LABEL_457;
LABEL_459:
    v243 = (struct REGION *)*((_QWORD *)v241 + 144);
  }
  else
  {
    v243 = DC::prgnVisSnap(v241);
  }
  v455 = 0LL;
  v456 = 0LL;
  v457 = 0;
  v458 = 1;
  v459 = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v450, v243, (struct ERECTL *)&v446, 0);
  if ( v451 == v453 || v452 == v454 )
  {
    EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v358);
    EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v354);
    EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v352);
    EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v367);
    EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v350);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v422, v291, v292);
    DCOBJ::~DCOBJ((DCOBJ *)&v359);
    DCOBJ::~DCOBJ((DCOBJ *)&v362);
    return 1LL;
  }
  v244 = v324;
  v375 = 0LL;
  v376 = 0;
  v245 = *(_QWORD *)(v378 + 48);
  v246 = v212;
  v377 = 0;
  v337 = (HDC)v324;
  if ( !v368
    || (v337 = (HDC)v324, v246 = v212, v247 = *(_DWORD *)(*((_QWORD *)v362 + 122) + 108LL), (v247 & 1) == 0)
    || (v337 = (HDC)v324, (v247 & 9) == 9) )
  {
LABEL_473:
    v382 = 0LL;
    v383 = 0;
    v384 = 0;
    v379 = 0LL;
    v380 = 0;
    v381 = 0;
    if ( !v246 )
      goto LABEL_513;
    v408[1] = v446.m128i_i32[2] - v446.m128i_i32[0];
    v408[2] = v446.m128i_i32[3] - v446.m128i_i32[1];
    v408[3] = 0;
    v410 = 0LL;
    v251 = *(__int64 **)(*(_QWORD *)&pptlSrc + 6008LL);
    v408[0] = 6;
    v409 = *v251;
    v252 = SURFMEM::bCreateDIB((SURFMEM *)&v382, (struct _DEVBITMAPINFO *)v408, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) & inited;
    if ( v252 )
    {
      if ( !v345 )
      {
        v411[1] = prclDest.right - prclDest.left;
        v411[2] = prclDest.bottom - prclDest.top;
        v411[3] = 0;
        v253 = *(__int64 **)(*(_QWORD *)&pptlSrc + 6008LL);
        v413 = 0LL;
        v411[0] = 6;
        v412 = *v253;
        DIB = SURFMEM::bCreateDIB((SURFMEM *)&v379, (struct _DEVBITMAPINFO *)v411, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        v252 = DIB;
        if ( DIB )
        {
          v254 = prclDest.left;
          pptlSrc.x = prclDest.left;
          v368 = prclDest.top;
          pptlSrc.y = prclDest.top;
          if ( !(unsigned int)ERECTL::bOffsetSubtract((ERECTL *)&prclDest, &pptlSrc, 1) )
          {
            EngSetLastError(0x57u);
            SURFMEM::~SURFMEM((SURFMEM *)&v379);
            SURFMEM::~SURFMEM((SURFMEM *)&v382);
            goto LABEL_479;
          }
          if ( prclDest.right > prclDest.left && prclDest.bottom > prclDest.top )
          {
            v255 = (Gre::Base *)v357;
            if ( v254 <= *(_DWORD *)(v357 + 56) && v368 <= *(_DWORD *)(v357 + 60) )
            {
              v258 = (SURFOBJ *)(v379 + 24);
              if ( !v379 )
                v258 = 0LL;
              EngCopyBits(v258, (SURFOBJ *)(v357 + 24), 0LL, v155, &prclDest, &pptlSrc);
            }
          }
          v259 = v379;
          v260 = 0;
          v357 = v379;
          v261 = *(Gre::Base **)(v379 + 80);
          v262 = (Gre::Base *)((char *)v261 + *(_DWORD *)(v379 + 60) * *(_DWORD *)(v379 + 88));
          if ( v261 != v262 )
          {
            do
            {
              if ( v260 >= prclDest.top && v260 < prclDest.bottom )
              {
                v255 = v261;
                v263 = (Gre::Base *)((char *)v261 + 4 * *(int *)(v259 + 56));
                v264 = 0;
                if ( v261 != v263 )
                {
                  do
                  {
                    if ( v264 >= prclDest.left && v264 < prclDest.right )
                      *(_DWORD *)v255 |= 0xFF000000;
                    ++v264;
                    v255 = (Gre::Base *)((char *)v255 + 4);
                  }
                  while ( v255 != v263 );
                  v259 = v379;
                }
              }
              ++v260;
              v261 = (Gre::Base *)((char *)v261 + *(int *)(v259 + 88));
            }
            while ( v261 != v262 );
            v357 = v259;
          }
          v265 = Gre::Base::Globals(v255);
          v252 = DIB;
          HIBYTE(a11) |= 1u;
          pxlo = (XLATEOBJ *)((char *)v265 + 6896);
        }
      }
      v266 = *(_DWORD **)(v382 + 72);
      v267 = (unsigned __int64)*(unsigned int *)(v382 + 64) >> 2;
      if ( v267 )
      {
        if ( ((unsigned __int8)v266 & 4) == 0 )
          goto LABEL_503;
        *v266 = 0;
        if ( --v267 )
        {
          ++v266;
LABEL_503:
          memset(v266, 0, 8 * (v267 >> 1));
          if ( (v267 & 1) != 0 )
            v266[v267 - 1] = 0;
        }
      }
    }
    if ( !v252 )
    {
      EngSetLastError(8u);
      SURFMEM::~SURFMEM((SURFMEM *)&v379);
      SURFMEM::~SURFMEM((SURFMEM *)&v382);
      SURFMEM::~SURFMEM((SURFMEM *)&v375);
      EXLATEOBJ::vAltUnlock(&v358);
      EXLATEOBJ::vAltUnlock(&v354);
      EXLATEOBJ::vAltUnlock((Gre::Base **)&v352);
      EXLATEOBJ::vAltUnlock(&v367);
      EXLATEOBJ::vAltUnlock(&v350);
      goto LABEL_562;
    }
    `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
    LODWORD(v338) = v460.x - 16 * v421.m128i_i32[0];
    HIDWORD(v338) = v460.y - 16 * v421.m128i_i32[1];
    pptfx = (POINTFIX)v338;
    LODWORD(v338) = v461 - 16 * v421.m128i_i32[0];
    HIDWORD(v338) = v462 - 16 * v421.m128i_i32[1];
    v473 = v338;
    LODWORD(v338) = v463 - 16 * v421.m128i_i32[0];
    HIDWORD(v338) = v464 - 16 * v421.m128i_i32[1];
    v474 = v338;
    v268 = (SURFOBJ *)(v357 + 24);
    if ( !v357 )
      v268 = 0LL;
    if ( v382 )
      v269 = (SURFOBJ *)(v382 + 24);
    else
      v269 = 0LL;
    EngPlgBlt(v269, v268, 0LL, 0LL, pxlo, 0LL, 0LL, &pptfx, &prclDest, 0LL, 3u);
    inited = EXLATEOBJ::bInitXlateObj(
               (Gre::Base *)&v367,
               0LL,
               0,
               (__int64)v251,
               v385,
               0LL,
               v355,
               *(_DWORD *)(*((_QWORD *)v359 + 122) + 184LL),
               *(_DWORD *)(*((_QWORD *)v359 + 122) + 176LL),
               v344,
               0);
    v337 = (HDC)v367;
    v271 = Gre::Base::Globals(v270);
    *(_QWORD *)&prclDest.left = 0LL;
    pxlo = (XLATEOBJ *)((char *)v271 + 6896);
    v357 = v382;
    prclDest.right = v446.m128i_i32[2] - v446.m128i_i32[0];
    prclDest.bottom = v446.m128i_i32[3] - v446.m128i_i32[1];
    `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))vSrcCopyDummy);
    v156 = v348;
LABEL_513:
    if ( inited )
    {
      ++*(_DWORD *)(v378 + 92);
      v272 = v362;
      if ( *((_QWORD *)v362 + 6) == *((_QWORD *)v359 + 6)
        || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v362)
        && (v272 = v362,
            v244 = (struct ECLIPOBJ *)*((_QWORD *)v362 + 6),
            *((_QWORD *)v244 + 437) == *((_QWORD *)v359 + 6)) )
      {
        if ( (*((_DWORD *)v272 + 9) & 0xE0) != 0 )
        {
          v444 = v446;
          XDCOBJ::vAccumulateTight((XDCOBJ *)&v362, v244, &v444);
        }
        v416[1] = 0;
        v416[0] = a11;
        v417 = pxlo;
        v418 = v166;
        v419 = v220;
        if ( v446.m128i_i32[2] - v446.m128i_i32[0] == prclDest.right - prclDest.left
          && v446.m128i_i32[3] - v446.m128i_i32[1] == prclDest.bottom - prclDest.top )
        {
          BYTE1(v416[0]) = BYTE1(a11) & 0xFE;
        }
        if ( (*(_DWORD *)(v378 + 112) & 0x10000) != 0 )
          v274 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v245 + 3232);
        else
          v274 = EngAlphaBlend;
        if ( v357 )
          v275 = v357 + 24;
        else
          v275 = 0LL;
        v311 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, HDC, __m128i *, RECTL *, _DWORD *))v274)(
                 v378 + 24,
                 v275,
                 v450,
                 v337,
                 &v446,
                 &prclDest,
                 v416);
        goto LABEL_532;
      }
      v273 = 87;
    }
    else
    {
      v273 = 6;
    }
    EngSetLastError(v273);
    v311 = 0;
LABEL_532:
    SURFMEM::~SURFMEM((SURFMEM *)&v379);
    SURFMEM::~SURFMEM((SURFMEM *)&v382);
    SURFMEM::~SURFMEM((SURFMEM *)&v375);
    if ( v220 )
    {
      v279 = *((_DWORD *)v220 + 9);
      if ( v279 < 0 )
      {
        if ( v279 == -1 )
          FreeThreadBufferWithTag(v220);
      }
      else
      {
        v280 = Gre::Base::Globals(v277);
        v277 = (Gre::Base *)(32LL * *((int *)v220 + 9));
        _InterlockedDecrement((volatile signed __int32 *)((char *)v280 + (_QWORD)v277 + 6632));
        v156 = v350;
        v155 = v352;
        v166 = v354;
      }
    }
    if ( v166 )
    {
      v281 = *((_DWORD *)v166 + 9);
      if ( v281 < 0 )
      {
        if ( v281 == -1 )
          FreeThreadBufferWithTag(v166);
      }
      else
      {
        v282 = Gre::Base::Globals(v277);
        v277 = (Gre::Base *)(32LL * *((int *)v166 + 9));
        _InterlockedDecrement((volatile signed __int32 *)((char *)v282 + (_QWORD)v277 + 6632));
        v156 = v350;
        v155 = v352;
      }
    }
    if ( v155 )
    {
      cEntries = v155[1].cEntries;
      if ( cEntries < 0 )
      {
        if ( cEntries == -1 )
          FreeThreadBufferWithTag(v155);
      }
      else
      {
        v284 = Gre::Base::Globals(v277);
        v277 = (Gre::Base *)(32LL * (int)v155[1].cEntries);
        _InterlockedDecrement((volatile signed __int32 *)((char *)v284 + (_QWORD)v277 + 6632));
        v156 = v350;
      }
    }
    v285 = v367;
    if ( v367 )
    {
      v286 = *((_DWORD *)v367 + 9);
      if ( v286 < 0 )
      {
        if ( v286 == -1 )
          FreeThreadBufferWithTag(v367);
      }
      else
      {
        v287 = Gre::Base::Globals(v277);
        v277 = (Gre::Base *)(32LL * *((int *)v285 + 9));
        _InterlockedDecrement((volatile signed __int32 *)((char *)v287 + (_QWORD)v277 + 6632));
        v156 = v350;
      }
    }
    if ( v156 )
    {
      v288 = *((_DWORD *)v156 + 9);
      if ( v288 < 0 )
      {
        if ( v288 == -1 )
        {
          FreeThreadBufferWithTag(v156);
          v30 = v311;
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v422, v289, v290);
          goto LABEL_61;
        }
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v277) + 8 * *((int *)v156 + 9) + 1658);
      }
    }
    v30 = v311;
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v422, v276, v278);
LABEL_61:
    if ( v359 )
    {
      if ( (_DWORD)v360 && (*((_DWORD *)v359 + 11) & 2) != 0 )
      {
        if ( !HIDWORD(v360) )
        {
          v31 = XDCOBJ::GetUserAttr((XDCOBJ *)&v359);
          if ( v31 )
            DC::RestoreAttributes(v359, v31);
        }
        *((_DWORD *)v359 + 11) &= ~2u;
        LODWORD(v360) = 0;
      }
      v365 = 0;
      v32 = *(_QWORD *)v359;
      HmgDecrementExclusiveReferenceCountEx(v359, HIDWORD(v360), &v365);
      if ( v365 )
        GrepDeleteDC(v32, 0x2000000LL);
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v361);
    v33 = v362;
    if ( v362 )
    {
      if ( (_DWORD)v363 && (*((_DWORD *)v362 + 11) & 2) != 0 )
      {
        if ( !HIDWORD(v363) )
        {
          v34 = XDCOBJ::GetUserAttr((XDCOBJ *)&v362);
          v33 = v362;
          if ( v34 )
          {
            DC::RestoreAttributes(v362, v34);
            v33 = v362;
          }
        }
        *((_DWORD *)v33 + 11) &= ~2u;
        v33 = v362;
        LODWORD(v363) = 0;
      }
      v366 = 0;
      v35 = *(_QWORD *)v33;
      HmgDecrementExclusiveReferenceCountEx(v33, HIDWORD(v363), &v366);
      if ( v366 )
        GrepDeleteDC(v35, 0x2000000LL);
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v364);
    return v30;
  }
  v405[1] = *(_DWORD *)(v357 + 56);
  v405[2] = *(_DWORD *)(v357 + 60);
  v405[0] = *(_DWORD *)(v357 + 96);
  v248 = *(__int64 **)(v357 + 128);
  v405[3] = 0;
  v407 = 0LL;
  v406 = *v248;
  SURFMEM::bCreateDIB((SURFMEM *)&v375, (struct _DEVBITMAPINFO *)v405, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( v375 )
  {
    v447 = 0LL;
    v389 = 0LL;
    v18 = (*(_DWORD *)(v357 + 112) & 0x400) == 0;
    v448 = *(_DWORD *)(v357 + 56);
    v449 = *(_DWORD *)(v357 + 60);
    v249 = v18
         ? EngCopyBits
         : (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v399 + 352);
    if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *))v249)(
           v375 + 24,
           v357 + 24,
           0LL,
           0LL,
           &v447,
           &v389) )
    {
      v250 = *(_DWORD *)(v375 + 96);
      if ( (unsigned int)(v250 - 1) <= 5 )
      {
        ((void (*)(void))(&apfnMirror)[v250])();
        v357 = v375;
        v246 = v212;
        v337 = (HDC)v324;
        goto LABEL_473;
      }
    }
  }
LABEL_479:
  SURFMEM::~SURFMEM((SURFMEM *)&v375);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v358);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v354);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v352);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v367);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v350);
LABEL_562:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v422, v256, v257);
  DCOBJ::~DCOBJ((DCOBJ *)&v359);
LABEL_23:
  DCOBJ::~DCOBJ((DCOBJ *)&v362);
  return 0LL;
}
