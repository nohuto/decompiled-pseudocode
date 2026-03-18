/*
 * XREFs of ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1403639F0
 * Callers:
 *     _BmlGetPathModeListForAdapter @ 0x140269ADC (_BmlGetPathModeListForAdapter.c)
 *     _BmlGetPathModalityForAdapter @ 0x1403635A4 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14000BD78 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14000BDB4 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x140039990 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x140039BD4 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x140039C9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040288 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140055198 (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?GetDisplayOnlyDriverUseSmallestMode@ADAPTER_DISPLAY@@QEBAHXZ @ 0x140058ED0 (-GetDisplayOnlyDriverUseSmallestMode@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?DivideAndRound@@YA_K_K0@Z @ 0x140063A38 (-DivideAndRound@@YA_K_K0@Z.c)
 *     Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage @ 0x140064840 (Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14006799C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x14006F480 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@0@Z @ 0x140090C98 (-D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@0@Z.c)
 *     ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x140090CC0 (-GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1402DCF3C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlGetNextBestSourceMode @ 0x1402DDD64 (BmlGetNextBestSourceMode.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1402DE95C (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     BmlFillPreferredMonitorMode @ 0x1402E0138 (BmlFillPreferredMonitorMode.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402E06D8 (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402E09E0 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ @ 0x1403146CC (-IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x140315FE0 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1403168E0 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x140319BE4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x14035F81C (-MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4Mo.c)
 *     BmlGetNextBestTargetMode @ 0x14038BDB4 (BmlGetNextBestTargetMode.c)
 *     ?MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x1403AF234 (-MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapable.c)
 *     ?MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x1403C291C (-MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z.c)
 *     ?MonitorIsWcgEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x1403C5174 (-MonitorIsWcgEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z.c)
 *     BmlIsSecondaryHardwareClonePath @ 0x1403C90E8 (BmlIsSecondaryHardwareClonePath.c)
 *     ?GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ @ 0x1403D5698 (-GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ.c)
 *     ?MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z @ 0x1403D8C40 (-MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z.c)
 *     ?BmlGetRecommendedRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@QEBUBML_VIDPN_PATH_ORDER@@IE@Z @ 0x1403ECD6C (-BmlGetRecommendedRotation@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@QEBUBML_VIDPN_PATH_ORDER.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1403EDFA0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

__int64 __fastcall BmlPreparePathOrderAndVidPn(
        const struct BML_VIDPN_PATH_ORDER **a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        __int16 a5,
        int a6,
        int a7)
{
  __int64 v9; // rbx
  __int16 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 result; // rax
  VIDPN_MGR *v14; // rdi
  ADAPTER_DISPLAY *v15; // r15
  void *v16; // rdi
  __int64 v17; // rax
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  unsigned int PreferredHdrPixelFormat; // eax
  unsigned int v21; // r10d
  const struct BML_VIDPN_PATH_ORDER *v22; // rcx
  unsigned int v23; // r13d
  int v24; // eax
  __int64 v25; // r15
  const struct BML_VIDPN_PATH_ORDER *v26; // rbx
  __int64 v27; // rdi
  __int16 v28; // ax
  bool v29; // zf
  struct SESSION_VIEW *SessionViewOwner; // rax
  unsigned int v31; // r12d
  DMMVIDPNTOPOLOGY *v32; // rcx
  const struct BML_VIDPN_PATH_ORDER *v33; // rsi
  struct DMMVIDPNTOPOLOGY *v34; // r12
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // r15d
  __int64 v38; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v39; // edx
  const struct BML_VIDPN_PATH_ORDER *v40; // rdi
  __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rsi
  unsigned int v48; // r12d
  __int64 v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r13
  _QWORD *v56; // rax
  __int64 v57; // rax
  struct DMMVIDPNTARGETMODESET *v58; // rax
  __int64 v59; // rcx
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  bool v65; // r13
  __int64 v66; // rbx
  int v67; // edx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // eax
  _QWORD *v69; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v70; // eax
  _DWORD *v71; // rbx
  __int64 v72; // rbx
  int v73; // eax
  int v74; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION RecommendedRotation; // eax
  const struct BML_VIDPN_PATH_ORDER *v76; // r15
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v77; // ecx
  char IsSecondaryHardwareClonePath; // al
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // r10
  int v82; // eax
  unsigned int v83; // edx
  bool v84; // al
  __int64 v85; // r8
  __int64 v86; // rdx
  int v87; // ebx
  __int64 v88; // rdx
  bool v89; // r12
  bool v90; // r15
  struct HDXGMONITOR__ *v91; // r13
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v93; // r12
  int IsHdrEnabled; // eax
  DMMVIDPNPRESENTPATH *v95; // r12
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  int IsMonitorAndDriverWCGCapable; // eax
  int IsWcgEnabled; // eax
  void *v103; // r8
  __int64 v104; // r9
  char v105; // cl
  ADAPTER_DISPLAY **v106; // rax
  unsigned int v107; // r15d
  ADAPTER_DISPLAY *v108; // rbx
  char v109; // al
  const struct BML_VIDPN_PATH_ORDER *v110; // rdx
  unsigned int v111; // edi
  unsigned int v112; // r12d
  unsigned int v113; // r8d
  __int64 v114; // r9
  DMMVIDPNPRESENTPATH *v115; // rbx
  unsigned int v116; // r13d
  unsigned int v117; // eax
  _QWORD *v118; // rax
  __int64 v119; // rdx
  const struct BML_VIDPN_PATH_ORDER *v120; // rax
  unsigned int v121; // r12d
  __int64 v122; // r15
  struct DMMVIDPNTARGETMODESET *v123; // rax
  __int64 v124; // rcx
  struct DMMVIDPNSOURCEMODESET *v125; // rdi
  __int64 v126; // rax
  const struct BML_VIDPN_PATH_ORDER *v127; // rcx
  __int64 v128; // rdx
  int v129; // eax
  __int64 v130; // r13
  DMMVIDPNPRESENTPATH *v131; // r13
  struct DMMVIDPNTARGETMODESET *v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  struct DMMVIDPNTARGETMODESET *v135; // rbx
  const struct BML_VIDPN_PATH_ORDER *v136; // rcx
  int v137; // eax
  __int64 v138; // rdi
  __int64 v139; // rcx
  __int16 v140; // ax
  const struct BML_VIDPN_PATH_ORDER *v141; // r8
  unsigned int i; // r9d
  __int64 v143; // r10
  unsigned int v144; // eax
  __int64 v145; // r11
  __int64 v146; // r10
  unsigned int v147; // eax
  __int64 v148; // r11
  __int64 v149; // r10
  bool v150; // [rsp+50h] [rbp-81h] BYREF
  bool v151; // [rsp+51h] [rbp-80h] BYREF
  bool v152; // [rsp+52h] [rbp-7Fh] BYREF
  void *v153; // [rsp+58h] [rbp-79h]
  unsigned int v154; // [rsp+60h] [rbp-71h]
  unsigned int v155; // [rsp+64h] [rbp-6Dh]
  DMMVIDPNPRESENTPATH *v156; // [rsp+68h] [rbp-69h]
  int v157; // [rsp+70h] [rbp-61h] BYREF
  unsigned int v158; // [rsp+74h] [rbp-5Dh] BYREF
  VIDPN_MGR *v159; // [rsp+78h] [rbp-59h]
  ADAPTER_DISPLAY *v160; // [rsp+80h] [rbp-51h]
  unsigned int v161; // [rsp+88h] [rbp-49h] BYREF
  unsigned int v162; // [rsp+8Ch] [rbp-45h]
  unsigned int v163; // [rsp+90h] [rbp-41h] BYREF
  int v164; // [rsp+94h] [rbp-3Dh] BYREF
  DMMVIDPNTOPOLOGY *v165; // [rsp+98h] [rbp-39h]
  struct DMMVIDPNTARGETMODESET *v166; // [rsp+A0h] [rbp-31h] BYREF
  struct HDXGMONITOR__ *v167; // [rsp+A8h] [rbp-29h] BYREF
  struct DMMVIDPNTARGETMODESET *v168; // [rsp+B0h] [rbp-21h] BYREF
  __int64 v169; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v170[10]; // [rsp+C0h] [rbp-11h] BYREF
  unsigned __int8 v171; // [rsp+120h] [rbp+4Fh]
  struct DMMVIDPNPRESENTPATH *v172; // [rsp+120h] [rbp+4Fh]
  bool v174; // [rsp+130h] [rbp+5Fh] BYREF
  __int16 v175; // [rsp+138h] [rbp+67h]

  v175 = a4;
  v9 = a2;
  v10 = a4;
  v11 = operator new[](120LL * *(unsigned __int16 *)(a3 + 20) + 16, 0x63644356u, 256LL);
  *a1 = (const struct BML_VIDPN_PATH_ORDER *)v11;
  v12 = v11;
  if ( !v11 )
  {
    WdLogSingleEntry2(6LL, a3, *(unsigned __int16 *)(a3 + 20));
    result = 3221225626LL;
    WdLogGlobalForLineNumber = 4258;
    return result;
  }
  v14 = *(VIDPN_MGR **)(v9 + 48);
  v159 = v14;
  if ( !*((_QWORD *)v14 + 1) )
  {
    WdLogSingleEntry0(1LL);
    v12 = (__int64)*a1;
    WdLogGlobalForLineNumber = 68;
  }
  v15 = (ADAPTER_DISPLAY *)*((_QWORD *)v14 + 1);
  v160 = v15;
  v16 = (void *)*((_QWORD *)v15 + 2);
  v153 = v16;
  v17 = *((_QWORD *)v16 + 390);
  if ( *(_BYTE *)(v17 + 289) && *(_BYTE *)(v17 + 290)
    || (v171 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 27) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
  {
    v171 = 1;
  }
  if ( *((_QWORD *)v16 + 391) )
  {
    *(_DWORD *)(v12 + 8) &= ~1u;
    *((_DWORD *)*a1 + 2) &= ~4u;
    *((_DWORD *)*a1 + 2) &= ~8u;
  }
  else
  {
    *((_DWORD *)*a1 + 2) ^= ((unsigned __int8)ADAPTER_DISPLAY::GetDisplayOnlyDriverUseSmallestMode(v15) ^ (unsigned __int8)*((_DWORD *)*a1 + 2)) & 1;
    *((_DWORD *)*a1 + 2) = *((_DWORD *)*a1 + 2) & 0xFFFFFFFB | ((unsigned int)ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(v15) != 0
                                                              ? 4
                                                              : 0);
    *((_DWORD *)*a1 + 2) = *((_DWORD *)*a1 + 2) & 0xFFFFFFF7 | ((unsigned int)ADAPTER_DISPLAY::GetDisplayOnlyDriverIgnoreMonitorFreqCheck(v15) != 0
                                                              ? 8
                                                              : 0);
  }
  v18 = ADAPTER_DISPLAY::ForceIHVScaling(v15);
  *(_DWORD *)(v19 + 8) = *(_DWORD *)(v19 + 8) & 0xFFFFFFFD | (v18 != 0 ? 2 : 0);
  PreferredHdrPixelFormat = ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(v15);
  v22 = *a1;
  v23 = v21;
  v154 = PreferredHdrPixelFormat;
  v24 = a7;
  *((_DWORD *)v22 + 2) &= 0xFu;
  *(_BYTE *)*a1 = v21;
  *((_DWORD *)*a1 + 1) = v24;
  if ( (unsigned __int16)v21 < *(_WORD *)(a3 + 20) )
  {
    do
    {
      v25 = a3 + 296LL * v23 + 56;
      if ( (*(_QWORD *)v25 & 0x4000000000000LL) == 0 )
      {
        WdLogSingleEntry0(1LL);
        v21 = 0;
        WdLogGlobalForLineNumber = 4309;
      }
      if ( *(_DWORD *)(v25 + 16) == *((_DWORD *)v16 + 103) && *(_DWORD *)(v25 + 20) == *((_DWORD *)v16 + 104) )
      {
        if ( (*(_QWORD *)v25 & 0x700000000000LL) != 0x700000000000LL )
        {
          WdLogSingleEntry2(2LL, v23, a3);
          result = 3221225485LL;
          WdLogGlobalForLineNumber = 4321;
          return result;
        }
        v26 = *a1;
        v27 = 120LL * *(unsigned __int8 *)*a1;
        v28 = a5;
        *(_QWORD *)((char *)v26 + v27 + 52) = 0LL;
        *(_WORD *)((char *)v26 + v27 + 70) = v28;
        v29 = a6 == 2;
        *(_QWORD *)((char *)v26 + v27 + 16) = v25;
        *(_WORD *)((char *)v26 + v27 + 32) = v23;
        *(_WORD *)((char *)v26 + v27 + 64) = v21;
        *(_WORD *)((char *)v26 + v27 + 68) = v21;
        *(_WORD *)((char *)v26 + v27 + 66) = v10;
        *(_DWORD *)((char *)v26 + v27 + 60) = v21;
        *(_DWORD *)((char *)v26 + v27 + 124) = v21;
        *(_OWORD *)((char *)v26 + v27 + 72) = 0LL;
        *(_OWORD *)((char *)v26 + v27 + 88) = 0LL;
        *(_DWORD *)((char *)v26 + v27 + 104) = 0;
        if ( v29 )
        {
          SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v160, *(_DWORD *)(v25 + 24));
          v21 = 0;
          if ( SessionViewOwner && *((_DWORD *)SessionViewOwner + 10) > 1u )
            *((_BYTE *)v26 + v27 + 132) |= 1u;
        }
        else
        {
          v31 = v21;
          if ( (unsigned __int16)v21 < *(_WORD *)(a3 + 20) )
          {
            do
            {
              v32 = (DMMVIDPNTOPOLOGY *)(296LL * v31);
              v165 = v32;
              if ( (*(_QWORD *)((_BYTE *)v32 + a3 + 56) & 0x4000000000000LL) == 0 )
              {
                WdLogSingleEntry0(1LL);
                v32 = v165;
                WdLogGlobalForLineNumber = 4364;
              }
              if ( v31 != v23 && *(_DWORD *)((char *)v32 + a3 + 240) == *(_DWORD *)(v25 + 184) )
                *((_BYTE *)v26 + v27 + 132) |= 1u;
              ++v31;
            }
            while ( v31 < *(unsigned __int16 *)(a3 + 20) );
            v21 = 0;
          }
          v10 = v175;
        }
        v16 = v153;
        ++*(_BYTE *)*a1;
      }
      ++v23;
    }
    while ( v23 < *(unsigned __int16 *)(a3 + 20) );
    v9 = a2;
  }
  v33 = *a1;
  v34 = (struct DMMVIDPNTOPOLOGY *)(v9 + 96);
  v165 = (DMMVIDPNTOPOLOGY *)(v9 + 96);
  v35 = v21;
  LOBYTE(v36) = *(_BYTE *)v33;
  if ( *(_BYTE *)v33 )
  {
    do
    {
      v37 = v35 + 1;
      v38 = v35;
      v39 = v35 + 1;
      if ( (int)(v35 + 1) > 32 )
      {
        WdLogSingleEntry2(1LL, v33, v35);
        v39 = 32;
        WdLogGlobalForLineNumber = 4450;
      }
      v40 = *a1;
      v41 = 120 * v38;
      v42 = VIDPN_MGR::AddPathToVidPnTopology(
              v159,
              v34,
              *(_DWORD *)(*(_QWORD *)((char *)*a1 + v41 + 16) + 24LL),
              *(_DWORD *)(*(_QWORD *)((char *)*a1 + v41 + 16) + 28LL),
              v39,
              *(_WORD *)((char *)*a1 + v41 + 32),
              1u,
              D3DKMDT_MCC_ENFORCE);
      v21 = 0;
      v47 = v42;
      if ( v42 < 0 )
      {
        v69 = (_QWORD *)WdLogNewEntry5_WdTrace(v44, v43, v45, v46);
        v69[3] = *(unsigned int *)(*(_QWORD *)((char *)v40 + v41 + 16) + 24LL);
        v69[4] = *(unsigned int *)(*(_QWORD *)((char *)v40 + v41 + 16) + 28LL);
        v69[5] = v34;
        v69[6] = v47;
        result = (unsigned int)v47;
        WdLogGlobalForLineNumber = 4470;
        return result;
      }
      v33 = *a1;
      v35 = v37;
      v36 = *(unsigned __int8 *)*a1;
    }
    while ( v37 < v36 );
  }
  v155 = v21;
  v48 = v21;
  if ( !(_BYTE)v36 )
    goto LABEL_126;
  do
  {
    v49 = 120LL * v48;
    if ( !_bittest64(*(const signed __int64 **)((char *)v33 + v49 + 16), 0x32u) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4487;
    }
    v50 = *(_QWORD *)((char *)v33 + v49 + 16);
    Path = DMMVIDPNTOPOLOGY::FindPath(v165, *(_DWORD *)(v50 + 24), *(_DWORD *)(v50 + 28));
    v156 = Path;
    if ( *(_BYTE *)(v50 + 129) )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdTrace(v52, v51, v53, v54);
      v56[3] = *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 24LL);
      v56[4] = *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 28LL);
      v56[5] = *(int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 20LL);
      v56[6] = *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 16LL);
      v57 = *(_QWORD *)((char *)v33 + v49 + 16);
      WdLogGlobalForLineNumber = 4499;
      if ( (*(_QWORD *)v57 & 0x20000LL) == 0
        && (((unsigned __int8)~BYTE1(*(_QWORD *)v57) ^ (unsigned __int8)~(*(_DWORD *)(v57 + 8) >> 8)) & 1) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4512;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"((pPathInfo->pPathModality->FixedFlags & D3DKMT_PATHMODALITY_DESCRIPTOR_SMI_FIXED) == 0) == ((pPathInfo->pPath"
           "Modality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_SMI_VALID) == 0)",
          4512LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v58 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
    v59 = (__int64)*a1;
    v168 = v58;
    v60 = BmlFillPreferredMonitorMode(v59, v48, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
    v65 = 0;
    v66 = v60;
    if ( v60 < 0 )
    {
      v118 = (_QWORD *)WdLogNewEntry5_WdTrace(v62, v61, v63, v64);
      v118[3] = *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 24LL);
      v119 = *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 28LL);
      v118[5] = v165;
      v118[4] = v119;
      v118[6] = v66;
      v120 = *a1;
      WdLogGlobalForLineNumber = 4540;
      *(_DWORD *)((char *)v120 + v49 + 52) = 0;
      *(_DWORD *)((char *)*a1 + v49 + 56) = 0;
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v168, 0LL);
      return (unsigned int)v66;
    }
    if ( !_bittest64(*(const signed __int64 **)((char *)v33 + v49 + 16), 0x2Au) )
      goto LABEL_62;
    v67 = *(_DWORD *)(*(_QWORD *)((char *)v33 + v49 + 16) + 136LL);
    if ( v67 == 1 || v67 == 2 || v67 == 3 || v67 == 4 || v67 == 5 )
    {
      *(_DWORD *)((char *)v33 + v49 + 24) = v67;
      goto LABEL_64;
    }
    if ( v67 == 253 )
      goto LABEL_62;
    if ( v67 != 255 )
    {
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v159);
      *(_DWORD *)((char *)v33 + v49 + 24) = AdapterDefaultScaling;
      WdLogSingleEntry4(3LL, AdapterDefaultScaling, *a1, v48, *(int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 136LL));
      WdLogGlobalForLineNumber = 4585;
      goto LABEL_64;
    }
    if ( *(int *)(*((_QWORD *)v160 + 2) + 3004LL) >= 1105 )
LABEL_62:
      v70 = VIDPN_MGR::GetAdapterDefaultScaling(v159);
    else
      v70 = D3DKMDT_VPPS_NOTSPECIFIED;
    *(_DWORD *)((char *)v33 + v49 + 24) = v70;
LABEL_64:
    Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage();
    v71 = *(_DWORD **)((char *)v33 + v49 + 16);
    if ( (*v71 & 0x200LL) == 0 )
    {
      RecommendedRotation = BmlGetRecommendedRotation(*a1, v48, v171);
      goto LABEL_83;
    }
    v72 = (int)v71[33];
    v73 = D3DKMDT_VPPR_GET_CONTENT_ROTATION((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v72) - 1;
    if ( v73 )
    {
      v74 = v73 - 1;
      if ( v74 )
      {
        if ( (unsigned int)(v74 - 1) >= 2 )
        {
          WdLogSingleEntry3(3LL, *a1, v48, v72);
          WdLogGlobalForLineNumber = 4742;
          goto LABEL_69;
        }
      }
    }
    if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v72) == 1 )
    {
      v161 = 0;
      if ( v171 )
      {
        v76 = *a1;
        if ( (unsigned __int8)BmlIsSecondaryHardwareClonePath(*a1, v48, &v161) )
        {
          v77 = *(_DWORD *)(*((_QWORD *)v76 + 15 * v161 + 2) + 132LL);
          if ( (unsigned int)(v77 - 1) > 0xF || (unsigned int)(v72 - 1) > 0xF )
            LODWORD(v72) = 255;
          else
            LODWORD(v72) = D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET(
                             v77,
                             (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)(((int)v72 - v77 + 4) % 4 + 1));
        }
      }
      goto LABEL_77;
    }
    if ( !v171 )
    {
      WdLogSingleEntry3(3LL, *a1, v48, v72);
      WdLogGlobalForLineNumber = 4732;
LABEL_69:
      RecommendedRotation = D3DKMDT_VPPR_IDENTITY;
LABEL_83:
      *(_DWORD *)((char *)v33 + v49 + 28) = RecommendedRotation;
      LODWORD(v72) = RecommendedRotation;
      goto LABEL_84;
    }
    IsSecondaryHardwareClonePath = BmlIsSecondaryHardwareClonePath(*a1, v48, 0LL);
    v79 = *(_QWORD *)((char *)v33 + v49 + 16);
    LODWORD(v72) = *(_DWORD *)(v79 + 132);
    if ( !IsSecondaryHardwareClonePath )
    {
      WdLogSingleEntry3(1LL, *a1, v48, *(int *)(v79 + 132));
      v80 = *(_QWORD *)((char *)v33 + v49 + 16);
      WdLogGlobalForLineNumber = 4721;
      RecommendedRotation = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*(_DWORD *)(v80 + 132));
      goto LABEL_83;
    }
LABEL_77:
    *(_DWORD *)((char *)v33 + v49 + 28) = v72;
LABEL_84:
    v81 = *(_QWORD *)((char *)v33 + v49 + 16);
    if ( *(_BYTE *)(v81 + 129) && (*(_DWORD *)v81 & 0x20000) != 0 )
    {
      if ( (((unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v72) - 2) & 0xFFFFFFFD) != 0 )
      {
        *(_DWORD *)((char *)v33 + v49 + 108) = *(_DWORD *)(v81 + 152);
        v82 = *(_DWORD *)(v81 + 156);
      }
      else
      {
        *(_DWORD *)((char *)v33 + v49 + 108) = *(_DWORD *)(v81 + 156);
        v82 = *(_DWORD *)(v81 + 152);
      }
      *(_DWORD *)((char *)v33 + v49 + 112) = v82;
      *((_BYTE *)v33 + v49 + 124) |= 1u;
    }
    v83 = *(_DWORD *)(v81 + 28);
    v151 = 0;
    if ( (int)MonitorIsBoostRefreshRateEnabledByDefault(v153, v83, &v151) >= 0 )
    {
      v84 = v151;
    }
    else
    {
      WdLogSingleEntry3(
        2LL,
        *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 28LL),
        *(int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 20LL),
        *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 16LL));
      v84 = 0;
      WdLogGlobalForLineNumber = 4781;
      v151 = 0;
    }
    *(_DWORD *)((char *)v33 + v49 + 128) = v84 | *(_DWORD *)((_BYTE *)v33 + v49 + 128) & 0xFFFFFFFE;
    if ( (unsigned __int8)BmlIsSecondaryHardwareClonePath(*a1, v48, 0LL) )
      *(_WORD *)((char *)v33 + v49 + 66) = 0;
    v86 = *(_QWORD *)((char *)v33 + v49 + 16);
    v167 = 0LL;
    v87 = 0;
    v157 = 0;
    v88 = *(unsigned int *)(v86 + 28);
    LOBYTE(v85) = 1;
    v89 = 0;
    v150 = 0;
    v90 = 0;
    v174 = 0;
    v152 = 0;
    if ( (int)MonitorGetMonitorHandle(v153, v88, v85, BmlPreparePathOrderAndVidPn, &v167) >= 0 )
    {
      v91 = v167;
      IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(
                                     v167,
                                     (union MONITOR_AND_LINK_HDR_CAPS *)&v157,
                                     0LL);
      v90 = 0;
      if ( IsMonitorAndLinkHDRCapable >= 0 )
      {
        v87 = v157;
        v93 = a2;
      }
      else
      {
        v157 = 0;
        v93 = a2;
        WdLogSingleEntry3(
          2LL,
          *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 28LL),
          a2,
          IsMonitorAndLinkHDRCapable);
        WdLogGlobalForLineNumber = 4827;
      }
      IsHdrEnabled = MonitorIsHdrEnabled(v91, &v174);
      if ( IsHdrEnabled >= 0 )
      {
        v90 = v174;
      }
      else
      {
        v174 = 0;
        WdLogSingleEntry3(2LL, *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 28LL), v93, IsHdrEnabled);
        WdLogGlobalForLineNumber = 4841;
      }
      if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v90 )
        {
          v95 = v156;
          if ( !DMMVIDPNPRESENTPATH::IsHdrAllowedOnVidPnPath(v156) )
          {
            v100 = WdLogNewEntry5_WdTrace(v97, v96, v98, v99);
            *(_QWORD *)(v100 + 24) = *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 28LL);
            *(_QWORD *)(v100 + 32) = v95;
            v90 = 0;
            v174 = 0;
            WdLogGlobalForLineNumber = 4854;
          }
        }
      }
      IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(v91, &v150, 0LL);
      if ( IsMonitorAndDriverWCGCapable >= 0 )
      {
        v89 = v150;
      }
      else
      {
        v89 = 0;
        v150 = 0;
        WdLogSingleEntry3(
          2LL,
          *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 28LL),
          a2,
          IsMonitorAndDriverWCGCapable);
        WdLogGlobalForLineNumber = 4870;
      }
      IsWcgEnabled = MonitorIsWcgEnabled(v91, &v152);
      if ( IsWcgEnabled < 0 )
      {
        v89 = 0;
        v150 = 0;
        WdLogSingleEntry3(2LL, *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 28LL), a2, IsWcgEnabled);
        WdLogGlobalForLineNumber = 4880;
      }
      MonitorReleaseMonitorHandle(v153, v91, v103, v104);
      v65 = v152;
    }
    *(_DWORD *)((char *)v33 + v49 + 116) = v87;
    v105 = *((_BYTE *)v33 + v49 + 132) & 0xF1 | (2 * (v90 | (2 * (v65 | (2 * v89)))));
    *(_DWORD *)((char *)v33 + v49 + 120) = 0;
    v106 = (ADAPTER_DISPLAY **)v153;
    *((_BYTE *)v33 + v49 + 132) = v105;
    if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                          v106[390],
                          *(_DWORD *)(*(_QWORD *)((char *)v33 + v49 + 16) + 24LL)) == 1
       || !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                           *((ADAPTER_DISPLAY **)v153 + 390),
                           *(_DWORD *)(*(_QWORD *)((char *)v33 + v49 + 16) + 24LL)))
      && (*((_BYTE *)v33 + v49 + 132) & 1) == 0 )
    {
      if ( v90 && (v87 & 1) != 0 )
      {
        *(_DWORD *)((char *)v33 + v49 + 120) = v154;
      }
      else if ( v65 && v89 && v154 == 2 )
      {
        *(_DWORD *)((char *)v33 + v49 + 120) = 3;
      }
    }
    if ( (a7 & 0x20000000) != 0 )
      *(_DWORD *)((char *)v33 + v49 + 120) = 0;
    *((_BYTE *)v33 + v49 + 132) = *((_BYTE *)v33 + v49 + 132) & 0xEF | (*(_DWORD *)((char *)v33 + v49 + 120) != 0
                                                                      ? 0x10
                                                                      : 0);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v168, 0LL);
    v33 = *a1;
    v48 = v155 + 1;
    v155 = v48;
    v36 = *(unsigned __int8 *)v33;
  }
  while ( v48 < v36 );
  v21 = 0;
LABEL_126:
  v162 = v21;
  v107 = v21;
  if ( (_BYTE)v36 )
  {
    do
    {
      v108 = (ADAPTER_DISPLAY *)(120LL * v107);
      v160 = v108;
      v109 = BmlIsSecondaryHardwareClonePath(v33, v107, 0LL);
      v21 = 0;
      if ( !v109 )
      {
        v110 = *a1;
        v111 = 0;
        v153 = 0LL;
        v112 = 0;
        v113 = v107;
        v154 = v107;
        if ( v107 < *(unsigned __int8 *)v110 )
        {
          do
          {
            v114 = 120LL * v113;
            if ( *(_DWORD *)(*(_QWORD *)((char *)v110 + v114 + 16) + 24LL) == *(_DWORD *)(*(_QWORD *)((char *)v33 + (_QWORD)v108 + 16)
                                                                                        + 24LL) )
            {
              v115 = *(DMMVIDPNPRESENTPATH **)((char *)v110 + v114 + 44);
              v156 = v115;
              if ( !v171
                || (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)((char *)v110 + v114 + 28)) - 2) & 0xFFFFFFFD) != 0 )
              {
                v116 = HIDWORD(v156);
                v117 = (unsigned int)v156;
              }
              else
              {
                v116 = (unsigned int)v156;
                v117 = HIDWORD(v156);
                v156 = (DMMVIDPNPRESENTPATH *)__PAIR64__((unsigned int)v156, HIDWORD(v156));
                v115 = v156;
              }
              v155 = v117;
              if ( !v117 || !v116 )
              {
                WdLogSingleEntry0(1LL);
                v117 = v155;
                v113 = v154;
                WdLogGlobalForLineNumber = 4960;
              }
              if ( v111 && v112 )
              {
                v108 = v160;
                if ( v111 > v117 )
                  v111 = v117;
                LODWORD(v153) = v111;
                if ( v112 > v116 )
                {
                  v112 = v116;
                  HIDWORD(v153) = v116;
                }
              }
              else
              {
                v153 = v115;
                v111 = (unsigned int)v115;
                v112 = HIDWORD(v115);
                v108 = v160;
              }
            }
            v110 = *a1;
            v154 = ++v113;
          }
          while ( v113 < *(unsigned __int8 *)v110 );
          v107 = v162;
        }
        *(_QWORD *)((char *)v33 + (_QWORD)v108 + 36) = v153;
        *(_DWORD *)((char *)v33 + (_QWORD)v108 + 60) = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)((char *)v108 + (_QWORD)v33 + 52));
        v21 = 0;
      }
      v33 = *a1;
      v162 = ++v107;
      v36 = *(unsigned __int8 *)v33;
    }
    while ( v107 < v36 );
  }
  v121 = v21;
  if ( !(_BYTE)v36 )
    return 0LL;
  while ( 2 )
  {
    v122 = 120LL * v121;
    v172 = DMMVIDPNTOPOLOGY::FindPath(
             v165,
             *(_DWORD *)(*(_QWORD *)((char *)v33 + v122 + 16) + 24LL),
             *(_DWORD *)(*(_QWORD *)((char *)v33 + v122 + 16) + 28LL));
    v123 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v172 + 11));
    v124 = *(_QWORD *)((char *)v33 + v122 + 16);
    v125 = v123;
    v170[0] = (__int64)v123;
    v126 = *(_QWORD *)(v124 + 8);
    if ( (v126 & 0x18001820B8FLL) == 0 )
      goto LABEL_168;
    if ( (*(_DWORD *)v124 & 0x100LL) == 0
      || (v126 & 0x100) == 0
      || (unsigned __int8)BmlIsSecondaryHardwareClonePath(*a1, v121, 0LL) )
    {
      WdLogSingleEntry2(3LL, *a1, v121);
      WdLogGlobalForLineNumber = 5158;
LABEL_168:
      v131 = v172;
LABEL_169:
      if ( DMMVIDPNPRESENTPATH::IsFunctional(v131) )
      {
        v141 = *a1;
        for ( i = 0; i < *(unsigned __int8 *)*a1; ++i )
        {
          v143 = 120LL * i;
          if ( *(_DWORD *)(*(_QWORD *)((char *)v141 + v143 + 16) + 24LL) == *(_DWORD *)(*(_QWORD *)((char *)v33
                                                                                                  + v122
                                                                                                  + 16)
                                                                                      + 24LL) )
            *(_WORD *)((char *)v141 + v143 + 66) = 0;
          v141 = *a1;
        }
        *(_WORD *)((char *)v33 + v122 + 70) = 0;
      }
LABEL_175:
      auto_rc<DMMVIDPNSOURCEMODESET>::reset(v170, 0LL);
      v33 = *a1;
      if ( ++v121 >= *(unsigned __int8 *)*a1 )
        return 0LL;
      continue;
    }
    break;
  }
  v127 = *a1;
  v158 = -1;
  if ( (int)BmlGetNextBestSourceMode((__int64)v127, a2, (unsigned __int16)v121, (__int64)v125, 0xFFFFFFFF, &v158) < 0 )
  {
    v128 = *(_QWORD *)((char *)v33 + v122 + 16);
    if ( !_bittest64((const signed __int64 *)v128, 0x36u) )
    {
      DxgkLogCodePointPacket(
        0x13u,
        *(_DWORD *)(v128 + 96),
        *(_DWORD *)(v128 + 100),
        *(_DWORD *)(v128 + 116),
        *(_QWORD *)(v128 + 16));
      WdLogSingleEntry4(3LL, *a1, a2, v121, v158);
      WdLogGlobalForLineNumber = 5048;
LABEL_180:
      LODWORD(v138) = -1071774970;
      goto LABEL_182;
    }
    *(_QWORD *)(v128 + 8) &= 0xFFFFFFFFFFFFFE78uLL;
    goto LABEL_175;
  }
  v129 = VIDPN_MGR::PinVidPnSourceMode(v159, v125, v158, 1);
  v130 = v129;
  if ( v129 >= 0 )
  {
    v131 = v172;
    *(_WORD *)((char *)v33 + v122 + 66) = 0;
    v132 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v172 + 12));
    v134 = *(_QWORD *)((char *)v33 + v122 + 16);
    v135 = v132;
    v166 = v132;
    if ( (*(_BYTE *)v134 & 0x87) != 0x87
      || (*(_BYTE *)(v134 + 8) & 0x87) != 0x87
      || *(_DWORD *)(v134 + 56) == (_DWORD)v133
      || *(_DWORD *)(v134 + 52) == (_DWORD)v133 )
    {
      v140 = -1;
    }
    else
    {
      v136 = *a1;
      v163 = -1;
      v169 = v133;
      v164 = 1;
      if ( (int)BmlGetNextBestTargetMode(v136, a2, (unsigned __int16)v121, v132, v125, -1, &v163, &v169, &v164) < 0 )
      {
        v147 = DivideAndRound(
                 *(unsigned int *)(*(_QWORD *)((char *)v33 + v122 + 16) + 52LL),
                 *(unsigned int *)(*(_QWORD *)((char *)v33 + v122 + 16) + 56LL));
        DxgkLogCodePointPacket(0x14u, *(_DWORD *)(v148 + 44), *(_DWORD *)(v148 + 48), v147, v149);
        WdLogSingleEntry3(3LL, *a1, a2, v121);
        WdLogGlobalForLineNumber = 5113;
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v166, 0LL);
        goto LABEL_180;
      }
      v137 = VIDPN_MGR::PinVidPnTargetMode(v159, v135, v163, 1);
      v138 = v137;
      if ( v137 < 0 )
      {
        v144 = DivideAndRound(
                 *(unsigned int *)(*(_QWORD *)((char *)v33 + v122 + 16) + 52LL),
                 *(unsigned int *)(*(_QWORD *)((char *)v33 + v122 + 16) + 56LL));
        DxgkLogCodePointPacket(0x16u, *(_DWORD *)(v145 + 44), *(_DWORD *)(v145 + 48), v144, v146);
        WdLogSingleEntry4(3LL, v138, *a1, a2, v121);
        WdLogGlobalForLineNumber = 5133;
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v166, 0LL);
        goto LABEL_182;
      }
      v139 = *((_QWORD *)v135 + 18);
      *(_QWORD *)(v139 + 152) = v169;
      *(_DWORD *)(v139 + 160) = v164;
      v140 = 0;
    }
    *(_WORD *)((char *)v33 + v122 + 70) = v140;
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v166, 0LL);
    goto LABEL_169;
  }
  DxgkLogCodePointPacket(
    0x15u,
    *(_DWORD *)(*(_QWORD *)((char *)v33 + v122 + 16) + 96LL),
    *(_DWORD *)(*(_QWORD *)((char *)v33 + v122 + 16) + 100LL),
    *(_DWORD *)(*(_QWORD *)((char *)v33 + v122 + 16) + 116LL),
    *(_QWORD *)(*(_QWORD *)((char *)v33 + v122 + 16) + 16LL));
  WdLogSingleEntry4(3LL, v130, *a1, a2, v121);
  WdLogGlobalForLineNumber = 5069;
  LODWORD(v138) = v130;
LABEL_182:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(v170, 0LL);
  return (unsigned int)v138;
}
