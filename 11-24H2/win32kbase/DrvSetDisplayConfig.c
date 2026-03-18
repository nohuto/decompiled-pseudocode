/*
 * XREFs of DrvSetDisplayConfig @ 0x140137640
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x140137250 (DrvChangeDisplaySettings.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015A320 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     InitVideo @ 0x1401B2E18 (InitVideo.c)
 * Callees:
 *     UserIsConsoleConnection @ 0x140013950 (UserIsConsoleConnection.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     DrvIsWddmDriverPresent @ 0x14004E138 (DrvIsWddmDriverPresent.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14008CA1C (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14008D940 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x14008E088 (GetPathsModality.c)
 *     DispBrokerGetCurrentMode @ 0x1400C83E0 (DispBrokerGetCurrentMode.c)
 *     LogDiagSDC @ 0x1400E51A0 (LogDiagSDC.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E5480 (DrvDxgkLogCodePointPacket.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6978 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x140138FA0 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$03$04@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x14013F70C (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$03$04@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401433E8 (-DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1401522D8 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x14015305C (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x140155220 (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14015C734 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140178A48 (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBURETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019A798 (-DrvFunctionalizeBaseVidMode@@YAJAEBURETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x14019B890 (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019C6B0 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1401A8EC8 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x1401AECD4 (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 *     UserNotifyExternalMonitorConnectedStatus @ 0x1401AEEE4 (UserNotifyExternalMonitorConnectedStatus.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1401C651C (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ApplyPathsModality @ 0x1401C67FC (ApplyPathsModality.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1401C81E4 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvIsModeChangeHandledByDispBroker@@YA_NXZ @ 0x1401C84B0 (-DrvIsModeChangeHandledByDispBroker@@YA_NXZ.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401C88C4 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1401C94F0 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        char a6,
        __int64 a7,
        __int64 a8,
        struct _MDEV *a9,
        struct _MDEV **a10,
        unsigned int *a11,
        signed int *a12,
        char *a13,
        _BYTE *a14,
        _BYTE *a15,
        __int64 a16,
        _DWORD *a17)
{
  struct _MDEV *v18; // r12
  int v20; // r13d
  int v21; // r14d
  int v22; // eax
  __int64 v23; // rcx
  __int64 UserSessionState; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  bool v28; // al
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rbx
  int v33; // ebx
  __int64 DxgkWin32kInterface; // rax
  char v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // edi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // eax
  unsigned int v49; // r12d
  unsigned int v50; // esi
  char *v51; // rdi
  __int64 v52; // rcx
  unsigned int v53; // edx
  int v54; // eax
  unsigned int v55; // ecx
  __int16 v56; // bx
  struct _DISPLAYCONFIG_CDS_REQUEST *v57; // r13
  char v58; // di
  unsigned __int16 v59; // si
  bool v60; // r13
  unsigned int v61; // ebx
  __int64 v62; // rcx
  int v63; // ebx
  struct _DISPLAYCONFIG_CDS_REQUEST *v64; // rsi
  int v65; // eax
  int v66; // esi
  int v67; // eax
  __int64 v68; // rcx
  signed int v69; // eax
  signed int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v74; // r12
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // eax
  __int64 v78; // rcx
  unsigned int CcdRawmodeFlag; // eax
  struct _DISPLAYCONFIG_CDS_REQUEST *v80; // rcx
  __int16 v81; // r13
  int v82; // eax
  unsigned int v83; // ebx
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 (__fastcall *v86)(__int64, PVOID); // rax
  int v87; // eax
  __int64 v88; // rcx
  unsigned int v89; // edi
  __int64 v90; // rax
  __int64 v91; // r9
  unsigned int v92; // ebx
  __int64 v93; // rcx
  bool v94; // zf
  unsigned int v95; // eax
  __int64 v96; // r8
  struct _MDEV **v97; // rdi
  int v98; // eax
  int v99; // r13d
  struct _MDEV *v100; // rsi
  __int64 v101; // rax
  int v102; // eax
  unsigned int v103; // eax
  __int64 v104; // rcx
  char v105; // al
  struct _MDEV **v106; // rsi
  struct _MDEV *v107; // rdi
  int v108; // edi
  int v109; // eax
  int v110; // eax
  int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // rax
  unsigned __int64 v114; // rdx
  unsigned __int16 *v115; // rcx
  int v116; // esi
  unsigned __int64 v117; // r8
  char v118; // r8
  __int64 v119; // rdx
  char *v120; // rcx
  int v121; // eax
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rcx
  unsigned int v125; // r12d
  char v126; // al
  char v127; // si
  __int64 v128; // r8
  __int64 v129; // r9
  char v130; // di
  struct _DISPLAYCONFIG_CDS_REQUEST *v131; // rax
  _DWORD *v132; // rdi
  __int64 v133; // rcx
  int v135; // [rsp+20h] [rbp-E0h]
  int v136; // [rsp+28h] [rbp-D8h]
  char v137; // [rsp+60h] [rbp-A0h]
  signed int v138; // [rsp+64h] [rbp-9Ch] BYREF
  int PathsModality; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int8 v140; // [rsp+6Ch] [rbp-94h] BYREF
  char v141; // [rsp+6Dh] [rbp-93h]
  bool v142; // [rsp+6Eh] [rbp-92h]
  char v143; // [rsp+6Fh] [rbp-91h]
  char v144; // [rsp+70h] [rbp-90h]
  bool v145; // [rsp+71h] [rbp-8Fh] BYREF
  char v146; // [rsp+72h] [rbp-8Eh] BYREF
  bool v147; // [rsp+73h] [rbp-8Dh]
  char v148[4]; // [rsp+74h] [rbp-8Ch] BYREF
  int v149; // [rsp+78h] [rbp-88h] BYREF
  bool v150; // [rsp+7Ch] [rbp-84h]
  char v151; // [rsp+7Dh] [rbp-83h]
  unsigned int v152; // [rsp+80h] [rbp-80h]
  int v153; // [rsp+84h] [rbp-7Ch]
  unsigned int v154; // [rsp+88h] [rbp-78h]
  unsigned int v155; // [rsp+8Ch] [rbp-74h]
  int v156; // [rsp+90h] [rbp-70h]
  unsigned __int16 v157; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v158; // [rsp+98h] [rbp-68h]
  int v159; // [rsp+9Ch] [rbp-64h]
  struct _MDEV *v160; // [rsp+A0h] [rbp-60h]
  __int64 v161; // [rsp+A8h] [rbp-58h]
  unsigned int v162; // [rsp+B0h] [rbp-50h]
  struct _MDEV **v163; // [rsp+B8h] [rbp-48h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v164; // [rsp+C0h] [rbp-40h]
  int v165; // [rsp+C8h] [rbp-38h]
  int v166; // [rsp+CCh] [rbp-34h]
  struct _DISPLAYCONFIG_CDS_REQUEST *v167; // [rsp+D0h] [rbp-30h]
  _QWORD v168[6]; // [rsp+E0h] [rbp-20h] BYREF
  PVOID Buffer[2]; // [rsp+110h] [rbp+10h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v170; // [rsp+120h] [rbp+20h] BYREF
  char v171; // [rsp+128h] [rbp+28h]
  void *v172; // [rsp+130h] [rbp+30h] BYREF
  void *v173; // [rsp+140h] [rbp+40h]
  _DWORD *v174; // [rsp+148h] [rbp+48h]
  void *v175; // [rsp+150h] [rbp+50h] BYREF
  __int64 v176; // [rsp+158h] [rbp+58h]
  unsigned int *v177; // [rsp+160h] [rbp+60h]
  signed int *v178; // [rsp+168h] [rbp+68h]
  char *v179; // [rsp+170h] [rbp+70h]
  _BYTE *v180; // [rsp+178h] [rbp+78h]
  __int64 v181; // [rsp+180h] [rbp+80h]
  _BYTE *v182; // [rsp+188h] [rbp+88h]
  int v183; // [rsp+190h] [rbp+90h] BYREF
  __int64 v184; // [rsp+194h] [rbp+94h]
  int v185; // [rsp+19Ch] [rbp+9Ch]
  int v186; // [rsp+1A0h] [rbp+A0h]
  _DWORD v187[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v188; // [rsp+1B0h] [rbp+B0h]
  int v189; // [rsp+1B8h] [rbp+B8h]
  __int64 v190; // [rsp+1BCh] [rbp+BCh]
  int v191; // [rsp+1C4h] [rbp+C4h]
  void *retaddr; // [rsp+218h] [rbp+118h]

  v18 = a9;
  v173 = a5;
  v163 = a10;
  v178 = a12;
  v179 = a13;
  v180 = a15;
  v155 = a1;
  v176 = a16;
  v177 = a11;
  v174 = a17;
  v154 = a4;
  v164 = a2;
  v167 = (struct _DISPLAYCONFIG_CDS_REQUEST *)a8;
  v160 = a9;
  v182 = a14;
  v165 = 2;
  v152 = 0;
  v20 = 0;
  v150 = 0;
  v161 = *(_QWORD *)(W32GetSessionState(a14) + 88);
  v21 = -5;
  v148[0] = 0;
  v143 = 0;
  v22 = *(_DWORD *)(v161 + 1060);
  v140 = 0;
  v147 = v22 != 0;
  v144 = 0;
  v146 = 0;
  v138 = 0;
  v159 = -5;
  v149 = -5;
  v162 = v22 != 0 ? 3 : 0;
  v158 = 0;
  v151 = 0;
  WdLogSingleEntry1(4LL, a3);
  WdLogGlobalForLineNumber = 15529;
  v181 = DrvDxgkLogCodePointPacket(120LL, 0, 0, 0);
  UserSessionState = W32GetUserSessionState(v23);
  DisplayScenarioJournalBegin(a3, a4, *(unsigned __int16 *)(UserSessionState + 69008));
  DisplayScenarioJournalSetSDCPathsAndModes(216 * v155, v155, v164);
  v175 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<4,5>::NotifyStatusChange(&v175, 4LL);
  *a10 = 0LL;
  if ( *(_DWORD *)(v161 + 1132) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15576;
  }
  if ( (a3 & 0x1000) != 0 && a6 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v142 = (a4 & 2) != 0 && (a3 & 0x88F) == 0x88F;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v168);
  v168[0] = &off_140254268;
  v170 = 0LL;
  v171 = 0;
  v172 = 0LL;
  *(_OWORD *)Buffer = 0LL;
  if ( !(unsigned int)UserIsWddmConnectedSession(v25) || !(unsigned int)DrvIsWddmDriverPresent(v26) || (a4 & 1) != 0 )
  {
    if ( (a4 & 0x20) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 15644;
    }
    v108 = a4 & 1;
    v109 = DrvChangeDisplayFallback(
             v173,
             BYTE1(a3) & 1,
             v108,
             a9,
             v163,
             (enum _DXGK_DIAG_SDC_STAGE *)&v138,
             &v140,
             &v149);
    v21 = v149;
    LODWORD(v32) = v109;
    PathsModality = v109;
    if ( v109 >= 0 )
    {
      v110 = v138;
      if ( v108 )
        v110 = 30;
      v138 = v110;
    }
    goto LABEL_257;
  }
  if ( (a3 & 0x40000000) != 0 )
  {
    v28 = DrvIsModeChangeHandledByDispBroker();
    v29 = 0LL;
    if ( v28 || (a3 & 0x10000) != 0 )
    {
      LODWORD(v32) = -1073741811;
      v138 = 37;
      PathsModality = -1073741811;
      goto LABEL_263;
    }
    v30 = v161;
    if ( *(_DWORD *)(v161 + 1060) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 15682;
    }
    PathsModality = GetPathsModality(v29, (char **)Buffer, 0xFu, 0);
    LODWORD(v32) = PathsModality;
    if ( PathsModality < 0 )
    {
      v138 = 2;
LABEL_257:
      v38 = 0LL;
      goto LABEL_258;
    }
    v33 = *((_DWORD *)Buffer[0] + 8) & 0xF;
    if ( v33 == 1 || v33 == 8 )
    {
      LODWORD(v32) = -1073741637;
      v138 = 25;
      PathsModality = -1073741637;
      goto LABEL_264;
    }
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v31);
    v35 = 1;
    v141 = 1;
    LOBYTE(v36) = v33 == 4;
    (*(void (__fastcall **)(__int64, __int64))(DxgkWin32kInterface + 528))(1LL, v36);
    if ( v33 == 4 )
    {
      v38 = 0LL;
      v138 = 26;
      LODWORD(v32) = 0;
      PathsModality = 0;
      v140 = 1;
      goto LABEL_275;
    }
    a3 = 132;
    v156 = 132;
  }
  else
  {
    if ( (a3 & 0x80000000) == 0 )
    {
      if ( (a3 & 0xF) != 0xF || (a4 & 0x20) != 0 && (*(_DWORD *)(a8 + 12) & 1) != 0 )
      {
        if ( (a3 & 0x200) != 0
          || (a4 & 0x20) != 0 && (*(_DWORD *)(a8 + 12) & 1) != 0
          || (a3 & 0x1F) != 0 && (a3 & 0x40) == 0 )
        {
          v45 = DxDdGetDxgkWin32kInterface(v27);
          v35 = 0;
          v141 = 0;
          (*(void (__fastcall **)(_QWORD, _QWORD))(v45 + 528))(0LL, 0LL);
        }
        else
        {
          v44 = DxDdGetDxgkWin32kInterface(v27);
          v35 = (*(__int64 (**)(void))(v44 + 536))();
          v141 = v35;
        }
      }
      else
      {
        v43 = DxDdGetDxgkWin32kInterface(v27);
        v141 = (*(__int64 (**)(void))(v43 + 536))();
        v35 = v141;
        if ( v141 )
          a3 = a3 & 0xFFFFFFF0 | 4;
      }
      v156 = a3;
      v41 = a3 & 0x80;
      if ( (a3 & 0x10000) != 0 )
      {
        v46 = DxDdGetDxgkWin32kInterface(v37);
        PathsModality = (*(__int64 (__fastcall **)(__int64, _QWORD, void **))(v46 + 728))(
                          a7,
                          v41 != 0 ? 2031616 : 0x20000,
                          &v172);
        LODWORD(v32) = PathsModality;
        if ( PathsModality < 0 )
        {
          v138 = 42;
          goto LABEL_257;
        }
      }
      goto LABEL_33;
    }
    v38 = 0LL;
    if ( DrvIsModeChangeHandledByDispBroker() || (a3 & 0x10000) != 0 )
    {
      LODWORD(v32) = -1073741811;
      v138 = 38;
      PathsModality = -1073741811;
      goto LABEL_263;
    }
    v40 = DxDdGetDxgkWin32kInterface(v39);
    v141 = 0;
    v35 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(v40 + 528))(0LL, 0LL) )
    {
      LODWORD(v32) = 0;
      v138 = 18;
      PathsModality = 0;
      v140 = 1;
      goto LABEL_275;
    }
    a3 = 2191;
    v156 = 2191;
  }
  v41 = 128;
LABEL_33:
  v42 = DxDdGetDxgkWin32kInterface(v37);
  PathsModality = (*(__int64 (**)(void))(v42 + 272))();
  LODWORD(v32) = PathsModality;
  if ( PathsModality < 0 )
  {
    v138 = 12;
    v20 = 6;
    goto LABEL_257;
  }
  v171 = 1;
  if ( v41 )
  {
    v32 = 1LL;
    if ( !v35 && (a3 & 0xF) != 0 && (v154 & 0x20) == 0 )
      v32 = 3LL;
    v47 = DxDdGetDxgkWin32kInterface(1LL);
    v48 = (*(__int64 (__fastcall **)(__int64))(v47 + 296))(v32);
    LODWORD(v32) = v48;
    PathsModality = v48;
    if ( v48 < 0 )
    {
      WdLogSingleEntry1(4LL, v48);
      WdLogGlobalForLineNumber = 15888;
      DrvDxgkLogCodePointPacket(4LL, v32, 0, 0);
      LODWORD(v32) = 0;
      PathsModality = 0;
    }
  }
  LOBYTE(v38) = (a3 & 0x240) == 512;
  v156 &= 0xFu;
  v137 = v38;
  v166 = a3 & 0x80;
  v153 = a3 & 0x10000;
  while ( 1 )
  {
    WdLogSingleEntry2(4LL, v152, (int)v32);
    WdLogGlobalForLineNumber = 15911;
    v49 = 0;
    v144 = 0;
    v146 = 0;
    v140 = 0;
    v148[0] = 0;
    FreePathsModality((char *)Buffer[0]);
    FreePathsModality((char *)Buffer[1]);
    Buffer[1] = 0LL;
    Buffer[0] = 0LL;
    if ( v147 )
      break;
    if ( v156 )
    {
      if ( DrvIsModeChangeHandledByDispBroker() && (a3 & 0xA8F) != 0x88F || v153 )
      {
        v138 = 39;
        goto LABEL_226;
      }
      v56 = v154;
      v57 = v167;
      if ( (v154 & 0x20) != 0 && *((_QWORD *)v167 + 2) )
      {
        v58 = 1;
        v59 = 1;
      }
      else
      {
        v58 = 0;
        v59 = 0;
      }
      if ( v141 || (v137 = 1, (a3 & 0x40) != 0) )
        v137 = 0;
      if ( (unsigned int)DispBrokerGetCurrentMode(1LL) )
      {
        v137 = 0;
        if ( v58 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 16054;
        }
        if ( (v56 & 0xC00) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 16055;
        }
        DrvDxgkLogCodePointPacket(127LL, 0, 0, 0);
        v60 = v142;
        v61 = (v56 & 0x800) != 0 ? 0x10000000 : 64;
        if ( !v142 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 16073;
        }
        v150 = v60;
        DisplayScenarioJournalCCDRetrieval(16LL);
      }
      else
      {
        v62 = (v56 & 0x20) != 0 ? 0x9000 : 0;
        if ( !v58 || (*((_DWORD *)v57 + 3) & 1) != 0 )
          v63 = a3 & 0xF;
        else
          v63 = 0x2000000;
        v61 = v62 | v63;
        if ( (v61 & 0x2000000) != 0 && (a3 & 0xF) != 0xF )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 16099;
        }
      }
      PathsModality = GetPathsModality(v62, (char **)Buffer, v61, v59);
      LODWORD(v32) = PathsModality;
      if ( PathsModality < 0 )
      {
        v20 = 7;
LABEL_73:
        v138 = 2;
LABEL_74:
        LOBYTE(v38) = v137;
        goto LABEL_228;
      }
      if ( !*((_WORD *)Buffer[0] + 10) )
      {
        LOBYTE(v38) = v137;
        LODWORD(v32) = -1071774922;
        v138 = 2;
        v20 = 7;
LABEL_227:
        PathsModality = v32;
        goto LABEL_228;
      }
      DrvSetDisplayConfigApplyDeviceHack((struct D3DKMT_GETPATHSMODALITY *)Buffer[0]);
      if ( v58 )
      {
        v64 = v167;
        v65 = *((_DWORD *)v167 + 3);
        if ( (v65 & 1) == 0 || (v137 = 1, (v65 & 2) == 0) )
          v137 = 0;
        PathsModality = DrvValidateAndApplyDevMode(v167, (struct D3DKMT_GETPATHSMODALITY **)Buffer);
        LODWORD(v32) = PathsModality;
        if ( PathsModality < 0 )
        {
          v21 = *((_DWORD *)v64 + 8);
          v69 = 2;
          v20 = *((_DWORD *)v64 + 9);
          v159 = v21;
          v149 = v21;
          if ( PathsModality == -1073741266 )
            v69 = 23;
          v138 = v69;
          goto LABEL_74;
        }
        v49 = *((_DWORD *)v64 + 3) & 1;
      }
      v20 = 10;
      goto LABEL_115;
    }
    if ( (a3 & 0x10) != 0 )
    {
      if ( DrvIsModeChangeHandledByDispBroker() || (v66 = v153) != 0 )
      {
        v138 = 40;
        goto LABEL_226;
      }
      PathsModality = AllocatePathModalityForDisplayConfig(v155, v164, (struct D3DKMT_GETPATHSMODALITY **)Buffer);
      LODWORD(v32) = PathsModality;
      if ( PathsModality < 0 )
      {
        v70 = v66 + 3;
LABEL_127:
        v138 = v70;
        goto LABEL_228;
      }
      PathsModality = ConvertDisplayConfigToPathModality(v155, v164, (struct D3DKMT_GETPATHSMODALITY *)Buffer[0], 0LL);
      LODWORD(v32) = PathsModality;
      if ( PathsModality < 0 )
      {
        v138 = 4;
        goto LABEL_228;
      }
      v72 = DxDdGetDxgkWin32kInterface(v71);
      LODWORD(v32) = (*(__int64 (__fastcall **)(_QWORD, PVOID, _QWORD))(v72 + 144))(a3 & 0x2000 | 0x2F, Buffer[0], 0LL);
      PathsModality = v32;
      if ( (int)v32 < 0 )
      {
        v138 = 5;
        goto LABEL_228;
      }
      if ( v141 || (a3 & 0x40) != 0 )
      {
        LOBYTE(v38) = 0;
        v137 = 0;
      }
      else
      {
        v55 = 1;
        LOBYTE(v38) = 1;
        v137 = 1;
      }
    }
    else
    {
      if ( (a3 & 0x20) == 0 )
      {
        WdLogSingleEntry1(1LL, a3);
        WdLogGlobalForLineNumber = 16308;
        v138 = 9;
        goto LABEL_226;
      }
      v145 = 0;
      if ( (v154 & 8) != 0 )
      {
        PathsModality = SetDisplayConfigHandleOnlyProvidedPath(
                          v164,
                          (struct D3DKMT_GETPATHSMODALITY **)Buffer,
                          &v145,
                          (enum _DXGK_DIAG_SDC_STAGE *)&v138);
        LODWORD(v32) = PathsModality;
        if ( PathsModality < 0 )
          goto LABEL_228;
        v66 = v153;
      }
      else
      {
        v66 = v153;
        if ( v153 )
        {
          PathsModality = SetDisplayConfigHandleBrokerProvidedPaths(
                            v172,
                            0,
                            v155,
                            v164,
                            (struct D3DKMT_GETPATHSMODALITY **)Buffer,
                            &v145,
                            (enum _DXGK_DIAG_SDC_STAGE *)&v138);
          LODWORD(v32) = PathsModality;
          if ( PathsModality < 0 )
            goto LABEL_228;
        }
        else
        {
          v74 = v164;
          PathsModality = AllocatePathModalityForDisplayConfig(v155, v164, (struct D3DKMT_GETPATHSMODALITY **)Buffer);
          LODWORD(v32) = PathsModality;
          if ( PathsModality < 0 )
          {
            v138 = 6;
            goto LABEL_228;
          }
          PathsModality = ConvertDisplayConfigToPathModality(
                            v155,
                            v74,
                            (struct D3DKMT_GETPATHSMODALITY *)Buffer[0],
                            &v145);
          LODWORD(v32) = PathsModality;
          if ( PathsModality < 0 )
          {
            v138 = 7;
            goto LABEL_228;
          }
        }
      }
      if ( v145 )
      {
        if ( DrvIsModeChangeHandledByDispBroker() )
        {
          v138 = 41;
          goto LABEL_226;
        }
        PathsModality = SetDisplayConfigHandlePreferredScaling(
                          (struct D3DKMT_GETPATHSMODALITY *)Buffer[0],
                          (enum _DXGK_DIAG_SDC_STAGE *)&v138);
        LODWORD(v32) = PathsModality;
        if ( PathsModality < 0 )
          goto LABEL_228;
      }
      v75 = DxDdGetDxgkWin32kInterface(v73);
      LODWORD(v32) = (*(__int64 (__fastcall **)(__int64, PVOID, _QWORD))(v75 + 144))(256LL, Buffer[0], 0LL);
      PathsModality = v32;
      if ( (int)v32 < 0 )
      {
        v138 = 8;
        goto LABEL_228;
      }
      v49 = 1;
    }
LABEL_116:
    if ( (a3 & 0x800) != 0 )
    {
      v157 = 0;
      v67 = CreatePathPersistentMonitorsIfNeeded(v55, (const struct D3DKMT_GETPATHSMODALITY *)Buffer[0], &v157);
      LODWORD(v32) = v67;
      PathsModality = v67;
      if ( v67 < 0 )
      {
        WdLogSingleEntry1(2LL, v67);
        WdLogGlobalForLineNumber = 16325;
        v138 = 10;
        goto LABEL_228;
      }
      v76 = DxDdGetDxgkWin32kInterface(v68);
      v77 = (*(__int64 (__fastcall **)(__int64, PVOID))(v76 + 176))(0x80000000LL, Buffer[0]);
      LODWORD(v32) = v77;
      PathsModality = v77;
      if ( v77 == -1073741266 )
      {
        WdLogSingleEntry2(4LL, v152, -1073741266LL);
        v70 = 23;
        WdLogGlobalForLineNumber = 16337;
        goto LABEL_127;
      }
      if ( v77 < 0 )
      {
        WdLogSingleEntry1(2LL, v77);
        WdLogGlobalForLineNumber = 16345;
        v138 = 22;
        goto LABEL_228;
      }
      if ( v157 )
      {
        WdLogSingleEntry2(3LL, v152, v77);
        WdLogGlobalForLineNumber = 16360;
        LODWORD(v32) = -1073741266;
        goto LABEL_227;
      }
    }
    v78 = 0LL;
    if ( *((_WORD *)Buffer[0] + 10) )
    {
      CcdRawmodeFlag = GetCcdRawmodeFlag();
      v81 = v154;
      v82 = CcdRawmodeFlag | 0x8000;
      if ( (v154 & 0x20) != 0 )
      {
        v80 = v167;
        if ( !*((_QWORD *)v167 + 2)
          || (v80 = (struct _DISPLAYCONFIG_CDS_REQUEST *)*((unsigned int *)v167 + 3), ((unsigned __int8)v80 & 4) != 0) )
        {
          v82 |= 0x20000u;
        }
      }
      v83 = v82 | 0x1000000;
      if ( !v66 )
        v83 = v82;
      v84 = DxDdGetDxgkWin32kInterface(v80);
      v85 = v83;
      LODWORD(v85) = v83 | 0x20000000;
      v86 = *(__int64 (__fastcall **)(__int64, PVOID))(v84 + 152);
      if ( (v81 & 0x800) == 0 )
        v85 = v83;
      v87 = v86(v85, Buffer[0]);
      LODWORD(v32) = v87;
      PathsModality = v87;
      if ( v87 < 0 )
      {
        WdLogSingleEntry2(4LL, Buffer[0], v87);
        WdLogGlobalForLineNumber = 16405;
        v138 = 11;
LABEL_172:
        v20 = 7;
        goto LABEL_228;
      }
    }
    v20 = 10;
    v138 = 18;
    if ( !v166 )
    {
      if ( (a3 & 0x40) != 0 )
      {
        v21 = 0;
        v159 = 0;
        v149 = 0;
        goto LABEL_208;
      }
      WdLogSingleEntry1(1LL, a3);
      WdLogGlobalForLineNumber = 16547;
      v138 = 21;
LABEL_226:
      LODWORD(v32) = -1073741811;
      goto LABEL_227;
    }
    PathsModality = GetPathsModality(v78, (char **)&Buffer[1], 0x100040u, 0);
    LODWORD(v32) = PathsModality;
    if ( PathsModality < 0 )
    {
      v138 = 13;
      goto LABEL_172;
    }
    v89 = (16 * (a3 & 0x1000)) | 0x4000;
    if ( (a3 & 0x1100) == 0 )
      v89 = 16 * (a3 & 0x1000);
    if ( v89 )
    {
      v90 = DxDdGetDxgkWin32kInterface(v88);
      LODWORD(v32) = (*(__int64 (__fastcall **)(_QWORD, PVOID, _QWORD))(v90 + 144))(v89, Buffer[0], 0LL);
      PathsModality = v32;
      if ( (int)v32 < 0 )
      {
        v21 = v159;
        v138 = 14;
        goto LABEL_74;
      }
    }
    if ( (v154 & 0x10) != 0 )
      v89 |= 0x400000u;
    v91 = 0LL;
    v92 = v89 | 0x1000000;
    if ( !v153 )
      v92 = v89;
    v93 = *(_QWORD *)(v161 + 1096);
    while ( v93 )
    {
      v94 = (*(_DWORD *)(v93 + 160) & 0x800000) == 0;
      v95 = v91 + 1;
      v93 = *(_QWORD *)(v93 + 128);
      if ( v94 )
        v95 = v91;
      v91 = v95;
    }
    DisplayScenarioJournalSetExpectedPathModality(
      296 * (unsigned int)*((unsigned __int16 *)Buffer[0] + 10),
      *((unsigned __int16 *)Buffer[0] + 10),
      (char *)Buffer[0] + 56,
      v91);
    LOBYTE(v96) = (a3 & 0x1100) != 0;
    v97 = v163;
    v98 = ApplyPathsModality(Buffer[0], v92, v96, v173, v160, &v146, v148, v163, &PathsModality, &v138, v176);
    v165 = v98;
    v99 = v98;
    v159 = v98;
    v21 = v98;
    v149 = v98;
    if ( v98 < 0 )
    {
      v20 = 5;
      LODWORD(v32) = PathsModality;
      v144 = v146;
      goto LABEL_74;
    }
    v78 = 1LL;
    if ( v98 == 1 )
    {
      WdLogSingleEntry0(1LL);
      v78 = 1LL;
      WdLogGlobalForLineNumber = 16511;
    }
    LODWORD(v32) = PathsModality;
    if ( PathsModality < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 16512;
    }
    v144 = v146;
    if ( v146 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 16513;
    }
    if ( v99 != 2 )
    {
      if ( !*v97 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 16528;
      }
      LOBYTE(v38) = v137;
      v100 = 0LL;
      v160 = 0LL;
      goto LABEL_209;
    }
    if ( (a3 & 0x1100) != 0 || *v97 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 16517;
    }
    LOBYTE(v38) = v137;
    v78 = 1LL;
    v140 = 1;
LABEL_208:
    v100 = v160;
LABEL_209:
    v20 = 10;
    if ( (_BYTE)v38 )
    {
      v101 = DxDdGetDxgkWin32kInterface(v78);
      v102 = (*(__int64 (__fastcall **)(_QWORD, PVOID))(v101 + 176))(v49, Buffer[0]);
      v32 = v102;
      PathsModality = v102;
      if ( a6 )
      {
        if ( v102 == -1073741266 )
        {
          if ( (a3 & 0x10) != 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 16573;
          }
          WdLogSingleEntry2(4LL, v152, v32);
          WdLogGlobalForLineNumber = 16577;
          if ( !v140 )
          {
            if ( v100 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 16585;
            }
            v143 = 1;
            v160 = *v163;
            *v163 = 0LL;
          }
          v138 = 24;
          v20 = 9;
        }
        else
        {
          v20 = 10;
          if ( v102 < 0 )
          {
            v138 = 29;
            v20 = 9;
            LODWORD(v32) = 0;
            PathsModality = 0;
          }
        }
      }
      else
      {
        if ( v102 < 0 )
        {
          WdLogSingleEntry1(2LL, v102);
          LODWORD(v32) = 0;
          WdLogGlobalForLineNumber = 16566;
          PathsModality = 0;
        }
        v20 = 10;
      }
    }
LABEL_228:
    v103 = ++v152;
    if ( v150 )
    {
      v38 = 0LL;
      if ( !v142 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 16617;
      }
      DisplayScenarioJournalRetry((unsigned int)v32);
      goto LABEL_258;
    }
    if ( (_DWORD)v32 == -1073741266 )
    {
      if ( !v147 && v103 < 4 )
      {
        v104 = 3221226030LL;
        goto LABEL_245;
      }
      v38 = 0LL;
    }
    else
    {
      v38 = 0LL;
      if ( (int)v32 >= 0 )
        goto LABEL_234;
    }
    if ( !v142 )
      goto LABEL_258;
    v147 = 1;
    v104 = (unsigned int)v32;
    v137 = 0;
LABEL_245:
    DisplayScenarioJournalRetry(v104);
  }
  if ( v156 != 15 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15933;
  }
  if ( (_BYTE)v38 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15934;
  }
  v50 = v162;
  if ( v162 < 6 )
  {
    v51 = (char *)&unk_14026DC20 + 12 * v162;
    DrvDxgkLogCodePointPacket(75LL, *((_DWORD *)v51 + 1), *((_DWORD *)v51 + 2), 0);
    if ( *v51 )
    {
      v158 = 0;
      v162 = v50 + 1;
      LODWORD(v32) = GetPathsModality(v52, (char **)Buffer, 0xFu, 0);
      PathsModality = v32;
    }
    else
    {
      v53 = v158++;
      PathsModality = DrvCreatePathModalityFromAllPaths(&v170, v53, (struct D3DKMT_GETPATHSMODALITY **)Buffer);
      LODWORD(v32) = PathsModality;
      if ( PathsModality >= 0 )
      {
        if ( *((_WORD *)Buffer[0] + 10) != 1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 15986;
        }
      }
      else
      {
        v162 = v50 + 1;
        v158 = 0;
      }
    }
    if ( (int)v32 < 0 )
      goto LABEL_73;
    v54 = DrvFunctionalizeBaseVidMode((const struct RETRY_MODE *)v51, (struct D3DKMT_GETPATHSMODALITY *)Buffer[0]);
    LODWORD(v32) = v54;
    PathsModality = v54;
    if ( v54 < 0 )
    {
      WdLogSingleEntry1(2LL, v54);
      WdLogGlobalForLineNumber = 16005;
      v138 = 2;
      goto LABEL_74;
    }
LABEL_115:
    v66 = v153;
    LOBYTE(v38) = v137;
    goto LABEL_116;
  }
  v38 = 0LL;
  if ( (int)v32 < 0 )
    goto LABEL_259;
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 15941;
LABEL_258:
  if ( (int)v32 >= 0 )
  {
LABEL_234:
    v105 = v143;
LABEL_235:
    if ( v105 )
    {
      v106 = v163;
      if ( !*v163 )
      {
        v107 = v160;
        if ( !v160 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 16666;
        }
        *v106 = v107;
        v38 = 0LL;
        if ( v21 == 2 )
          v21 = 0;
        v149 = v21;
      }
    }
    goto LABEL_274;
  }
LABEL_259:
  v105 = v143;
  if ( v143 )
  {
    LODWORD(v32) = 0;
    v138 = 29;
    PathsModality = 0;
    v20 = 9;
    v21 = 0;
    v149 = 0;
  }
  if ( (int)v32 >= 0 )
    goto LABEL_235;
  v18 = v160;
LABEL_263:
  v30 = v161;
LABEL_264:
  if ( v142 )
  {
    if ( a6 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 16684;
    }
    v111 = DrvChangeDisplayFallback(
             v173,
             BYTE1(a3) & 1,
             1u,
             v18,
             v163,
             (enum _DXGK_DIAG_SDC_STAGE *)&v138,
             &v140,
             &v149);
    v32 = v111;
    PathsModality = v111;
    if ( v111 >= 0 )
    {
      v20 = 10;
      v138 = 31;
      goto LABEL_269;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 16703;
    if ( *(_BYTE *)(v30 + 1264) )
    {
LABEL_269:
      v21 = v149;
      v38 = 0LL;
    }
    else
    {
      *(_BYTE *)(v30 + 1264) = 1;
      v113 = DxDdGetDxgkWin32kInterface(v112);
      v38 = 0LL;
      v21 = v149;
      LOBYTE(v136) = 0;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD, int))(v113 + 720))(
        400LL,
        22LL,
        v32,
        v149,
        v138,
        v136);
    }
  }
  else
  {
    v38 = 0LL;
  }
LABEL_274:
  if ( (_DWORD)v32 == -1073741811 )
    goto LABEL_301;
LABEL_275:
  FreePathsModality((char *)Buffer[1]);
  Buffer[1] = 0LL;
  if ( (int)SetDisplayConfigGetActualPathsModality((struct D3DKMT_GETPATHSMODALITY **)&Buffer[1]) < 0 )
    goto LABEL_297;
  DisplayScenarioJournalSetActualPathModality(
    296 * (unsigned int)*((unsigned __int16 *)Buffer[1] + 10),
    *((unsigned __int16 *)Buffer[1] + 10),
    (char *)Buffer[1] + 56);
  v115 = (unsigned __int16 *)Buffer[1];
  v116 = 0;
  v117 = 0x8000000000000000uLL;
  if ( !*((_WORD *)Buffer[1] + 10) )
    goto LABEL_284;
  while ( 2 )
  {
    v114 = 0x8000001000000000uLL;
    if ( (*(_QWORD *)((_BYTE *)v115 + v38 + 56) & 0x8000001000000000uLL) != 0x8000000000000000uLL )
    {
LABEL_281:
      ++v116;
      v38 += 296LL;
      if ( v116 >= v115[10] )
        goto LABEL_284;
      continue;
    }
    break;
  }
  v187[0] = 9;
  v190 = 0LL;
  v191 = 0;
  v187[1] = 32;
  v188 = *(_QWORD *)((char *)v115 + v38 + 72);
  v189 = *(_DWORD *)((char *)v115 + v38 + 84);
  if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v187, 0) < 0
    || (v190 & 1) == 0 )
  {
    v115 = (unsigned __int16 *)Buffer[1];
    v117 = 0x8000000000000000uLL;
    goto LABEL_281;
  }
  v151 = 1;
LABEL_284:
  if ( !(unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline(v115, v114, v117)
    && (a3 & 0x80) != 0
    && UserIsConsoleConnection() )
  {
    v118 = 0;
    v119 = 0LL;
    if ( *((_WORD *)Buffer[1] + 10) )
    {
      v120 = (char *)Buffer[1] + 56;
      while ( 1 )
      {
        if ( (*(_QWORD *)v120 & 0x9800000000000000uLL) == 0x8000000000000000uLL )
        {
          v121 = *((_DWORD *)v120 + 22);
          if ( v121 != 0x80000000 && v121 != 11 && v121 != 13 )
            break;
        }
        v119 = (unsigned int)(v119 + 1);
        v120 += 296;
        if ( (unsigned int)v119 >= *((unsigned __int16 *)Buffer[1] + 10) )
          goto LABEL_296;
      }
      v118 = 1;
    }
LABEL_296:
    LOBYTE(v119) = v118;
    v122 = v154 >> 11;
    LOBYTE(v122) = (v154 & 0x800) != 0;
    UserNotifyExternalMonitorConnectedStatus(v122, v119);
  }
LABEL_297:
  if ( *v163 )
  {
    v123 = *((_QWORD *)*v163 + 5);
    if ( v123 )
    {
      v124 = *(_QWORD *)(v123 + 2568);
      if ( ((v124 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v124 + 160) & 0x2000000) != 0);
    }
  }
LABEL_301:
  v125 = v152;
  if ( v177 )
    *v177 = v152;
  if ( v178 )
    *v178 = v138;
  if ( v179 )
  {
    if ( v143 || (v126 = 1, !v140) )
      v126 = 0;
    *v179 = v126;
  }
  v127 = v144;
  if ( v182 )
    *v182 = v144;
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() && v180 )
    *v180 = v148[0];
  v130 = v154;
  if ( (v154 & 0x20) != 0 )
  {
    v131 = v167;
    *((_DWORD *)v167 + 8) = v21;
    *((_DWORD *)v131 + 9) = v20;
    if ( (int)v32 >= 0 != v21 >= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 16840;
    }
    v184 = 20LL;
    v183 = 0;
    v185 = v21;
    v186 = v20;
    DisplayScenarioJournalSetSpecializedData(&v183);
  }
  v94 = (v130 & 0x40) == 0;
  v132 = v174;
  if ( v94 )
    LogDiagSDC(v155, (__int64)v164, a3, v32, v125, v138, v181, v140, v174);
  v133 = *(_QWORD *)(v161 + 1768);
  if ( v133 )
    DisplayScenarioJournalSetUniqueness(*(unsigned int *)(v133 + 1573024), *(unsigned int *)(v133 + 1573008));
  LOBYTE(v129) = v127;
  LOBYTE(v128) = v140;
  LOBYTE(v135) = v151;
  DisplayScenarioJournalSetResult((unsigned int)v138, v125, v128, v129, v135, v165, v132);
  DisplayScenarioJournalFinalize(v176, (unsigned int)v32);
  WdLogSingleEntry1(4LL, (int)v32);
  WdLogGlobalForLineNumber = 16871;
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO((AUTO_TGO *)v168);
  AUTO_STATUS_CHANGE_NOTIFY<4,5>::NotifyStatusChange(&v175, 5LL);
  return (unsigned int)v32;
}
