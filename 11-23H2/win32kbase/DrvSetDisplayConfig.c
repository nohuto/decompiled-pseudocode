/*
 * XREFs of DrvSetDisplayConfig @ 0x1C0014230
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0012540 (xxxUserSetDisplayConfig.c)
 *     InitVideo @ 0x1C0016804 (InitVideo.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD994 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0135D08 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C01656CC (DrvChangeDisplaySettings.c)
 * Callees:
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C0011F08 (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C0011FFC (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     LogDiagSDC @ 0x1C0012030 (LogDiagSDC.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00157A0 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0015818 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C0015860 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00158D0 (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C0015BF8 (GetPathsModality.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C0016214 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     ApplyPathsModality @ 0x1C001851C (ApplyPathsModality.c)
 *     UserIsWddmConnectedSession @ 0x1C001EFF0 (UserIsWddmConnectedSession.c)
 *     DrvIsWddmDriverPresent @ 0x1C001F210 (DrvIsWddmDriverPresent.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00BA8D0 (DrvDxgkLogCodePointPacket.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$03$04@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C00C07F4 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$03$04@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C0AA0 (-DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C00C5450 (DrvDisplayConfigGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?DispBrokerGetCurrentMode@@YA?AW4DISPBROKER_MODE@@XZ @ 0x1C00D0184 (-DispBrokerGetCurrentMode@@YA-AW4DISPBROKER_MODE@@XZ.c)
 *     Feature_DispBroker_EmulateKernelSdcReset__private_ReportDeviceUsage @ 0x1C00D2AC8 (Feature_DispBroker_EmulateKernelSdcReset__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C015FDB0 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C01603F8 (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C0161084 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01612C4 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C016276C (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0164A74 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0165014 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01651E0 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 */

