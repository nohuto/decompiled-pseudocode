/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x14020C860
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x14020C790 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     _DestroyMenu @ 0x140070FA0 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x14007AA08 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     _SetCaretBlinkTime @ 0x1400925C0 (_SetCaretBlinkTime.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     xxxSetWindowNCMetrics @ 0x140112218 (xxxSetWindowNCMetrics.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x140112BF8 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     SetIconMetrics @ 0x140112D38 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x14011310C (SetMinMetrics.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14011349C (PopAndFreeAlwaysW32ThreadLock.c)
 *     GreTextInitialized @ 0x140113698 (GreTextInitialized.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140133644 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x14013495C (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxUserResetDisplayDevice @ 0x140135460 (xxxUserResetDisplayDevice.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x140152AA8 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1401CA8E8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     WakeRIT @ 0x1401E1108 (WakeRIT.c)
 *     ?CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z @ 0x1401E70C8 (-CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1401F1D08 (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1401FABA4 (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     GreSetFontEnumeration @ 0x1401FD4AC (GreSetFontEnumeration.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x140205514 (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x140207A74 (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     UpdatePerUserKeyboardIndicators @ 0x14020A510 (UpdatePerUserKeyboardIndicators.c)
 *     GetKbdLangSwitch @ 0x140211080 (GetKbdLangSwitch.c)
 *     GreSetLCDOrientation @ 0x1402197F0 (GreSetLCDOrientation.c)
 *     CheckEasPolicyChange @ 0x140228478 (CheckEasPolicyChange.c)
 *     SetMouseTrails @ 0x140239574 (SetMouseTrails.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x140274E78 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     AttachInputDevices @ 0x140279200 (AttachInputDevices.c)
 *     UnlockDesktopSysMenu @ 0x140282D08 (UnlockDesktopSysMenu.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxUpdatePerUserSystemParameters(int a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r14d
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 UserSessionState; // rax
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // r12d
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // r13d
  int v34; // r15d
  HANDLE v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  char v41; // di
  bool v42; // si
  char CurrentWin32kSessionId; // bl
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  HANDLE v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  struct _UNICODE_STRING *v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rbx
  void *v58; // rcx
  __int64 v59; // rax
  int v60; // eax
  __int64 v62; // rax
  unsigned int v63; // esi
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // ebx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r14
  int v79; // ebx
  Gre::Base *v80; // rcx
  int v81; // r12d
  struct Gre::Base::SESSION_GLOBALS *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rdx
  _QWORD *i; // rbx
  __int64 v100; // rdx
  struct _HEAD *v101; // rcx
  struct _HEAD *v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  unsigned int v105; // r14d
  __int64 *v106; // rbx
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rcx
  unsigned int v110; // r14d
  __int64 *v111; // rbx
  int v112; // edx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rdx
  volatile signed __int32 *v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  unsigned int j; // ebx
  __int64 v132; // rdx
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // rdx
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rcx
  int v159; // ebx
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rdx
  __int64 v163; // rcx
  void *v164; // rbx
  __int64 v165; // rdx
  __int64 v166; // rdx
  __int64 v167; // rdx
  __int64 v168; // rdx
  __int64 v169; // rdx
  int v170; // ecx
  int v171; // ebx
  unsigned int *v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rcx
  int v175; // ebx
  __int64 v176; // rdx
  int v177; // ecx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rcx
  __int64 v185; // rcx
  __int64 v186; // rdx
  __int64 v187; // rcx
  unsigned int *v188; // [rsp+20h] [rbp-E0h]
  unsigned int *v189; // [rsp+28h] [rbp-D8h]
  unsigned int v190; // [rsp+60h] [rbp-A0h] BYREF
  char v191; // [rsp+64h] [rbp-9Ch] BYREF
  _BYTE v192[3]; // [rsp+65h] [rbp-9Bh] BYREF
  int v193; // [rsp+68h] [rbp-98h]
  unsigned int v194; // [rsp+6Ch] [rbp-94h]
  unsigned int v195; // [rsp+70h] [rbp-90h] BYREF
  int v196; // [rsp+74h] [rbp-8Ch] BYREF
  int v197; // [rsp+78h] [rbp-88h] BYREF
  int v198; // [rsp+7Ch] [rbp-84h] BYREF
  int v199; // [rsp+80h] [rbp-80h] BYREF
  int v200; // [rsp+84h] [rbp-7Ch] BYREF
  int v201; // [rsp+88h] [rbp-78h] BYREF
  int v202; // [rsp+8Ch] [rbp-74h] BYREF
  int v203; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v204; // [rsp+94h] [rbp-6Ch] BYREF
  __int128 v205; // [rsp+98h] [rbp-68h] BYREF
  __int64 v206; // [rsp+A8h] [rbp-58h]
  __int64 v207[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct _HEAD *v208; // [rsp+C0h] [rbp-40h]
  __int64 v209; // [rsp+C8h] [rbp-38h]
  __int128 v210; // [rsp+D0h] [rbp-30h]
  __int64 v211; // [rsp+E0h] [rbp-20h]
  _BYTE v212[28]; // [rsp+F0h] [rbp-10h] BYREF
  int v213; // [rsp+10Ch] [rbp+Ch]
  int v214; // [rsp+140h] [rbp+40h]
  int v215; // [rsp+144h] [rbp+44h]
  __int64 v216; // [rsp+148h] [rbp+48h] BYREF
  int v217; // [rsp+150h] [rbp+50h]
  int v218; // [rsp+154h] [rbp+54h]
  __int64 v219; // [rsp+158h] [rbp+58h]
  int v220; // [rsp+160h] [rbp+60h]
  int v221; // [rsp+164h] [rbp+64h]
  int v222; // [rsp+168h] [rbp+68h]
  int v223; // [rsp+16Ch] [rbp+6Ch]
  int v224; // [rsp+170h] [rbp+70h]
  int v225; // [rsp+174h] [rbp+74h]
  int v226; // [rsp+178h] [rbp+78h]
  int v227; // [rsp+17Ch] [rbp+7Ch]
  int v228; // [rsp+180h] [rbp+80h]
  int v229; // [rsp+184h] [rbp+84h]
  int v230; // [rsp+188h] [rbp+88h]
  int v231; // [rsp+18Ch] [rbp+8Ch]
  int v232; // [rsp+190h] [rbp+90h]
  int v233; // [rsp+194h] [rbp+94h]
  int v234; // [rsp+198h] [rbp+98h]
  int v235; // [rsp+19Ch] [rbp+9Ch]
  int v236; // [rsp+1A0h] [rbp+A0h]
  int v237; // [rsp+1A4h] [rbp+A4h]
  int v238; // [rsp+1A8h] [rbp+A8h]
  int v239; // [rsp+1ACh] [rbp+ACh]
  int v240; // [rsp+1B0h] [rbp+B0h]
  int v241; // [rsp+1B4h] [rbp+B4h]
  int v242; // [rsp+1B8h] [rbp+B8h]
  int v243; // [rsp+1BCh] [rbp+BCh]
  int v244; // [rsp+1C0h] [rbp+C0h]
  int v245; // [rsp+1C4h] [rbp+C4h]
  int v246; // [rsp+1C8h] [rbp+C8h]
  int v247; // [rsp+1CCh] [rbp+CCh]
  int v248; // [rsp+1D0h] [rbp+D0h]
  int v249; // [rsp+1D4h] [rbp+D4h]
  int v250; // [rsp+1D8h] [rbp+D8h]
  int v251; // [rsp+1DCh] [rbp+DCh]
  int v252; // [rsp+1E0h] [rbp+E0h]
  int v253; // [rsp+1E4h] [rbp+E4h]
  __int64 v254; // [rsp+1E8h] [rbp+E8h]
  int v255; // [rsp+1F0h] [rbp+F0h]
  int v256; // [rsp+1F4h] [rbp+F4h]
  __int64 v257; // [rsp+1F8h] [rbp+F8h] BYREF
  int v258; // [rsp+200h] [rbp+100h]
  int v259; // [rsp+204h] [rbp+104h]
  int v260; // [rsp+208h] [rbp+108h]
  int v261; // [rsp+20Ch] [rbp+10Ch]
  int v262; // [rsp+210h] [rbp+110h]
  int v263; // [rsp+214h] [rbp+114h]
  int v264; // [rsp+218h] [rbp+118h]
  int v265; // [rsp+21Ch] [rbp+11Ch]
  int v266; // [rsp+220h] [rbp+120h]
  int v267; // [rsp+224h] [rbp+124h]
  int v268; // [rsp+228h] [rbp+128h]
  int v269; // [rsp+22Ch] [rbp+12Ch]
  int v270; // [rsp+230h] [rbp+130h]
  int v271; // [rsp+234h] [rbp+134h]
  int v272; // [rsp+238h] [rbp+138h]
  int v273; // [rsp+23Ch] [rbp+13Ch]
  int v274; // [rsp+240h] [rbp+140h]
  int v275; // [rsp+244h] [rbp+144h]
  __int64 v276; // [rsp+248h] [rbp+148h]
  int v277; // [rsp+250h] [rbp+150h]
  int v278; // [rsp+254h] [rbp+154h]
  __int64 v279; // [rsp+258h] [rbp+158h]
  int v280; // [rsp+260h] [rbp+160h]
  int v281; // [rsp+264h] [rbp+164h]
  int v282; // [rsp+268h] [rbp+168h]
  int v283; // [rsp+26Ch] [rbp+16Ch]
  int v284; // [rsp+270h] [rbp+170h]
  int v285; // [rsp+274h] [rbp+174h]
  int v286; // [rsp+278h] [rbp+178h]
  int v287; // [rsp+27Ch] [rbp+17Ch]
  int v288; // [rsp+280h] [rbp+180h]
  int v289; // [rsp+284h] [rbp+184h]
  int v290; // [rsp+288h] [rbp+188h]
  int v291; // [rsp+28Ch] [rbp+18Ch]
  int v292; // [rsp+290h] [rbp+190h]
  int v293; // [rsp+294h] [rbp+194h]
  int v294; // [rsp+298h] [rbp+198h]
  int v295; // [rsp+29Ch] [rbp+19Ch]
  int v296; // [rsp+2A0h] [rbp+1A0h]
  int v297; // [rsp+2A4h] [rbp+1A4h]
  int v298; // [rsp+2A8h] [rbp+1A8h]
  int v299; // [rsp+2ACh] [rbp+1ACh]
  int v300; // [rsp+2B0h] [rbp+1B0h]
  int v301; // [rsp+2B4h] [rbp+1B4h]
  int v302; // [rsp+2B8h] [rbp+1B8h]
  int v303; // [rsp+2BCh] [rbp+1BCh]
  int v304; // [rsp+2C0h] [rbp+1C0h]
  int v305; // [rsp+2C4h] [rbp+1C4h]
  int v306; // [rsp+2C8h] [rbp+1C8h]
  int v307; // [rsp+2CCh] [rbp+1CCh]
  int v308; // [rsp+2D0h] [rbp+1D0h]
  int v309; // [rsp+2D4h] [rbp+1D4h]
  __int64 v310; // [rsp+2D8h] [rbp+1D8h]
  int v311; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 v312; // [rsp+2E8h] [rbp+1E8h]
  int v313; // [rsp+2F0h] [rbp+1F0h]
  __int64 v314; // [rsp+2F8h] [rbp+1F8h]
  int v315; // [rsp+300h] [rbp+200h]
  __int64 v316; // [rsp+308h] [rbp+208h]
  int v317; // [rsp+310h] [rbp+210h]
  __int64 v318; // [rsp+318h] [rbp+218h]
  int v319; // [rsp+320h] [rbp+220h]
  __int64 v320; // [rsp+328h] [rbp+228h]
  int v321; // [rsp+330h] [rbp+230h]
  int *v322; // [rsp+338h] [rbp+238h]
  int v323; // [rsp+340h] [rbp+240h]
  __int64 v324; // [rsp+348h] [rbp+248h]
  int v325; // [rsp+350h] [rbp+250h]
  __int64 v326; // [rsp+358h] [rbp+258h]
  int v327; // [rsp+360h] [rbp+260h] BYREF
  __int64 v328; // [rsp+368h] [rbp+268h]
  int v329; // [rsp+370h] [rbp+270h]
  __int64 v330; // [rsp+378h] [rbp+278h]
  int v331; // [rsp+380h] [rbp+280h]
  __int64 v332; // [rsp+388h] [rbp+288h]
  int v333; // [rsp+390h] [rbp+290h]
  int *v334; // [rsp+398h] [rbp+298h]
  int v335; // [rsp+3A0h] [rbp+2A0h]
  __int64 v336; // [rsp+3A8h] [rbp+2A8h]
  int v337; // [rsp+3B0h] [rbp+2B0h]
  __int64 v338; // [rsp+3B8h] [rbp+2B8h]
  int v339; // [rsp+3C0h] [rbp+2C0h]
  __int64 v340; // [rsp+3C8h] [rbp+2C8h]
  int v341; // [rsp+3D0h] [rbp+2D0h]
  __int64 v342; // [rsp+3D8h] [rbp+2D8h]
  int v343; // [rsp+3E0h] [rbp+2E0h]
  __int64 v344; // [rsp+3E8h] [rbp+2E8h]
  int v345; // [rsp+3F0h] [rbp+2F0h]
  int *v346; // [rsp+3F8h] [rbp+2F8h]
  int v347; // [rsp+400h] [rbp+300h]
  __int64 v348; // [rsp+408h] [rbp+308h]
  int v349; // [rsp+410h] [rbp+310h]
  int *v350; // [rsp+418h] [rbp+318h]
  int v351; // [rsp+420h] [rbp+320h]
  __int64 v352; // [rsp+428h] [rbp+328h]
  int v353; // [rsp+430h] [rbp+330h]
  __int64 v354; // [rsp+438h] [rbp+338h]
  int v355; // [rsp+440h] [rbp+340h]
  __int64 v356; // [rsp+448h] [rbp+348h]
  int v357; // [rsp+450h] [rbp+350h]
  __int64 v358; // [rsp+458h] [rbp+358h]
  int v359; // [rsp+460h] [rbp+360h]
  __int64 v360; // [rsp+468h] [rbp+368h]
  int v361; // [rsp+470h] [rbp+370h]
  int *v362; // [rsp+478h] [rbp+378h]
  unsigned __int16 v363[40]; // [rsp+480h] [rbp+380h] BYREF
  _BYTE v364[80]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v209 = a2;
  v2 = a1;
  v197 = a1;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v196 = *(_DWORD *)(v3 + 20372);
  v195 = 96;
  v210 = 0LL;
  v5 = 0;
  v194 = 0;
  v6 = *(_DWORD *)(W32GetUserSessionState(v4, v3) + 67056);
  v211 = 0LL;
  v7 = v6 & 0x100000;
  v205 = 0LL;
  v202 = v7;
  v206 = -1LL;
  v200 = 0;
  UserSessionState = W32GetUserSessionState(v7, v8);
  v215 = 4135;
  v214 = 4;
  v216 = 112LL;
  v10 = *(_DWORD *)(UserSessionState + 67056) & 0x10000;
  v203 = 0;
  v201 = v10;
  v199 = 1;
  v217 = 4;
  v218 = 17;
  v255 = 13;
  v219 = 100LL;
  v220 = 4;
  v221 = 77;
  v222 = 199;
  v223 = 4;
  v224 = 4;
  v225 = 76;
  v226 = 198;
  v227 = 4;
  v228 = 4;
  v229 = 105;
  v230 = 14;
  v231 = 3;
  v232 = 4;
  v233 = 109;
  v234 = 15;
  v235 = 3;
  v236 = 4;
  v237 = 131;
  v238 = 18;
  v239 = 1;
  v240 = 4;
  v241 = 141;
  v242 = 624;
  v243 = 1;
  v244 = 4;
  v245 = 145;
  v246 = 625;
  v247 = 1;
  v248 = 4;
  v249 = 143;
  v250 = 626;
  v251 = 1;
  v252 = 4;
  v253 = 159;
  v254 = 628LL;
  v258 = 13;
  v260 = 13;
  v259 = 11;
  v271 = 30;
  v291 = 30;
  v299 = 30;
  v290 = 17;
  v303 = 50;
  v307 = 50;
  v256 = 23;
  v257 = 106LL;
  v261 = 15;
  v262 = 12;
  v263 = 32;
  v264 = 6;
  v265 = 500;
  v266 = 12;
  v267 = 29;
  v268 = 97;
  v269 = 4;
  v270 = 12;
  v272 = 98;
  v273 = 4;
  v274 = 12;
  v275 = 96;
  v276 = 7LL;
  v277 = 3;
  v278 = 28;
  v279 = 96LL;
  v280 = 35;
  v281 = 111;
  v282 = 236;
  v283 = 1;
  v284 = 12;
  v285 = 127;
  v286 = 16;
  v287 = 1;
  v288 = 12;
  v289 = 129;
  v292 = 12;
  v293 = 133;
  v294 = 19;
  v295 = 20;
  v296 = 12;
  v297 = 135;
  v298 = 20;
  v300 = 12;
  v301 = 137;
  v302 = 21;
  v304 = 12;
  v305 = 139;
  v306 = 22;
  v308 = 4;
  v309 = 169;
  v310 = 205LL;
  v327 = 4;
  v328 = 94LL;
  v329 = 400;
  v12 = W32GetUserSessionState(20LL, v11);
  v332 = 107LL;
  v331 = 4;
  v330 = v12 + 66072;
  v333 = 2;
  v334 = &v202;
  v335 = 4;
  v336 = 159LL;
  v337 = 3;
  v338 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19928) + 4996LL;
  v339 = 4;
  v340 = 160LL;
  v341 = 3;
  v16 = *(_QWORD *)(W32GetUserSessionState(v338, v15) + 19928);
  v346 = &v196;
  v342 = v16 + 5000;
  v343 = 4;
  v345 = 0;
  v349 = 0;
  v344 = 200LL;
  v347 = 4;
  v348 = 618LL;
  v350 = &v200;
  v351 = 4;
  v352 = 621LL;
  v353 = 5000;
  v18 = W32GetUserSessionState(0LL, v17);
  v355 = 4;
  v354 = v18 + 69368;
  v356 = 622LL;
  v357 = 5000;
  v21 = W32GetUserSessionState(v20, v19);
  v359 = 23;
  v360 = 149LL;
  v358 = v21 + 36472;
  v361 = 1;
  v362 = &v201;
  v311 = 12;
  v312 = 10LL;
  v313 = 6;
  v24 = W32GetUserSessionState(v23, v22);
  v315 = 12;
  v314 = v24 + 16288;
  v316 = 11LL;
  v317 = 10;
  v27 = W32GetUserSessionState(v26, v25);
  v319 = 12;
  v320 = 12LL;
  v318 = v27 + 16292;
  v322 = &v199;
  v321 = 1;
  v323 = 35;
  v324 = 237LL;
  v325 = 0;
  v30 = v2 & 4;
  v326 = W32GetUserSessionState(v29, v28) + 14708;
  v33 = v2 & 2;
  v193 = v30;
  v34 = v2 & 1;
  if ( (v2 & 0x10) != 0 )
  {
    v35 = *(HANDLE *)(W32GetUserSessionState(v32, v31) + 63584);
    if ( PsGetCurrentProcessId() != v35 )
    {
LABEL_3:
      LODWORD(v38) = 5;
LABEL_31:
      UserSetLastError(v38);
      goto LABEL_32;
    }
    if ( v33 || v34 || v30 )
    {
      LODWORD(v38) = 87;
      goto LABEL_31;
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v37, v36) + 356) )
    {
      v40 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || (v41 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v41 = 0;
      }
      v42 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v41 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
        v46 = W32GetUserSessionState(v45, v44);
        LOBYTE(v47) = v42;
        LOBYTE(v48) = v41;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v48,
          v47,
          *(_QWORD *)(v46 + 69416),
          4,
          20,
          11,
          (__int64)&WPP_6f3f2e22ce9e317051f30d9635f1d0e7_Traceguids,
          CurrentWin32kSessionId);
      }
      *(_DWORD *)(W32GetUserSessionState(v40, v39) + 356) = 0;
      AttachInputDevices(1LL);
      v51 = W32GetUserSessionState(v50, v49);
      CHidInput::HandleDirectStartStopDeviceReadRequest(*(CHidInput **)(v51 + 16840));
    }
  }
  else
  {
    if ( (v2 & 2) == 0 )
    {
      v52 = *(HANDLE *)(W32GetUserSessionState(v32, v31) + 63584);
      if ( PsGetCurrentProcessId() != v52 )
        goto LABEL_3;
    }
    v55 = (struct _UNICODE_STRING *)CreateProfileUserName(&v205);
    if ( !v55 )
    {
LABEL_32:
      if ( v206 != -1 )
        PopAndFreeAlwaysW32ThreadLock((__int64)&v205, v53);
      return 0LL;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v54, v53) + 63560) )
    {
      v57 = *(_QWORD *)(W32GetUserSessionState(v38, v56) + 63560);
      v58 = *(void **)(v57 + 208);
      if ( v58 )
        Win32FreePool(v58);
      v59 = Win32AllocPoolZInit(v55->Length, 1852863317LL);
      *(_QWORD *)(v57 + 208) = v59;
      if ( v59 )
      {
        *(_WORD *)(v57 + 202) = v55->Length;
        *(_WORD *)(v57 + 200) = 0;
        RtlCopyUnicodeString((PUNICODE_STRING)(v57 + 200), v55);
      }
      if ( v34 )
        WakeRIT(64LL, v56);
    }
    if ( v33 && !v30 )
    {
      v194 = CheckEasPolicyChange();
      v60 = CheckDesktopPolicyChange(v55);
      v38 = 0LL;
      if ( !v60 && !v194 )
        goto LABEL_31;
      v5 = 16;
    }
    if ( v34 )
    {
      v62 = W32GetUserSessionState(v38, v56);
      *(_DWORD *)(v62 + 62824) |= 2u;
    }
    v190 = 300;
    v63 = v5 | 8;
    if ( !v30 )
      v63 = v5;
    v64 = W32GetUserSessionState(v38, v56);
    FastGetProfileValue(v55, 4LL, 607LL, &v190, v64 + 64240, 4, v63);
    if ( *(int *)(W32GetUserSessionState(v66, v65) + 64240) > 0 )
    {
      v72 = 1000;
      if ( *(int *)(W32GetUserSessionState(v68, v67) + 64240) < 1000 )
        v72 = *(_DWORD *)(W32GetUserSessionState(v74, v73) + 64240);
      v69 = W32GetUserSessionState(v74, v73);
    }
    else
    {
      v69 = W32GetUserSessionState(v68, v67);
      v72 = 1000;
    }
    *(_DWORD *)(v69 + 64240) = v72;
    v75 = W32GetUserSessionState(v71, v70);
    v78 = v75;
    if ( v34 )
    {
      if ( !*(_DWORD *)(v75 + 66320) && !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        v189 = &v195;
        LODWORD(v188) = v63;
        FastGetProfileDwordEx(v55, 4LL, L"LogPixels", 0LL);
        v198 = 0;
        v79 = DrvInitializeDxgkrnlDpiCache(&v198);
        v81 = PerformLegacyDpiUpgrade(v55, v195);
        if ( v79 < 0
          || v198
          || (v82 = Gre::Base::Globals(v80), v77 = *((unsigned __int16 *)v82 + 540), *((_WORD *)v82 + 541) != (_WORD)v77)
          || v81
          || v195 )
        {
          GreReinitializeDpiSetting();
          v191 = 0;
          LOBYTE(v189) = 0;
          if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 516LL, 0LL, (_DWORD)v189, 0LL, 0LL, &v191, v209, 0LL) >= 0 )
          {
            if ( v191 )
              xxxUserResetDisplayDevice(v77, v76);
            W32GetUserSessionState(v77, v76);
            UserReinitializeStockFonts();
            *(_DWORD *)(v78 + 66320) = 1;
          }
        }
      }
    }
    v83 = W32GetUserSessionState(v77, v76);
    CInputGlobals::UpdateWakeOnInputDeviceTypesFromRegistry(*(CInputGlobals **)(v83 + 3064));
    LoadCPUserPreferences(v55, v63);
    if ( !v33 )
    {
      xxxODI_ColorInit(v55);
      LW_LoadResources(v55);
      if ( (unsigned int)GreTextInitialized(v85, v84, v86) )
        xxxSetWindowNCMetrics(v55, 0LL, -1);
      SetMinMetrics(v55, 0LL);
      SetIconMetrics(v55, 0LL);
      GetKbdLangSwitch(v55);
      ZwSetDefaultLocale(1u, 0);
      ZwSetDefaultUILanguage(0);
      v89 = W32GetUserSessionState(v88, v87);
      ZwQueryDefaultUILanguage((LANGID *)(*(_QWORD *)(v89 + 19928) + 7012LL));
      xxxLoadSomeStrings(v91, v90);
      if ( *(_QWORD *)(W32GetUserSessionState(v93, v92) + 63560) )
      {
        SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v207, v94);
        for ( i = *(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v97, v96) + 63560) + 16LL); i; i = (_QWORD *)i[4] )
        {
          v100 = i[7];
          if ( v100 )
          {
            v208 = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=((__int64)v207, v100);
            if ( UnlockDesktopSysMenu(i + 7) )
            {
              v101 = v208;
              if ( !v208 )
                v101 = *(struct _HEAD **)v207[0];
              DestroyMenu(v101);
            }
          }
          v98 = i[8];
          if ( v98 )
          {
            v208 = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=((__int64)v207, v98);
            if ( UnlockDesktopSysMenu(i + 8) )
            {
              v102 = v208;
              if ( !v208 )
                v102 = *(struct _HEAD **)v207[0];
              DestroyMenu(v102);
            }
          }
        }
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v207, v98);
      }
      v103 = W32GetUserSessionState(v95, v94);
      CCursorSizes::zzzRefreshSizes(*(CCursorSizes **)(v103 + 36400));
      xxxUpdateSystemCursorsFromRegistry((__int64)v55, 1u);
      xxxUpdateSystemIconsFromRegistry((__int64)v55, v104);
      v105 = 0;
      v106 = &v257;
      do
      {
        LODWORD(v189) = 0;
        v188 = &v190;
        if ( (unsigned int)FastGetProfileIntFromID(v55, *((unsigned int *)v106 - 2), *(unsigned int *)v106) )
          xxxSystemParametersInfo(*((unsigned int *)v106 - 1), v190, 0LL, 0x8000LL, &v190, 0);
        ++v105;
        v106 += 2;
      }
      while ( v105 < 0xF );
      FastGetProfileIntsW(v55, &v311, 4LL);
      LOBYTE(v107) = v199 != 0;
      EnableMouseAcceleration(v107);
    }
    xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0LL, v188, (_DWORD)v189);
    if ( v34 )
    {
      W32GetUserSessionState(v109, v108);
      FastGetProfileIntFromID(v55, 35LL, 236LL);
    }
    v110 = 0;
    v111 = &v216;
    do
    {
      if ( (unsigned int)FastGetProfileIntFromID(v55, *((unsigned int *)v111 - 2), *(unsigned int *)v111) )
        xxxSystemParametersInfo(*((unsigned int *)v111 - 1), v190, 0LL, 0x8000LL, &v190, v63);
      ++v110;
      v111 += 2;
    }
    while ( v110 < 0xB );
    v112 = v63;
    if ( v194 )
      v112 = 2;
    CalcScreenSaverTimeout(v55, v112);
    FastGetProfileIntsW(v55, &v327, 9LL);
    if ( v200 )
    {
      v116 = *(volatile signed __int32 **)(W32GetUserSessionState(v114, v113) + 19928);
      _InterlockedOr(v116, 0x200u);
    }
    else
    {
      v116 = *(volatile signed __int32 **)(W32GetUserSessionState(v114, v113) + 19928);
      _InterlockedAnd(v116, 0xFFFFFDFF);
    }
    if ( v201 )
    {
      v117 = W32GetUserSessionState(v116, v115);
      *(_DWORD *)(v117 + 67056) |= 0x10000u;
    }
    else
    {
      v120 = W32GetUserSessionState(v116, v115);
      *(_DWORD *)(v120 + 67056) &= ~0x10000u;
    }
    if ( v202 == 2 )
    {
      v121 = W32GetUserSessionState(v119, v118);
      if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(*(_QWORD *)(v121 + 57008) + 64LL), 119LL) )
      {
        v127 = W32GetUserSessionState(v123, v122);
        *(_DWORD *)(v127 + 67056) &= ~0x100000u;
      }
      else
      {
        v124 = W32GetUserSessionState(v123, v122);
        *(_DWORD *)(v124 + 67056) |= 0x100000u;
      }
      if ( v34 )
      {
        v128 = W32GetUserSessionState(v126, v125);
        RtlStringCchPrintfW(v363, 40LL, L"%d", (*(_DWORD *)(v128 + 67056) >> 20) & 1);
        RtlLoadStringOrError(107LL, v364, 40LL);
        FastWriteProfileStringW(v55, 4LL, v364, v363);
      }
    }
    else if ( v202 )
    {
      v129 = W32GetUserSessionState(v119, v118);
      *(_DWORD *)(v129 + 67056) |= 0x100000u;
    }
    else
    {
      v130 = W32GetUserSessionState(v119, v118);
      *(_DWORD *)(v130 + 67056) &= ~0x100000u;
    }
    v190 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v126, v125) + 19928) + 4984LL);
    if ( (unsigned int)FastGetProfileIntFromID(v55, 4LL, 4LL) )
      SetCaretBlinkTime(v190);
    if ( !v33 )
    {
      v194 = 0;
      FastGetProfileIntFromID(v55, 12LL, 608LL);
      UpdateMouseSensitivity(v194);
      for ( j = 0; j < 2; ++j )
      {
        ReadDefaultAccelerationCurves(j, v55);
        ResetAccelerationCurves(j);
      }
      FastGetProfileIntFromID(v55, 12LL, 613LL);
      SetMouseTrails(v190);
      FastGetProfileIntW(v55, 7LL, L"TTOnly", 0LL, &v190, 0);
      GreSetFontEnumeration(v190, v132);
      W32GetUserSessionState(v134, v133);
      W32GetUserSessionState(v136, v135);
      FastGetProfileIntFromID(v55, 12LL, 91LL);
      W32GetUserSessionState(v138, v137);
      W32GetUserSessionState(v140, v139);
      FastGetProfileIntFromID(v55, 12LL, 92LL);
      W32GetUserSessionState(v142, v141);
      W32GetUserSessionState(v144, v143);
      FastGetProfileIntFromID(v55, 12LL, 93LL);
      if ( *(_DWORD *)(W32GetUserSessionState(v146, v145) + 16284) < 0xAu )
        *(_DWORD *)(W32GetUserSessionState(v148, v147) + 16284) = 10;
      if ( *(_DWORD *)(W32GetUserSessionState(v148, v147) + 16284) > 0x7FFFFFFFu )
        *(_DWORD *)(W32GetUserSessionState(v150, v149) + 16284) = 0x7FFFFFFF;
      ReadRawMouseThrottlingThresholds(v55);
      UpdatePerUserKeyboardIndicators((__int64)v55, v151);
      InitScancodeMap(v153, v152);
      v156 = W32GetUserSessionState(v155, v154);
      FastGetProfileDword(v55, 24LL, L"Attributes", 0LL, v156 + 14184);
      v159 = (*(_DWORD *)(W32GetUserSessionState(v158, v157) + 14184) >> 15) & 2;
      *(_DWORD *)(W32GetUserSessionState(v161, v160) + 14184) = v159;
      xxxUpdatePerUserAccessPackSettings(v55);
    }
    v164 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL, 0LL);
    if ( v164 )
    {
      *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v163, v162) + 19928) + 2148LL) = 1;
      ZwClose(v164);
    }
    v165 = *(_QWORD *)(W32GetUserSessionState(v163, v162) + 19928);
    *(_DWORD *)(v165 + 2148) |= 2u;
    GreSetFontEnumeration(4, v165);
    GreSetFontEnumeration(32, v166);
    if ( (v196 & 2) != 0 )
      GreSetFontEnumeration(v196 | 4, v167);
    if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
      GreSetFontEnumeration(v196 | 0x30, v168);
    v171 = *(_DWORD *)UPDWORDPointer(8204LL);
    if ( !v171 )
      v171 = 1200;
    *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v170, v169) + 96) + 13456LL) = v171;
    v172 = (unsigned int *)UPDWORDPointer(8210LL);
    GreSetLCDOrientation(*v172);
    v175 = *(_DWORD *)(W32GetUserSessionState(v174, v173) + 67064) & 0x400;
    v179 = *(_QWORD *)(W32GetSessionState(v177, v176) + 96);
    *(_DWORD *)(v179 + 24320) = v175;
    if ( v197 == 2 )
      xxxUserResetDisplayDevice(v179, v178);
    FastGetProfileDword(0LL, 49LL, L"RestrictDebuggerForeground", 0LL, &v203);
    if ( v203 )
      *(_DWORD *)(W32GetUserSessionState(v181, v180) + 18908) = 1;
    if ( v34 )
    {
      memset_0(v212, 0, 0x44uLL);
      if ( (unsigned int)ReadPointerDeviceSettings(146LL, v212) )
      {
        if ( !v213 )
          SetTouchInputStatus(0LL);
      }
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v181, v180) + 62976) == 1 )
    {
      v197 = 0;
      *(_DWORD *)(W32GetUserSessionState(v183, v182) + 62976) = 0;
      UserLogError(3221226518LL);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v192, 1);
      ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, 7, &v197);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v192);
    }
    xxxDwmControl(1037LL, 0LL);
    LOBYTE(v184) = *(_DWORD *)UPDWORDPointer(8244LL) != 0;
    SendCrosshairEnabledStatusChanged(v184);
    v204 = 0;
    if ( (unsigned int)ReadPointerDeviceSettings(178LL, &v204) )
      SendCrosshairPropertiesChanged(v204);
    if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
      ReadInputHapticSettings();
    if ( v34 )
    {
      TraceLoggingAutoRotationStateEvent(v185, v39);
      _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v187, v186) + 19928), 0x400u);
    }
  }
  if ( v206 != -1 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v205, v39);
  return 1LL;
}
