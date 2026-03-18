/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x1C00D433C
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x1C00D5920 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C0018320 (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C001B600 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     WakeRIT @ 0x1C001CAC8 (WakeRIT.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C001D40C (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C002A700 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _DestroyMenu @ 0x1C0040040 (_DestroyMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C009893C (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     UnlockDesktopSysMenu @ 0x1C009D69C (UnlockDesktopSysMenu.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C009EC40 (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     GreTextInitialized @ 0x1C00CD5A0 (GreTextInitialized.c)
 *     SetIconMetrics @ 0x1C00D1B34 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00D1D50 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00D1EA0 (xxxSetWindowNCMetrics.c)
 *     GreSetFontEnumeration @ 0x1C00D5580 (GreSetFontEnumeration.c)
 *     _SetCaretBlinkTime @ 0x1C00D5620 (_SetCaretBlinkTime.c)
 *     GetKbdLangSwitch @ 0x1C00D5694 (GetKbdLangSwitch.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00D56FC (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     GreSetLCDOrientation @ 0x1C00D59CC (GreSetLCDOrientation.c)
 *     ?CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z @ 0x1C00D6160 (-CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C00D7DA0 (UpdatePerUserKeyboardIndicators.c)
 *     SetMouseTrails @ 0x1C00D8380 (SetMouseTrails.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00DE3A8 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00DFDE4 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00E10B4 (xxxUpdateSystemIconsFromRegistry.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     xxxUserResetDisplayDevice @ 0x1C0135180 (xxxUserResetDisplayDevice.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     CheckEasPolicyChange @ 0x1C01BA710 (CheckEasPolicyChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUpdatePerUserSystemParameters(Gre::Base *a1, __int64 a2)
{
  char v3; // bl
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r13d
  int v10; // r15d
  int v11; // esi
  struct _UNICODE_STRING *v13; // rdi
  __int64 v14; // rbx
  void *v15; // rcx
  __int64 v16; // rax
  USHORT Length; // ax
  int v18; // esi
  unsigned int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // ebx
  __int64 v24; // rdx
  Gre::Base *v25; // rcx
  __int64 v26; // r8
  int v27; // r14d
  struct Gre::Base::SESSION_GLOBALS *v28; // rax
  __int64 v29; // rcx
  _QWORD *i; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // r14d
  __int64 *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned int v39; // r14d
  __int64 *v40; // rbx
  unsigned int v41; // edx
  unsigned int v42; // eax
  unsigned int j; // ebx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  int v55; // ebx
  __int64 v56; // rcx
  void *v57; // rax
  __int64 v58; // rcx
  int v59; // ebx
  unsigned int *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned int *v67; // [rsp+20h] [rbp-E0h]
  unsigned int *v68; // [rsp+28h] [rbp-D8h]
  __int64 v69; // [rsp+28h] [rbp-D8h]
  __int64 v70; // [rsp+30h] [rbp-D0h]
  __int64 v71; // [rsp+30h] [rbp-D0h]
  unsigned int v72; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v73[4]; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v74; // [rsp+68h] [rbp-98h]
  unsigned int v75; // [rsp+6Ch] [rbp-94h] BYREF
  int v76; // [rsp+70h] [rbp-90h] BYREF
  int v77; // [rsp+74h] [rbp-8Ch] BYREF
  int v78; // [rsp+78h] [rbp-88h] BYREF
  int v79; // [rsp+7Ch] [rbp-84h] BYREF
  int v80; // [rsp+80h] [rbp-80h]
  int v81; // [rsp+84h] [rbp-7Ch] BYREF
  int v82; // [rsp+88h] [rbp-78h] BYREF
  int v83; // [rsp+8Ch] [rbp-74h] BYREF
  int v84; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v85[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-58h]
  __int128 v87; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v88; // [rsp+C0h] [rbp-40h]
  _BYTE v89[28]; // [rsp+D0h] [rbp-30h] BYREF
  int v90; // [rsp+ECh] [rbp-14h]
  int v91; // [rsp+110h] [rbp+10h]
  int v92; // [rsp+114h] [rbp+14h]
  __int64 v93; // [rsp+118h] [rbp+18h] BYREF
  int v94; // [rsp+120h] [rbp+20h]
  int v95; // [rsp+124h] [rbp+24h]
  __int64 v96; // [rsp+128h] [rbp+28h]
  int v97; // [rsp+130h] [rbp+30h]
  int v98; // [rsp+134h] [rbp+34h]
  int v99; // [rsp+138h] [rbp+38h]
  int v100; // [rsp+13Ch] [rbp+3Ch]
  int v101; // [rsp+140h] [rbp+40h]
  int v102; // [rsp+144h] [rbp+44h]
  int v103; // [rsp+148h] [rbp+48h]
  int v104; // [rsp+14Ch] [rbp+4Ch]
  int v105; // [rsp+150h] [rbp+50h]
  int v106; // [rsp+154h] [rbp+54h]
  int v107; // [rsp+158h] [rbp+58h]
  int v108; // [rsp+15Ch] [rbp+5Ch]
  int v109; // [rsp+160h] [rbp+60h]
  int v110; // [rsp+164h] [rbp+64h]
  int v111; // [rsp+168h] [rbp+68h]
  int v112; // [rsp+16Ch] [rbp+6Ch]
  int v113; // [rsp+170h] [rbp+70h]
  int v114; // [rsp+174h] [rbp+74h]
  int v115; // [rsp+178h] [rbp+78h]
  int v116; // [rsp+17Ch] [rbp+7Ch]
  int v117; // [rsp+180h] [rbp+80h]
  int v118; // [rsp+184h] [rbp+84h]
  int v119; // [rsp+188h] [rbp+88h]
  int v120; // [rsp+18Ch] [rbp+8Ch]
  int v121; // [rsp+190h] [rbp+90h]
  int v122; // [rsp+194h] [rbp+94h]
  int v123; // [rsp+198h] [rbp+98h]
  int v124; // [rsp+19Ch] [rbp+9Ch]
  int v125; // [rsp+1A0h] [rbp+A0h]
  int v126; // [rsp+1A4h] [rbp+A4h]
  int v127; // [rsp+1A8h] [rbp+A8h]
  int v128; // [rsp+1ACh] [rbp+ACh]
  int v129; // [rsp+1B0h] [rbp+B0h]
  int v130; // [rsp+1B4h] [rbp+B4h]
  __int64 v131; // [rsp+1B8h] [rbp+B8h]
  int v132; // [rsp+1C0h] [rbp+C0h]
  int v133; // [rsp+1C4h] [rbp+C4h]
  __int64 v134; // [rsp+1C8h] [rbp+C8h] BYREF
  int v135; // [rsp+1D0h] [rbp+D0h]
  int v136; // [rsp+1D4h] [rbp+D4h]
  int v137; // [rsp+1D8h] [rbp+D8h]
  int v138; // [rsp+1DCh] [rbp+DCh]
  int v139; // [rsp+1E0h] [rbp+E0h]
  int v140; // [rsp+1E4h] [rbp+E4h]
  int v141; // [rsp+1E8h] [rbp+E8h]
  int v142; // [rsp+1ECh] [rbp+ECh]
  int v143; // [rsp+1F0h] [rbp+F0h]
  int v144; // [rsp+1F4h] [rbp+F4h]
  int v145; // [rsp+1F8h] [rbp+F8h]
  int v146; // [rsp+1FCh] [rbp+FCh]
  int v147; // [rsp+200h] [rbp+100h]
  int v148; // [rsp+204h] [rbp+104h]
  int v149; // [rsp+208h] [rbp+108h]
  int v150; // [rsp+20Ch] [rbp+10Ch]
  int v151; // [rsp+210h] [rbp+110h]
  int v152; // [rsp+214h] [rbp+114h]
  __int64 v153; // [rsp+218h] [rbp+118h]
  int v154; // [rsp+220h] [rbp+120h]
  int v155; // [rsp+224h] [rbp+124h]
  __int64 v156; // [rsp+228h] [rbp+128h]
  int v157; // [rsp+230h] [rbp+130h]
  int v158; // [rsp+234h] [rbp+134h]
  int v159; // [rsp+238h] [rbp+138h]
  int v160; // [rsp+23Ch] [rbp+13Ch]
  int v161; // [rsp+240h] [rbp+140h]
  int v162; // [rsp+244h] [rbp+144h]
  int v163; // [rsp+248h] [rbp+148h]
  int v164; // [rsp+24Ch] [rbp+14Ch]
  int v165; // [rsp+250h] [rbp+150h]
  int v166; // [rsp+254h] [rbp+154h]
  int v167; // [rsp+258h] [rbp+158h]
  int v168; // [rsp+25Ch] [rbp+15Ch]
  int v169; // [rsp+260h] [rbp+160h]
  int v170; // [rsp+264h] [rbp+164h]
  int v171; // [rsp+268h] [rbp+168h]
  int v172; // [rsp+26Ch] [rbp+16Ch]
  int v173; // [rsp+270h] [rbp+170h]
  int v174; // [rsp+274h] [rbp+174h]
  int v175; // [rsp+278h] [rbp+178h]
  int v176; // [rsp+27Ch] [rbp+17Ch]
  int v177; // [rsp+280h] [rbp+180h]
  int v178; // [rsp+284h] [rbp+184h]
  int v179; // [rsp+288h] [rbp+188h]
  int v180; // [rsp+28Ch] [rbp+18Ch]
  int v181; // [rsp+290h] [rbp+190h]
  int v182; // [rsp+294h] [rbp+194h]
  int v183; // [rsp+298h] [rbp+198h]
  int v184; // [rsp+29Ch] [rbp+19Ch]
  int v185; // [rsp+2A0h] [rbp+1A0h]
  int v186; // [rsp+2A4h] [rbp+1A4h]
  __int64 v187; // [rsp+2A8h] [rbp+1A8h]
  int v188; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v189; // [rsp+2B8h] [rbp+1B8h]
  int v190; // [rsp+2C0h] [rbp+1C0h]
  __int64 v191; // [rsp+2C8h] [rbp+1C8h]
  int v192; // [rsp+2D0h] [rbp+1D0h]
  __int64 v193; // [rsp+2D8h] [rbp+1D8h]
  int v194; // [rsp+2E0h] [rbp+1E0h]
  __int64 v195; // [rsp+2E8h] [rbp+1E8h]
  int v196; // [rsp+2F0h] [rbp+1F0h]
  __int64 v197; // [rsp+2F8h] [rbp+1F8h]
  int v198; // [rsp+300h] [rbp+200h]
  int *v199; // [rsp+308h] [rbp+208h]
  int v200; // [rsp+310h] [rbp+210h]
  __int64 v201; // [rsp+318h] [rbp+218h]
  int v202; // [rsp+320h] [rbp+220h]
  __int64 v203; // [rsp+328h] [rbp+228h]
  int v204; // [rsp+330h] [rbp+230h] BYREF
  __int64 v205; // [rsp+338h] [rbp+238h]
  int v206; // [rsp+340h] [rbp+240h]
  int *v207; // [rsp+348h] [rbp+248h]
  int v208; // [rsp+350h] [rbp+250h]
  __int64 v209; // [rsp+358h] [rbp+258h]
  int v210; // [rsp+360h] [rbp+260h]
  int *v211; // [rsp+368h] [rbp+268h]
  int v212; // [rsp+370h] [rbp+270h]
  __int64 v213; // [rsp+378h] [rbp+278h]
  int v214; // [rsp+380h] [rbp+280h]
  int *v215; // [rsp+388h] [rbp+288h]
  int v216; // [rsp+390h] [rbp+290h]
  __int64 v217; // [rsp+398h] [rbp+298h]
  int v218; // [rsp+3A0h] [rbp+2A0h]
  int *v219; // [rsp+3A8h] [rbp+2A8h]
  int v220; // [rsp+3B0h] [rbp+2B0h]
  __int64 v221; // [rsp+3B8h] [rbp+2B8h]
  int v222; // [rsp+3C0h] [rbp+2C0h]
  __int64 v223; // [rsp+3C8h] [rbp+2C8h]
  int v224; // [rsp+3D0h] [rbp+2D0h]
  __int64 v225; // [rsp+3D8h] [rbp+2D8h]
  int v226; // [rsp+3E0h] [rbp+2E0h]
  __int64 v227; // [rsp+3E8h] [rbp+2E8h]
  int v228; // [rsp+3F0h] [rbp+2F0h]
  __int64 v229; // [rsp+3F8h] [rbp+2F8h]
  int v230; // [rsp+400h] [rbp+300h]
  int *v231; // [rsp+408h] [rbp+308h]
  int v232; // [rsp+410h] [rbp+310h]
  __int64 v233; // [rsp+418h] [rbp+318h]
  int v234; // [rsp+420h] [rbp+320h]
  int *v235; // [rsp+428h] [rbp+328h]
  int v236; // [rsp+430h] [rbp+330h]
  __int64 v237; // [rsp+438h] [rbp+338h]
  int v238; // [rsp+440h] [rbp+340h]
  __int64 v239; // [rsp+448h] [rbp+348h]
  int v240; // [rsp+450h] [rbp+350h]
  __int64 v241; // [rsp+458h] [rbp+358h]
  int v242; // [rsp+460h] [rbp+360h]
  int *v243; // [rsp+468h] [rbp+368h]
  int v244; // [rsp+470h] [rbp+370h]
  __int64 v245; // [rsp+478h] [rbp+378h]
  int v246; // [rsp+480h] [rbp+380h]
  int *v247; // [rsp+488h] [rbp+388h]
  unsigned __int16 v248[40]; // [rsp+490h] [rbp+390h] BYREF
  _BYTE v249[80]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v77 = (int)a1;
  v3 = (char)a1;
  v4 = Gre::Base::Globals(a1);
  v92 = 4135;
  v80 = 0;
  v93 = 112LL;
  v5 = 0;
  v76 = *((_DWORD *)v4 + 41);
  v75 = 96;
  v91 = 4;
  v94 = 4;
  v81 = 0;
  v83 = gdwPUDFlags & 0x100000;
  v88 = 0LL;
  v87 = 0LL;
  v84 = 0;
  v82 = gdwPUDFlags & 0x10000;
  v108 = 3;
  v112 = 3;
  v132 = 13;
  v135 = 13;
  v137 = 13;
  v79 = 1;
  v95 = 17;
  v96 = 100LL;
  v97 = 4;
  v98 = 77;
  v99 = 199;
  v100 = 4;
  v101 = 4;
  v102 = 76;
  v103 = 198;
  v104 = 4;
  v105 = 4;
  v106 = 105;
  v107 = 14;
  v109 = 4;
  v110 = 109;
  v111 = 15;
  v113 = 4;
  v114 = 131;
  v115 = 18;
  v116 = 1;
  v117 = 4;
  v118 = 141;
  v119 = 624;
  v120 = 1;
  v121 = 4;
  v122 = 145;
  v123 = 625;
  v124 = 1;
  v125 = 4;
  v126 = 143;
  v127 = 626;
  v128 = 1;
  v129 = 4;
  v130 = 159;
  v131 = 628LL;
  v133 = 23;
  v134 = 106LL;
  v136 = 11;
  v138 = 15;
  v167 = 17;
  v139 = 12;
  v143 = 12;
  v172 = 20;
  v175 = 20;
  v147 = 12;
  v180 = 50;
  v184 = 50;
  v207 = &gdtMNDropDown;
  v211 = &v83;
  v215 = &gnFastAltTabRows;
  v151 = 12;
  v161 = 12;
  v165 = 12;
  v169 = 12;
  v170 = 133;
  v173 = 12;
  v177 = 12;
  v181 = 12;
  v213 = 133LL;
  v148 = 30;
  v168 = 30;
  v176 = 30;
  v219 = &gnFastAltTabColumns;
  v140 = 32;
  v141 = 6;
  v142 = 500;
  v144 = 29;
  v145 = 97;
  v146 = 4;
  v149 = 98;
  v150 = 4;
  v152 = 96;
  v153 = 7LL;
  v154 = 3;
  v155 = 28;
  v156 = 96LL;
  v157 = 35;
  v158 = 111;
  v159 = 236;
  v160 = 1;
  v162 = 127;
  v163 = 16;
  v164 = 1;
  v166 = 129;
  v171 = 19;
  v174 = 135;
  v178 = 137;
  v179 = 21;
  v182 = 139;
  v183 = 22;
  v185 = 4;
  v186 = 169;
  v187 = 205LL;
  v204 = 4;
  v205 = 94LL;
  v206 = 400;
  v208 = 4;
  v209 = 107LL;
  v210 = 2;
  v212 = 4;
  v214 = 3;
  v216 = 4;
  v217 = 134LL;
  v218 = 7;
  v220 = 4;
  v221 = 159LL;
  v222 = 3;
  v224 = 4;
  v223 = gpsi + 4996LL;
  v225 = 160LL;
  v226 = 3;
  v228 = 4;
  v227 = gpsi + 5000LL;
  v231 = &v76;
  v235 = &v81;
  v239 = gdwHungAppTimeout;
  v243 = &gdwWaitToKillTimeout;
  v232 = 4;
  v236 = 4;
  v240 = 4;
  v247 = &v82;
  v229 = 200LL;
  v230 = 0;
  v233 = 618LL;
  v234 = 0;
  v237 = 621LL;
  v238 = 5000;
  v241 = 622LL;
  v242 = 5000;
  v244 = 23;
  v245 = 149LL;
  v246 = 1;
  v188 = 12;
  v189 = 10LL;
  v190 = 6;
  v6 = SGDGetUserSessionState(5000LL);
  v192 = 12;
  v191 = v6 + 15928;
  v193 = 11LL;
  v194 = 10;
  v8 = SGDGetUserSessionState(v7);
  v196 = 12;
  v197 = 12LL;
  v9 = v3 & 2;
  v195 = v8 + 15932;
  v198 = 1;
  v199 = &v79;
  v10 = v3 & 1;
  v200 = 35;
  v11 = v3 & 4;
  v201 = 237LL;
  v202 = 0;
  v203 = gfEnableHexNumpad;
  v74 = v11;
  if ( (v3 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  v13 = (struct _UNICODE_STRING *)CreateProfileUserName(&v87);
  if ( !v13 )
    return 0LL;
  v14 = grpWinStaList;
  if ( grpWinStaList )
  {
    v15 = *(void **)(grpWinStaList + 208LL);
    if ( v15 )
      Win32FreePool(v15);
    v16 = Win32AllocPoolZInit(v13->Length, 1852863317LL);
    *(_QWORD *)(grpWinStaList + 208LL) = v16;
    if ( v16 )
    {
      Length = v13->Length;
      *(_WORD *)(grpWinStaList + 200LL) = 0;
      *(_WORD *)(grpWinStaList + 202LL) = Length;
      RtlCopyUnicodeString((PUNICODE_STRING)(grpWinStaList + 200LL), v13);
    }
    v14 = 0LL;
    if ( v10 )
      WakeRIT(0x40u);
  }
  if ( v9 && !v11 )
  {
    v80 = CheckEasPolicyChange();
    v18 = v80;
    if ( !(unsigned int)CheckDesktopPolicyChange(v13) && !v18 )
    {
      UserSetLastError(0LL);
      FreeProfileUserName(v13, &v87);
      return 0LL;
    }
    v5 = 16;
  }
  if ( v10 )
    gdwPolicyFlags |= 2u;
  v72 = 300;
  v19 = v5 | 8;
  if ( v74 == (_DWORD)v14 )
    v19 = v5;
  FastGetProfileValue(v13, 4LL, 607LL, &v72, &gnllHooksTimeout, 4, v19);
  if ( (unsigned int)(gnllHooksTimeout - 1) > 0x3E6 )
    gnllHooksTimeout = 1000;
  if ( v10 )
  {
    if ( gDpiAdjustedForLoggedOnUser == (_DWORD)v14 && !(unsigned int)UserRemoteConnectedSessionUsingWddm(v21, v20, v22) )
    {
      v70 = v14;
      v68 = &v75;
      LODWORD(v67) = v19;
      FastGetProfileDwordEx(v13, 4LL, L"LogPixels");
      v78 = v14;
      v23 = DrvInitializeDxgkrnlDpiCache(&v78);
      v27 = PerformLegacyDpiUpgrade(v13, v75);
      if ( v23 < 0
        || v78
        || (v28 = Gre::Base::Globals(v25),
            v25 = (Gre::Base *)*((unsigned __int16 *)v28 + 624),
            *((_WORD *)v28 + 625) != (_WORD)v25)
        || v27
        || v75 )
      {
        GreReinitializeDpiSetting(v25, v24, v26);
        LOBYTE(v68) = 0;
        v73[0] = 0;
        if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 516LL, 0LL, (_DWORD)v68, 0LL, 0LL, v73, a2, 0LL) >= 0 )
        {
          if ( v73[0] )
            ((void (*)(void))xxxUserResetDisplayDevice)();
          UserReinitializeStockFonts();
          gDpiAdjustedForLoggedOnUser = 1;
        }
      }
    }
  }
  CInputGlobals::UpdateWakeOnInputDeviceTypesFromRegistry(gpInputGlobals);
  LoadCPUserPreferences(v13, v19);
  if ( !v9 )
  {
    xxxODI_ColorInit(v13);
    LW_LoadResources(v13);
    if ( (unsigned int)GreTextInitialized(v29) )
      xxxSetWindowNCMetrics(v13, 0LL, -1);
    SetMinMetrics(v13, 0LL);
    SetIconMetrics(v13, 0LL);
    GetKbdLangSwitch(v13);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(gpsi + 7012LL));
    xxxLoadSomeStrings();
    if ( grpWinStaList )
    {
      SmartObjStackRefBase<tagMENU>::Init(v85, 0LL);
      v86 = 0LL;
      for ( i = *(_QWORD **)(grpWinStaList + 16LL); i; i = (_QWORD *)i[4] )
      {
        v31 = i[7];
        if ( v31 )
        {
          v86 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v85, v31);
          if ( UnlockDesktopSysMenu((__int64)(i + 7)) )
          {
            v32 = v86;
            if ( !v86 )
              v32 = *(_QWORD *)v85[0];
            DestroyMenu(v32);
          }
        }
        v33 = i[8];
        if ( v33 )
        {
          v86 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v85, v33);
          if ( UnlockDesktopSysMenu((__int64)(i + 8)) )
          {
            v34 = v86;
            if ( !v86 )
              v34 = *(_QWORD *)v85[0];
            DestroyMenu(v34);
          }
        }
      }
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v85);
    }
    CCursorSizes::zzzRefreshSizes(gpCursorSizes);
    xxxUpdateSystemCursorsFromRegistry(v13, 1LL);
    xxxUpdateSystemIconsFromRegistry(v13);
    v35 = 0;
    v36 = &v134;
    do
    {
      LODWORD(v68) = 0;
      v67 = &v72;
      if ( (unsigned int)FastGetProfileIntFromID(
                           v13,
                           *((unsigned int *)v36 - 2),
                           *(unsigned int *)v36,
                           *((unsigned int *)v36 + 1)) )
        xxxSystemParametersInfo(*((unsigned int *)v36 - 1), v72, 0LL, 0x8000LL, &v72, v68, v70);
      ++v35;
      v36 += 2;
    }
    while ( v35 < 0xF );
    FastGetProfileIntsW(v13, &v188, 4LL);
    LOBYTE(v37) = v79 != 0;
    EnableMouseAcceleration(v37);
  }
  xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0LL, v67, v68, v70);
  if ( v10 )
  {
    SGDGetUserSessionState(v38);
    FastGetProfileIntFromID(v13, 35LL, 236LL, 1LL);
  }
  v39 = 0;
  v40 = &v93;
  do
  {
    LODWORD(v69) = v19;
    if ( (unsigned int)FastGetProfileIntFromID(
                         v13,
                         *((unsigned int *)v40 - 2),
                         *(unsigned int *)v40,
                         *((unsigned int *)v40 + 1)) )
      xxxSystemParametersInfo(*((unsigned int *)v40 - 1), v72, 0LL, 0x8000LL, &v72, v69, v71);
    ++v39;
    v40 += 2;
  }
  while ( v39 < 0xB );
  v41 = v19;
  if ( v80 )
    v41 = 2;
  CalcScreenSaverTimeout(v13, v41);
  FastGetProfileIntsW(v13, &v204, 11LL);
  if ( gnFastAltTabColumns < 2 )
    gnFastAltTabColumns = 7;
  if ( gnFastAltTabRows < 1 )
    gnFastAltTabRows = 3;
  if ( v81 )
    _InterlockedOr(gpsi, 0x200u);
  else
    _InterlockedAnd(gpsi, 0xFFFFFDFF);
  if ( v82 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  if ( v83 == 2 )
  {
    if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 56LL), 119LL) )
      gdwPUDFlags &= ~0x100000u;
    else
      gdwPUDFlags |= 0x100000u;
    if ( v10 )
    {
      RtlStringCchPrintfW(v248, 0x28uLL, (size_t *)L"%d", (gdwPUDFlags >> 20) & 1);
      RtlLoadStringOrError(107LL, v249, 40LL);
      FastWriteProfileStringW(v13, 4LL, v249, v248);
    }
  }
  else
  {
    if ( v83 )
      v42 = gdwPUDFlags | 0x100000;
    else
      v42 = gdwPUDFlags & 0xFFEFFFFF;
    gdwPUDFlags = v42;
  }
  v72 = *(_DWORD *)(gpsi + 4984LL);
  if ( (unsigned int)FastGetProfileIntFromID(v13, 4LL, 4LL, 500LL) )
    SetCaretBlinkTime(v72);
  if ( !v9 )
  {
    v74 = 0;
    FastGetProfileIntFromID(v13, 12LL, 608LL, 10LL);
    UpdateMouseSensitivity(v74);
    for ( j = 0; j < 2; ++j )
    {
      ReadDefaultAccelerationCurves(j, v13);
      ResetAccelerationCurves(j);
    }
    FastGetProfileIntFromID(v13, 12LL, 613LL, 0LL);
    SetMouseTrails(v72);
    FastGetProfileIntW(v13, 7LL, L"TTOnly", 0LL, &v72, 0);
    GreSetFontEnumeration(v72);
    SGDGetUserSessionState(v44);
    FastGetProfileIntFromID(v13, 12LL, 91LL, *(unsigned int *)(gpsi + 2040LL));
    SGDGetUserSessionState(v45);
    FastGetProfileIntFromID(v13, 12LL, 92LL, *(unsigned int *)(gpsi + 2044LL));
    SGDGetUserSessionState(v46);
    FastGetProfileIntFromID(v13, 12LL, 93LL, (unsigned int)gdtMNDropDown);
    if ( *(_DWORD *)(SGDGetUserSessionState(v47) + 15924) < 0xAu )
      *(_DWORD *)(SGDGetUserSessionState(v48) + 15924) = 10;
    if ( *(_DWORD *)(SGDGetUserSessionState(v48) + 15924) > 0x7FFFFFFFu )
      *(_DWORD *)(SGDGetUserSessionState(v49) + 15924) = 0x7FFFFFFF;
    ReadRawMouseThrottlingThresholds(v13);
    UpdatePerUserKeyboardIndicators(v13);
    InitScancodeMap(v51, v50);
    v53 = SGDGetUserSessionState(v52);
    FastGetProfileDword(v13, 24LL, L"Attributes", 0LL, v53 + 13856);
    v55 = (*(_DWORD *)(SGDGetUserSessionState(v54) + 13856) >> 15) & 2;
    *(_DWORD *)(SGDGetUserSessionState(v56) + 13856) = v55;
    xxxUpdatePerUserAccessPackSettings(v13);
  }
  v57 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL, 0LL);
  if ( v57 )
  {
    *(_DWORD *)(gpsi + 2148LL) = 1;
    ZwClose(v57);
  }
  *(_DWORD *)(gpsi + 2148LL) |= 2u;
  GreSetFontEnumeration(4LL);
  GreSetFontEnumeration(32LL);
  if ( (v76 & 2) != 0 )
    GreSetFontEnumeration(v76 | 4u);
  if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
    GreSetFontEnumeration(v76 | 0x30u);
  v59 = *(_DWORD *)UPDWORDPointer(8204LL);
  if ( !v59 )
    v59 = 1200;
  *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v58) + 32) + 8584LL) = v59;
  v60 = (unsigned int *)UPDWORDPointer(8210LL);
  GreSetLCDOrientation(*v60);
  FreeProfileUserName(v13, &v87);
  if ( v77 == 2 )
    xxxUserResetDisplayDevice(v62, v61);
  FastGetProfileDword(0LL, 49LL, L"RestrictDebuggerForeground", 0LL, &v84);
  if ( v84 )
    WPP_MAIN_CB.DeviceLock.Header.LockNV = 1;
  if ( v10 )
  {
    memset_0(v89, 0, 0x40uLL);
    if ( (unsigned int)ReadPointerDeviceSettings(146LL, v89) )
    {
      if ( !v90 )
        SetTouchInputStatus(0LL);
    }
  }
  if ( gbUsingDefaultSectionSize == 1 )
  {
    v77 = 0;
    gbUsingDefaultSectionSize = 0;
    UserLogError(3221226518LL);
    UserSessionSwitchLeaveCrit(v64, v63, v65, v66);
    ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, 7, &v77);
    EnterCrit(1LL, 0LL);
  }
  xxxDwmControl(1037LL, 0LL);
  if ( v10 )
  {
    TraceLoggingAutoRotationStateEvent();
    _InterlockedOr(gpsi, 0x400u);
  }
  return 1LL;
}