__int64 __fastcall DrvSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        char a6,
        __int64 a7,
        struct _DISPLAYCONFIG_CDS_REQUEST *a8,
        struct _MDEV *a9,
        struct _MDEV **a10,
        unsigned int *a11,
        signed int *a12,
        bool *a13,
        _BYTE *a14,
        __int64 a15,
        _DWORD *a16)
{
  struct _MDEV *v17; // r12
  int v19; // r13d
  int v20; // r14d
  int v21; // eax
  __int64 v22; // rax
  char v23; // di
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  char v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // esi
  __int64 v37; // rax
  int v38; // esi
  __int64 v39; // rax
  __int64 v40; // rcx
  struct _DISPLAYCONFIG_CDS_REQUEST *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rax
  int v48; // eax
  bool v49; // si
  __int64 v50; // rdi
  unsigned int v51; // r12d
  bool v52; // al
  unsigned int v53; // ebx
  const struct _RETRY_MODE *v54; // rdi
  __int64 v55; // rcx
  unsigned int v56; // edx
  int v57; // eax
  __int64 v58; // rcx
  __int16 v59; // r13
  int v60; // ebx
  bool v61; // si
  __int64 v62; // rcx
  unsigned int v63; // ebx
  int v64; // ebx
  int v65; // eax
  struct D3DKMT_GETPATHSMODALITY *v66; // rcx
  struct _DISPLAYCONFIG_CDS_REQUEST *v67; // rdi
  int PathPersistentMonitorsIfNeeded; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  signed int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rax
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v77; // r12
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  unsigned int v82; // ebx
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 (__fastcall *v85)(__int64, struct D3DKMT_GETPATHSMODALITY *); // rax
  __int64 v86; // rcx
  __int64 v87; // rcx
  unsigned int v88; // edi
  __int64 v89; // rax
  int v90; // ebx
  __int64 v91; // r9
  __int64 v92; // rcx
  bool v93; // zf
  unsigned int v94; // eax
  int v95; // r8d
  struct _MDEV **v96; // rdi
  struct _MDEV *v97; // r13
  int v98; // esi
  char v99; // di
  __int64 v100; // rax
  int v101; // eax
  signed int v102; // eax
  unsigned int v103; // ecx
  __int64 v104; // rcx
  char v105; // di
  struct _MDEV **v106; // rsi
  int v107; // edi
  int v108; // eax
  int v109; // eax
  char v110; // al
  int v111; // eax
  struct _MDEV **v112; // rsi
  struct _MDEV *v113; // rdi
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 DxgkWin32kInterface; // rax
  struct D3DKMT_GETPATHSMODALITY *v117; // rcx
  __int64 v118; // rdi
  __int64 v119; // rax
  __int64 v120; // rcx
  bool v121; // al
  char v122; // si
  char v123; // di
  struct _DISPLAYCONFIG_CDS_REQUEST *v124; // rax
  _DWORD *v125; // r14
  unsigned int v126; // edi
  __int64 v127; // rax
  int v129; // [rsp+20h] [rbp-E0h]
  int v130; // [rsp+28h] [rbp-D8h]
  bool v131; // [rsp+50h] [rbp-B0h]
  char v132; // [rsp+51h] [rbp-AFh]
  signed int v133; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int8 v134; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 v135; // [rsp+59h] [rbp-A7h]
  char v136; // [rsp+5Ah] [rbp-A6h]
  char v137; // [rsp+5Bh] [rbp-A5h]
  char v138; // [rsp+5Ch] [rbp-A4h]
  char v139; // [rsp+5Dh] [rbp-A3h] BYREF
  bool v140; // [rsp+5Eh] [rbp-A2h]
  bool v141[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v142; // [rsp+64h] [rbp-9Ch] BYREF
  char v143; // [rsp+68h] [rbp-98h]
  int v144; // [rsp+6Ch] [rbp-94h]
  unsigned int v145; // [rsp+70h] [rbp-90h]
  int v146; // [rsp+74h] [rbp-8Ch]
  unsigned int v147; // [rsp+78h] [rbp-88h]
  unsigned int v148; // [rsp+7Ch] [rbp-84h]
  unsigned int v149; // [rsp+80h] [rbp-80h]
  struct _MDEV **v150; // [rsp+88h] [rbp-78h]
  unsigned int v151; // [rsp+90h] [rbp-70h]
  unsigned int v152; // [rsp+94h] [rbp-6Ch]
  __int64 v153; // [rsp+98h] [rbp-68h]
  struct _MDEV *v154; // [rsp+A0h] [rbp-60h]
  int v155; // [rsp+A8h] [rbp-58h]
  int v156; // [rsp+ACh] [rbp-54h]
  struct _DISPLAYCONFIG_CDS_REQUEST *v157; // [rsp+B0h] [rbp-50h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v158; // [rsp+B8h] [rbp-48h]
  int v159; // [rsp+C0h] [rbp-40h]
  _QWORD v160[6]; // [rsp+D0h] [rbp-30h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v161[2]; // [rsp+100h] [rbp+0h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v162; // [rsp+110h] [rbp+10h] BYREF
  char v163; // [rsp+118h] [rbp+18h]
  __int64 v164; // [rsp+120h] [rbp+20h]
  void *v165; // [rsp+128h] [rbp+28h] BYREF
  __int64 v166; // [rsp+130h] [rbp+30h]
  void *v167; // [rsp+138h] [rbp+38h]
  __int64 v168; // [rsp+140h] [rbp+40h]
  _DWORD *v169; // [rsp+148h] [rbp+48h]
  void *v170; // [rsp+150h] [rbp+50h] BYREF
  unsigned int *v171; // [rsp+158h] [rbp+58h]
  signed int *v172; // [rsp+160h] [rbp+60h]
  _BYTE *v173; // [rsp+168h] [rbp+68h]
  __int64 v174; // [rsp+170h] [rbp+70h]
  bool *v175; // [rsp+178h] [rbp+78h]
  _DWORD v176[4]; // [rsp+180h] [rbp+80h] BYREF
  _DWORD v177[2]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v178; // [rsp+198h] [rbp+98h]
  int v179; // [rsp+1A0h] [rbp+A0h]
  __int64 v180; // [rsp+1A4h] [rbp+A4h]
  int v181; // [rsp+1ACh] [rbp+ACh]
  void *retaddr; // [rsp+208h] [rbp+108h]

  v17 = a9;
  v167 = a5;
  v157 = a8;
  v171 = a11;
  v172 = a12;
  v175 = a13;
  v168 = a15;
  v145 = a1;
  v169 = a16;
  v147 = a4;
  v158 = a2;
  v154 = a9;
  v150 = a10;
  v173 = a14;
  v148 = 0;
  v19 = 0;
  v137 = 0;
  v20 = -5;
  v153 = *(_QWORD *)(SGDGetSessionState() + 24);
  v135 = 0;
  v134 = 0;
  v21 = *(_DWORD *)(v153 + 1232);
  v138 = 0;
  v131 = v21 != 0;
  v133 = 0;
  v159 = -1;
  v144 = -5;
  v142 = -5;
  v151 = 0;
  v143 = 0;
  v149 = v21 != 0 ? 3 : 0;
  WdLogSingleEntry1(4LL, a3);
  v174 = DrvDxgkLogCodePointPacket(120LL, 0LL, 0LL, 0LL);
  DisplayScenarioJournalBegin(a3, a4, (unsigned __int16)gProtocolType);
  DisplayScenarioJournalSetSDCPathsAndModes(216 * v145, v145, v158);
  v170 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<4,5>::NotifyStatusChange(&v170, 4LL);
  v22 = v153;
  *a10 = 0LL;
  if ( *(_DWORD *)(v22 + 1296) )
    WdLogSingleEntry0(1LL);
  if ( (a3 & 0x1000) != 0 && a6 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v23 = -113;
  v140 = (a4 & 2) != 0 && (a3 & 0x88F) == 0x88F;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v160);
  v160[0] = &off_1C0237000;
  v164 = v168;
  *(_OWORD *)v161 = 0LL;
  v162 = 0LL;
  v163 = 0;
  v165 = 0LL;
  if ( !(unsigned int)UserIsWddmConnectedSession() || !(unsigned int)DrvIsWddmDriverPresent() || (a4 & 1) != 0 )
  {
    if ( (a4 & 0x20) != 0 )
      WdLogSingleEntry0(1LL);
    v105 = a4;
    v106 = v150;
    v107 = v105 & 1;
    v108 = DrvChangeDisplayFallback(
             v167,
             BYTE1(a3) & 1,
             v107,
             a9,
             v150,
             (enum _DXGK_DIAG_SDC_STAGE *)&v133,
             &v134,
             &v142);
    v20 = v142;
    LODWORD(v27) = v108;
    if ( v108 < 0 )
    {
      v135 = v134;
      v26 = v153;
LABEL_240:
      if ( v140 )
      {
        if ( a6 )
          WdLogSingleEntry0(1LL);
        v111 = DrvChangeDisplayFallback(
                 v167,
                 BYTE1(a3) & 1,
                 1u,
                 v17,
                 v106,
                 (enum _DXGK_DIAG_SDC_STAGE *)&v133,
                 &v134,
                 &v142);
        v36 = 0;
        v27 = v111;
        if ( v111 >= 0 )
        {
          v19 = 10;
          v133 = 31;
LABEL_245:
          v33 = v134;
          v20 = v142;
          goto LABEL_259;
        }
        WdLogSingleEntry0(1LL);
        if ( *(_BYTE *)(v26 + 1424) )
          goto LABEL_245;
        *(_BYTE *)(v26 + 1424) = 1;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v115, v114);
        v20 = v142;
        LOBYTE(v130) = 0;
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD, int))(DxgkWin32kInterface + 720))(
          400LL,
          22LL,
          v27,
          v142,
          v133,
          v130);
        v33 = v134;
LABEL_259:
        if ( (_DWORD)v27 == -1073741811 )
          goto LABEL_274;
        goto LABEL_260;
      }
