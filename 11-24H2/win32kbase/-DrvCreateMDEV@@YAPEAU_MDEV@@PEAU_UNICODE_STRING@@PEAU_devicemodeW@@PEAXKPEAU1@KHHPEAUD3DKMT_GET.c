/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C
 * Callers:
 *     hdcOpenDCW @ 0x140067790 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     AlignRects @ 0x14000B5E8 (AlignRects.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140012DEC (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x140012F70 (UserRemoteConnectedSessionUsingXddm.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1400137A0 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140013900 (UserIsRemoteAndNotDisconnectConnection.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001397C (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140013DBC (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     DrvGetDeviceFromName @ 0x140017410 (DrvGetDeviceFromName.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14001975C (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002322C (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x140023540 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002357C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     UserIsDisconnectConnection @ 0x14004DE60 (UserIsDisconnectConnection.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x14004F4DC (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1400868FC (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E5480 (DrvDxgkLogCodePointPacket.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1400EE9D8 (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x140116CF0 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1401170F8 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvGetDisplayDriverNames @ 0x14011BBE0 (DrvGetDisplayDriverNames.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x14012AA90 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x14012AB08 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x140130840 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140135A14 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x14013A8E4 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?CalculateUniformSpaceMapping@@YAXPEAU_MDEV@@@Z @ 0x14013A9A8 (-CalculateUniformSpaceMapping@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14013F550 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14014273C (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140143918 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x140149044 (UserSetScaleFactorsFromRemoteMetric.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x140152B14 (-IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     GetDpiSetting @ 0x140153714 (GetDpiSetting.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x140178DA4 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019A38C (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     wcsncmp @ 0x1401A04E4 (wcsncmp.c)
 *     UserGetDpiInfoFromPrimaryMonitor @ 0x1401AB9F8 (UserGetDpiInfoFromPrimaryMonitor.c)
 *     ?AdjustForOrientation@@YA?AUtagSIZE@@II_N@Z @ 0x1401C67D8 (-AdjustForOrientation@@YA-AUtagSIZE@@II_N@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401C8D14 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline @ 0x1401CCAE0 (Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline.c)
 *     SetDpiSetting @ 0x14023B788 (SetDpiSetting.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 *     memcmp @ 0x14023FD10 (memcmp.c)
 */

struct _MDEV *__fastcall DrvCreateMDEV(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        void *a3,
        unsigned int a4,
        struct _MDEV *a5,
        unsigned int a6,
        int a7,
        int a8,
        struct D3DKMT_GETPATHSMODALITY *a9)
{
  __int64 v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // r15
  __int64 v14; // rdx
  struct _devicemodeW *v15; // rbx
  struct D3DKMT_GETPATHSMODALITY *v16; // r12
  int v17; // r14d
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned int v21; // r13d
  bool v22; // sf
  HDEV v23; // rsi
  __int64 v24; // rdi
  int v25; // eax
  int v26; // r8d
  unsigned int v27; // eax
  struct _ERESOURCE *v28; // rbx
  struct _GRETHREAD *v29; // rax
  struct _ERESOURCE *v30; // rbx
  struct _GRETHREAD *v31; // rax
  struct _ERESOURCE *v32; // rbx
  struct _GRETHREAD *v33; // rax
  unsigned int *v34; // r14
  __int64 v35; // rbx
  int j; // eax
  __int64 v37; // rsi
  __int16 v38; // cx
  unsigned int v39; // ebx
  unsigned int v40; // eax
  HDEV v41; // rbx
  int v42; // ecx
  unsigned __int16 i; // cx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r13
  __int16 v47; // dx
  int v48; // eax
  bool v49; // zf
  int v50; // eax
  unsigned int *DisplayDriverNames; // r12
  int v52; // ecx
  unsigned int v53; // esi
  unsigned int DriverCapableOverRide; // r14d
  unsigned int DriverAccelerationsLevel; // r15d
  struct _devicemodeW *v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  struct _devicemodeW *v59; // rax
  char *v60; // rcx
  struct _devicemodeW *v61; // rbx
  struct _devicemodeW *v62; // rbx
  int v63; // eax
  _DWORD *v64; // r8
  int v65; // eax
  int dmPelsHeight; // r9d
  int dmPelsWidth; // r8d
  int v68; // edx
  int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // eax
  HDEV *v72; // rdx
  __int64 v73; // r8
  HDEV v74; // rcx
  HDEV v75; // rax
  _DWORD *v76; // rbx
  unsigned int v77; // ecx
  _QWORD *v78; // rdi
  unsigned __int64 v79; // rcx
  _QWORD *v80; // r14
  unsigned int v81; // esi
  unsigned int *v82; // r13
  MULTIDEVLOCKOBJ *v83; // rax
  MULTIDEVLOCKOBJ *v84; // rbx
  unsigned int v85; // r12d
  int v86; // edi
  unsigned int v87; // edi
  unsigned int v88; // edx
  unsigned int *v89; // rcx
  unsigned int v90; // eax
  unsigned int v91; // edi
  _DWORD *v92; // rbx
  void *v93; // rax
  void *v94; // r15
  unsigned int v95; // r10d
  unsigned int v96; // r9d
  __int64 v97; // rdx
  __int64 v98; // rax
  _DWORD *v99; // r8
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // r15
  int v103; // eax
  unsigned int v104; // eax
  __int64 v105; // rdi
  MULTIDEVLOCKOBJ *v106; // rdi
  __int64 v107; // rbx
  int v108; // ecx
  __int64 v109; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v111; // eax
  int v112; // eax
  int DpiInfoFromPrimaryMonitor; // eax
  __int64 v114; // rcx
  int v115; // eax
  unsigned int v116; // eax
  _WORD *v117; // r8
  int v118; // eax
  unsigned int m; // r9d
  int v120; // eax
  __int64 v121; // rcx
  __int64 v122; // rdx
  int v123; // edx
  unsigned int v124; // eax
  unsigned int v125; // eax
  unsigned int k; // edx
  int v127; // ecx
  __int64 v128; // rax
  __int64 v129; // rax
  unsigned int v130; // r13d
  unsigned int v131; // r12d
  __int64 v132; // rbx
  struct tagSIZE v133; // rax
  unsigned int v134; // edx
  unsigned int v135; // ecx
  bool v136; // r8
  struct tagSIZE v137; // rax
  unsigned int v138; // r12d
  int v139; // r10d
  unsigned int v140; // r9d
  __int64 v141; // rdx
  int v142; // ecx
  unsigned int v143; // edi
  unsigned int v144; // esi
  __int64 v145; // r12
  __int64 v146; // rbx
  void (__fastcall *v147)(__int64, __int64); // rax
  __int128 v148; // xmm0
  MULTIDEVLOCKOBJ *v149; // rdi
  void *v150; // rsi
  char *v151; // rax
  struct _MDEV *result; // rax
  unsigned int Src; // [rsp+20h] [rbp-E0h]
  int v154; // [rsp+30h] [rbp-D0h]
  int v155; // [rsp+30h] [rbp-D0h]
  int v156; // [rsp+30h] [rbp-D0h]
  int v157; // [rsp+38h] [rbp-C8h]
  int v158; // [rsp+38h] [rbp-C8h]
  struct _DPI_INFORMATION *v159; // [rsp+38h] [rbp-C8h]
  unsigned int v160; // [rsp+40h] [rbp-C0h]
  unsigned int v161; // [rsp+50h] [rbp-B0h]
  int v162; // [rsp+54h] [rbp-ACh]
  __int64 v163; // [rsp+58h] [rbp-A8h]
  __int64 v164; // [rsp+58h] [rbp-A8h]
  PVOID Buffer; // [rsp+60h] [rbp-A0h] BYREF
  int v166; // [rsp+68h] [rbp-98h]
  unsigned int v167; // [rsp+6Ch] [rbp-94h]
  void *Buf2; // [rsp+70h] [rbp-90h]
  MULTIDEVLOCKOBJ *v169; // [rsp+78h] [rbp-88h]
  int PruneFlag; // [rsp+80h] [rbp-80h]
  int v171; // [rsp+84h] [rbp-7Ch]
  unsigned int v172; // [rsp+88h] [rbp-78h] BYREF
  int v173; // [rsp+8Ch] [rbp-74h] BYREF
  int v174; // [rsp+90h] [rbp-70h]
  HDEV v175; // [rsp+98h] [rbp-68h] BYREF
  __int64 v176; // [rsp+A0h] [rbp-60h]
  _QWORD *v177; // [rsp+A8h] [rbp-58h]
  void *Buf1; // [rsp+B0h] [rbp-50h]
  unsigned int v179; // [rsp+B8h] [rbp-48h] BYREF
  int v180; // [rsp+BCh] [rbp-44h] BYREF
  int v181; // [rsp+C0h] [rbp-40h] BYREF
  int v182; // [rsp+C4h] [rbp-3Ch]
  __int64 DeviceFromName; // [rsp+C8h] [rbp-38h]
  int CurrentWin32kSessionId; // [rsp+D0h] [rbp-30h] BYREF
  HDEV v185; // [rsp+D8h] [rbp-28h] BYREF
  struct _ERESOURCE *v186; // [rsp+E0h] [rbp-20h] BYREF
  HSEMAPHORE v187; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v188; // [rsp+F0h] [rbp-10h] BYREF
  HSEMAPHORE v189; // [rsp+F8h] [rbp-8h] BYREF
  HSEMAPHORE v190; // [rsp+100h] [rbp+0h] BYREF
  __int64 v191; // [rsp+108h] [rbp+8h] BYREF
  struct tagSIZE v192; // [rsp+110h] [rbp+10h] BYREF
  struct tagSIZE v193; // [rsp+118h] [rbp+18h] BYREF
  void *v194; // [rsp+120h] [rbp+20h]
  _DWORD v195[2]; // [rsp+128h] [rbp+28h] BYREF
  struct tagSIZE *v196; // [rsp+130h] [rbp+30h]
  struct tagSIZE v197[2]; // [rsp+138h] [rbp+38h] BYREF
  __int128 v198; // [rsp+148h] [rbp+48h]
  bool v203; // [rsp+1C8h] [rbp+C8h]
  unsigned int v204; // [rsp+1D0h] [rbp+D0h]

  v162 = 0;
  v166 = 0;
  v174 = a4 & 1;
  v171 = 0;
  v182 = 0;
  v11 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v163 = v11;
  WdLogSingleEntry4(4LL, a1, a3);
  WdLogGlobalForLineNumber = 22195;
  v12 = PALLOCMEM(96LL, 0x73726447u);
  v177 = (_QWORD *)v12;
  v13 = (_QWORD *)v12;
  if ( !v12 )
    goto LABEL_331;
  *(_DWORD *)(v12 + 20) = 0;
  *(_QWORD *)(v12 + 24) = a3;
  Buf2 = (void *)PALLOCNOZ(220LL, 0x76656447u);
  v194 = Buf2;
  v15 = (struct _devicemodeW *)Buf2;
  if ( !Buf2 )
    goto LABEL_326;
  v16 = a9;
  PruneFlag = a6 != 0;
  v17 = a9 != 0LL ? 4 : 1;
LABEL_4:
  LODWORD(Buf1) = v17;
  while ( 2 )
  {
    while ( 2 )
    {
      v18 = v162;
      v19 = 1LL;
      v14 = 0LL;
      v161 = 1;
      v167 = 0;
      v20 = 0LL;
      v175 = 0LL;
      v21 = 0;
      DeviceFromName = 0LL;
      v172 = 0;
      v179 = 0;
      LODWORD(v176) = 0;
      while ( 1 )
      {
        v22 = v18 < 0;
        if ( v18 )
          break;
        v23 = 0LL;
        v169 = 0LL;
        v175 = 0LL;
        if ( a1 )
        {
          if ( !v20 )
          {
            DeviceFromName = DrvGetDeviceFromName(a1, v14);
            v24 = DeviceFromName;
            if ( a5 )
              goto LABEL_42;
            v19 = 0LL;
            v161 = 0;
            goto LABEL_43;
          }
        }
        else if ( !v20 )
        {
          goto LABEL_51;
        }
        if ( a5 )
        {
          if ( (unsigned int)v14 >= *((_DWORD *)a5 + 5) )
            goto LABEL_126;
          v23 = (HDEV)*((_QWORD *)a5 + 7 * (unsigned int)v14 + 5);
          v169 = (MULTIDEVLOCKOBJ *)v23;
          v167 = v14 + 1;
          v185 = v23;
          v24 = *((_QWORD *)v23 + 321);
          if ( v24 == v20 )
            goto LABEL_120;
          v25 = v166;
          if ( (*(_DWORD *)(v24 + 160) & 8) != 0 )
            v25 = v166 ^ 1;
          if ( v25 )
            goto LABEL_120;
          SEMOBJ<1>::SEMOBJ<1>(&v191, (_QWORD *)v163);
          SEMOBJ<4>::SEMOBJ<4>((struct _ERESOURCE **)&v190, (__int64)&v185);
          SEMOBJ<6>::SEMOBJ<6>(&v189, (_QWORD *)v163);
          SEMOBJ<8>::SEMOBJ<8>(&v188, (__int64)&v185);
          SEMOBJ<10>::SEMOBJ<10>(&v187, (_QWORD *)v163);
          SEMOBJ<19>::SEMOBJ<19>(&v186, (struct _ERESOURCE **)v163);
          ++*((_DWORD *)v23 + 3);
          PDEV::IncrementClientReferenceCount((PDEV *)v23);
          if ( ((_DWORD)v23[10] & 0x400) != 0 )
          {
            GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              *(_QWORD *)v163);
            DrvEnableDisplay(v23);
            GreAcquireSemaphore<19,>((struct _ERESOURCE **)v163);
          }
          v27 = (*(_DWORD *)(v24 + 160) >> 2) & 1;
          v172 = 1;
          v179 = v27;
          if ( v186 )
          {
            GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              (__int64)v186);
            v186 = 0LL;
          }
          v28 = (struct _ERESOURCE *)v187;
          if ( v187 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v187, v26);
            v29 = GreGetCurrentThreadCrossSessionCheck();
            if ( v29 )
            {
              v49 = (*((_BYTE *)v29 + 18))-- == 1;
              if ( v49 )
                *(_QWORD *)v29 &= ~0x400uLL;
            }
            GreReleaseSemaphoreSharedInternal(v28);
            v187 = 0LL;
          }
          if ( v188 )
          {
            GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              v188);
            v188 = 0LL;
          }
          v30 = (struct _ERESOURCE *)v189;
          if ( v189 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v189, v26);
            v31 = GreGetCurrentThreadCrossSessionCheck();
            if ( v31 )
            {
              v49 = (*((_BYTE *)v31 + 14))-- == 1;
              if ( v49 )
                *(_QWORD *)v31 &= ~0x40uLL;
            }
            GreReleaseSemaphoreSharedInternal(v30);
            v189 = 0LL;
          }
          v32 = (struct _ERESOURCE *)v190;
          if ( v190 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v190, v26);
            v33 = GreGetCurrentThreadCrossSessionCheck();
            if ( v33 )
            {
              v49 = (*((_BYTE *)v33 + 12))-- == 1;
              if ( v49 )
                *(_QWORD *)v33 &= ~0x10uLL;
            }
            GreReleaseSemaphoreSharedInternal(v32);
            v190 = 0LL;
          }
          if ( v191 )
          {
            GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              v191);
            v191 = 0LL;
          }
          v15 = (struct _devicemodeW *)Buf2;
LABEL_42:
          v19 = v161;
LABEL_43:
          if ( v17 == 4 )
          {
            if ( v23 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 22446;
            }
            goto LABEL_46;
          }
LABEL_93:
          if ( !v24 )
            goto LABEL_126;
          if ( (*(_DWORD *)(v24 + 164) & 1) != 0 )
            goto LABEL_121;
          if ( a6 == -1 )
            PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v24);
          if ( v23 )
            goto LABEL_183;
          v46 = *(_QWORD *)(W32GetSessionState(v19) + 88);
          if ( *(_DWORD *)(v46 + 1128) || v17 == 3 )
            v47 = -1;
          else
            v47 = *(_WORD *)(W32GetUserSessionState(v45) + 69008);
          if ( !(unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)v24, v47, &v179, &v172) )
            goto LABEL_126;
          if ( v17 == 1 || v17 == 3 )
          {
            if ( !v172 )
              goto LABEL_120;
            if ( (*(_DWORD *)(v24 + 160) & 8) != 0 )
            {
              if ( !v166 )
                goto LABEL_120;
            }
            else if ( v166 )
            {
              goto LABEL_120;
            }
            goto LABEL_132;
          }
          if ( v17 == 2 )
          {
            v48 = *(_DWORD *)(v24 + 160);
            if ( (v48 & 8) != 0 )
            {
              if ( !v172 || !v166 )
                goto LABEL_120;
LABEL_132:
              DisplayDriverNames = DrvGetDisplayDriverNames(v24);
              if ( !DisplayDriverNames )
                goto LABEL_120;
              v52 = *(_DWORD *)(v24 + 160);
              Buffer = 0LL;
              v173 = 0;
              if ( (v52 & 8) != 0 )
              {
                v53 = 4;
                DriverCapableOverRide = 0;
                DriverAccelerationsLevel = 0;
              }
              else
              {
                v53 = 1;
                DriverCapableOverRide = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)v24);
                DriverAccelerationsLevel = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)v24);
              }
              if ( a2 )
              {
                v56 = a2;
              }
              else
              {
                memset(v15, 0, sizeof(struct _devicemodeW));
                v56 = v15;
                v15->dmSize = 220;
              }
              v57 = DrvProbeAndCaptureDevmode(
                      (struct tagGRAPHICS_DEVICE *)v24,
                      (struct _devicemodeW **)&Buffer,
                      &v173,
                      0LL,
                      v56,
                      0,
                      PruneFlag,
                      a7,
                      a8,
                      0LL);
              if ( v57 == 1073741839 )
              {
                DrvLogDisplayDriverEvent(4LL);
                goto LABEL_141;
              }
              if ( v57 == -1073741776 )
              {
                v62 = *(struct _devicemodeW **)(v177[5] + 2584LL);
                if ( Buffer && Buffer != Buf2 )
                {
                  GreDeleteFastMutex((char *)Buffer);
                  Buffer = 0LL;
                }
                v57 = DrvProbeAndCaptureDevmode(
                        (struct tagGRAPHICS_DEVICE *)v24,
                        (struct _devicemodeW **)&Buffer,
                        &v173,
                        0LL,
                        v62,
                        0,
                        PruneFlag,
                        a7,
                        a8,
                        0LL);
              }
              if ( v57 >= 0 )
              {
LABEL_141:
                v23 = hCreateHDEV(
                        (struct tagGRAPHICS_DEVICE *)v24,
                        (struct _DRV_NAMES *)DisplayDriverNames,
                        (struct _devicemodeW *)Buffer,
                        a3,
                        DriverCapableOverRide,
                        DriverAccelerationsLevel,
                        v174,
                        (a4 >> 2) & 1,
                        v53,
                        &v175);
                if ( !v23 && (*(_DWORD *)(v24 + 160) & 0x2000000) != 0 )
                  *(_DWORD *)(v46 + 1056) = 5;
              }
              else
              {
                DrvDxgkLogCodePointPacket(58LL, 2, 0, 0);
                v23 = (HDEV)v169;
                if ( (*(_DWORD *)(v24 + 160) & 0x2000000) != 0 )
                  *(_DWORD *)(v46 + 1056) = 4;
              }
              v59 = a2;
              if ( (*(_DWORD *)(v24 + 160) & 8) != 0 || a2 )
                goto LABEL_175;
              if ( !v23 )
              {
                DrvLogDisplayDriverEvent(4LL);
                v60 = (char *)Buffer;
                if ( Buffer )
                {
                  if ( *((_DWORD *)Buffer + 42) == 4 )
                  {
                    DrvLogDisplayDriverEvent(5LL);
                    v60 = (char *)Buffer;
                  }
                  v61 = (struct _devicemodeW *)Buf2;
                  if ( v60 != Buf2 )
                  {
                    GreDeleteFastMutex(v60);
                    Buffer = 0LL;
                  }
                }
                else
                {
                  v61 = (struct _devicemodeW *)Buf2;
                }
                memset(v61, 0, sizeof(struct _devicemodeW));
                v160 = a8;
                v157 = a7;
                v155 = PruneFlag;
                v61->dmSize = 220;
                v63 = DrvProbeAndCaptureDevmode(
                        (struct tagGRAPHICS_DEVICE *)v24,
                        (struct _devicemodeW **)&Buffer,
                        &v173,
                        0LL,
                        v61,
                        1,
                        v155,
                        v157,
                        v160,
                        0LL);
                v64 = Buffer;
                if ( v63 >= 0 )
                {
                  v23 = hCreateHDEV(
                          (struct tagGRAPHICS_DEVICE *)v24,
                          (struct _DRV_NAMES *)DisplayDriverNames,
                          (struct _devicemodeW *)Buffer,
                          a3,
                          DriverCapableOverRide,
                          DriverAccelerationsLevel,
                          v174,
                          (a4 >> 2) & 1,
                          1u,
                          &v175);
                  if ( v23 )
                    goto LABEL_170;
                  v64 = Buffer;
                  if ( *((_DWORD *)Buffer + 43) != 640
                    || *((_DWORD *)Buffer + 44) != 480
                    || *((_DWORD *)Buffer + 42) != 4 )
                  {
                    if ( Buffer != v61 )
                    {
                      GreDeleteFastMutex((char *)Buffer);
                      Buffer = 0LL;
                    }
                    memset(v61, 0, sizeof(struct _devicemodeW));
                    v61->dmSize = 220;
                    v65 = a8;
                    v61->dmBitsPerPel = (*(_DWORD *)(v24 + 160) & 0x800000) != 0 ? 32 : 4;
                    v158 = a7;
                    v156 = PruneFlag;
                    v61->dmPelsWidth = 640;
                    v61->dmPelsHeight = 480;
                    v61->dmFields = 1835008;
                    if ( (int)DrvProbeAndCaptureDevmode(
                                (struct tagGRAPHICS_DEVICE *)v24,
                                (struct _devicemodeW **)&Buffer,
                                &v173,
                                0LL,
                                v61,
                                0,
                                v156,
                                v158,
                                v65,
                                0LL) >= 0 )
                      v23 = hCreateHDEV(
                              (struct tagGRAPHICS_DEVICE *)v24,
                              (struct _DRV_NAMES *)DisplayDriverNames,
                              (struct _devicemodeW *)Buffer,
                              a3,
                              DriverCapableOverRide,
                              DriverAccelerationsLevel,
                              v174,
                              (a4 >> 2) & 1,
                              1u,
                              &v175);
LABEL_170:
                    v64 = Buffer;
                  }
                }
                if ( v64 )
                {
                  dmPelsHeight = v64[44];
                  dmPelsWidth = v64[43];
                  v68 = v23 != 0LL;
                }
                else
                {
                  dmPelsHeight = v61->dmPelsHeight;
                  v68 = 2;
                  dmPelsWidth = v61->dmPelsWidth;
                }
                DrvDxgkLogCodePointPacket(26LL, v68, dmPelsWidth, dmPelsHeight);
                v59 = 0LL;
LABEL_175:
                if ( !v23 && !v59 )
                {
                  *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v58) + 88) + 1168LL) = v24;
                  DrvLogDisplayDriverEvent(2LL);
                }
              }
              if ( Buffer && Buffer != Buf2 )
                GreDeleteFastMutex((char *)Buffer);
              GreDeleteFastMutex((char *)DisplayDriverNames);
              v13 = v177;
              goto LABEL_182;
            }
            if ( (v48 & 0x2000000) != 0 || v171 )
              goto LABEL_120;
            v49 = !UserIsDisconnectConnection(v19);
          }
          else
          {
            WdLogSingleEntry0(1LL);
            v50 = *(_DWORD *)(v24 + 160);
            WdLogGlobalForLineNumber = 22613;
            if ( (v50 & 8) != 0 )
              goto LABEL_120;
            v49 = v171 == 0;
          }
          if ( !v49 )
            goto LABEL_120;
          goto LABEL_132;
        }
LABEL_51:
        if ( v17 == 4 )
        {
          if ( v21 >= *((unsigned __int16 *)v16 + 10) )
            goto LABEL_128;
          v35 = 296LL * v21;
          if ( !_bittest64((const signed __int64 *)((char *)v16 + v35 + 56), 0x24u) )
          {
            if ( IsPrimaryPathInCloneGroup(v16, v21) && *(int *)((char *)v16 + v35 + 248) >= 0 )
            {
              v24 = *(_QWORD *)(v11 + 1096);
              if ( v24 )
              {
                while ( (*(_DWORD *)(v24 + 160) & 0x800000) == 0
                     || *(_DWORD *)(v24 + 240) != *(_DWORD *)((char *)v16 + v35 + 72)
                     || *(_DWORD *)(v24 + 244) != *(_DWORD *)((char *)v16 + v35 + 76)
                     || *(_DWORD *)(v24 + 248) != *(_DWORD *)((char *)v16 + v35 + 80) )
                {
                  v24 = *(_QWORD *)(v24 + 128);
                  if ( !v24 )
                    goto LABEL_85;
                }
              }
LABEL_46:
              if ( !v24 || (*(_DWORD *)(v24 + 164) & 1) != 0 )
              {
                if ( !v23 )
                  goto LABEL_85;
              }
              else
              {
                v34 = DrvGetDisplayDriverNames(v24);
                if ( v34 )
                {
                  if ( v21 >= *((unsigned __int16 *)v16 + 10) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 22457;
                  }
                  v37 = 296LL * v21;
                  if ( _bittest64((const signed __int64 *)((char *)v16 + v37 + 56), 0x24u) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 22458;
                  }
                  if ( !*(_QWORD *)((char *)v16 + v37 + 304) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 22460;
                  }
                  v38 = *(_WORD *)(v163 + 1080);
                  if ( !v38 )
                  {
                    v180 = 0;
                    GetDpiSetting(1LL, (__int64)&v180);
                    v38 = v180;
                    *(_WORD *)(v163 + 1080) = v180;
                  }
                  *(_WORD *)(*(_QWORD *)((char *)v16 + v37 + 304) + 166LL) = v38;
                  v39 = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)v24);
                  v40 = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)v24);
                  v41 = hCreateHDEV(
                          (struct tagGRAPHICS_DEVICE *)v24,
                          (struct _DRV_NAMES *)v34,
                          *(struct _devicemodeW **)((char *)v16 + v37 + 304),
                          a3,
                          v40,
                          v39,
                          v174,
                          (a4 >> 2) & 1,
                          1u,
                          &v175);
                  GreDeleteFastMutex((char *)v34);
                  if ( v41 )
                  {
                    v42 = *(_DWORD *)((char *)v16 + v37 + 276);
                    v23 = v41;
                    *((_DWORD *)v41 + 634) = v42;
                    goto LABEL_92;
                  }
                  v23 = 0LL;
LABEL_83:
                  *(_QWORD *)(v163 + 1168) = v24;
                  DrvLogDisplayDriverEvent(2LL);
LABEL_85:
                  if ( !IsPrimaryPathInCloneGroup(v16, v21) || *((int *)v16 + 74 * v21 + 62) < 0 )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 22505;
                  }
                  for ( i = 0; i < *((_WORD *)v16 + 10); ++i )
                  {
                    v44 = 296LL * i;
                    if ( *(_DWORD *)((char *)v16 + v44 + 240) == *((_DWORD *)v16 + 74 * v21 + 60) )
                      *(_DWORD *)((char *)v16 + v44 + 248) = -1073741823;
                  }
                }
                else if ( !v23 )
                {
                  goto LABEL_83;
                }
              }
LABEL_92:
              LODWORD(v176) = v21 + 1;
LABEL_182:
              if ( v23 )
              {
LABEL_183:
                WdLogSingleEntry0(5LL);
                v69 = *(_DWORD *)(v24 + 160);
                WdLogGlobalForLineNumber = 22947;
                v171 = 1;
                if ( v179 )
                  v70 = v69 | 4;
                else
                  v70 = v69 & 0xFFFFFFFB;
                *(_DWORD *)(v24 + 160) = v70;
                if ( !v175 )
                {
                  if ( a5 )
                  {
                    v71 = *((_DWORD *)a5 + 5);
                    if ( v71 )
                    {
                      v72 = (HDEV *)((char *)a5 + 40);
                      v73 = v71;
                      do
                      {
                        v74 = *v72;
                        v72 += 7;
                        v75 = v175;
                        if ( v24 == *((_QWORD *)v74 + 321) )
                          v75 = v74;
                        v175 = v75;
                        --v73;
                      }
                      while ( v73 );
                    }
                  }
                }
                v76 = (_DWORD *)v13 + 5;
                v13[7 * *((unsigned int *)v13 + 5) + 5] = v23;
                v13[7 * *((unsigned int *)v13 + 5) + 6] = v175;
                v77 = *((_DWORD *)v13 + 5);
                if ( v77 + 2 >= v77 )
                {
                  v78 = v13;
                  *v76 = v77 + 1;
                  v79 = 96LL * (v77 + 2);
                  if ( v79 > 0xFFFFFFFF || (v177 = (_QWORD *)PALLOCMEM(v79, 0x73726447u), (v13 = v177) == 0LL) )
                  {
                    v19 = v161;
                    v18 = -1073741670;
                    v13 = v78;
                    v177 = v78;
                    v11 = v163;
                    v162 = -1073741670;
                    goto LABEL_123;
                  }
                  memmove(v177, v78, 96LL * (unsigned int)*v76);
                  GreDeleteFastMutex((char *)v78);
                }
              }
LABEL_120:
              v19 = v161;
LABEL_121:
              v11 = v163;
              goto LABEL_122;
            }
            v19 = v161;
          }
          LODWORD(v176) = v21 + 1;
        }
        else
        {
          v24 = *(_QWORD *)(v11 + 1096);
          for ( j = 0; v24 && j != (_DWORD)v14; ++j )
            v24 = *(_QWORD *)(v24 + 128);
          v167 = v14 + 1;
          if ( !*(_DWORD *)(v163 + 1060) )
            goto LABEL_93;
          if ( !v24 )
            goto LABEL_126;
          if ( (*(_DWORD *)(v24 + 160) & 0x2800000) != 0 )
            goto LABEL_43;
          v11 = v163;
        }
LABEL_122:
        v18 = v162;
LABEL_123:
        v15 = (struct _devicemodeW *)Buf2;
        v17 = (int)Buf1;
        v16 = a9;
        v21 = v176;
        v14 = v167;
        v20 = DeviceFromName;
        if ( !(_DWORD)v19 )
        {
          v22 = v18 < 0;
          break;
        }
      }
      if ( v22 )
        goto LABEL_325;
LABEL_126:
      if ( v17 != 4 )
      {
        if ( !v171 )
        {
          if ( v17 == 1 )
          {
            WdLogSingleEntry0(5LL);
            v11 = v163;
            v17 = 2;
            WdLogGlobalForLineNumber = 23089;
            LODWORD(Buf1) = 2;
            if ( a8 )
              a8 = 0;
            continue;
          }
          if ( v17 == 2 && (unsigned int)UserIsWddmConnectedSession(v19) )
          {
            WdLogSingleEntry0(5LL);
            v11 = v163;
            v17 = 3;
            WdLogGlobalForLineNumber = 23117;
            goto LABEL_4;
          }
          if ( v167 )
          {
            WdLogSingleEntry0(5LL);
            WdLogGlobalForLineNumber = 23174;
          }
          else
          {
            WdLogSingleEntry0(5LL);
            WdLogGlobalForLineNumber = 23160;
          }
          goto LABEL_325;
        }
        if ( !v166 )
        {
          WdLogSingleEntry0(5LL);
          v11 = v163;
          WdLogGlobalForLineNumber = 23131;
          goto LABEL_130;
        }
        v80 = v13;
        if ( (a4 & 2) != 0 )
          goto LABEL_327;
        v204 = 0;
        v177 = 0LL;
        v81 = 0;
        v82 = 0LL;
        v83 = (MULTIDEVLOCKOBJ *)Win32AllocPoolImpl(256LL, 0x60uLL, 0x6C6D6847u);
        v84 = v83;
        if ( !v83 )
          goto LABEL_325;
        *(_QWORD *)v83 = 1LL;
        *((_QWORD *)v83 + 1) = 0LL;
        MULTIDEVLOCKOBJ::vInit(v83, (struct _MDEV *)v13);
        v85 = 0;
        v86 = 0;
        if ( (*(_DWORD *)v84 & 1) == 0 )
          goto LABEL_323;
        MULTIDEVLOCKOBJ::vLock(v84);
        v87 = *((_DWORD *)v13 + 5);
        v88 = 0;
        v169 = v84;
        LODWORD(a9) = 0;
        if ( !v87 )
          goto LABEL_228;
        v169 = v84;
        LODWORD(a9) = 0;
        while ( 1 )
        {
          v89 = *(unsigned int **)(v13[7 * v88 + 5] + 2568LL);
          v90 = v89[40];
          if ( (v90 & 8) == 0 )
            break;
          if ( (v90 & 4) != 0 )
          {
            v90 &= ~4u;
            v89[40] = v90;
LABEL_222:
            if ( (v90 & 4) != 0 )
            {
              if ( v82 )
              {
                LODWORD(a9) = -1073741438;
                v89[40] = v90 & 0xFFFFFFFB;
              }
              else
              {
                v82 = v89;
                v81 = v88;
              }
            }
          }
          v87 = *((_DWORD *)v13 + 5);
          if ( ++v88 >= v87 )
          {
            v204 = v81;
            v177 = v82;
LABEL_228:
            v91 = 16 * v87;
            Buf2 = (void *)PALLOCNOZ(v91, 0x73726447u);
            v92 = Buf2;
            v93 = (void *)PALLOCNOZ(v91, 0x73726447u);
            Buf1 = v93;
            v94 = v93;
            if ( v92 )
            {
              if ( v93 )
              {
                v95 = 0;
                v167 = 0;
                v96 = 0;
                if ( *((_DWORD *)v80 + 5) )
                {
                  do
                  {
                    v97 = 2LL * v96;
                    v98 = v80[7 * v96 + 5];
                    v99 = *(_DWORD **)(v98 + 2584);
                    v92[2 * v97] = v99[19];
                    v92[2 * v97 + 1] = v99[20];
                    v92[2 * v97 + 2] = v99[19] + v99[43];
                    v92[2 * v97 + 3] = v99[20] + v99[44];
                    if ( (*(_DWORD *)(*(_QWORD *)(v98 + 2568) + 160LL) & 8) == 0 )
                    {
                      if ( !v82 && !v99[19] && !v99[20] )
                      {
                        v81 = v96;
                        v82 = *(unsigned int **)(v98 + 2568);
                      }
                      ++v95;
                    }
                    ++v96;
                  }
                  while ( v96 < *((_DWORD *)v80 + 5) );
                  v94 = Buf1;
                  v167 = v95;
                  v204 = v81;
                  v177 = v82;
                }
                memmove(v94, v92, v91);
                v102 = *(_QWORD *)(W32GetSessionState(v100) + 88);
                v176 = v102;
                if ( !*(_DWORD *)(v102 + 1112) )
                {
                  v103 = (unsigned int)UserIsRemoteAndNotDisconnectConnection() ? 0 : *(_DWORD *)(v102 + 1120);
                  *(_DWORD *)(v102 + 1124) = v103;
                  if ( v103 )
                  {
                    v104 = *(_DWORD *)(v102 + 1136);
                    v101 = 96LL;
                    if ( v104 > 0x60 )
                    {
                      v101 = 480LL;
                      if ( v104 >= 0x1E0 )
                        LOWORD(v104) = 480;
                    }
                    else
                    {
                      LOWORD(v104) = 96;
                    }
                    *(_WORD *)(v102 + 1080) = v104;
                  }
                }
                v105 = v80[7 * v81 + 5];
                v164 = v105;
                *(_DWORD *)(*(_QWORD *)(v105 + 2568) + 160LL) |= 4u;
                if ( *((_DWORD *)v80 + 5) )
                {
                  v106 = v169;
                  while ( 1 )
                  {
                    DeviceFromName = 56LL * v85;
                    v107 = *(_QWORD *)((char *)v80 + DeviceFromName + 40);
                    if ( (*(_DWORD *)(*(_QWORD *)(v107 + 2568) + 160LL) & 0x800000) != 0 )
                    {
                      v108 = 0;
                      if ( v85 == v204 )
                        v108 = 32;
                      v109 = *(_DWORD *)(v107 + 2532) & 0xFFFFFFDF | v108;
                      *(_DWORD *)(v107 + 2532) = v109;
                      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v109);
                      v111 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(DxgkWin32kInterface
                                                                                                 + 520))(
                               *(_QWORD *)(*(_QWORD *)(v107 + 2568) + 232LL),
                               *(unsigned int *)(*(_QWORD *)(v107 + 2568) + 248LL),
                               0LL,
                               v107 + 2120,
                               v107 + 2440);
                      if ( v111 < 0 )
                      {
                        WdLogSingleEntry3(
                          2LL,
                          v111,
                          *(_QWORD *)(*(_QWORD *)(v107 + 2568) + 232LL),
                          *(unsigned int *)(*(_QWORD *)(v107 + 2568) + 248LL));
                        WdLogGlobalForLineNumber = 23379;
                      }
                      v112 = *(_DWORD *)(v107 + 2536);
                    }
                    else
                    {
                      if ( !(unsigned int)Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline(
                                            v101,
                                            32LL)
                        || (*(_DWORD *)(*(_QWORD *)(v107 + 2568) + 160LL) & 0x2000000) == 0 )
                      {
                        goto LABEL_265;
                      }
                      v181 = 0;
                      DpiInfoFromPrimaryMonitor = UserGetDpiInfoFromPrimaryMonitor(v107 + 2440, &v181);
                      if ( DpiInfoFromPrimaryMonitor < 0 )
                      {
                        if ( DpiInfoFromPrimaryMonitor == -1073741275 )
                        {
                          WdLogSingleEntry0(4LL);
                          WdLogGlobalForLineNumber = 23402;
                        }
                        else
                        {
                          WdLogSingleEntry1(2LL, DpiInfoFromPrimaryMonitor);
                          WdLogGlobalForLineNumber = 23407;
                        }
                        goto LABEL_265;
                      }
                      v112 = v181;
                    }
                    v101 = DeviceFromName;
                    *(_DWORD *)((char *)v80 + DeviceFromName + 92) = v112;
LABEL_265:
                    if ( ++v85 >= *((_DWORD *)v80 + 5) )
                    {
                      v102 = v176;
                      v82 = (unsigned int *)v177;
                      v92 = Buf2;
                      v169 = v106;
                      v105 = v164;
                      break;
                    }
                  }
                }
                if ( !*(_DWORD *)(v102 + 1112) )
                {
                  *(_DWORD *)(v102 + 1124) = 0;
                  a6 = 0;
                  if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
                  {
                    v124 = *(_DWORD *)(v105 + 3544);
                    if ( v124 )
                    {
                      *(_WORD *)(v102 + 1080) = (96 * HIWORD(v124) + 50) / 0x64u;
                    }
                    else
                    {
                      if ( wcsncmp(*((const wchar_t **)v82 + 25), L"WORKERDD", v82[64])
                        && wcsncmp(*((const wchar_t **)v82 + 25), L"TSDDD", v82[64]) )
                      {
                        *(_DWORD *)(v102 + 1120) = 1;
                        *(_DWORD *)(v102 + 1124) = 1;
                      }
                      GetDpiSetting(2LL, (__int64)&a6);
                      v125 = a6;
                      *(_DWORD *)(v102 + 1136) = a6;
                      if ( v125 <= 0x60 )
                      {
                        v125 = 96;
                        a6 = 96;
                      }
                      if ( v125 >= 0x1E0 )
                      {
                        LOWORD(v125) = 480;
                        a6 = 480;
                      }
                      *(_WORD *)(v102 + 1080) = v125;
                    }
                    for ( k = 0;
                          k < *((_DWORD *)v80 + 5);
                          *(_WORD *)(*(_QWORD *)(v129 + 2584) + 166LL) = *(_WORD *)(v102 + 1080) )
                    {
                      v127 = *(unsigned __int16 *)(v102 + 1080);
                      v128 = k++;
                      v129 = v80[7 * v128 + 5];
                      *(_DWORD *)(v129 + 2164) = v127;
                      *(_DWORD *)(v129 + 2160) = v127;
                    }
                  }
                  else
                  {
                    v114 = (unsigned int)(96 * *(_DWORD *)(v105 + 2452) + 50);
                    if ( (unsigned __int16)((unsigned int)v114 / 0x64) )
                      SetDpiSetting(v114, (unsigned __int16)((unsigned int)v114 / 0x64));
                    v115 = *(_DWORD *)(v102 + 1120);
                    *(_DWORD *)(v102 + 1124) = v115;
                    if ( v115 )
                    {
                      v116 = *(_DWORD *)(v102 + 1136);
                      a6 = v116;
                      if ( v116 <= 0x60 )
                      {
                        v116 = 96;
                        a6 = 96;
                      }
                      if ( v116 >= 0x1E0 )
                      {
                        LOWORD(v116) = 480;
                        a6 = 480;
                      }
                      v117 = (_WORD *)(v102 + 1080);
                      *(_WORD *)(v102 + 1080) = v116;
                    }
                    else
                    {
                      v118 = *(_DWORD *)(v105 + 2448);
                      v117 = (_WORD *)(v102 + 1080);
                      if ( v118 )
                        *v117 = (96 * v118 + 50) / 0x64u;
                      else
                        *v117 = 96;
                    }
                    for ( m = 0; m < *((_DWORD *)v80 + 5); ++m )
                    {
                      v120 = (unsigned __int16)*v117;
                      v121 = v80[7 * m + 5];
                      v122 = *(_QWORD *)(v121 + 2584);
                      *(_DWORD *)(v121 + 2164) = v120;
                      *(_DWORD *)(v121 + 2160) = v120;
                      *(_WORD *)(v122 + 166) = *v117;
                      if ( *(_DWORD *)(v102 + 1124) )
                      {
                        v123 = 100 * (unsigned __int16)*v117;
                        *(_DWORD *)(v121 + 2524) = 1234568;
                        *(_DWORD *)(v121 + 2448) = (v123 + 48) / 0x60u;
                      }
                    }
                  }
                  *(_DWORD *)(v102 + 1112) = 1;
                }
                if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
                {
                  v130 = 0;
                  v131 = 1;
                  LODWORD(v176) = 1;
                  if ( *((_DWORD *)v80 + 5) )
                  {
                    do
                    {
                      v132 = v80[7 * v130 + 5];
                      v203 = ((*(_DWORD *)(*(_QWORD *)(v132 + 2584) + 84LL) - 1) & 0xFFFFFFFD) == 0;
                      v133 = AdjustForOrientation(
                               *(_DWORD *)(v132 + 2128) / 0x3E8u,
                               *(_DWORD *)(v132 + 2132) / 0x3E8u,
                               v203);
                      v134 = *(_DWORD *)(v132 + 2140);
                      v135 = *(_DWORD *)(v132 + 2136);
                      v193 = v133;
                      v137 = AdjustForOrientation(v135, v134, v136);
                      v138 = *(_DWORD *)(v132 + 3544);
                      v192 = v137;
                      v195[0] = v139;
                      v196 = v197;
                      *(_OWORD *)&v197[0].cx = 0LL;
                      v195[1] = 32;
                      v198 = 0LL;
                      if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)v195) < 0 )
                      {
                        WdLogSingleEntry0(1LL);
                        WdLogGlobalForLineNumber = 23596;
                      }
                      v159 = (struct _DPI_INFORMATION *)(v132 + 2440);
                      if ( v138 )
                      {
                        FillDpiInfo(&v193, &v192, (struct tagSIZE)v197, v140, 0, HIWORD(v138), v154, v159);
                        *(_DWORD *)(v132 + 2532) |= 0x200u;
                        v131 = v176;
                      }
                      else
                      {
                        *(_DWORD *)(v132 + 2532) &= ~0x200u;
                        v131 = 0;
                        Src = *(unsigned __int16 *)(v102 + 1080);
                        LODWORD(v176) = 0;
                        FillDpiInfo(&v193, &v192, (struct tagSIZE)v197, v140, Src, 0, v154, v159);
                      }
                      GetRemoteScaleOverrideTestHook(
                        (const unsigned __int16 *)(*(_QWORD *)(v132 + 2568) + 64LL),
                        v141,
                        (struct _DPI_INFORMATION *)(v132 + 2440));
                      ++v130;
                      *(_DWORD *)(v132 + 2532) = *(_DWORD *)(v132 + 2532) & 0xFFFFFF7F | (v203 << 7);
                    }
                    while ( v130 < *((_DWORD *)v80 + 5) );
                    v105 = v164;
                  }
                  v92 = Buf2;
                  v182 = 1;
                }
                else
                {
                  v131 = 0;
                }
                UserSetScaleFactorsFromRemoteMetric(v131);
                v142 = *(_DWORD *)(v105 + 2452);
                v143 = v167;
                *(_WORD *)(v102 + 1082) = (96 * v142 + 50) / 0x64u;
                v94 = Buf1;
                AlignRects((struct tagRECT *)Buf1, v143, v204);
                if ( memcmp(v94, v92, 16LL * v143) )
                {
                  WdLogSingleEntry0(3LL);
                  WdLogGlobalForLineNumber = 23677;
                }
                v144 = 0;
                if ( *((_DWORD *)v80 + 5) )
                {
                  do
                  {
                    v145 = 7LL * v144;
                    v146 = v80[v145 + 5];
                    *(_QWORD *)(v146 + 2576) = *((_QWORD *)v94 + 2 * v144);
                    v147 = *(void (__fastcall **)(__int64, __int64))(v146 + 3376);
                    if ( v147 )
                      v147((*(_QWORD *)(v146 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(v146 + 2544) != 0LL), 2LL);
                    v148 = *((_OWORD *)v94 + v144++);
                    *(_OWORD *)&v80[v145 + 7] = v148;
                    LODWORD(v80[v145 + 9]) = *(_DWORD *)(v146 + 2448);
                  }
                  while ( v144 < *((_DWORD *)v80 + 5) );
                  v92 = Buf2;
                }
                CalculateUniformSpaceMapping((struct _MDEV *)v80);
              }
              GreDeleteFastMutex((char *)v92);
            }
            v149 = v169;
            v84 = v169;
            if ( v94 )
              GreDeleteFastMutex((char *)v94);
            MULTIDEVLOCKOBJ::vUnlock(v149);
            v150 = v194;
            v13 = v80;
            Buf2 = v194;
            if ( v182 )
            {
              CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
              ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &CurrentWin32kSessionId);
              Buf2 = v150;
            }
            v86 = (int)a9;
            if ( v84 )
LABEL_323:
              MULTIDEVLOCKOBJ::`scalar deleting destructor'(v84);
            if ( v86 < 0 )
              goto LABEL_325;
LABEL_327:
            v151 = (char *)Buf2;
            if ( Buf2 )
              goto LABEL_330;
            goto LABEL_331;
          }
        }
        if ( !v82 )
          v81 = v88;
        goto LABEL_222;
      }
      break;
    }
    v11 = v163;
LABEL_128:
    if ( v171 )
    {
      WdLogSingleEntry0(5LL);
      WdLogGlobalForLineNumber = 23063;
      v17 = 1;
      LODWORD(Buf1) = 1;
LABEL_130:
      v166 = 1;
      continue;
    }
    break;
  }
  WdLogSingleEntry1(2LL, -1073741823LL);
  WdLogGlobalForLineNumber = 23073;
LABEL_325:
  if ( v13 )
  {
LABEL_326:
    DrvBackoutMDEV((struct _MDEV *)v13, v14);
    GreDeleteFastMutex((char *)v13);
    v13 = 0LL;
    goto LABEL_327;
  }
  v151 = (char *)Buf2;
LABEL_330:
  GreDeleteFastMutex(v151);
LABEL_331:
  WdLogSingleEntry1(5LL, v13);
  result = (struct _MDEV *)v13;
  WdLogGlobalForLineNumber = 23853;
  return result;
}
