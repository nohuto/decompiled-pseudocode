/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88
 * Callers:
 *     DrvChangeDisplaySettings @ 0x140137250 (DrvChangeDisplaySettings.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1401522D8 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     ApplyPathsModality @ 0x1401C67FC (ApplyPathsModality.c)
 * Callees:
 *     DrvEnableMDEV @ 0x140012A70 (DrvEnableMDEV.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140013D84 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140014484 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400146AC (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14001975C (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     GreReleaseHmgrSemaphore @ 0x14001F960 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x14001FED0 (GreAcquireHmgrSemaphore.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002322C (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400234A8 (--$GreAcquireSemaphore@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x140023540 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002357C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400235B4 (--$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreHideSprites @ 0x14003E520 (GreHideSprites.c)
 *     UserIsDisconnectConnection @ 0x14004DE60 (UserIsDisconnectConnection.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x140085480 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x140085BF0 (bDynamicProcessAllDriverRealizations.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140086454 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140086BCC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x140087D30 (GreIncrementDisplaySettingsUniqueness.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x140088E4C (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1400890F0 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     DrvDisableMDEV @ 0x140089260 (DrvDisableMDEV.c)
 *     DrvDestroyMDEV @ 0x140089B74 (DrvDestroyMDEV.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140092790 (McTemplateK0_EtwWriteTransfer.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1400BC35C (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1400C2438 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     DrvLogDrvChangeDisplaySettingsFailures @ 0x1400E3F54 (DrvLogDrvChangeDisplaySettingsFailures.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1401169EC (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1401170F8 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     GreUpdateSharedDevCaps @ 0x14011F320 (GreUpdateSharedDevCaps.c)
 *     DrvUpdateDisplayDriverParameters @ 0x140122CD0 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x140124B90 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x14012AA90 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x14012AB08 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14012AB9C (--$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x140130840 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1401308E8 (--$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x14013A8E4 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x14013D36C (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x140147244 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401491F8 (--$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14014DC78 (--$GreReleaseSemaphoreExclusive@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     IsGrepReleasePublicPFTSemaphoreExSupported @ 0x14014E4CC (IsGrepReleasePublicPFTSemaphoreExSupported.c)
 *     IsGrepAcquirePublicPFTSemaphoreExSupported @ 0x14014F5C8 (IsGrepAcquirePublicPFTSemaphoreExSupported.c)
 *     IsGrepReleaseRFONTListSemaphoreExSupported @ 0x140151E6C (IsGrepReleaseRFONTListSemaphoreExSupported.c)
 *     IsGreHideSpritesSupported @ 0x140152700 (IsGreHideSpritesSupported.c)
 *     ??$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140158030 (--$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x140159F28 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     bDynamicModeChange @ 0x140175A68 (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x140176B40 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x140178DA4 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ??$GreAcquireSemaphore@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140198250 (--$GreAcquireSemaphore@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x140198F20 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019A38C (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     IsGrepAcquireRFONTListSemaphoreExSupported @ 0x14019E5A0 (IsGrepAcquireRFONTListSemaphoreExSupported.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1401A8EC8 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401C852C (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x14023ABDC (IsDrvRealizeHalftonePaletteSupported.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsInternal(
        __int64 a1,
        struct _ERESOURCE *a2,
        struct D3DKMT_GETPATHSMODALITY *a3,
        void *a4,
        HDEV *a5,
        char **a6,
        unsigned int a7,
        unsigned int a8,
        bool *a9)
{
  struct _devicemodeW *Src; // r15
  int PruneFlag; // r14d
  __int64 v12; // rcx
  unsigned int v13; // edi
  int v14; // ebx
  int v15; // esi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 dmDisplayOrientation; // rbx
  __int64 dmBitsPerPel; // rsi
  DWORD dmPelsHeight; // r14d
  DWORD dmPelsWidth; // r15d
  __int64 CurrentProcess; // rax
  int updated; // eax
  unsigned int v31; // r13d
  int v32; // ecx
  struct _MDEV *MDEV; // rsi
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r14
  int v39; // ebx
  char **v40; // rsi
  int v41; // ebx
  __int64 v42; // rcx
  __int16 v43; // r14
  struct _MDEV *v44; // rax
  int v45; // eax
  bool *v46; // rbx
  unsigned int v47; // r15d
  bool v48; // r14
  __int64 v49; // rbx
  int v50; // eax
  int v51; // r15d
  HDEV v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rcx
  MULTIDEVLOCKOBJ *v55; // r14
  MULTIDEVLOCKOBJ *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  unsigned int v59; // r14d
  __int64 v60; // rcx
  MULTIDEVLOCKOBJ *v61; // r13
  MULTIDEVLOCKOBJ *v62; // r14
  void *v63; // r14
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned int v66; // edx
  unsigned int v67; // ecx
  unsigned int v68; // edx
  __int64 v69; // r14
  __int64 v70; // r14
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  void (*v75)(void); // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  void (*v78)(void); // rax
  __int64 v79; // rcx
  int v80; // eax
  int v81; // r9d
  struct D3DKMT_GETPATHSMODALITY *v82; // r10
  int v83; // r11d
  __int64 CloneHDEV; // rax
  unsigned int v85; // ecx
  __int64 v86; // r14
  __int64 v87; // rax
  HDEV v88; // rcx
  int v89; // eax
  HDEV v90; // rdx
  __int64 v91; // rcx
  unsigned int v92; // r14d
  unsigned int v93; // r9d
  unsigned int v94; // r8d
  __int64 v95; // r13
  HDEV v96; // rdx
  __int64 v97; // r15
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rcx
  void (*v102)(void); // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  int v105; // r8d
  void (*v106)(void); // rax
  BOOL v107; // r8d
  void *v108; // r9
  HDEV v109; // rax
  HDEV v110; // r14
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  void (*v115)(void); // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  void (*v118)(void); // rax
  __int64 v119; // rcx
  HDEV v120; // rdx
  HDEV v121; // rcx
  __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // rcx
  void (*v127)(void); // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  int v130; // r8d
  void (*v131)(void); // rax
  __int64 v132; // rax
  signed __int32 v133; // ett
  signed __int32 v134; // ett
  __int64 *v135; // rcx
  __int64 v136; // rbx
  __int64 v137; // rax
  __int64 v138; // r14
  __int64 v139; // rdx
  void (__fastcall *v140)(__int64, __int64); // rax
  __int64 v141; // r14
  __int64 v142; // rdx
  int v143; // r8d
  __int64 v144; // rdx
  int v145; // r8d
  __int64 v146; // rdx
  int v147; // r8d
  char *v148; // rbx
  __int64 v149; // rcx
  unsigned int k; // edx
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 m; // rax
  unsigned int n; // r9d
  __int64 v155; // r8
  __int64 v156; // rax
  __int64 v157; // rdx
  int v158; // ecx
  int v159; // r10d
  PDEV *v160; // rcx
  unsigned int i; // ebx
  unsigned int v162; // r8d
  unsigned int j; // edx
  __int64 v164; // rcx
  int v165; // [rsp+50h] [rbp-B0h]
  int v166; // [rsp+54h] [rbp-ACh]
  int v167; // [rsp+54h] [rbp-ACh]
  unsigned int v168; // [rsp+58h] [rbp-A8h]
  int v169; // [rsp+5Ch] [rbp-A4h]
  int v170; // [rsp+5Ch] [rbp-A4h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-A0h]
  HDEV v172; // [rsp+60h] [rbp-A0h]
  __int64 v173; // [rsp+68h] [rbp-98h]
  MULTIDEVLOCKOBJ *v174; // [rsp+70h] [rbp-90h]
  HDEV v175; // [rsp+78h] [rbp-88h]
  MULTIDEVLOCKOBJ *v176; // [rsp+80h] [rbp-80h]
  struct D3DKMT_GETPATHSMODALITY *v178; // [rsp+88h] [rbp-78h]
  unsigned int v179; // [rsp+98h] [rbp-68h]
  PVOID Buffer; // [rsp+A0h] [rbp-60h] BYREF
  int v181; // [rsp+A8h] [rbp-58h] BYREF
  void *v182; // [rsp+B0h] [rbp-50h]
  struct _ERESOURCE *v183; // [rsp+B8h] [rbp-48h] BYREF
  HDEV v184; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v185; // [rsp+C8h] [rbp-38h]
  __int64 v186; // [rsp+D0h] [rbp-30h] BYREF
  HDEV v187; // [rsp+E0h] [rbp-20h] BYREF
  HDEV v188; // [rsp+E8h] [rbp-18h] BYREF
  HDEV v189; // [rsp+F0h] [rbp-10h] BYREF
  struct _BASEOBJECT *v190; // [rsp+F8h] [rbp-8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v192[3]; // [rsp+110h] [rbp+10h] BYREF
  HDEV v193[2]; // [rsp+128h] [rbp+28h] BYREF
  __int128 v194; // [rsp+138h] [rbp+38h]
  __int128 v195; // [rsp+148h] [rbp+48h]
  __int64 v196; // [rsp+158h] [rbp+58h]

  Src = (struct _devicemodeW *)a2;
  v183 = a2;
  v182 = a4;
  PruneFlag = a7 != 0;
  DestinationString = 0LL;
  p_DestinationString = 0LL;
  Buffer = 0LL;
  v181 = 0;
  v165 = 0;
  v174 = 0LL;
  v176 = 0LL;
  v173 = *(_QWORD *)(W32GetSessionState(a9) + 88);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v12, &DrvChangeDisplaySettingsStart, 0LL);
  v13 = a8;
  v14 = -__CFSHR__(a8, 3);
  v169 = v14;
  v15 = -__CFSHR__(a8, 2);
  WdLogSingleEntry5(4LL, a1, v15, -(a8 & 1), a7, v14);
  WdLogGlobalForLineNumber = 24922;
  if ( Src )
  {
    if ( !a1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 24930;
    }
    if ( a3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 24936;
    }
  }
  *a6 = 0LL;
  *(_DWORD *)(v173 + 1064) = 0;
  *(_QWORD *)(v173 + 1072) = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline();
  v18 = 0LL;
  if ( IsEnabledDeviceUsageNoInline && a9 )
    *a9 = 0;
  if ( a1 )
  {
    if ( a7 == -1 )
      PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)a1);
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 64));
    v18 = 0LL;
    p_DestinationString = &DestinationString;
    if ( Src )
    {
      v20 = DrvProbeAndCaptureDevmode(
              (struct tagGRAPHICS_DEVICE *)a1,
              (struct _devicemodeW **)&Buffer,
              &v181,
              0LL,
              Src,
              0,
              PruneFlag,
              v14,
              -__CFSHR__(a8, 8),
              0LL);
      if ( v20 < 0 )
      {
        if ( Buffer )
          GreDeleteFastMutex((char *)Buffer);
        WdLogSingleEntry0(5LL);
        WdLogGlobalForLineNumber = 24994;
        DrvLogDrvChangeDisplaySettingsFailures(0LL, v20);
        if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
          McTemplateK0_EtwWriteTransfer(v23, &DrvChangeDisplaySettingsEnd, 0LL);
        return 4294967294LL;
      }
      if ( !Src->dmFields )
        v14 = 1;
      v169 = v14;
      dmDisplayOrientation = Src->dmDisplayOrientation;
      dmBitsPerPel = Src->dmBitsPerPel;
      dmPelsHeight = Src->dmPelsHeight;
      dmPelsWidth = Src->dmPelsWidth;
      CurrentProcess = PsGetCurrentProcess(v19, 1LL, v21, v22);
      WdLogSingleEntry5(4LL, CurrentProcess, dmPelsWidth, dmPelsHeight, dmBitsPerPel, dmDisplayOrientation);
      v14 = v169;
      v18 = 0LL;
      Src = (struct _devicemodeW *)v183;
      v15 = -__CFSHR__(a8, 2);
      WdLogGlobalForLineNumber = 25008;
    }
    else
    {
      v14 = 1;
      v169 = 1;
    }
  }
  if ( (a8 & 1) != 0 && a1 && Src && !UserIsDisconnectConnection(v17) )
  {
    updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)a1, (struct _devicemodeW *)Buffer, v181, 1);
    v31 = 0;
    if ( updated < 0 )
    {
      v32 = -2;
      if ( updated == -1073741582 )
        v32 = -5;
      v165 = v32;
    }
    DrvLogDrvChangeDisplaySettingsFailures(1LL, updated);
  }
  else
  {
    v31 = 0;
  }
  if ( !v15 || v165 )
    goto LABEL_270;
  DrvAcquireChangeDisplaySettingLocks(v17, v18);
  v165 = -1;
  MDEV = 0LL;
  if ( !a5 )
  {
    CheckAndNotifyDualView(p_DestinationString, 0LL);
    MDEV = DrvCreateMDEV(
             p_DestinationString,
             (struct _devicemodeW *)Buffer,
             v182,
             (unsigned __int8)(a8 & 8) >> 1,
             0LL,
             a7,
             v14,
             -__CFSHR__(a8, 8),
             a3);
    if ( !MDEV )
    {
      DrvLogDrvChangeDisplaySettingsFailures(3LL, -1073741823);
      goto LABEL_80;
    }
    goto LABEL_78;
  }
  v34 = CheckAndNotifyDualView(p_DestinationString, (__int64)a5);
  if ( !v34 )
  {
    v39 = v169;
    goto LABEL_49;
  }
  v35 = v34 - 1;
  if ( !v35 )
  {
    v39 = 1;
LABEL_49:
    v38 = v173;
    goto LABEL_50;
  }
  if ( v35 != 1 )
  {
    if ( Buffer )
      GreDeleteFastMutex((char *)Buffer);
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 25105;
    DrvLogDrvChangeDisplaySettingsFailures(2LL, -1073741823);
    DrvReleaseChangeDisplaySettingLocks(v36);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      McTemplateK0_EtwWriteTransfer(v37, &DrvChangeDisplaySettingsEnd, 0LL);
    return 4294967290LL;
  }
  v38 = v173;
  v39 = 1;
  *(_DWORD *)(v173 + 1064) = 1;
  *(_QWORD *)(v173 + 1072) = a5;
LABEL_50:
  if ( (a8 & 0x40) == 0 )
  {
LABEL_54:
    if ( !(unsigned int)DrvDisableMDEV(a5, 0, 0) )
    {
      DrvLogDrvChangeDisplaySettingsFailures(4LL, -1073741823);
      v31 = 0;
      goto LABEL_80;
    }
    v43 = *(_WORD *)(v38 + 1080);
    v44 = DrvCreateMDEV(
            p_DestinationString,
            (struct _devicemodeW *)Buffer,
            v182,
            (unsigned __int8)(v13 & 8) >> 1,
            (struct _MDEV *)a5,
            a7,
            v39,
            -__CFSHR__(v13, 8),
            a3);
    v31 = 0;
    MDEV = v44;
    if ( !v44 )
    {
      DrvLogDrvChangeDisplaySettingsFailures(3LL, -1073741823);
      DrvEnableMDEV((__int64)a5, 0, 0);
LABEL_80:
      v50 = v165;
LABEL_81:
      v51 = 0;
      v166 = 0;
      v52 = 0LL;
      v172 = 0LL;
      v168 = 0;
      *a6 = (char *)MDEV;
      v53 = 0LL;
      v170 = 0;
      if ( v50 )
      {
        v41 = v165;
        if ( v165 == 2 )
        {
          *(_QWORD *)MDEV = *a5;
          *((_QWORD *)MDEV + 1) = a5[1];
          if ( *((_DWORD *)MDEV + 5) > 1u )
          {
            SEMOBJ<19>::SEMOBJ<19>(&v183, (struct _ERESOURCE **)v173);
            v160 = *(PDEV **)MDEV;
            ++*((_DWORD *)v160 + 3);
            PDEV::IncrementClientReferenceCount(v160);
            if ( v183 )
            {
              GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
                (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
                (__int64)v183);
              v183 = 0LL;
            }
          }
        }
LABEL_254:
        if ( a5 && (v41 & 0xFFFFFFFD) == 0 )
        {
          DrvEnableMDEV((__int64)MDEV, 0, 0);
          if ( !v41 )
          {
            for ( i = 0; i < *((_DWORD *)a5 + 5); ++i )
            {
              v162 = *((_DWORD *)MDEV + 5);
              for ( j = 0; j < v162; ++j )
              {
                if ( *((_QWORD *)a5[7 * i + 5] + 321) == *(_QWORD *)(*((_QWORD *)MDEV + 7 * j + 5) + 2568LL) )
                  break;
              }
              if ( j == v162 )
                DrvDisableDisplay(a5[7 * i + 5], 1);
            }
            v41 = v165;
          }
          DrvDestroyMDEV((__int64 *)a5);
        }
        DrvReleaseChangeDisplaySettingLocks(v53);
        if ( v176 )
          MULTIDEVLOCKOBJ::`scalar deleting destructor'(v176);
        v55 = v174;
        if ( !v174 )
          goto LABEL_271;
        goto LABEL_269;
      }
      v185 = 0LL;
      v175 = 0LL;
      v178 = 0LL;
      v196 = 0LL;
      *(_OWORD *)v193 = 0LL;
      v194 = 0LL;
      v195 = 0LL;
      v55 = (MULTIDEVLOCKOBJ *)Win32AllocPoolImpl(256LL, 0x60uLL, 0x6C6D6847u);
      v174 = v55;
      if ( !v55 )
      {
        DrvReleaseChangeDisplaySettingLocks(v54);
LABEL_270:
        v41 = v165;
LABEL_271:
        v40 = a6;
        goto LABEL_272;
      }
      *(_QWORD *)v55 = 1LL;
      *((_QWORD *)v55 + 1) = 0LL;
      v56 = (MULTIDEVLOCKOBJ *)Win32AllocPoolImpl(256LL, 0x60uLL, 0x6C6D6847u);
      v57 = 0LL;
      v176 = v56;
      if ( !v56 )
      {
        DrvReleaseChangeDisplaySettingLocks(0LL);
LABEL_269:
        MULTIDEVLOCKOBJ::`scalar deleting destructor'(v55);
        goto LABEL_270;
      }
      *(_QWORD *)v56 = 1LL;
      v58 = 1LL;
      *((_QWORD *)v56 + 1) = 0LL;
      v59 = 0;
      if ( *((_DWORD *)MDEV + 5) )
      {
        v176 = v56;
        do
          DrvUpdatePDevForWDDMDevice(*((_QWORD *)MDEV + 7 * v59++ + 5));
        while ( v59 < *((_DWORD *)MDEV + 5) );
        v57 = 0LL;
        v51 = 0;
        v58 = 1LL;
      }
      if ( !a5 )
        goto LABEL_157;
      v185 = DrvDisableDirectDrawForModeChange((struct _MDEV *)a5, MDEV, v193);
      if ( !v185 )
      {
        DrvLogDrvChangeDisplaySettingsFailures(5LL, -1073741823);
        v60 = 1LL;
        v51 = 1;
LABEL_206:
        v61 = v176;
        v62 = v174;
        goto LABEL_207;
      }
      v61 = v176;
      MULTIDEVLOCKOBJ::vInit(v176, (struct _MDEV *)a5);
      v62 = v174;
      MULTIDEVLOCKOBJ::vInit(v174, MDEV);
      if ( (*(_DWORD *)v174 & 1) == 0 || (*(_DWORD *)v176 & 1) == 0 )
      {
        DrvLogDrvChangeDisplaySettingsFailures(8LL, -1073741823);
        v60 = 1LL;
        v51 = 1;
LABEL_207:
        v189 = *a5;
        if ( ((_DWORD)v189[10] & 0x20000) != 0 )
          PDEVOBJ::bDisabled((PDEVOBJ *)&v189, 1);
        if ( (int)IsGreHideSpritesSupported(v60, v58) >= 0 )
        {
          v135 = (__int64 *)a5;
          if ( !v51 )
            v135 = (__int64 *)MDEV;
          GreHideSprites(*v135, 0);
        }
        if ( v175 )
          GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
            *((_QWORD *)v175 + 6));
        MULTIDEVLOCKOBJ::vUnlock(v62);
        MULTIDEVLOCKOBJ::vUnlock(v61);
LABEL_216:
        if ( v51 )
        {
LABEL_226:
          if ( v178 )
          {
            GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              *((_QWORD *)v178 + 6));
            v141 = v173;
            GreReleaseSemaphoreExclusive<7,>((struct _ERESOURCE **)v173, v142, v143);
            GreReleaseSemaphoreExclusive<10,>((struct _ERESOURCE **)v173, v144, v145);
            GreReleaseSemaphoreExclusive<6,>((__int64 *)v173);
            GreReleaseSemaphoreExclusive<4,PDEVOBJ>((__int64)v178, v146, v147);
          }
          else
          {
            v141 = v173;
          }
          v148 = (char *)v185;
          if ( v185 )
          {
            W32GetSessionState(v57);
            GreIncrementDisplaySettingsUniqueness(v149);
            if ( v148 != (char *)v193 )
              GreDeleteFastMutex(v148);
          }
          if ( v51 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 26467;
            DrvBackoutMDEV(MDEV);
            GreDeleteFastMutex((char *)MDEV);
            *a6 = 0LL;
            if ( a5 )
              DrvEnableMDEV((__int64)a5, 0, 0);
            ++*(_DWORD *)(v141 + 1164);
            v41 = -1;
            v165 = -1;
          }
          else
          {
            if ( a5 )
            {
              for ( k = 0; k < *((_DWORD *)a5 + 5); *(_DWORD *)(v152 + 160) &= ~1u )
              {
                v151 = k++;
                v152 = *((_QWORD *)a5[7 * v151 + 5] + 321);
              }
            }
            for ( m = *(_QWORD *)(v141 + 1096); m; m = *(_QWORD *)(m + 128) )
              *(_DWORD *)(m + 160) &= ~4u;
            for ( n = 0; n < *((_DWORD *)MDEV + 5); ++n )
            {
              v155 = 56LL * n;
              v156 = *(_QWORD *)((char *)MDEV + v155 + 40);
              v157 = *(_QWORD *)(v156 + 2584);
              *(_DWORD *)(*(_QWORD *)(v156 + 2568) + 160LL) |= 1u;
              v158 = *(_DWORD *)((char *)MDEV + v155 + 56);
              *(_DWORD *)(v157 + 76) = v158;
              v159 = *(_DWORD *)((char *)MDEV + v155 + 60);
              *(_DWORD *)(v157 + 80) = v159;
              if ( !v158 && !v159 )
                *(_DWORD *)(*(_QWORD *)(v156 + 2568) + 160LL) |= 4u;
            }
            GreUpdateSharedDevCaps(*(_QWORD *)MDEV);
            v41 = v165;
          }
          goto LABEL_254;
        }
LABEL_217:
        v136 = *(_QWORD *)MDEV;
        if ( *((_DWORD *)MDEV + 5) == 1 )
        {
          v190 = *(struct _BASEOBJECT **)(v136 + 1792);
          if ( *(_QWORD *)(v136 + 24) != v136 )
            *(_QWORD *)(v136 + 24) = v136;
          *(_QWORD *)(v136 + 1752) = *(_QWORD *)(v136 + 2856);
          XEPALOBJ::apalResetColorTable(&v190);
        }
        else
        {
          DrvSetSharedDevLock(MDEV, v58);
          v137 = DrvSetSharedPalette(MDEV);
          v138 = v137;
          if ( (*(_DWORD *)(v136 + 2156) & 0x100) == 0 )
          {
            if ( v137 )
            {
              if ( (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
              {
                v57 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v57, v139) + 24);
                v140 = *(void (__fastcall **)(__int64, __int64))(v57 + 888);
                if ( v140 )
                  v140(v138, 1LL);
              }
            }
          }
        }
        goto LABEL_226;
      }
      v182 = *a5;
      v63 = v182;
      GreAcquireSemaphore<4,PDEVOBJ>((__int64)v182);
      GreAcquireSemaphore<6,>((__int64 *)v173);
      GreAcquireSemaphore<7,>((struct _ERESOURCE **)v173);
      GreAcquireSemaphore<8,PDEVOBJ>((__int64)v63);
      MULTIDEVLOCKOBJ::vLock(v176);
      MULTIDEVLOCKOBJ::vLock(v174);
      if ( (int)IsGreHideSpritesSupported(v65, v64) >= 0 )
        GreHideSprites((__int64)*a5, 1u);
      v66 = *((_DWORD *)MDEV + 5);
      v67 = *((_DWORD *)a5 + 5);
      if ( v66 == 1 )
      {
        if ( v67 != 1 )
        {
          v68 = 0;
          if ( v67 )
          {
            while ( 1 )
            {
              v69 = 7LL * v68;
              if ( a5[v69 + 5] == *((HDEV *)MDEV + 5) )
                break;
              if ( ++v68 >= v67 )
                goto LABEL_100;
            }
            CloneHDEV = DrvCreateCloneHDEV(*((HDEV *)MDEV + 5));
            v52 = (HDEV)CloneHDEV;
            if ( !CloneHDEV )
            {
              DrvLogDrvChangeDisplaySettingsFailures(6LL, -1073741823);
              v70 = 0LL;
              v51 = 1;
              v166 = 1;
              goto LABEL_124;
            }
            a5[v69 + 5] = (HDEV)CloneHDEV;
            a5[v69 + 6] = (HDEV)*((_QWORD *)MDEV + 5);
            v70 = *((_QWORD *)MDEV + 5);
            goto LABEL_123;
          }
        }
      }
      else if ( v67 == 1 )
      {
        v85 = 0;
        if ( v66 )
        {
          while ( 1 )
          {
            v86 = 56LL * v85;
            if ( *(HDEV *)((char *)MDEV + v86 + 40) == a5[5] )
              break;
            if ( ++v85 >= v66 )
              goto LABEL_121;
          }
          v87 = DrvCreateCloneHDEV(a5[5]);
          v52 = (HDEV)v87;
          if ( !v87 )
          {
            DrvLogDrvChangeDisplaySettingsFailures(6LL, -1073741823);
            v70 = 0LL;
            v80 = 1;
            goto LABEL_109;
          }
          *(_QWORD *)((char *)MDEV + v86 + 40) = v87;
          *(_QWORD *)((char *)MDEV + v86 + 48) = a5[5];
          v70 = (__int64)a5[5];
          v170 = 1;
        }
        else
        {
LABEL_121:
          v70 = 0LL;
        }
        v168 = 1;
        if ( !v52 )
        {
LABEL_124:
          if ( v51 )
          {
LABEL_108:
            v80 = v166;
LABEL_109:
            v58 = v168;
            v178 = (struct D3DKMT_GETPATHSMODALITY *)v182;
            v179 = v168;
            v167 = v80;
            v172 = (HDEV)v70;
            if ( !v70 )
              goto LABEL_129;
            v186 = v70;
            v167 = v80;
            v172 = (HDEV)v70;
            v178 = (struct D3DKMT_GETPATHSMODALITY *)v182;
            if ( !(unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v186) )
              goto LABEL_129;
            v167 = v81;
            v172 = (HDEV)v70;
            v168 = v58;
            v178 = v82;
            if ( (*(_DWORD *)(v70 + 2112) & 0x10000) != 0
              || (v168 = v58,
                  v167 = v81,
                  v172 = (HDEV)v70,
                  v178 = v82,
                  (unsigned int)bDynamicProcessAllDriverRealizations(v70, 0LL, v83)) )
            {
LABEL_129:
              v51 = v167;
              if ( v167 )
              {
LABEL_205:
                v60 = 1LL;
                goto LABEL_206;
              }
            }
            else
            {
              v172 = (HDEV)v70;
              v51 = 0;
              v178 = (struct D3DKMT_GETPATHSMODALITY *)v182;
              v167 = 0;
              v168 = v179;
            }
            v88 = (HDEV)*((unsigned int *)MDEV + 5);
            v89 = *((_DWORD *)a5 + 5);
            if ( (_DWORD)v88 != 1 )
            {
              if ( v89 != 1 )
              {
                v92 = 0;
                if ( (_DWORD)v88 )
                {
                  do
                  {
                    v93 = *((_DWORD *)a5 + 5);
                    v94 = 0;
                    v95 = 56LL * v92;
                    v96 = *(HDEV *)((char *)MDEV + v95 + 40);
                    if ( v93 )
                    {
                      while ( 1 )
                      {
                        v97 = 7LL * v94;
                        v88 = a5[v97 + 5];
                        if ( *((_QWORD *)v96 + 321) == *((_QWORD *)v88 + 321) )
                          break;
                        if ( ++v94 >= v93 )
                          goto LABEL_145;
                      }
                      v107 = 1;
                      if ( _bittest((const signed __int32 *)v96 + 528, 0x10u) )
                        v107 = !_bittest((const signed __int32 *)v88 + 528, 0x10u);
                      if ( v96 == v88 )
                        goto LABEL_145;
                      if ( (unsigned int)bDynamicModeChange(v88, v96, v107) == 1 )
                      {
                        v88 = a5[v97 + 5];
                        a5[v97 + 5] = *(HDEV *)((char *)MDEV + v95 + 40);
                        *(_QWORD *)((char *)MDEV + v95 + 40) = v88;
LABEL_145:
                        v51 = v167;
                        goto LABEL_146;
                      }
                      DrvLogDrvChangeDisplaySettingsFailures(11LL, -1073741823);
                      v167 = 1;
                      v51 = 1;
                    }
LABEL_146:
                    ++v92;
                  }
                  while ( v92 < *((_DWORD *)MDEV + 5) );
                  LOBYTE(v13) = a8;
                }
              }
              goto LABEL_148;
            }
            v90 = (HDEV)*((_QWORD *)MDEV + 5);
            if ( v89 == 1 )
            {
              if ( (unsigned int)bDynamicModeChange(a5[5], v90, 1) == 1 )
              {
                v88 = a5[5];
                a5[5] = (HDEV)*((_QWORD *)MDEV + 5);
                *((_QWORD *)MDEV + 5) = v88;
                goto LABEL_148;
              }
              v91 = 9LL;
            }
            else
            {
              if ( (unsigned int)bDynamicModeChange(*a5, v90, 1) == 1 )
              {
                v88 = *a5;
                *a5 = (HDEV)*((_QWORD *)MDEV + 5);
                *((_QWORD *)MDEV + 5) = v88;
                if ( v52 )
                  v172 = v88;
                goto LABEL_148;
              }
              v91 = 10LL;
            }
            DrvLogDrvChangeDisplaySettingsFailures(v91, -1073741823);
            v51 = 1;
LABEL_148:
            GreReleaseHmgrSemaphore((__int64)v88);
            GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              *(_QWORD *)v173);
            if ( (int)IsGrepReleaseRFONTListSemaphoreExSupported(v99, v98) >= 0 )
            {
              v101 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v101, v100) + 24);
              v102 = *(void (**)(void))(v101 + 1952);
              if ( v102 )
                v102();
            }
            if ( (int)IsGrepReleasePublicPFTSemaphoreExSupported(v101, v100) >= 0 )
            {
              v106 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v104, v103) + 24) + 1904LL);
              if ( v106 )
                v106();
            }
            GreReleaseSemaphoreExclusive<13,>((struct _ERESOURCE **)v173, v103, v105);
            if ( v51 )
              goto LABEL_205;
            v31 = v168;
            v58 = 1LL;
            v57 = 0LL;
            if ( *((_DWORD *)a5 + 5) == 1 )
            {
              *a5 = a5[5];
              a5[1] = a5[6];
            }
LABEL_157:
            if ( *((_DWORD *)MDEV + 5) == 1 )
            {
              *(_QWORD *)MDEV = *((_QWORD *)MDEV + 5);
              *((_QWORD *)MDEV + 1) = *((_QWORD *)MDEV + 6);
              goto LABEL_168;
            }
            v108 = (void *)*((_QWORD *)MDEV + 3);
            v192[2] = MulEnableDriver;
            v187 = 0LL;
            v192[1] = 0LL;
            v192[0] = 1LL;
            v109 = hCreateHDEV(
                     (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
                     (struct _DRV_NAMES *)v192,
                     (struct _devicemodeW *)MDEV,
                     v108,
                     0,
                     0,
                     1,
                     0,
                     2u,
                     &v187);
            *(_QWORD *)MDEV = v109;
            v110 = v109;
            if ( !v109 )
            {
              DrvLogDrvChangeDisplaySettingsFailures(7LL, -1073741823);
              v51 = 1;
LABEL_168:
              if ( !a5 )
                goto LABEL_216;
              goto LABEL_193;
            }
            if ( !a5 )
              goto LABEL_217;
            GreAcquireSemaphore<8,PDEVOBJ>((__int64)v109);
            GreAcquireSemaphore<13,>((struct _ERESOURCE **)v173);
            if ( (int)IsGrepAcquirePublicPFTSemaphoreExSupported(v112, v111) >= 0 )
            {
              v114 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v114, v113) + 24);
              v115 = *(void (**)(void))(v114 + 1888);
              if ( v115 )
                v115();
            }
            if ( (int)IsGrepAcquireRFONTListSemaphoreExSupported(v114, v113) >= 0 )
            {
              v118 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v117, v116) + 24) + 1936LL);
              if ( v118 )
                v118();
            }
            GreAcquireSemaphore<19,>((struct _ERESOURCE **)v173);
            GreAcquireHmgrSemaphore(v119);
            v120 = *(HDEV *)MDEV;
            if ( v31 )
            {
              if ( (unsigned int)bDynamicModeChange(a5[5], v120, 1) == 1 )
              {
                v121 = *(HDEV *)MDEV;
                *(_QWORD *)MDEV = a5[5];
                *a5 = v121;
                a5[5] = v121;
                if ( v52 )
                  v172 = v121;
                goto LABEL_186;
              }
              v122 = 12LL;
            }
            else
            {
              if ( (unsigned int)bDynamicModeChange(*a5, v120, 1) == 1 )
              {
                v121 = *a5;
                *a5 = *(HDEV *)MDEV;
                *(_QWORD *)MDEV = v121;
                goto LABEL_186;
              }
              v122 = 13LL;
            }
            DrvLogDrvChangeDisplaySettingsFailures(v122, -1073741823);
            v51 = 1;
LABEL_186:
            GreReleaseHmgrSemaphore((__int64)v121);
            GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              *(_QWORD *)v173);
            if ( (int)IsGrepReleaseRFONTListSemaphoreExSupported(v124, v123) >= 0 )
            {
              v126 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v126, v125) + 24);
              v127 = *(void (**)(void))(v126 + 1952);
              if ( v127 )
                v127();
            }
            if ( (int)IsGrepReleasePublicPFTSemaphoreExSupported(v126, v125) >= 0 )
            {
              v131 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v129, v128) + 24) + 1904LL);
              if ( v131 )
                v131();
            }
            GreReleaseSemaphoreExclusive<13,>((struct _ERESOURCE **)v173, v128, v130);
            GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              *((_QWORD *)v110 + 6));
LABEL_193:
            if ( !v51 && v52 && v172 )
            {
              v184 = v52;
              v188 = v172;
              if ( v170 )
              {
                v132 = *((_QWORD *)v172 + 318);
                *((_QWORD *)v52 + 318) = v132;
                if ( v132 )
                  *(_QWORD *)(v132 + 48) = v52;
                *((_QWORD *)v52 + 223) = *((_QWORD *)v172 + 223);
                DrvTransferGdiObjects((struct SURFACE **)v52, v172);
                *((_QWORD *)v172 + 318) = 0LL;
                *((_QWORD *)v172 + 223) = 0LL;
                _m_prefetchw(v172 + 10);
                do
                  v133 = *((_DWORD *)v172 + 10);
                while ( v133 != _InterlockedCompareExchange((volatile signed __int32 *)v172 + 10, v133 | 0x80000, v133) );
                _m_prefetchw(v52 + 10);
                do
                  v134 = *((_DWORD *)v52 + 10);
                while ( v134 != _InterlockedCompareExchange(
                                  (volatile signed __int32 *)v52 + 10,
                                  v134 & 0xFFF7FFFF,
                                  v134) );
                PDEVOBJ::bDisabled((PDEVOBJ *)&v188, 1);
                PDEVOBJ::CompletePDEV((PDEVOBJ *)&v184, *((struct DHPDEV__ **)v52 + 223), v52);
              }
              else
              {
                *((_QWORD *)v52 + 318) = 0LL;
                PDEVOBJ::bDisabled((PDEVOBJ *)&v184, 1);
              }
            }
            goto LABEL_205;
          }
LABEL_101:
          GreAcquireSemaphore<10,>((struct _ERESOURCE **)v173);
          GreAcquireSemaphore<13,>((struct _ERESOURCE **)v173);
          if ( (int)IsGrepAcquirePublicPFTSemaphoreExSupported(v72, v71) >= 0 )
          {
            v74 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v74, v73) + 24);
            v75 = *(void (**)(void))(v74 + 1888);
            if ( v75 )
              v75();
          }
          if ( (int)IsGrepAcquireRFONTListSemaphoreExSupported(v74, v73) >= 0 )
          {
            v78 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v77, v76) + 24) + 1936LL);
            if ( v78 )
              v78();
          }
          GreAcquireSemaphore<19,>((struct _ERESOURCE **)v173);
          GreAcquireHmgrSemaphore(v79);
          goto LABEL_108;
        }
LABEL_123:
        v175 = v52;
        GreAcquireSemaphore<8,PDEVOBJ>((__int64)v52);
        goto LABEL_124;
      }
LABEL_100:
      v70 = 0LL;
      goto LABEL_101;
    }
    v45 = *((_DWORD *)v44 + 5);
    v165 = 2;
    if ( v45 == *((_DWORD *)a5 + 5) && v43 == *(_WORD *)(v173 + 1080) )
    {
      v46 = a9;
      v47 = 0;
      v48 = a9 != 0LL;
      if ( v45 )
      {
        do
        {
          v49 = 7LL * v47;
          if ( *(HDEV *)((char *)MDEV + v49 * 8 + 40) != a5[v49 + 5]
            || *(_DWORD *)((char *)MDEV + v49 * 8 + 72) != LODWORD(a5[v49 + 9])
            || *(HDEV *)((char *)MDEV + v49 * 8 + 56) != a5[v49 + 7]
            || *(HDEV *)((char *)MDEV + v49 * 8 + 64) != a5[v49 + 8] )
          {
            v165 = 0;
          }
          if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline()
            && v48
            && (*(_DWORD *)((char *)MDEV + v49 * 8 + 72) != LODWORD(a5[v49 + 9])
             || *(HDEV *)((char *)MDEV + v49 * 8 + 56) != a5[v49 + 7]
             || *(HDEV *)((char *)MDEV + v49 * 8 + 64) != a5[v49 + 8]) )
          {
            v48 = 0;
          }
          ++v47;
        }
        while ( v47 < *((_DWORD *)MDEV + 5) );
        LOBYTE(v13) = a8;
        v46 = a9;
      }
      if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() && v46 )
        *v46 = v48;
      goto LABEL_80;
    }