LABEL_258:
      v33 = v135;
      v36 = 0;
      goto LABEL_259;
    }
    v109 = v133;
    if ( v107 )
      v109 = 30;
    v133 = v109;
    v135 = v134;
LABEL_233:
    if ( (int)v27 >= 0 )
    {
LABEL_246:
      v110 = v137;
    }
    else
    {
LABEL_234:
      v110 = v137;
      if ( v137 )
      {
        v133 = 29;
        LODWORD(v27) = 0;
        v19 = 9;
        v142 = 0;
        v20 = 0;
      }
      if ( (int)v27 < 0 )
      {
        v17 = v154;
        goto LABEL_238;
      }
    }
    v112 = v150;
    if ( v110 && !*v150 )
    {
      v113 = v154;
      if ( !v154 )
        WdLogSingleEntry0(1LL);
      *v112 = v113;
      if ( v20 == 2 )
        v20 = 0;
      v142 = v20;
    }
    goto LABEL_258;
  }
  if ( (a3 & 0x40000000) != 0 )
  {
    v26 = v153;
    if ( (a3 & 0x10000) != 0 )
    {
      LODWORD(v27) = -1073741811;
      v133 = 37;
LABEL_239:
      v106 = v150;
      goto LABEL_240;
    }
    if ( *(_DWORD *)(v153 + 1232) )
      WdLogSingleEntry0(1LL);
    LODWORD(v27) = GetPathsModality(v24, v161, 15LL);
    if ( (int)v27 < 0 )
    {
      v133 = 2;
      goto LABEL_233;
    }
    v29 = *((_DWORD *)v161[0] + 8) & 0xF;
    if ( v29 == 1 || v29 == 8 )
    {
      LODWORD(v27) = -1073741637;
      v133 = 25;
      goto LABEL_239;
    }
    v30 = DxDdGetDxgkWin32kInterface(v28, 0LL);
    LOBYTE(v31) = 1;
    v136 = 1;
    LOBYTE(v32) = v29 == 4;
    v33 = 1;
    (*(void (__fastcall **)(__int64, __int64))(v30 + 528))(v31, v32);
    if ( v29 == 4 )
    {
      v36 = 0;
      v133 = 26;
      LODWORD(v27) = 0;
      goto LABEL_260;
    }
    a3 = 132;
    v23 = -124;
    v156 = 0;
    v146 = 0;
    goto LABEL_31;
  }
  if ( (a3 & 0x80000000) == 0 )
  {
    if ( (a3 & 0xF) == 0xF )
    {
      if ( (a4 & 0x20) == 0 || (v41 = v157, !*((_DWORD *)v157 + 5)) )
      {
        v42 = ((__int64 (*)(void))DxDdGetDxgkWin32kInterface)();
        v136 = (*(__int64 (**)(void))(v42 + 536))();
        v33 = v136;
        if ( v136 )
          a3 = a3 & 0xFFFFFFF0 | 4;
LABEL_48:
        v35 = a3 & 0x10000;
        v38 = a3 & 0x80;
        v156 = v35;
        v23 = a3;
        v146 = a3 & 0x10000;
        v155 = (unsigned __int8)v38;
        if ( (_DWORD)v35 )
        {
          v45 = ((__int64 (*)(void))DxDdGetDxgkWin32kInterface)();
          v46 = (*(__int64 (__fastcall **)(__int64, _QWORD, void **))(v45 + 728))(
                  a7,
                  v38 != 0 ? 2031616 : 0x20000,
                  &v165);
          v34 = 0LL;
          LODWORD(v27) = v46;
          if ( v46 < 0 )
          {
            v133 = 42;
            goto LABEL_233;
          }
        }
        goto LABEL_32;
      }
    }
    else
    {
      v41 = v157;
    }
    if ( (a3 & 0x200) != 0 || (a4 & 0x20) != 0 && *((_DWORD *)v41 + 5) || (a3 & 0x1F) != 0 && (a3 & 0x40) == 0 )
    {
      v44 = ((__int64 (*)(void))DxDdGetDxgkWin32kInterface)();
      v33 = 0;
      v136 = 0;
      (*(void (__fastcall **)(_QWORD))(v44 + 528))(0LL);
    }
    else
    {
      v43 = ((__int64 (*)(void))DxDdGetDxgkWin32kInterface)();
      v33 = (*(__int64 (**)(void))(v43 + 536))();
      v136 = v33;
    }
    goto LABEL_48;
  }
  if ( (a3 & 0x10000) != 0 )
  {
    LODWORD(v27) = -1073741811;
    v133 = 38;
LABEL_238:
    v26 = v153;
    goto LABEL_239;
  }
  v37 = ((__int64 (*)(void))DxDdGetDxgkWin32kInterface)();
  v36 = 0;
  v136 = 0;
  v33 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(v37 + 528))(0LL, 0LL) )
  {
    a3 = 2191;
    v156 = 0;
    v146 = 0;
LABEL_31:
    v38 = 128;
    v155 = 128;
LABEL_32:
    v39 = DxDdGetDxgkWin32kInterface(v35, v34);
    LODWORD(v27) = (*(__int64 (**)(void))(v39 + 272))();
    if ( (int)v27 < 0 )
    {
      v133 = 12;
      v19 = 6;
      goto LABEL_233;
    }
    v163 = 1;
    if ( v38 )
    {
      v27 = 1LL;
      if ( !v33 && (a3 & 0xF) != 0 && (v147 & 0x20) == 0 )
        v27 = 3LL;
      v47 = DxDdGetDxgkWin32kInterface(v40, 0LL);
      v48 = (*(__int64 (__fastcall **)(__int64))(v47 + 296))(v27);
      LODWORD(v27) = v48;
      if ( v48 < 0 )
      {
        WdLogSingleEntry1(4LL, v48);
        DrvDxgkLogCodePointPacket(4LL, (unsigned int)v27, 0LL, 0LL);
        LODWORD(v27) = 0;
      }
    }
    v49 = (a3 & 0x240) == 512;
    v152 = v23 & 0xF;
    v132 = v49;
    while ( 1 )
    {
      v50 = v148;
      v166 = v148;
      WdLogSingleEntry2(4LL, v148);
      v51 = 0;
      v138 = 0;
      v139 = 0;
      v135 = 0;
      v134 = 0;
      FreePathsModality(v161[0]);
      FreePathsModality(v161[1]);
      v52 = v131;
      v161[1] = 0LL;
      v161[0] = 0LL;
      if ( v131 )
      {
        if ( v152 != 15 )
          WdLogSingleEntry0(1LL);
        if ( v49 )
          WdLogSingleEntry0(1LL);
        if ( v149 >= 6 )
        {
          if ( (int)v27 >= 0 )
          {
            WdLogSingleEntry0(1LL);
            goto LABEL_233;
          }
          goto LABEL_234;
        }
        v53 = v149;
        v54 = (const struct _RETRY_MODE *)((char *)&unk_1C0264060 + 12 * v149);
        DrvDxgkLogCodePointPacket(75LL, *((unsigned int *)v54 + 1), *((unsigned int *)v54 + 2), 0LL);
        if ( *(_BYTE *)v54 )
        {
          v151 = 0;
          v149 = v53 + 1;
          LODWORD(v27) = GetPathsModality(v55, v161, 15LL);
        }
        else
        {
          v56 = v151++;
          LODWORD(v27) = DrvCreatePathModalityFromAllPaths(&v162, v56, v161);
          if ( (int)v27 >= 0 )
          {
            if ( *((_WORD *)v161[0] + 10) != 1 )
              WdLogSingleEntry0(1LL);
          }
          else
          {
            ++v149;
            v151 = 0;
          }
        }
        if ( (int)v27 < 0 )
        {
          v133 = 2;
          goto LABEL_216;
        }
        v57 = DrvFunctionalizeBaseVidMode(v54, v161[0]);
        LODWORD(v27) = v57;
        if ( v57 < 0 )
        {
          WdLogSingleEntry1(2LL, v57);
          v133 = 2;
          goto LABEL_216;
        }
        goto LABEL_109;
      }
      if ( v152 )
      {
        if ( v156 )
        {
          LODWORD(v27) = -1073741811;
          v133 = 39;
          goto LABEL_217;
        }
        v59 = v147;
        v60 = v147 & 0x20;
        v61 = (v147 & 0x20) != 0 && *((_QWORD *)v157 + 4);
        Feature_DispBroker_EmulateKernelSdcReset__private_ReportDeviceUsage();
        if ( (v59 & 0x800) != 0 || !(unsigned int)DispBrokerGetCurrentMode() )
        {
          v64 = v60 != 0 ? 0x9000 : 0;
          if ( !v61 || *((_DWORD *)v157 + 5) )
          {
            v62 = v152;
            v65 = v152;
          }
          else
          {
            v62 = v152;
            v65 = 0x2000000;
          }
          v63 = v65 | v64;
          if ( (v63 & 0x2000000) != 0 && (_DWORD)v62 != 15 )
            WdLogSingleEntry0(1LL);
        }
        else
        {
          if ( v61 )
            WdLogSingleEntry0(1LL);
          DrvDxgkLogCodePointPacket(127LL, 0LL, 0LL, 0LL);
          v63 = 64;
        }
        LODWORD(v27) = GetPathsModality(v62, v161, v63);
        if ( (int)v27 < 0 )
        {
          v133 = 2;
          v19 = 7;
          goto LABEL_89;
        }
        v66 = v161[0];
        if ( !*((_WORD *)v161[0] + 10) )
        {
          WdLogSingleEntry0(1LL);
          v66 = v161[0];
        }
        if ( v136 || (v132 = 1, (a3 & 0x40) != 0) )
          v132 = 0;
        DrvSetDisplayConfigApplyDeviceHack(v66);
        if ( v61 )
        {
          v67 = v157;
          if ( !*((_DWORD *)v157 + 5) || (v132 = 1, !*((_DWORD *)v157 + 6)) )
            v132 = 0;
          LODWORD(v27) = DrvValidateAndApplyDevMode(v157, v161);
          if ( (int)v27 < 0 )
          {
            v20 = *((_DWORD *)v67 + 12);
            v71 = 2;
            v19 = *((_DWORD *)v67 + 13);
            v144 = v20;
            v142 = v20;
            if ( (_DWORD)v27 == -1073741266 )
              v71 = 23;
            v133 = v71;
            goto LABEL_89;
          }
          LOBYTE(v51) = *((_DWORD *)v67 + 5) != 0;
        }
        v49 = v132;
        v19 = 10;
LABEL_109:
        v50 = v166;
        goto LABEL_110;
      }
      if ( (a3 & 0x10) == 0 )
        break;
      if ( v146 )
      {
        LODWORD(v27) = -1073741811;
        v133 = 40;
        goto LABEL_217;
      }
      LODWORD(v27) = AllocatePathModalityForDisplayConfig(v145, v158, v161);
      if ( (int)v27 < 0 )
      {
        v133 = 3;
        goto LABEL_216;
      }
      LODWORD(v27) = ConvertDisplayConfigToPathModality(v145, v158, v161[0], 0LL);
      if ( (int)v27 < 0 )
      {
        v133 = 4;
        goto LABEL_216;
      }
      v73 = DxDdGetDxgkWin32kInterface(v72, 0LL);
      LODWORD(v27) = (*(__int64 (__fastcall **)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD))(v73 + 144))(
                       a3 & 0x2000 | 0x2F,
                       v161[0],
                       0LL);
      if ( (int)v27 < 0 )
      {
        v133 = 5;
        goto LABEL_216;
      }
      if ( v136 || (a3 & 0x40) != 0 )
      {
        v49 = 0;
        v132 = 0;
      }
      else
      {
        v49 = 1;
        v132 = 1;
      }
LABEL_110:
      if ( (a3 & 0x800) != 0 )
      {
        *(_WORD *)v141 = 0;
        PathPersistentMonitorsIfNeeded = CreatePathPersistentMonitorsIfNeeded(v58, v161[0], (unsigned __int16 *)v141);
        LODWORD(v27) = PathPersistentMonitorsIfNeeded;
        if ( PathPersistentMonitorsIfNeeded < 0 )
        {
          WdLogSingleEntry1(2LL, PathPersistentMonitorsIfNeeded);
          v133 = 10;
          goto LABEL_216;
        }
        v78 = DxDdGetDxgkWin32kInterface(v70, v69);
        v79 = (*(__int64 (__fastcall **)(__int64, struct D3DKMT_GETPATHSMODALITY *))(v78 + 176))(0x80000000LL, v161[0]);
        LODWORD(v27) = v79;
        if ( v79 == -1073741266 )
        {
          WdLogSingleEntry2(4LL, v50);
          v133 = 23;
          goto LABEL_216;
        }
        if ( v79 < 0 )
        {
          WdLogSingleEntry1(2LL, v79);
          v133 = 22;
          goto LABEL_216;
        }
        if ( *(_WORD *)v141 )
        {
          WdLogSingleEntry2(3LL, v50);
          LODWORD(v27) = -1073741266;
          goto LABEL_216;
        }
      }
      v82 = GetCcdRawmodeFlag() | 0x8000;
      if ( (v147 & 0x20) != 0 && (!*((_QWORD *)v157 + 4) || *((_DWORD *)v157 + 2)) )
        v82 |= 0x20000u;
      v83 = DxDdGetDxgkWin32kInterface(v81, v80);
      v84 = v82;
      LODWORD(v84) = v82 | 0x1000000;
      v85 = *(__int64 (__fastcall **)(__int64, struct D3DKMT_GETPATHSMODALITY *))(v83 + 152);
      if ( !v146 )
        v84 = v82;
      LODWORD(v27) = v85(v84, v161[0]);
      if ( (int)v27 < 0 )
      {
        WdLogSingleEntry2(4LL, v161[0]);
        v133 = 11;
        v19 = 7;
        goto LABEL_216;
      }
      if ( v155 )
      {
        *(_DWORD *)v141 = GetPathsModality(v86, &v161[1], 1048640LL);
        LODWORD(v27) = *(_DWORD *)v141;
        if ( *(int *)v141 < 0 )
        {
          v133 = 13;
          v19 = 7;
          goto LABEL_216;
        }
        v88 = (16 * (a3 & 0x1000)) | 0x4000;
        if ( (a3 & 0x1100) == 0 )
          v88 = 16 * (a3 & 0x1000);
        if ( v88 )
        {
          v89 = DxDdGetDxgkWin32kInterface(v87, 0LL);
          *(_DWORD *)v141 = (*(__int64 (__fastcall **)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD))(v89 + 144))(
                              v88,
                              v161[0],
                              0LL);
          LODWORD(v27) = *(_DWORD *)v141;
          if ( *(int *)v141 < 0 )
          {
            v133 = 14;
            goto LABEL_166;
          }
        }
        if ( (v147 & 0x10) != 0 )
          v88 |= 0x400000u;
        v90 = v88 | 0x1000000;
        v91 = 0LL;
        v92 = *(_QWORD *)(v153 + 1264);
        if ( !v146 )
          v90 = v88;
        while ( v92 )
        {
          v93 = (*(_DWORD *)(v92 + 160) & 0x800000) == 0;
          v94 = v91 + 1;
          v92 = *(_QWORD *)(v92 + 128);
          if ( v93 )
            v94 = v91;
          v91 = v94;
        }
        DisplayScenarioJournalSetExpectedPathModality(
          296 * (unsigned int)*((unsigned __int16 *)v161[0] + 10),
          *((unsigned __int16 *)v161[0] + 10),
          (char *)v161[0] + 56,
          v91);
        LOBYTE(v95) = (a3 & 0x1100) != 0;
        v96 = v150;
        v97 = v154;
        v159 = ApplyPathsModality(
                 v161[0],
                 v90,
                 v95,
                 (_DWORD)v167,
                 (__int64)v154,
                 (__int64)&v139,
                 (__int64)v150,
                 (__int64)v141,
                 (__int64)&v133,
                 v168);
        v144 = v159;
        v98 = v159;
        v142 = v159;
        if ( v159 < 0 )
        {
          v19 = 5;
          LODWORD(v27) = *(_DWORD *)v141;
          v138 = v139;
LABEL_166:
          v20 = v144;
LABEL_89:
          v49 = v132;
          goto LABEL_216;
        }
        if ( v159 == 1 )
          WdLogSingleEntry0(1LL);
        LODWORD(v27) = *(_DWORD *)v141;
        if ( *(int *)v141 < 0 )
          WdLogSingleEntry0(1LL);
        v138 = v139;
        if ( v139 )
          WdLogSingleEntry0(1LL);
        if ( v98 == 2 )
        {
          if ( (a3 & 0x1100) != 0 || *v96 )
            WdLogSingleEntry0(1LL);
          v20 = v144;
          v49 = v132;
          v99 = 1;
          v135 = 1;
          v134 = 1;
          goto LABEL_195;
        }
        if ( !*v96 )
          WdLogSingleEntry0(1LL);
        v20 = v144;
        v97 = 0LL;
        v49 = v132;
        v154 = 0LL;
      }
      else
      {
        if ( (a3 & 0x40) == 0 )
        {
          WdLogSingleEntry1(1LL, a3);
          v133 = 21;
LABEL_215:
          LODWORD(v27) = -1073741811;
          goto LABEL_216;
        }
        v97 = v154;
        v20 = 0;
        v144 = 0;
        v142 = 0;
      }
      v99 = v135;
