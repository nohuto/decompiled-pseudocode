/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1403A6D68
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1403A67F0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140030B40 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1400345DC (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14003B6DC (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x14004D80C (-RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x14004DBCC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x140055C48 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x140055D18 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x140056330 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x140058AAC (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@HH@Z @ 0x140062690 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x140064758 (-AvgXY@DpiInternal@@YAJUtagSIZE@@@Z.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x140065234 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_F.c)
 *     Feature_FixDpiDivideByZero__private_IsEnabledDeviceUsageNoInline @ 0x14006EECC (Feature_FixDpiDivideByZero__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z @ 0x1401C5664 (-GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1403261A4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x140384244 (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 *     DpiReadPnpRegistryValue @ 0x140384310 (DpiReadPnpRegistryValue.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403C3A74 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1403DA050 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1403E4928 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1403E5EC4 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1403E907C (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1403E9FDC (-GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z @ 0x1403EC7FC (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1403F2C4C (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z @ 0x14042C520 (-MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z.c)
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
  bool v27; // zf
  const struct tagRECT *v28; // rdi
  int Win32DpiValues; // eax
  __int64 v30; // rbx
  unsigned int v31; // ebx
  int v32; // ecx
  int v33; // eax
  int v34; // edi
  unsigned int v35; // edi
  unsigned __int64 v36; // rcx
  int v37; // eax
  bool v38; // bl
  __int64 (__fastcall *v39)(__int64, _QWORD, _QWORD, __int64 *); // rax
  int v40; // eax
  __int64 v41; // rdx
  unsigned int v42; // r14d
  bool v43; // si
  int VideoOutputTechnology; // eax
  __int64 v45; // rbx
  unsigned int v46; // edi
  int v47; // eax
  int v48; // esi
  int DpiInfoFromDescriptor; // eax
  unsigned int v50; // r12d
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v52; // ebx
  LONG v53; // ecx
  LONG cx; // esi
  unsigned int v55; // r14d
  int PreferredMonitorSourceModeOnTarget; // eax
  UINT v57; // edx
  UINT v58; // ecx
  __int64 v59; // rbx
  unsigned int v60; // eax
  int PhysicalDisplaySizeOverride; // eax
  struct tagSIZE v62; // rcx
  LONG v63; // r14d
  unsigned int v64; // ebx
  int v65; // ecx
  const struct _DXGDMM_VIDPN_INTERFACE *v66; // r12
  int v67; // eax
  int v68; // edx
  int v69; // ecx
  __int64 v70; // rax
  unsigned int v71; // ecx
  int v72; // r8d
  unsigned int v73; // r9d
  unsigned int v74; // r10d
  unsigned int v75; // r8d
  struct tagSIZE v76; // rdx
  unsigned int v77; // r8d
  unsigned int v78; // ecx
  unsigned int v79; // eax
  char v80; // r12
  char v81; // cl
  struct tagSIZE v82; // rax
  int v83; // ecx
  unsigned int v84; // eax
  unsigned __int8 v85; // r9
  unsigned int v86; // esi
  char v87; // r14
  int v88; // eax
  bool PreferredScaleFactorForMonitor; // al
  unsigned int v90; // ebx
  struct tagSIZE v91; // rdx
  struct tagSIZE v92; // rdx
  int v93; // eax
  int v94; // r8d
  __int64 v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  int v101; // ebx
  unsigned int *v102; // r8
  __m128i v103; // xmm1
  __m128i v104; // xmm2
  bool v105; // zf
  __int64 v106; // r14
  int v107; // ecx
  int v108; // edx
  int v109; // eax
  struct _GDIINFO *v110; // rdx
  int v111; // eax
  struct _GDIINFO *v112; // rcx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v113; // r9
  unsigned int v114; // eax
  struct _DPI_INFORMATION *v115; // rax
  __int128 v116; // xmm1
  __int128 v117; // xmm0
  struct _D3DKMDT_2DREGION *v118; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v119; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v120; // [rsp+20h] [rbp-E0h]
  bool *v121; // [rsp+28h] [rbp-D8h]
  bool v122; // [rsp+50h] [rbp-B0h]
  unsigned int v123; // [rsp+54h] [rbp-ACh] BYREF
  bool v124; // [rsp+58h] [rbp-A8h] BYREF
  char v125; // [rsp+59h] [rbp-A7h]
  bool v126; // [rsp+5Ah] [rbp-A6h] BYREF
  char v127; // [rsp+5Bh] [rbp-A5h]
  bool v128; // [rsp+5Ch] [rbp-A4h]
  bool v129; // [rsp+5Dh] [rbp-A3h] BYREF
  _BYTE v130[10]; // [rsp+5Eh] [rbp-A2h] BYREF
  unsigned int v131; // [rsp+68h] [rbp-98h]
  struct tagSIZE v132; // [rsp+70h] [rbp-90h] BYREF
  int v133; // [rsp+78h] [rbp-88h] BYREF
  LONG cy; // [rsp+7Ch] [rbp-84h]
  DpiInternal *v135; // [rsp+80h] [rbp-80h] BYREF
  __int64 v136; // [rsp+88h] [rbp-78h] BYREF
  LONG v137; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v138; // [rsp+94h] [rbp-6Ch]
  LONG v139; // [rsp+98h] [rbp-68h] BYREF
  LONG right; // [rsp+9Ch] [rbp-64h]
  LONG left; // [rsp+A0h] [rbp-60h]
  LONG bottom; // [rsp+A4h] [rbp-5Ch]
  LONG top; // [rsp+A8h] [rbp-58h]
  __int64 v144; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v145; // [rsp+B8h] [rbp-48h] BYREF
  D3DKMDT_2DREGION ActiveSize; // [rsp+C0h] [rbp-40h]
  const struct _DXGDMM_VIDPN_INTERFACE *v147; // [rsp+C8h] [rbp-38h]
  char v148; // [rsp+D0h] [rbp-30h] BYREF
  DpiInternal *v149; // [rsp+D8h] [rbp-28h]
  void (__fastcall *v150)(__int64, DpiInternal *); // [rsp+E0h] [rbp-20h]
  __int64 v151; // [rsp+E8h] [rbp-18h]
  int v152; // [rsp+F0h] [rbp-10h]
  int v153; // [rsp+F8h] [rbp-8h]
  unsigned int v154; // [rsp+FCh] [rbp-4h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v155; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v156; // [rsp+104h] [rbp+4h] BYREF
  unsigned int v157; // [rsp+108h] [rbp+8h] BYREF
  __int64 v158; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v159; // [rsp+118h] [rbp+18h]
  int v160; // [rsp+120h] [rbp+20h]
  struct D3DKMDT_HVIDPN__ *v161; // [rsp+128h] [rbp+28h] BYREF
  DpiInternal *v162; // [rsp+130h] [rbp+30h]
  unsigned int v163; // [rsp+138h] [rbp+38h]
  unsigned int v164; // [rsp+13Ch] [rbp+3Ch]
  __int64 v165; // [rsp+140h] [rbp+40h] BYREF
  struct tagSIZE v166; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v167; // [rsp+150h] [rbp+50h] BYREF
  __int64 v168; // [rsp+158h] [rbp+58h]
  struct _GDIINFO *v169; // [rsp+160h] [rbp+60h]
  unsigned int v170; // [rsp+168h] [rbp+68h]
  char v171; // [rsp+170h] [rbp+70h] BYREF
  __int64 v172; // [rsp+178h] [rbp+78h]
  void (__fastcall *v173)(__int64, const struct _DXGDMM_VIDPN_INTERFACE *); // [rsp+180h] [rbp+80h]
  __int64 v174; // [rsp+188h] [rbp+88h]
  int v175; // [rsp+190h] [rbp+90h]
  __int64 v176; // [rsp+198h] [rbp+98h] BYREF
  const struct tagRECT *v177; // [rsp+1A0h] [rbp+A0h] BYREF
  struct tagSIZE v178; // [rsp+1A8h] [rbp+A8h] BYREF
  struct tagRECT v179; // [rsp+1B0h] [rbp+B0h] BYREF
  __m128i v180; // [rsp+1C0h] [rbp+C0h]
  _BYTE v181[96]; // [rsp+1D0h] [rbp+D0h] BYREF
  __m128i v182; // [rsp+230h] [rbp+130h]
  const struct tagRECT *v183; // [rsp+240h] [rbp+140h]
  struct _DPI_INFORMATION *v184; // [rsp+248h] [rbp+148h]
  struct tagSIZE v185[2]; // [rsp+250h] [rbp+150h] BYREF
  __int128 v186; // [rsp+260h] [rbp+160h]
  _QWORD v187[4]; // [rsp+270h] [rbp+170h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v188; // [rsp+290h] [rbp+190h] BYREF
  __int64 v189; // [rsp+2F0h] [rbp+1F0h] BYREF
  int v190; // [rsp+2F8h] [rbp+1F8h]
  _OWORD v191[6]; // [rsp+300h] [rbp+200h] BYREF
  unsigned __int16 v192[128]; // [rsp+360h] [rbp+260h] BYREF

  v169 = a6;
  v9 = a3;
  v184 = a7;
  v160 = a4;
  v164 = a3;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  if ( !Current || (IsRemoteConnection = DXGPROCESS::IsRemoteConnection(Current), v13 = 1, !IsRemoteConnection) )
    v13 = 0;
  v127 = v13;
  v156 = 0;
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)a2, v11, &v156, 0LL);
  if ( v15 != IsAdapterSessionized )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1645;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"IsRemote == IsAdapterSessionized",
      1645LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( IsAdapterSessionized && v156 != (unsigned int)PsGetCurrentProcessSessionId() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1646;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!IsAdapterSessionized || (TargetSession == PsGetCurrentProcessSessionId())",
      1646LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v16 = (__int64 (__fastcall *)(char *, __int64 *, struct D3DKMDT_HVIDPN__ **))*((_QWORD *)a1 + 6);
  v161 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  v152 = 0;
  v148 = 0;
  v176 = 0LL;
  v17 = v16(a2, &v176, &v161);
  v18 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry2(2LL, a2, v17);
    WdLogGlobalForLineNumber = 1660;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
    (__int64)&v148,
    v176,
    *((_QWORD *)a1 + 8),
    (__int64)a2);
  v144 = 0LL;
  v158 = 0LL;
  v20 = v149;
  v21 = *(__int64 (__fastcall **)(DpiInternal *, __int64 *, __int64 *))v161;
  v162 = v149;
  v22 = v21(v149, &v144, &v158);
  v18 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry2(2LL, v20, v22);
    WdLogGlobalForLineNumber = 1678;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire topology for VidPN 0x%I64x (status = 0x%I64x)",
      (__int64)v20,
      v18,
      0LL,
      0LL,
      0LL);
    if ( v148 )
      v150(v151, v20);
    return (unsigned int)v18;
  }
  v167 = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *))v158)(v144, (unsigned int)v9, &v167);
  v24 = v23;
  if ( v23 < 0 )
  {
    WdLogSingleEntry3(2LL, v9, v144, v23);
    WdLogGlobalForLineNumber = 1689;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to determine number of paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
      v9,
      v144,
      v24,
      0LL,
      0LL);
    if ( v148 )
    {
      v25 = v20;
      goto LABEL_18;
    }
    return (unsigned int)v24;
  }
  v177 = 0LL;
  v157 = 0;
  v179 = 0LL;
  CurrentContentResolution = GetCurrentContentResolution(a2, v9, &v177, &v179, &v157);
  if ( CurrentContentResolution < 0 )
  {
    v27 = v148 == 0;
LABEL_22:
    if ( !v27 )
      v150(v151, v20);
    return (unsigned int)CurrentContentResolution;
  }
  v28 = v177;
  v183 = v177;
  if ( !v177 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1703;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pContentRect != NULL", 1703LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v28->right - v28->left <= 0 || v28->bottom - v28->top <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1706;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(pContentRect->right - pContentRect->left > 0) && (pContentRect->bottom - pContentRect->top > 0)",
      1706LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LODWORD(v135) = 0;
  *(_OWORD *)&v185[0].cx = 0LL;
  v186 = 0LL;
  Win32DpiValues = QueryWin32DpiValues((unsigned int *)&v135, (struct _DPI_SCALE_FACTOR_COLLECTION *)v185);
  v30 = Win32DpiValues;
  if ( Win32DpiValues < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1712;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(ntStatus)", 1712LL, 0LL, 0LL, 0LL, 0LL);
    WdLogSingleEntry1(2LL, v30);
    WdLogGlobalForLineNumber = 1715;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Could not retrieve Win8StyleOverride and/or ScaleFactorCollection from Win32. (0x%I64x)",
      v30,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v31 = 0;
  v154 = 0;
  memset(v181, 0, 0x5CuLL);
  v163 = v157;
  if ( v167 > 1 || (v32 = 0, v157 > 1) )
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
  *(_DWORD *)&v181[92] = v35;
  if ( v33 )
    dword_14015D984 = v160;
  v36 = 0LL;
  v168 = 0LL;
  if ( !v167 )
  {
    v103 = *(__m128i *)&v181[80];
    v104 = *(__m128i *)&v181[16];
    v180 = *(__m128i *)&v181[80];
    v182 = *(__m128i *)&v181[16];
LABEL_189:
    v107 = _mm_cvtsi128_si32(_mm_srli_si128(v104, 8));
    if ( v107 )
    {
      v108 = _mm_cvtsi128_si32(_mm_srli_si128(v104, 12));
      if ( v108 )
      {
        if ( (v35 & 0x80u) == 0 )
        {
          v111 = 1000 * v107;
          v112 = v169;
          v169->ulHorzSize = v111;
          v112->ulVertSize = 1000 * v108;
        }
        else
        {
          v109 = 1000 * v108;
          v110 = v169;
          v169->ulHorzSize = v109;
          v110->ulVertSize = 1000 * v107;
        }
      }
    }
    if ( (v35 & 2) == 0
      || (v113 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v103, 4)),
          (_DWORD)v113 == 1234568) )
    {
      v114 = *(_DWORD *)&v181[8];
    }
    else
    {
      LODWORD(v118) = 0;
      v114 = DpiInternal::AdjustDesktopScaleFactorForOverride(
               (DpiInternal *)0x64,
               *(int *)&v181[32],
               (struct tagSIZE)v185,
               v113,
               (struct _DPI_SCALE_FACTOR_COLLECTION *)v118);
      *(_DWORD *)&v181[8] = v114;
    }
    if ( v31 )
    {
      *(_DWORD *)&v181[84] = 1234567;
      v114 = v31;
      v180 = *(__m128i *)&v181[80];
      *(_DWORD *)&v181[8] = v31;
    }
    if ( !v114 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2198;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"DpiInfo.DesktopScaleFactor != DESKTOP_SCALE_INVALID",
        2198LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v115 = v184;
    v116 = *(_OWORD *)&v181[48];
    *(_DWORD *)v181 = 100;
    *(_DWORD *)&v181[4] = 100;
    *(_OWORD *)v184 = *(_OWORD *)v181;
    *((__m128i *)v115 + 1) = v182;
    *((_OWORD *)v115 + 2) = *(_OWORD *)&v181[32];
    v117 = *(_OWORD *)&v181[64];
    *((_OWORD *)v115 + 3) = v116;
    *((_OWORD *)v115 + 4) = v117;
    *((__m128i *)v115 + 5) = v180;
    if ( v148 )
      v150(v151, v20);
    return 0LL;
  }
  bottom = v179.bottom;
  right = v179.right;
  top = v179.top;
  left = v179.left;
  v182 = *(__m128i *)&v181[16];
  while ( 1 )
  {
    v128 = 0;
    v123 = -1;
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned int *))(v158 + 8))(
            v144,
            (unsigned int)v9,
            v36,
            &v123);
    v38 = 0;
    v24 = v37;
    if ( v37 < 0 )
      break;
    v165 = 0LL;
    v39 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(v158 + 24);
    v172 = 0LL;
    v173 = 0LL;
    v174 = 0LL;
    v175 = 0;
    v171 = 0;
    v40 = v39(v144, (unsigned int)v9, v123, &v165);
    v24 = v40;
    if ( v40 < 0 )
    {
      WdLogSingleEntry3(2LL, (unsigned int)v9, v123, v40);
      WdLogGlobalForLineNumber = 1771;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to acquire info of path (0x%I64x, 0x%I64x) (status = 0x%I64x)",
        (unsigned int)v9,
        v123,
        v24,
        0LL,
        0LL);
      v105 = v148 == 0;
      goto LABEL_186;
    }
    v41 = v165;
    if ( !v165 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1776;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pVidPnPresentPathInfo != NULL",
        1776LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v41 = v165;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v171,
      v41,
      *(_QWORD *)(v158 + 32),
      v144);
    v147 = (const struct _DXGDMM_VIDPN_INTERFACE *)v172;
    v131 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)(v172 + 20));
    v122 = 0;
    v42 = v131;
    v155 = D3DKMDT_VOT_UNINITIALIZED;
    v43 = 0;
    VideoOutputTechnology = DmmGetVideoOutputTechnology(a2, v123, &v155, 0LL);
    if ( VideoOutputTechnology >= 0 )
    {
      v43 = IsInternalVideoOutput(v155);
      v122 = v43;
    }
    else
    {
      v45 = VideoOutputTechnology;
      WdLogSingleEntry3(2LL, a2, v123, VideoOutputTechnology);
      WdLogGlobalForLineNumber = 1793;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get video output technology from adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
        (__int64)a2,
        v123,
        v45,
        0LL,
        0LL);
      v38 = 0;
    }
    v170 = v43;
    v132 = 0LL;
    v153 = 0;
    v129 = 0;
    v189 = 0LL;
    v190 = 0;
    v46 = v35 & 0xFFFFFFFB | ((unsigned __int8)v35 | (unsigned __int8)(4 * v43)) & 4;
    *(_DWORD *)&v181[92] = v46;
    LOBYTE(v9) = 0;
    v124 = 0;
    *(_DWORD *)&v130[6] = v9;
    v126 = 0;
    v139 = 0;
    v137 = 0;
    if ( (unsigned int)Feature_FixDpiDivideByZero__private_IsEnabledDeviceUsageNoInline() )
    {
      DpiInfoFromDescriptor = MonitorGetDpiInfoFromDescriptor(
                                a2,
                                v123,
                                (struct DISPLAY_PREFERRED_MODE_INFO *)&v189,
                                (unsigned int *)&v139,
                                (unsigned int *)&v137,
                                &v129,
                                &v126);
      v38 = v129;
      v48 = DpiInfoFromDescriptor;
    }
    else
    {
      v47 = MonitorGetDpiInfoFromDescriptor(
              a2,
              v123,
              (struct DISPLAY_PREFERRED_MODE_INFO *)&v189,
              (unsigned int *)&v139,
              (unsigned int *)&v137,
              &v124,
              &v126);
      v48 = v47;
      LOBYTE(v47) = v124;
      *(_DWORD *)&v130[6] = v47;
    }
    if ( v48 < 0 )
    {
      v46 |= 8u;
      v52 = v189;
      cx = v132.cx;
      v50 = HIDWORD(v189);
      *(_DWORD *)&v181[32] = v169->ulHorzRes;
      *(_DWORD *)&v181[36] = v169->ulVertRes;
      cy = v132.cy;
      *(_DWORD *)&v130[2] = v189;
      goto LABEL_73;
    }
    IsEnabledDeviceUsageNoInline = Feature_FixDpiDivideByZero__private_IsEnabledDeviceUsageNoInline();
    v50 = HIDWORD(v189);
    v27 = IsEnabledDeviceUsageNoInline == 0;
    LOBYTE(IsEnabledDeviceUsageNoInline) = v130[6];
    *(_DWORD *)&v130[2] = v189;
    if ( v27 )
    {
      v52 = v189;
    }
    else
    {
      v27 = !v38;
      v52 = v189;
      if ( !v27 && (_DWORD)v189 )
      {
        IsEnabledDeviceUsageNoInline = v130[6];
        if ( HIDWORD(v189) )
          IsEnabledDeviceUsageNoInline = 1;
        *(_DWORD *)&v130[6] = IsEnabledDeviceUsageNoInline;
        v124 = IsEnabledDeviceUsageNoInline;
      }
    }
    if ( !(_BYTE)IsEnabledDeviceUsageNoInline )
    {
      WdLogSingleEntry3(2LL, a2, v123, v48);
      WdLogGlobalForLineNumber = 1844;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get preferred mode from monitor EDID or DisplayID on adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
        (__int64)a2,
        v123,
        v48,
        0LL,
        0LL);
      v52 = v189;
      v50 = HIDWORD(v189);
      *(_DWORD *)&v130[2] = v189;
    }
    v53 = v137;
    cx = v139;
    v132.cx = v139;
    cy = v137;
    v132.cy = v137;
    if ( ((v42 - 2) & 0xFFFFFFFD) == 0 )
    {
      v53 = v139;
      cx = v137;
      cy = v139;
      v132.cy = v139;
      v132.cx = v137;
    }
    if ( cx && v53 )
    {
      if ( cx * v53 <= 16000 && !v122 )
      {
        v46 |= 0x40u;
        cy = 0;
        v132 = 0LL;
        v153 = 1;
        cx = 0;
LABEL_73:
        *(_DWORD *)&v181[92] = v46;
      }
    }
    else
    {
      v132 = 0LL;
      cx = 0;
      cy = 0;
    }
    if ( !cx )
      v128 = (a2[444] & 0x20) != 0;
    ActiveSize = 0LL;
    v159 = __PAIR64__(v50, v52);
    v55 = v50;
    memset(&v188, 0, sizeof(v188));
    v125 = 0;
    PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(a2, v123, &v188);
    if ( PreferredMonitorSourceModeOnTarget < 0 )
    {
      v59 = PreferredMonitorSourceModeOnTarget;
      WdLogSingleEntry3(2LL, a2, v123, PreferredMonitorSourceModeOnTarget);
      WdLogGlobalForLineNumber = 1900;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get preferred monitor source mode from adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
        (__int64)a2,
        v123,
        v59,
        0LL,
        0LL);
      v58 = ActiveSize.cy;
      v57 = ActiveSize.cx;
      v52 = *(_DWORD *)&v130[2];
    }
    else
    {
      v57 = v188.VideoSignalInfo.ActiveSize.cx;
      v58 = v188.VideoSignalInfo.ActiveSize.cy;
      ActiveSize = v188.VideoSignalInfo.ActiveSize;
      v125 = 1;
    }
    if ( ((v131 - 2) & 0xFFFFFFFD) == 0
      && (v50 = v52, *(_DWORD *)&v130[2] = v55, v159 = __PAIR64__(v52, v55), v131 == 2)
      || v131 == 4 )
    {
      ActiveSize = (D3DKMDT_2DREGION)__PAIR64__(v57, v58);
    }
    v20 = v162;
    v136 = 0LL;
    CurrentContentResolution = DpiInternal::GetCurrentSourceResolution(
                                 v162,
                                 v161,
                                 v147,
                                 (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v136,
                                 v119);
    if ( CurrentContentResolution < 0 )
    {
      if ( v171 )
        v173(v174, v147);
      v27 = v148 == 0;
      goto LABEL_22;
    }
    v145 = 0LL;
    v130[0] = 0;
    CurrentContentResolution = DpiInternal::GetCurrentTargetResolution(
                                 v20,
                                 v161,
                                 v147,
                                 (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v145,
                                 (struct _D3DKMDT_2DREGION *)v130,
                                 (unsigned __int8 *)v121);
    if ( CurrentContentResolution < 0 )
    {
      if ( v171 )
        ((void (__fastcall *)(__int64, const struct _DXGDMM_VIDPN_INTERFACE *, _QWORD))v173)(v174, v147, 0LL);
      v27 = v148 == 0;
      goto LABEL_22;
    }
    v60 = HIDWORD(v145);
    if ( ((v131 - 2) & 0xFFFFFFFD) != 0 )
    {
      v131 = HIDWORD(v145);
      v60 = v145;
    }
    else
    {
      v131 = v145;
      v145 = __PAIR64__(v145, HIDWORD(v145));
    }
    v27 = *((_DWORD *)a2 + 110) == 4;
    v138 = v60;
    if ( v27 )
    {
      v178 = 0LL;
      PhysicalDisplaySizeOverride = GetPhysicalDisplaySizeOverride(&v178);
      v62 = v132;
      if ( PhysicalDisplaySizeOverride >= 0 )
        v62 = v178;
      v132 = v62;
      cx = v62.cx;
      v63 = v62.cy;
    }
    else
    {
      v63 = cy;
    }
    if ( (v46 & 1) != 0 && v163 <= 1 && *(_DWORD *)&v130[2] && v50 )
    {
      v64 = HIDWORD(v136);
      if ( v130[0] )
      {
        v64 = HIDWORD(v136) >> 1;
        HIDWORD(v136) >>= 1;
      }
      if ( (unsigned int)v136 >= 2 * *(_DWORD *)&v130[2] || (v65 = 0, v64 >= 2 * v50) )
        v65 = 2;
      v46 = v46 & 0xFFFFFFFD | (v46 | v65) & 2;
      if ( v130[0] )
      {
        v64 *= 2;
        HIDWORD(v136) = v64;
      }
    }
    else
    {
      v64 = HIDWORD(v136);
    }
    memset(v191, 0, sizeof(v191));
    v66 = v147;
    DWORD1(v191[5]) = v160;
    v67 = D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*((_DWORD *)v147 + 5));
    v35 = (((v67 - 2) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | v46 & 0xFFFFFF7F;
    v68 = v183->right - v183->left;
    LODWORD(v191[2]) = v68;
    v69 = v183->bottom - v183->top;
    *(_DWORD *)&v181[92] = v35;
    DWORD1(v191[2]) = v69;
    if ( ((v67 - 2) & 0xFFFFFFFD) == 0 )
      *(_QWORD *)&v191[2] = __PAIR64__(v68, v69);
    switch ( *((_DWORD *)v66 + 3) )
    {
      case 1:
      case 2:
        goto LABEL_115;
      case 3:
        v73 = v138;
        v74 = v131;
        v71 = v138 * (right - left) / (unsigned int)v136;
        v79 = v131 * (bottom - top);
        break;
      case 4:
        v74 = v131;
        v73 = v138;
        if ( v64 * v138 <= (unsigned int)v136 * v131 )
        {
          v78 = v138;
          v77 = v64 * v138 / (unsigned int)v136;
        }
        else
        {
          v77 = v131;
          v78 = (unsigned int)v136 * v131 / v64;
        }
        v71 = v78 * (right - left) / (unsigned int)v136;
        v79 = v77 * (bottom - top);
        break;
      case 5:
        goto LABEL_114;
      default:
        if ( *((_DWORD *)v66 + 3) != 255 )
        {
          WdLogSingleEntry1(1LL, *((int *)v66 + 3));
          v70 = *((int *)v66 + 3);
          WdLogGlobalForLineNumber = 1997;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"Invalid scaling %I64d", v70, 0LL, 0LL, 0LL, 0LL);
LABEL_114:
          v35 |= 0x100u;
          *(_DWORD *)&v181[92] = v35;
        }
LABEL_115:
        v71 = right - left;
        v72 = bottom - top;
        v73 = v138;
        v74 = v131;
        goto LABEL_116;
    }
    v72 = v79 / v64;
LABEL_116:
    v75 = v63 * v72;
    DWORD2(v191[1]) = cx * v71 / v73;
    v76 = (struct tagSIZE)(v75 % v74);
    HIDWORD(v191[1]) = v75 / v74;
    LOBYTE(v76.cx) = (v35 & 2) != 0 || !v125;
    v80 = 0;
    v166 = 0LL;
    if ( v128 || v153 || !v126 )
      goto LABEL_136;
    v81 = v125;
    if ( LOBYTE(v76.cx) )
      v81 = v130[6];
    if ( !v81 )
    {
LABEL_136:
      LODWORD(v191[4]) = 0;
    }
    else
    {
      v82 = (struct tagSIZE)ActiveSize;
      if ( LOBYTE(v76.cx) )
        v82 = (struct tagSIZE)v159;
      v80 = 1;
      v166 = v82;
      v83 = 16 * (unsigned __int8)DetermineViewDistance(a2, &v132, v170, &v166, (unsigned int *)&v191[4]);
      v84 = v35 & 0xFFFFFFEF;
      v35 = v35 & 0xFFFFFFEF | v83;
      *(_DWORD *)&v181[92] = v84 | v83;
      if ( !LODWORD(v191[4]) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2068;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"CurrentDpiInfo.ViewDistTenthsOfInch != 0",
          2068LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v85 = v127;
    v86 = 0;
    v133 = 0;
    v87 = 0;
    if ( !v127 || !(_DWORD)v135 )
    {
      if ( v122
        && (int)DpiReadPnpRegistryValue(*((_QWORD *)a2 + 27), L"PreferredScaleFactor", (char *)&v133, 4u, 2u) >= 0 )
      {
        v86 = v133;
        v88 = 4096;
      }
      else
      {
        v133 = 0;
        v88 = 0;
      }
      v35 = v88 | v35 & 0xFFFFEFFF;
      *(_DWORD *)&v181[92] = v35;
      if ( (v35 & 0x1000) == 0 )
      {
        PreferredScaleFactorForMonitor = DpiInternal::GetPreferredScaleFactorForMonitor(
                                           (DpiInternal *)a2,
                                           (void *const)v123,
                                           (v35 >> 5) & 1,
                                           (int)&v133,
                                           (unsigned int *)v120);
        v86 = v133;
        v90 = v35 & 0xFFFFF7FF;
        v35 = v35 & 0xFFFFF7FF | (PreferredScaleFactorForMonitor << 11);
        *(_DWORD *)&v181[92] = v90 | (PreferredScaleFactorForMonitor << 11);
      }
      v85 = v127;
      if ( v86 )
        v87 = 1;
    }
    if ( v128 && v122 && !v86 )
    {
      DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        *(DpiInternal **)&v191[2],
        v76,
        (__int64)v185,
        (const struct _DPI_SCALE_FACTOR_COLLECTION *)v191);
      LODWORD(v120) = 0;
      DpiInternal::FillOverridesAndAdjustedScaleFactor(
        (DpiInternal *)(unsigned int)v135,
        0,
        (int *)v185,
        (const struct _DPI_SCALE_FACTOR_COLLECTION *)v191,
        (struct _DPI_INFORMATION *)v120);
      v35 |= 0x400u;
      *(_DWORD *)&v181[92] = v35;
    }
    else
    {
      if ( v87 && v80 && DWORD1(v191[2]) != v166.cy && DWORD1(v191[2]) && v166.cy )
      {
        v86 = DWORD1(v191[2]) * v86 / v166.cy;
        v133 = v86;
      }
      LODWORD(v120) = (_DWORD)v135;
      FillDpiInfo(
        (const struct tagSIZE *)&v191[1] + 1,
        (struct tagSIZE *)&v191[2],
        v185,
        (DpiInternal *)LODWORD(v191[4]),
        (DpiInternal *)v120,
        v86,
        v85,
        (struct _DPI_INFORMATION *)v191);
    }
    if ( HIDWORD(v191[5]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2130;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"CurrentDpiInfo.FlagsUnion.AllFlags == 0",
        2130LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    HIDWORD(v191[5]) = v35;
    if ( v122
      || (v35 & 4) == 0
      && (DpiInternal::AvgXY(*((DpiInternal **)&v191[3] + 1), v91),
          v93 = DpiInternal::AvgXY(*(DpiInternal **)&v181[56], v92),
          v93 <= v94) )
    {
      *(_OWORD *)v181 = v191[0];
      v182 = (__m128i)v191[1];
      *(_OWORD *)&v181[16] = v191[1];
      *(_OWORD *)&v181[32] = v191[2];
      *(_OWORD *)&v181[64] = v191[4];
      v180 = (__m128i)v191[5];
      *(_OWORD *)&v181[80] = v191[5];
      v35 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v191[5], 12));
      *(_OWORD *)&v181[48] = v191[3];
    }
    else
    {
      v180 = *(__m128i *)&v181[80];
    }
    memset(v192, 0, sizeof(v192));
    v95 = v123;
    v100 = WdLogNewEntry5_WdTrace(v97, v96, v98, v99);
    *(_QWORD *)(v100 + 24) = v95;
    *(_QWORD *)(v100 + 32) = a2;
    WdLogGlobalForLineNumber = 5189;
    if ( (_DWORD)v95 == -1 )
    {
      v101 = -1073741811;
      goto LABEL_173;
    }
    MONITOR_MGR::AcquireMonitorShared(v187, (__int64)a2, v95, 1u);
    if ( !v187[0] )
    {
      v101 = -1073741632;
      WdLogSingleEntry1(2LL, -1073741632LL);
      WdLogGlobalForLineNumber = 5202;
      CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v187);
LABEL_173:
      WdLogSingleEntry3(2LL, a2, v123, v101);
      WdLogGlobalForLineNumber = 2155;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"MonitorGetMonitorDeviceInterfaceName failed for adapter: 0x%I64x, target: 0x%I64x, with status: 0x%I64x",
        (__int64)a2,
        v123,
        v101,
        0LL,
        0LL);
      v192[0] = 0;
      goto LABEL_174;
    }
    v101 = RtlStringCchCopyUnicodeString(
             (char *)v192,
             128LL,
             (const struct _UNICODE_STRING *)(*(_QWORD *)(v187[0] + 200LL) + 48LL));
    if ( v101 >= 0 )
      v192[1] = 92;
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v187);
    if ( v101 < 0 )
      goto LABEL_173;
    ScaleOverrideTestHook((DpiInternal *)v192, (const unsigned __int16 *)&v154, v102);
LABEL_174:
    LODWORD(v9) = v164;
    TraceLogDpiInfo((struct _DPI_INFORMATION *)v191, v192, (const struct _LUID *)(a2 + 412), v164, v86);
    LogScaleFactor(*(struct _LUID *)(a2 + 412), v9, (unsigned int)v135, (struct _DPI_INFORMATION *)v191);
    if ( v171 )
      v173(v174, v147);
    v36 = v168 + 1;
    v168 = v36;
    if ( v36 >= v167 )
    {
      v31 = v154;
      v103 = v180;
      v20 = v162;
      v104 = v182;
      goto LABEL_189;
    }
  }
  v106 = v168;
  WdLogSingleEntry3(2LL, v168, (unsigned int)v9, v37);
  WdLogGlobalForLineNumber = 1753;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to enumerate target of %I64d'th path originating from source 0x%I64x (status = 0x%I64x)",
    v106,
    (unsigned int)v9,
    v24,
    0LL,
    0LL);
  v105 = v148 == 0;
LABEL_186:
  if ( v105 )
    return (unsigned int)v24;
  v25 = v162;
LABEL_18:
  v150(v151, v25);
  return (unsigned int)v24;
}