LABEL_78:
    v50 = 0;
    v165 = 0;
    goto LABEL_81;
  }
  if ( !(unsigned int)DrvUpdateDisplayModeInMdev((struct _MDEV *)a5, a3) )
  {
    v13 = a8 & 0xFFFFFFBF;
    LOBYTE(a8) = a8 & 0xBF;
    goto LABEL_54;
  }
  v40 = a6;
  v41 = 3;
  *a6 = (char *)a5;
  WdLogSingleEntry0(4LL);
  WdLogGlobalForLineNumber = 25130;
  DrvReleaseChangeDisplaySettingLocks(v42);
LABEL_272:
  if ( Buffer )
    GreDeleteFastMutex((char *)Buffer);
  if ( (v13 & 2) == 0 || v41 )
  {
    if ( v41 == 2 && *v40 )
    {
      GreDeleteFastMutex(*v40);
      *v40 = 0LL;
    }
  }
  else if ( a5 )
  {
    GreDeleteFastMutex((char *)a5);
  }
  WdLogSingleEntry1(5LL, v41);
  WdLogGlobalForLineNumber = 26650;
  *(_DWORD *)(v173 + 1064) = 0;
  *(_QWORD *)(v173 + 1072) = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v164, &DrvChangeDisplaySettingsEnd, 0LL);
  return (unsigned int)v41;
}