LABEL_195:
      if ( !v49 )
      {
        if ( (int)v27 >= 0 )
          goto LABEL_210;
        v102 = 17;
LABEL_212:
        v133 = v102;
        v19 = ((int)v27 >= 0) + 9;
        goto LABEL_216;
      }
      v100 = DxDdGetDxgkWin32kInterface(v86, 0LL);
      v101 = (*(__int64 (__fastcall **)(_QWORD, struct D3DKMT_GETPATHSMODALITY *))(v100 + 176))(v51, v161[0]);
      LODWORD(v27) = v101;
      if ( !a6 )
      {
        if ( v101 < 0 )
        {
          WdLogSingleEntry1(2LL, v101);
          LODWORD(v27) = 0;
        }
LABEL_210:
        v102 = 18;
        goto LABEL_212;
      }
      if ( v101 == -1073741266 )
      {
        if ( (a3 & 0x10) != 0 )
          WdLogSingleEntry0(1LL);
        WdLogSingleEntry2(4LL, v166);
        if ( !v99 )
        {
          if ( v97 )
            WdLogSingleEntry0(1LL);
          v137 = 1;
          v154 = *v150;
          *v150 = 0LL;
        }
        v133 = 24;
        v19 = 9;
        goto LABEL_216;
      }
      if ( v101 >= 0 )
        goto LABEL_210;
      v133 = 29;
      v19 = 9;
      LODWORD(v27) = 0;
