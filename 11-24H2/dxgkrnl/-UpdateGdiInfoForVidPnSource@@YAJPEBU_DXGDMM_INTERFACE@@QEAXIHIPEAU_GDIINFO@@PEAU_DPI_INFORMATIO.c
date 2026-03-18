/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x14030DAE8
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x14030D570 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140031240 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x140034510 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x140039C9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x14004D1AC (-RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x14004D56C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140051AB8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1400553F8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1400554C8 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x140055AE0 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x14005852C (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@HH@Z @ 0x140062F80 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x140064378 (-AvgXY@DpiInternal@@YAJUtagSIZE@@@Z.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x140064E54 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_F.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z @ 0x1401CA8B4 (-GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140308924 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x14036B63C (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 *     DpiReadPnpRegistryValue @ 0x14036B708 (DpiReadPnpRegistryValue.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403B84B0 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1403D3160 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1403DC428 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1403DD6E4 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1403E23D8 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1403E389C (-GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z @ 0x1403E614C (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1403EC644 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z @ 0x14042E40C (-MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z.c)
 */

__int64 __fastcall UpdateGdiInfoForVidPnSource(
        const struct _DXGDMM_INTERFACE *a1,
        char *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        struct _GDIINFO *a6,
        struct _DPI_INFORMATION *a7)
{
  __int64 v9; // r12
  DXGPROCESS *Current; // rax
  struct _LUID *v11; // rdx
  bool IsRemoteConnection; // al
  char v13; // r11
  char IsAdapterSessionized; // bl
  char v15; // r11
  __int64 (__fastcall *v16)(char *, __int64 *, struct D3DKMDT_HVIDPN__ **); // rax
  int v17; // eax
  __int64 v18; // rdi
  DpiInternal *v20; // r14
  __int64 (__fastcall *v21)(DpiInternal *, __int64 *, __int64 *); // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rsi
  DpiInternal *v25; // rdx
  int CurrentContentResolution; // ebx
  DpiInternal *v27; // rdx
  const struct tagRECT *v28; // rdi
  int v29; // eax
  __int64 v30; // rbx
  unsigned int v31; // ebx
  int v32; // ecx
  int v33; // eax
  int v34; // edi
  unsigned int v35; // edi
  unsigned __int64 v36; // rcx
  int v37; // eax
  __int64 (__fastcall *v38)(__int64, _QWORD, _QWORD, __int64 *); // rax
  int v39; // eax
  __int64 v40; // rdx
  int VideoOutputTechnology; // eax
  __int64 v42; // rbx
  bool v43; // bl
  unsigned int v44; // edi
  int DpiInfoFromDescriptor; // eax
  unsigned int v46; // r12d
  unsigned int v47; // r14d
  __int64 v48; // rbx
  LONG v49; // ecx
  LONG cx; // esi
  unsigned int v51; // ebx
  int PreferredMonitorSourceModeOnTarget; // eax
  UINT v53; // edx
  UINT v54; // ecx
  __int64 v55; // rbx
  UINT v56; // eax
  int PhysicalDisplaySizeOverride; // eax
  struct tagSIZE v58; // rcx
  unsigned int v59; // ebx
  unsigned int v60; // eax
  unsigned int v61; // r12d
  int v62; // ecx
  const struct _DXGDMM_VIDPN_INTERFACE *v63; // r14
  int v64; // eax
  int v65; // edx
  int v66; // ecx
  __int64 v67; // rax
  unsigned int v68; // ecx
  int v69; // r8d
  UINT v70; // r9d
  UINT v71; // r10d
  unsigned int v72; // r8d
  struct tagSIZE v73; // rdx
  unsigned int v74; // r8d
  UINT v75; // ecx
  unsigned int v76; // eax
  char v77; // r12
  char v78; // cl
  struct tagSIZE v79; // rax
  int v80; // ecx
  unsigned int v81; // eax
  unsigned __int8 v82; // r9
  unsigned int v83; // esi
  char v84; // r14
  int v85; // eax
  bool PreferredScaleFactorForMonitor; // al
  unsigned int v87; // ebx
  struct tagSIZE v88; // rdx
  struct tagSIZE v89; // rdx
  int v90; // eax
  int v91; // r8d
  __int64 v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  int v98; // ebx
  unsigned int *v99; // r8
  __m128i v100; // xmm1
  __m128i v101; // xmm2
  bool v102; // zf
  bool v103; // zf
  __int64 v104; // r14
  int v105; // ecx
  int v106; // edx
  int v107; // eax
  struct _GDIINFO *v108; // rdx
  int v109; // eax
  struct _GDIINFO *v110; // rcx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v111; // r9
  unsigned int v112; // eax
  struct _DPI_INFORMATION *v113; // rax
  __int128 v114; // xmm1
  __int128 v115; // xmm0
  struct _D3DKMDT_2DREGION *v116; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v117; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v118; // [rsp+20h] [rbp-E0h]
  bool *v119; // [rsp+28h] [rbp-D8h]
  bool v120; // [rsp+50h] [rbp-B0h]
  unsigned int v121; // [rsp+54h] [rbp-ACh] BYREF
  char v122; // [rsp+58h] [rbp-A8h]
  char v123; // [rsp+59h] [rbp-A7h]
  bool v124; // [rsp+5Ah] [rbp-A6h]
  bool v125; // [rsp+5Bh] [rbp-A5h] BYREF
  struct _D3DKMDT_2DREGION v126; // [rsp+5Ch] [rbp-A4h] BYREF
  struct tagSIZE v127; // [rsp+68h] [rbp-98h] BYREF
  LONG cy; // [rsp+70h] [rbp-90h]
  int v129; // [rsp+74h] [rbp-8Ch] BYREF
  UINT v130; // [rsp+78h] [rbp-88h]
  unsigned int v131; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v132; // [rsp+80h] [rbp-80h] BYREF
  LONG v133; // [rsp+88h] [rbp-78h] BYREF
  LONG right; // [rsp+8Ch] [rbp-74h]
  LONG left; // [rsp+90h] [rbp-70h]
  LONG bottom; // [rsp+94h] [rbp-6Ch]
  LONG top; // [rsp+98h] [rbp-68h]
  __int64 v138; // [rsp+A0h] [rbp-60h] BYREF
  D3DKMDT_2DREGION ActiveSize; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v140; // [rsp+B0h] [rbp-50h] BYREF
  DpiInternal *v141; // [rsp+B8h] [rbp-48h]
  const struct _DXGDMM_VIDPN_INTERFACE *v142; // [rsp+C0h] [rbp-40h]
  char v143; // [rsp+C8h] [rbp-38h] BYREF
  DpiInternal *v144; // [rsp+D0h] [rbp-30h]
  void (__fastcall *v145)(__int64, DpiInternal *); // [rsp+D8h] [rbp-28h]
  __int64 v146; // [rsp+E0h] [rbp-20h]
  int v147; // [rsp+E8h] [rbp-18h]
  LONG v148; // [rsp+F0h] [rbp-10h] BYREF
  int v149; // [rsp+F4h] [rbp-Ch]
  unsigned int v150; // [rsp+F8h] [rbp-8h] BYREF
  int v151; // [rsp+FCh] [rbp-4h]
  unsigned int v152; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v153; // [rsp+104h] [rbp+4h] BYREF
  __int64 v154; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v155; // [rsp+110h] [rbp+10h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v156; // [rsp+118h] [rbp+18h] BYREF
  struct D3DKMDT_HVIDPN__ *v157; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v158; // [rsp+128h] [rbp+28h]
  unsigned int v159; // [rsp+12Ch] [rbp+2Ch]
  __int64 v160; // [rsp+130h] [rbp+30h] BYREF
  struct tagSIZE v161; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int64 v162; // [rsp+140h] [rbp+40h] BYREF
  __int64 v163; // [rsp+148h] [rbp+48h]
  struct _GDIINFO *v164; // [rsp+150h] [rbp+50h]
  BOOL v165; // [rsp+158h] [rbp+58h]
  char v166; // [rsp+160h] [rbp+60h] BYREF
  __int64 v167; // [rsp+168h] [rbp+68h]
  void (__fastcall *v168)(__int64, const struct _DXGDMM_VIDPN_INTERFACE *); // [rsp+170h] [rbp+70h]
  __int64 v169; // [rsp+178h] [rbp+78h]
  int v170; // [rsp+180h] [rbp+80h]
  __int64 v171; // [rsp+188h] [rbp+88h] BYREF
  const struct tagRECT *v172; // [rsp+190h] [rbp+90h] BYREF
  struct tagSIZE v173; // [rsp+198h] [rbp+98h] BYREF
  struct tagRECT v174; // [rsp+1A0h] [rbp+A0h] BYREF
  __m128i v175; // [rsp+1B0h] [rbp+B0h]
  _BYTE v176[96]; // [rsp+1C0h] [rbp+C0h] BYREF
  __m128i v177; // [rsp+220h] [rbp+120h]
  const struct tagRECT *v178; // [rsp+230h] [rbp+130h]
  struct _DPI_INFORMATION *v179; // [rsp+238h] [rbp+138h]
  struct tagSIZE v180[2]; // [rsp+240h] [rbp+140h] BYREF
  __int128 v181; // [rsp+250h] [rbp+150h]
  _QWORD v182[4]; // [rsp+260h] [rbp+160h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v183; // [rsp+280h] [rbp+180h] BYREF
  __int64 v184; // [rsp+2E0h] [rbp+1E0h] BYREF
  int v185; // [rsp+2E8h] [rbp+1E8h]
  _OWORD v186[6]; // [rsp+2F0h] [rbp+1F0h] BYREF
  unsigned __int16 v187[128]; // [rsp+350h] [rbp+250h] BYREF

  v164 = a6;
  v9 = a3;
  v179 = a7;
  v151 = a4;
  v159 = a3;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  if ( !Current || (IsRemoteConnection = DXGPROCESS::IsRemoteConnection(Current), v13 = 1, !IsRemoteConnection) )
    v13 = 0;
  v123 = v13;
  v152 = 0;
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)a2, v11, &v152, 0LL);
  if ( v15 != IsAdapterSessionized )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1645;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsRemote == IsAdapterSessionized",
      1645LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( IsAdapterSessionized && v152 != (unsigned int)PsGetCurrentProcessSessionId() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1646;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"!IsAdapterSessionized || (TargetSession == PsGetCurrentProcessSessionId())",
      1646LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v16 = (__int64 (__fastcall *)(char *, __int64 *, struct D3DKMDT_HVIDPN__ **))*((_QWORD *)a1 + 6);
  v157 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  v146 = 0LL;
  v147 = 0;
  v143 = 0;
  v171 = 0LL;
  v17 = v16(a2, &v171, &v157);
  v18 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry2(2LL, a2, v17);
    WdLogGlobalForLineNumber = 1660;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)",
      (__int64)a2,
      v18,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v18;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v143,
    v171,
    *((_QWORD *)a1 + 8),
    (__int64)a2);
  v20 = v144;
  v138 = 0LL;
  v154 = 0LL;
  v21 = *(__int64 (__fastcall **)(DpiInternal *, __int64 *, __int64 *))v157;
  v141 = v144;
  v22 = v21(v144, &v138, &v154);
  v18 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry2(2LL, v20, v22);
    WdLogGlobalForLineNumber = 1678;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire topology for VidPN 0x%I64x (status = 0x%I64x)",
      (__int64)v20,
      v18,
      0LL,
      0LL,
      0LL);
    if ( v143 )
      v145(v146, v20);
    return (unsigned int)v18;
  }
  v162 = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *))v154)(v138, (unsigned int)v9, &v162);
  v24 = v23;
  if ( v23 < 0 )
  {
    WdLogSingleEntry3(2LL, v9, v138, v23);
    WdLogGlobalForLineNumber = 1689;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to determine number of paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
      v9,
      v138,
      v24,
      0LL,
      0LL);
    if ( v143 )
    {
      v25 = v20;
      goto LABEL_18;
    }
    return (unsigned int)v24;
  }
  v172 = 0LL;
  v153 = 0;
  v174 = 0LL;
  CurrentContentResolution = GetCurrentContentResolution(a2, v9, &v172, &v174, &v153);
  if ( CurrentContentResolution < 0 )
  {
    if ( v143 )
    {
      v27 = v20;
LABEL_23:
      v145(v146, v27);
    }
    return (unsigned int)CurrentContentResolution;
  }
  v28 = v172;
  v178 = v172;
  if ( !v172 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1703;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pContentRect != NULL", 1703LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v28->right - v28->left <= 0 || v28->bottom - v28->top <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1706;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(pContentRect->right - pContentRect->left > 0) && (pContentRect->bottom - pContentRect->top > 0)",
      1706LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v131 = 0;
  *(_OWORD *)&v180[0].cx = 0LL;
  v181 = 0LL;
  v29 = QueryWin32DpiValues(&v131, (struct _DPI_SCALE_FACTOR_COLLECTION *)v180);
  v30 = v29;
  if ( v29 < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1712;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(ntStatus)", 1712LL, 0LL, 0LL, 0LL, 0LL);
    WdLogSingleEntry1(2LL, v30);
    WdLogGlobalForLineNumber = 1715;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Could not retrieve Win8StyleOverride and/or ScaleFactorCollection from Win32. (0x%I64x)",
      v30,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v31 = 0;
  v150 = 0;
  memset(v176, 0, 0x5CuLL);
  v158 = v153;
  if ( v162 > 1 || (v32 = 0, v153 > 1) )
    v32 = 1;
  if ( v28->left || v28->top )
  {
    v33 = 0;
    v34 = 0;
  }
  else
  {
    v33 = 1;
    v34 = 32;
  }
  v35 = v32 | v34;
  *(_DWORD *)&v176[92] = v35;
  if ( v33 )
    dword_140160984 = v151;
  v36 = 0LL;
  v163 = 0LL;
  if ( !v162 )
  {
    v100 = *(__m128i *)&v176[80];
    v101 = *(__m128i *)&v176[16];
    v175 = *(__m128i *)&v176[80];
    v177 = *(__m128i *)&v176[16];
LABEL_183:
    v105 = _mm_cvtsi128_si32(_mm_srli_si128(v101, 8));
    if ( v105 )
    {
      v106 = _mm_cvtsi128_si32(_mm_srli_si128(v101, 12));
      if ( v106 )
      {
        if ( (v35 & 0x80u) == 0 )
        {
          v109 = 1000 * v105;
          v110 = v164;
          v164->ulHorzSize = v109;
          v110->ulVertSize = 1000 * v106;
        }
        else
        {
          v107 = 1000 * v106;
          v108 = v164;
          v164->ulHorzSize = v107;
          v108->ulVertSize = 1000 * v105;
        }
      }
    }
    if ( (v35 & 2) == 0
      || (v111 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v100, 4)),
          (_DWORD)v111 == 1234568) )
    {
      v112 = *(_DWORD *)&v176[8];
    }
    else
    {
      LODWORD(v116) = 0;
      v112 = DpiInternal::AdjustDesktopScaleFactorForOverride(
               (DpiInternal *)0x64,
               *(int *)&v176[32],
               (struct tagSIZE)v180,
               v111,
               (struct _DPI_SCALE_FACTOR_COLLECTION *)v116);
      *(_DWORD *)&v176[8] = v112;
    }
    if ( v31 )
    {
      *(_DWORD *)&v176[84] = 1234567;
      v112 = v31;
      v175 = *(__m128i *)&v176[80];
      *(_DWORD *)&v176[8] = v31;
    }
    if ( !v112 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2187;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"DpiInfo.DesktopScaleFactor != DESKTOP_SCALE_INVALID",
        2187LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v113 = v179;
    v114 = *(_OWORD *)&v176[48];
    *(_DWORD *)v176 = 100;
    *(_DWORD *)&v176[4] = 100;
    *(_OWORD *)v179 = *(_OWORD *)v176;
    *((__m128i *)v113 + 1) = v177;
    *((_OWORD *)v113 + 2) = *(_OWORD *)&v176[32];
    v115 = *(_OWORD *)&v176[64];
    *((_OWORD *)v113 + 3) = v114;
    *((_OWORD *)v113 + 4) = v115;
    *((__m128i *)v113 + 5) = v175;
    if ( v143 )
      v145(v146, v20);
    return 0LL;
  }
  bottom = v174.bottom;
  right = v174.right;
  top = v174.top;
  left = v174.left;
  v177 = *(__m128i *)&v176[16];
  while ( 1 )
  {
    v124 = 0;
    v121 = -1;
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned int *))(v154 + 8))(
            v138,
            (unsigned int)v9,
            v36,
            &v121);
    v24 = v37;
    if ( v37 < 0 )
      break;
    v160 = 0LL;
    v38 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(v154 + 24);
    v167 = 0LL;
    v168 = 0LL;
    v169 = 0LL;
    v170 = 0;
    v166 = 0;
    v39 = v38(v138, (unsigned int)v9, v121, &v160);
    v24 = v39;
    if ( v39 < 0 )
    {
      WdLogSingleEntry3(2LL, (unsigned int)v9, v121, v39);
      WdLogGlobalForLineNumber = 1771;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire info of path (0x%I64x, 0x%I64x) (status = 0x%I64x)",
        (unsigned int)v9,
        v121,
        v24,
        0LL,
        0LL);
      v103 = v143 == 0;
      goto LABEL_180;
    }
    v40 = v160;
    if ( !v160 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1776;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pVidPnPresentPathInfo != NULL",
        1776LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v40 = v160;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v166,
      v40,
      *(_QWORD *)(v154 + 32),
      v138);
    v142 = (const struct _DXGDMM_VIDPN_INTERFACE *)v167;
    v126.cy = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)(v167 + 20));
    v120 = 0;
    v156 = D3DKMDT_VOT_UNINITIALIZED;
    VideoOutputTechnology = DmmGetVideoOutputTechnology(a2, v121, &v156, 0LL);
    if ( VideoOutputTechnology >= 0 )
    {
      v43 = IsInternalVideoOutput(v156);
      v120 = v43;
    }
    else
    {
      v42 = VideoOutputTechnology;
      WdLogSingleEntry3(2LL, a2, v121, VideoOutputTechnology);
      WdLogGlobalForLineNumber = 1793;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to get video output technology from adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
        (__int64)a2,
        v121,
        v42,
        0LL,
        0LL);
      v43 = 0;
    }
    v165 = v43;
    v127 = 0LL;
    v149 = 0;
    v125 = 0;
    v184 = 0LL;
    v185 = 0;
    *(_WORD *)((char *)&v126.cx + 1) = 0;
    v44 = v35 & 0xFFFFFFFB | ((unsigned __int8)v35 | (unsigned __int8)(4 * v43)) & 4;
    *(_DWORD *)&v176[92] = v44;
    v148 = 0;
    v133 = 0;
    DpiInfoFromDescriptor = MonitorGetDpiInfoFromDescriptor(
                              a2,
                              v121,
                              (struct DISPLAY_PREFERRED_MODE_INFO *)&v184,
                              (unsigned int *)&v148,
                              (unsigned int *)&v133,
                              &v125,
                              (bool *)&v126 + 1);
    if ( DpiInfoFromDescriptor < 0 )
    {
      v44 |= 8u;
      cx = v127.cx;
      v47 = HIDWORD(v184);
      v46 = v184;
      *(_DWORD *)&v176[32] = v164->ulHorzRes;
      *(_DWORD *)&v176[36] = v164->ulVertRes;
      cy = v127.cy;
      goto LABEL_66;
    }
    if ( v125 && (v46 = v184) != 0 && (v47 = HIDWORD(v184)) != 0 )
    {
      BYTE2(v126.cx) = 1;
    }
    else
    {
      v48 = DpiInfoFromDescriptor;
      WdLogSingleEntry3(2LL, a2, v121, DpiInfoFromDescriptor);
      WdLogGlobalForLineNumber = 1833;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to get preferred mode from monitor EDID or DisplayID on adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
        (__int64)a2,
        v121,
        v48,
        0LL,
        0LL);
      v47 = HIDWORD(v184);
      v46 = v184;
      v43 = v120;
    }
    v49 = v133;
    cx = v148;
    v127.cx = v148;
    cy = v133;
    v127.cy = v133;
    if ( ((v126.cy - 2) & 0xFFFFFFFD) == 0 )
    {
      v49 = v148;
      cx = v133;
      cy = v148;
      v127.cy = v148;
      v127.cx = v133;
    }
    if ( cx && v49 )
    {
      if ( cx * v49 <= 16000 && !v43 )
      {
        v44 |= 0x40u;
        cy = 0;
        v127 = 0LL;
        v149 = 1;
        cx = 0;
LABEL_66:
        *(_DWORD *)&v176[92] = v44;
      }
    }
    else
    {
      v127 = 0LL;
      cx = 0;
      cy = 0;
    }
    if ( !cx )
      v124 = (a2[444] & 0x20) != 0;
    ActiveSize = 0LL;
    v155 = __PAIR64__(v47, v46);
    v51 = v47;
    memset(&v183, 0, sizeof(v183));
    v122 = 0;
    PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(a2, v121, &v183);
    if ( PreferredMonitorSourceModeOnTarget < 0 )
    {
      v55 = PreferredMonitorSourceModeOnTarget;
      WdLogSingleEntry3(2LL, a2, v121, PreferredMonitorSourceModeOnTarget);
      WdLogGlobalForLineNumber = 1889;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to get preferred monitor source mode from adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
        (__int64)a2,
        v121,
        v55,
        0LL,
        0LL);
      v54 = ActiveSize.cy;
      v51 = v47;
      v53 = ActiveSize.cx;
    }
    else
    {
      v53 = v183.VideoSignalInfo.ActiveSize.cx;
      v54 = v183.VideoSignalInfo.ActiveSize.cy;
      ActiveSize = v183.VideoSignalInfo.ActiveSize;
      v122 = 1;
    }
    if ( ((v126.cy - 2) & 0xFFFFFFFD) == 0 && (v47 = v46, v155 = __PAIR64__(v46, v51), v46 = v51, v126.cy == 2)
      || v126.cy == 4 )
    {
      ActiveSize = (D3DKMDT_2DREGION)__PAIR64__(v53, v54);
    }
    v132 = 0LL;
    CurrentContentResolution = DpiInternal::GetCurrentSourceResolution(
                                 v141,
                                 v157,
                                 v142,
                                 (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v132,
                                 v117);
    if ( CurrentContentResolution < 0 )
    {
      if ( v166 )
        v168(v169, v142);
      v102 = v143 == 0;
      goto LABEL_176;
    }
    v140 = 0LL;
    LOBYTE(v126.cx) = 0;
    CurrentContentResolution = DpiInternal::GetCurrentTargetResolution(
                                 v141,
                                 v157,
                                 v142,
                                 (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v140,
                                 &v126,
                                 (unsigned __int8 *)v119);
    if ( CurrentContentResolution < 0 )
    {
      if ( v166 )
        ((void (__fastcall *)(__int64, const struct _DXGDMM_VIDPN_INTERFACE *, _QWORD))v168)(v169, v142, 0LL);
      v102 = v143 == 0;
LABEL_176:
      if ( v102 )
        return (unsigned int)CurrentContentResolution;
      v27 = v141;
      goto LABEL_23;
    }
    v56 = HIDWORD(v140);
    if ( ((v126.cy - 2) & 0xFFFFFFFD) != 0 )
    {
      v126.cy = HIDWORD(v140);
      v56 = v140;
    }
    else
    {
      v126.cy = v140;
      v140 = __PAIR64__(v140, HIDWORD(v140));
    }
    v102 = *((_DWORD *)a2 + 110) == 4;
    v130 = v56;
    if ( v102 )
    {
      v173 = 0LL;
      PhysicalDisplaySizeOverride = GetPhysicalDisplaySizeOverride(&v173);
      v58 = v127;
      if ( PhysicalDisplaySizeOverride >= 0 )
        v58 = v173;
      v127 = v58;
      cx = v58.cx;
      cy = v58.cy;
    }
    if ( (v44 & 1) != 0 && v158 <= 1 && v46 && v47 )
    {
      v59 = HIDWORD(v132);
      if ( LOBYTE(v126.cx) )
      {
        v59 = HIDWORD(v132) >> 1;
        HIDWORD(v132) >>= 1;
      }
      v60 = 2 * v46;
      v61 = v132;
      if ( (unsigned int)v132 >= v60 || (v62 = 0, v59 >= 2 * v47) )
        v62 = 2;
      v44 = v44 & 0xFFFFFFFD | (v44 | v62) & 2;
      if ( LOBYTE(v126.cx) )
      {
        v59 *= 2;
        HIDWORD(v132) = v59;
      }
    }
    else
    {
      v59 = HIDWORD(v132);
      v61 = v132;
    }
    memset(v186, 0, sizeof(v186));
    v63 = v142;
    DWORD1(v186[5]) = v151;
    v64 = D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*((_DWORD *)v142 + 5));
    v35 = (((v64 - 2) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | v44 & 0xFFFFFF7F;
    v65 = v178->right - v178->left;
    LODWORD(v186[2]) = v65;
    v66 = v178->bottom - v178->top;
    *(_DWORD *)&v176[92] = v35;
    DWORD1(v186[2]) = v66;
    if ( ((v64 - 2) & 0xFFFFFFFD) == 0 )
      *(_QWORD *)&v186[2] = __PAIR64__(v65, v66);
    switch ( *((_DWORD *)v63 + 3) )
    {
      case 1:
      case 2:
        goto LABEL_107;
      case 3:
        v70 = v130;
        v71 = v126.cy;
        v68 = v130 * (right - left) / v61;
        v76 = v126.cy * (bottom - top);
        break;
      case 4:
        v71 = v126.cy;
        v70 = v130;
        if ( v59 * v130 <= v61 * v126.cy )
        {
          v75 = v130;
          v74 = v59 * v130 / v61;
        }
        else
        {
          v74 = v126.cy;
          v75 = v61 * v126.cy / v59;
        }
        v68 = v75 * (right - left) / v61;
        v76 = v74 * (bottom - top);
        break;
      case 5:
        goto LABEL_106;
      default:
        if ( *((_DWORD *)v63 + 3) != 255 )
        {
          WdLogSingleEntry1(1LL, *((int *)v63 + 3));
          v67 = *((int *)v63 + 3);
          WdLogGlobalForLineNumber = 1986;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"Invalid scaling %I64d", v67, 0LL, 0LL, 0LL, 0LL);
LABEL_106:
          v35 |= 0x100u;
          *(_DWORD *)&v176[92] = v35;
        }
LABEL_107:
        v68 = right - left;
        v69 = bottom - top;
        v70 = v130;
        v71 = v126.cy;
        goto LABEL_108;
    }
    v69 = v76 / v59;
LABEL_108:
    v72 = cy * v69;
    DWORD2(v186[1]) = cx * v68 / v70;
    v73 = (struct tagSIZE)(v72 % v71);
    HIDWORD(v186[1]) = v72 / v71;
    LOBYTE(v73.cx) = (v35 & 2) != 0 || !v122;
    v77 = 0;
    v161 = 0LL;
    if ( v124 || v149 || !BYTE1(v126.cx) )
      goto LABEL_128;
    v78 = v122;
    if ( LOBYTE(v73.cx) )
      v78 = BYTE2(v126.cx);
    if ( !v78 )
    {
LABEL_128:
      LODWORD(v186[4]) = 0;
    }
    else
    {
      v79 = (struct tagSIZE)ActiveSize;
      if ( LOBYTE(v73.cx) )
        v79 = (struct tagSIZE)v155;
      v77 = 1;
      v161 = v79;
      v80 = 16 * DetermineViewDistance(a2, &v127, v165, &v161, (unsigned int *)&v186[4]);
      v81 = v35 & 0xFFFFFFEF;
      v35 = v35 & 0xFFFFFFEF | v80;
      *(_DWORD *)&v176[92] = v81 | v80;
      if ( !LODWORD(v186[4]) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2057;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"CurrentDpiInfo.ViewDistTenthsOfInch != 0",
          2057LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v82 = v123;
    v83 = 0;
    v129 = 0;
    v84 = 0;
    if ( !v123 || !v131 )
    {
      if ( v120 && (int)DpiReadPnpRegistryValue(*((_QWORD *)a2 + 27), L"PreferredScaleFactor", &v129, 4LL, 2) >= 0 )
      {
        v83 = v129;
        v85 = 4096;
      }
      else
      {
        v129 = 0;
        v85 = 0;
      }
      v35 = v85 | v35 & 0xFFFFEFFF;
      *(_DWORD *)&v176[92] = v35;
      if ( (v35 & 0x1000) == 0 )
      {
        PreferredScaleFactorForMonitor = DpiInternal::GetPreferredScaleFactorForMonitor(
                                           (DpiInternal *)a2,
                                           (void *const)v121,
                                           (v35 >> 5) & 1,
                                           (int)&v129,
                                           (unsigned int *)v118);
        v83 = v129;
        v87 = v35 & 0xFFFFF7FF;
        v35 = v35 & 0xFFFFF7FF | (PreferredScaleFactorForMonitor << 11);
        *(_DWORD *)&v176[92] = v87 | (PreferredScaleFactorForMonitor << 11);
      }
      v82 = v123;
      if ( v83 )
        v84 = 1;
    }
    if ( v124 && v120 && !v83 )
    {
      DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        *(DpiInternal **)&v186[2],
        v73,
        (__int64)v180,
        (const struct _DPI_SCALE_FACTOR_COLLECTION *)v186);
      LODWORD(v118) = 0;
      DpiInternal::FillOverridesAndAdjustedScaleFactor(
        (DpiInternal *)v131,
        0,
        (int *)v180,
        (const struct _DPI_SCALE_FACTOR_COLLECTION *)v186,
        (struct _DPI_INFORMATION *)v118);
      v35 |= 0x400u;
      *(_DWORD *)&v176[92] = v35;
    }
    else
    {
      if ( v84 && v77 && DWORD1(v186[2]) != v161.cy && DWORD1(v186[2]) && v161.cy )
      {
        v83 = DWORD1(v186[2]) * v83 / v161.cy;
        v129 = v83;
      }
      LODWORD(v118) = v131;
      FillDpiInfo(
        (const struct tagSIZE *)&v186[1] + 1,
        (struct tagSIZE *)&v186[2],
        v180,
        (DpiInternal *)LODWORD(v186[4]),
        (DpiInternal *)v118,
        v83,
        v82,
        (struct _DPI_INFORMATION *)v186);
    }
    if ( HIDWORD(v186[5]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2119;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"CurrentDpiInfo.FlagsUnion.AllFlags == 0",
        2119LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    HIDWORD(v186[5]) = v35;
    if ( v120
      || (v35 & 4) == 0
      && (DpiInternal::AvgXY(*((DpiInternal **)&v186[3] + 1), v88),
          v90 = DpiInternal::AvgXY(*(DpiInternal **)&v176[56], v89),
          v90 <= v91) )
    {
      *(_OWORD *)v176 = v186[0];
      v177 = (__m128i)v186[1];
      *(_OWORD *)&v176[16] = v186[1];
      *(_OWORD *)&v176[32] = v186[2];
      *(_OWORD *)&v176[64] = v186[4];
      v175 = (__m128i)v186[5];
      *(_OWORD *)&v176[80] = v186[5];
      v35 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v186[5], 12));
      *(_OWORD *)&v176[48] = v186[3];
    }
    else
    {
      v175 = *(__m128i *)&v176[80];
    }
    memset(v187, 0, sizeof(v187));
    v92 = v121;
    v97 = WdLogNewEntry5_WdTrace(v94, v93, v95, v96);
    *(_QWORD *)(v97 + 24) = v92;
    *(_QWORD *)(v97 + 32) = a2;
    WdLogGlobalForLineNumber = 5191;
    if ( (_DWORD)v92 == -1 )
    {
      v98 = -1073741811;
      goto LABEL_165;
    }
    MONITOR_MGR::AcquireMonitorShared(v182, (__int64)a2, v92, 1u);
    if ( !v182[0] )
    {
      v98 = -1073741632;
      WdLogSingleEntry1(2LL, -1073741632LL);
      WdLogGlobalForLineNumber = 5204;
      CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v182);
LABEL_165:
      WdLogSingleEntry3(2LL, a2, v121, v98);
      WdLogGlobalForLineNumber = 2144;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"MonitorGetMonitorDeviceInterfaceName failed for adapter: 0x%I64x, target: 0x%I64x, with status: 0x%I64x",
        (__int64)a2,
        v121,
        v98,
        0LL,
        0LL);
      v187[0] = 0;
      goto LABEL_166;
    }
    v98 = RtlStringCchCopyUnicodeString(
            (char *)v187,
            128LL,
            (const struct _UNICODE_STRING *)(*(_QWORD *)(v182[0] + 200LL) + 48LL));
    if ( v98 >= 0 )
      v187[1] = 92;
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v182);
    if ( v98 < 0 )
      goto LABEL_165;
    ScaleOverrideTestHook((DpiInternal *)v187, (const unsigned __int16 *)&v150, v99);
LABEL_166:
    LODWORD(v9) = v159;
    TraceLogDpiInfo((struct _DPI_INFORMATION *)v186, v187, (const struct _LUID *)(a2 + 412), v159, v83);
    LogScaleFactor(*(struct _LUID *)(a2 + 412), v9, v131, (struct _DPI_INFORMATION *)v186);
    if ( v166 )
      v168(v169, v142);
    v36 = v163 + 1;
    v163 = v36;
    if ( v36 >= v162 )
    {
      v31 = v150;
      v100 = v175;
      v20 = v141;
      v101 = v177;
      goto LABEL_183;
    }
  }
  v104 = v163;
  WdLogSingleEntry3(2LL, v163, (unsigned int)v9, v37);
  WdLogGlobalForLineNumber = 1753;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to enumerate target of %I64d'th path originating from source 0x%I64x (status = 0x%I64x)",
    v104,
    (unsigned int)v9,
    v24,
    0LL,
    0LL);
  v103 = v143 == 0;
LABEL_180:
  if ( v103 )
    return (unsigned int)v24;
  v25 = v141;
LABEL_18:
  v145(v146, v25);
  return (unsigned int)v24;
}