LABEL_216:
      v52 = v131;
LABEL_217:
      v103 = ++v148;
      if ( (_DWORD)v27 == -1073741266 )
      {
        if ( !v52 && v103 < 4 )
        {
          v104 = 3221226030LL;
          goto LABEL_224;
        }
      }
      else if ( (int)v27 >= 0 )
      {
        goto LABEL_246;
      }
      if ( !v140 )
        goto LABEL_233;
      v131 = 1;
      v49 = 0;
      v132 = 0;
      v104 = (unsigned int)v27;
LABEL_224:
      DisplayScenarioJournalRetry(v104);
    }
    if ( (a3 & 0x20) == 0 )
    {
      WdLogSingleEntry1(1LL, a3);
      v133 = 9;
      goto LABEL_215;
    }
    v141[0] = 0;
    if ( (v147 & 8) != 0 )
    {
      v74 = SetDisplayConfigHandleOnlyProvidedPath(v158, v161, v141, (enum _DXGK_DIAG_SDC_STAGE *)&v133);
    }
    else
    {
      if ( !v146 )
      {
        v77 = v158;
        LODWORD(v27) = AllocatePathModalityForDisplayConfig(v145, v158, v161);
        if ( (int)v27 < 0 )
        {
          v133 = 6;
          goto LABEL_216;
        }
        LODWORD(v27) = ConvertDisplayConfigToPathModality(v145, v77, v161[0], v141);
        if ( (int)v27 < 0 )
        {
          v133 = 7;
          goto LABEL_216;
        }
LABEL_135:
        if ( v141[0] )
        {
          LODWORD(v27) = SetDisplayConfigHandlePreferredScaling(v161[0], (enum _DXGK_DIAG_SDC_STAGE *)&v133);
          if ( (int)v27 < 0 )
            goto LABEL_216;
        }
        v76 = DxDdGetDxgkWin32kInterface(v75, 0LL);
        LODWORD(v27) = (*(__int64 (__fastcall **)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))(v76 + 144))(
                         256LL,
                         v161[0],
                         0LL);
        if ( (int)v27 < 0 )
        {
          v133 = 8;
          goto LABEL_216;
        }
        v51 = 1;
        goto LABEL_110;
      }
      v74 = SetDisplayConfigHandleBrokerProvidedPaths(
              v165,
              0,
              v145,
              v158,
              v161,
              v141,
              (enum _DXGK_DIAG_SDC_STAGE *)&v133);
    }
    LODWORD(v27) = v74;
    if ( v74 < 0 )
      goto LABEL_216;
    goto LABEL_135;
  }
  LODWORD(v27) = 0;
  v133 = 18;
  v33 = 1;
LABEL_260:
  FreePathsModality(v161[1]);
  v161[1] = 0LL;
  if ( (int)SetDisplayConfigGetActualPathsModality(&v161[1]) < 0 )
    goto LABEL_270;
  DisplayScenarioJournalSetActualPathModality(
    296 * (unsigned int)*((unsigned __int16 *)v161[1] + 10),
    *((unsigned __int16 *)v161[1] + 10),
    (char *)v161[1] + 56);
  v117 = v161[1];
  if ( !*((_WORD *)v161[1] + 10) )
    goto LABEL_270;
  v118 = 0LL;
  while ( (*(_QWORD *)((_BYTE *)v117 + v118 + 56) & 0x8000001000000000uLL) != 0x8000000000000000uLL )
  {
LABEL_267:
    ++v36;
    v118 += 296LL;
    if ( v36 >= *((unsigned __int16 *)v117 + 10) )
      goto LABEL_270;
  }
  v180 = 0LL;
  v181 = 0;
  v177[0] = 9;
  v177[1] = 32;
  v178 = *(_QWORD *)((char *)v117 + v118 + 72);
  v179 = *(_DWORD *)((char *)v117 + v118 + 84);
  if ( (int)DrvDisplayConfigGetDeviceInfo(v177) < 0 || (v180 & 1) == 0 )
  {
    v117 = v161[1];
    goto LABEL_267;
  }
  v143 = 1;
LABEL_270:
  if ( *v150 )
  {
    v119 = *((_QWORD *)*v150 + 5);
    if ( v119 )
    {
      v120 = *(_QWORD *)(v119 + 2552);
      if ( ((v120 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v120 + 160) & 0x2000000) != 0);
    }
  }
LABEL_274:
  if ( v171 )
    *v171 = v148;
  if ( v172 )
    *v172 = v133;
  if ( v175 )
  {
    v121 = !v137 && v33;
    *v175 = v121;
  }
  v122 = v138;
  if ( v173 )
    *v173 = v138;
  v123 = v147;
  if ( (v147 & 0x20) != 0 )
  {
    v124 = v157;
    *((_DWORD *)v157 + 12) = v20;
    *((_DWORD *)v124 + 13) = v19;
    if ( (int)v27 >= 0 != v20 >= 0 )
      WdLogSingleEntry0(1LL);
    v176[0] = 0;
    v176[1] = 16;
    v176[2] = v20;
    v176[3] = v19;
    DisplayScenarioJournalSetSpecializedData(v176);
  }
  v125 = v169;
  v93 = (v123 & 0x40) == 0;
  v126 = v148;
  if ( v93 )
    LogDiagSDC(v145, (__int64)v158, a3, v27, v148, v133, v174, v33, v169);
  v127 = *(_QWORD *)(v153 + 1928);
  if ( v127 )
    DisplayScenarioJournalSetUniqueness(*(unsigned int *)(v127 + 1573024), *(unsigned int *)(v127 + 1573008));
  LOBYTE(v25) = v33;
  LOBYTE(v130) = v143;
  LOBYTE(v129) = v122;
  DisplayScenarioJournalFinalize((unsigned int)v27, (unsigned int)v133, v126, v25, v129, v130, v159, v168, v125);
  WdLogSingleEntry1(4LL, (int)v27);
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO((AUTO_TGO *)v160);
  AUTO_STATUS_CHANGE_NOTIFY<4,5>::NotifyStatusChange(&v170, 5LL);
  return (unsigned int)v27;
}
