/*
 * XREFs of ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1402C4010
 * Callers:
 *     _BmlGetPathModeListForAdapter @ 0x140262BDC (_BmlGetPathModeListForAdapter.c)
 *     _BmlGetPathModalityForAdapter @ 0x1402C3BBC (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14001B358 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14001B394 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14003B3D0 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14003B614 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14003B6DC (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040898 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1400559E8 (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?GetDisplayOnlyDriverUseSmallestMode@ADAPTER_DISPLAY@@QEBAHXZ @ 0x140059410 (-GetDisplayOnlyDriverUseSmallestMode@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?DivideAndRound@@YA_K_K0@Z @ 0x140063148 (-DivideAndRound@@YA_K_K0@Z.c)
 *     Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage @ 0x140064C20 (Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x140067D78 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x14006EA44 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@0@Z @ 0x14008F888 (-D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@0@Z.c)
 *     ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x14008F8B0 (-GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x1402BF950 (-MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4Mo.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1402C66BC (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlGetNextBestSourceMode @ 0x1402C6C60 (BmlGetNextBestSourceMode.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1402C7A34 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     BmlIsSecondaryHardwareClonePath @ 0x1402C8128 (BmlIsSecondaryHardwareClonePath.c)
 *     BmlFillPreferredMonitorMode @ 0x1402C9BA0 (BmlFillPreferredMonitorMode.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402CA140 (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CA448 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402CFC04 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     BmlGetNextBestTargetMode @ 0x1402D37C8 (BmlGetNextBestTargetMode.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1402D60DC (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1402D6194 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ @ 0x1402D6414 (-IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ.c)
 *     ?MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x1403BB0BC (-MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapable.c)
 *     ?MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x1403D010C (-MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z.c)
 *     ?MonitorIsWcgEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x1403D15F4 (-MonitorIsWcgEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z.c)
 *     ?GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ @ 0x1403DC0C8 (-GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ.c)
 *     ?MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z @ 0x1403E10B0 (-MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z.c)
 *     ?BmlGetRecommendedRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@QEBUBML_VIDPN_PATH_ORDER@@IE@Z @ 0x1403F31EC (-BmlGetRecommendedRotation@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@QEBUBML_VIDPN_PATH_ORDER.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1403F40A0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

__int64 __fastcall BmlPreparePathOrderAndVidPn(
        const struct BML_VIDPN_PATH_ORDER **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
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
  const struct BML_VIDPN_PATH_ORDER *v59; // rcx
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
  __int64 v85; // rdx
  int v86; // ebx
  bool v87; // r12
  bool v88; // r15
  struct HDXGMONITOR__ *v89; // r13
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v91; // r12
  int IsHdrEnabled; // eax
  DMMVIDPNPRESENTPATH *v93; // r12
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rax
  int IsMonitorAndDriverWCGCapable; // eax
  int IsWcgEnabled; // eax
  void *v101; // r8
  char v102; // cl
  ADAPTER_DISPLAY **v103; // rax
  unsigned int v104; // r15d
  ADAPTER_DISPLAY *v105; // rbx
  char v106; // al
  const struct BML_VIDPN_PATH_ORDER *v107; // rdx
  unsigned int v108; // edi
  unsigned int v109; // r12d
  unsigned int v110; // r8d
  __int64 v111; // r9
  DMMVIDPNPRESENTPATH *v112; // rbx
  unsigned int v113; // r13d
  unsigned int v114; // eax
  _QWORD *v115; // rax
  __int64 v116; // rdx
  const struct BML_VIDPN_PATH_ORDER *v117; // rax
  unsigned int v118; // r12d
  __int64 v119; // r15
  struct DMMVIDPNTARGETMODESET *v120; // rax
  __int64 v121; // rcx
  struct DMMVIDPNSOURCEMODESET *v122; // rdi
  __int64 v123; // rax
  const struct BML_VIDPN_PATH_ORDER *v124; // rcx
  __int64 v125; // rdx
  int v126; // eax
  __int64 v127; // r13
  DMMVIDPNPRESENTPATH *v128; // r13
  struct DMMVIDPNTARGETMODESET *v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  struct DMMVIDPNTARGETMODESET *v132; // rbx
  const struct BML_VIDPN_PATH_ORDER *v133; // rcx
  int v134; // eax
  __int64 v135; // rdi
  __int64 v136; // rcx
  __int16 v137; // ax
  const struct BML_VIDPN_PATH_ORDER *v138; // r8
  unsigned int i; // r9d
  __int64 v140; // r10
  unsigned int v141; // eax
  __int64 v142; // r11
  __int64 v143; // r10
  unsigned int v144; // eax
  __int64 v145; // r11
  __int64 v146; // r10
  bool v147; // [rsp+50h] [rbp-81h] BYREF
  bool v148; // [rsp+51h] [rbp-80h] BYREF
  bool v149; // [rsp+52h] [rbp-7Fh] BYREF
  void *v150; // [rsp+58h] [rbp-79h]
  unsigned int v151; // [rsp+60h] [rbp-71h]
  unsigned int v152; // [rsp+64h] [rbp-6Dh]
  DMMVIDPNPRESENTPATH *v153; // [rsp+68h] [rbp-69h]
  int v154; // [rsp+70h] [rbp-61h] BYREF
  unsigned int v155; // [rsp+74h] [rbp-5Dh] BYREF
  VIDPN_MGR *v156; // [rsp+78h] [rbp-59h]
  ADAPTER_DISPLAY *v157; // [rsp+80h] [rbp-51h]
  unsigned int v158; // [rsp+88h] [rbp-49h] BYREF
  unsigned int v159; // [rsp+8Ch] [rbp-45h]
  unsigned int v160; // [rsp+90h] [rbp-41h] BYREF
  int v161; // [rsp+94h] [rbp-3Dh] BYREF
  DMMVIDPNTOPOLOGY *v162; // [rsp+98h] [rbp-39h]
  struct DMMVIDPNTARGETMODESET *v163; // [rsp+A0h] [rbp-31h] BYREF
  struct HDXGMONITOR__ *v164; // [rsp+A8h] [rbp-29h] BYREF
  struct DMMVIDPNTARGETMODESET *v165; // [rsp+B0h] [rbp-21h] BYREF
  __int64 v166; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v167[10]; // [rsp+C0h] [rbp-11h] BYREF
  unsigned __int8 v168; // [rsp+120h] [rbp+4Fh]
  struct DMMVIDPNPRESENTPATH *v169; // [rsp+120h] [rbp+4Fh]
  bool v171; // [rsp+130h] [rbp+5Fh] BYREF
  __int16 v172; // [rsp+138h] [rbp+67h]

  v172 = a4;
  v9 = a2;
  v10 = a4;
  v11 = operator new[](120LL * *(unsigned __int16 *)(a3 + 20) + 16, 0x63644356u, 256LL, a4);
  *a1 = (const struct BML_VIDPN_PATH_ORDER *)v11;
  v12 = v11;
  if ( !v11 )
  {
    WdLogSingleEntry2(6LL, a3, *(unsigned __int16 *)(a3 + 20));
    result = 3221225626LL;
    WdLogGlobalForLineNumber = 4216;
    return result;
  }
  v14 = *(VIDPN_MGR **)(v9 + 48);
  v156 = v14;
  if ( !*((_QWORD *)v14 + 1) )
  {
    WdLogSingleEntry0(1LL);
    v12 = (__int64)*a1;
    WdLogGlobalForLineNumber = 68;
  }
  v15 = (ADAPTER_DISPLAY *)*((_QWORD *)v14 + 1);
  v157 = v15;
  v16 = (void *)*((_QWORD *)v15 + 2);
  v150 = v16;
  v17 = *((_QWORD *)v16 + 390);
  if ( *(_BYTE *)(v17 + 289) && *(_BYTE *)(v17 + 290)
    || (v168 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 27) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
  {
    v168 = 1;
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
  v151 = PreferredHdrPixelFormat;
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
        WdLogGlobalForLineNumber = 4267;
      }
      if ( *(_DWORD *)(v25 + 16) == *((_DWORD *)v16 + 103) && *(_DWORD *)(v25 + 20) == *((_DWORD *)v16 + 104) )
      {
        if ( (*(_QWORD *)v25 & 0x700000000000LL) != 0x700000000000LL )
        {
          WdLogSingleEntry2(2LL, v23, a3);
          result = 3221225485LL;
          WdLogGlobalForLineNumber = 4279;
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
          SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v157, *(_DWORD *)(v25 + 24));
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
              v162 = v32;
              if ( (*(_QWORD *)((_BYTE *)v32 + a3 + 56) & 0x4000000000000LL) == 0 )
              {
                WdLogSingleEntry0(1LL);
                v32 = v162;
                WdLogGlobalForLineNumber = 4322;
              }
              if ( v31 != v23 && *(_DWORD *)((char *)v32 + a3 + 240) == *(_DWORD *)(v25 + 184) )
                *((_BYTE *)v26 + v27 + 132) |= 1u;
              ++v31;
            }
            while ( v31 < *(unsigned __int16 *)(a3 + 20) );
            v21 = 0;
          }
          v10 = v172;
        }
        v16 = v150;
        ++*(_BYTE *)*a1;
      }
      ++v23;
    }
    while ( v23 < *(unsigned __int16 *)(a3 + 20) );
    v9 = a2;
  }
  v33 = *a1;
  v34 = (struct DMMVIDPNTOPOLOGY *)(v9 + 96);
  v162 = (DMMVIDPNTOPOLOGY *)(v9 + 96);
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
        WdLogGlobalForLineNumber = 4408;
      }
      v40 = *a1;
      v41 = 120 * v38;
      v42 = VIDPN_MGR::AddPathToVidPnTopology(
              v156,
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
        WdLogGlobalForLineNumber = 4428;
        return result;
      }
      v33 = *a1;
      v35 = v37;
      v36 = *(unsigned __int8 *)*a1;
    }
    while ( v37 < v36 );
  }
  v152 = v21;
  v48 = v21;
  if ( !(_BYTE)v36 )
    goto LABEL_126;
  do
  {
    v49 = 120LL * v48;
    if ( !_bittest64(*(const signed __int64 **)((char *)v33 + v49 + 16), 0x32u) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4445;
    }
    v50 = *(_QWORD *)((char *)v33 + v49 + 16);
    Path = DMMVIDPNTOPOLOGY::FindPath(v162, *(_DWORD *)(v50 + 24), *(_DWORD *)(v50 + 28));
    v153 = Path;
    if ( *(_BYTE *)(v50 + 129) )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdTrace(v52, v51, v53, v54);
      v56[3] = *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 24LL);
      v56[4] = *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 28LL);
      v56[5] = *(int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 20LL);
      v56[6] = *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 16LL);
      v57 = *(_QWORD *)((char *)v33 + v49 + 16);
      WdLogGlobalForLineNumber = 4457;
      if ( (*(_QWORD *)v57 & 0x20000LL) == 0
        && (((unsigned __int8)~BYTE1(*(_QWORD *)v57) ^ (unsigned __int8)~(*(_DWORD *)(v57 + 8) >> 8)) & 1) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4470;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"((pPathInfo->pPathModality->FixedFlags & D3DKMT_PATHMODALITY_DESCRIPTOR_SMI_FIXED) == 0) == ((pPathInfo->pPath"
           "Modality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_SMI_VALID) == 0)",
          4470LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v58 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
    v59 = *a1;
    v165 = v58;
    v60 = BmlFillPreferredMonitorMode(v59, v48, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
    v65 = 0;
    v66 = v60;
    if ( v60 < 0 )
    {
      v115 = (_QWORD *)WdLogNewEntry5_WdTrace(v62, v61, v63, v64);
      v115[3] = *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 24LL);
      v116 = *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 28LL);
      v115[5] = v162;
      v115[4] = v116;
      v115[6] = v66;
      v117 = *a1;
      WdLogGlobalForLineNumber = 4498;
      *(_DWORD *)((char *)v117 + v49 + 52) = 0;
      *(_DWORD *)((char *)*a1 + v49 + 56) = 0;
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v165, 0LL);
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
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v156);
      *(_DWORD *)((char *)v33 + v49 + 24) = AdapterDefaultScaling;
      WdLogSingleEntry4(3LL, AdapterDefaultScaling, *a1, v48, *(int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 136LL));
      WdLogGlobalForLineNumber = 4543;
      goto LABEL_64;
    }
    if ( *(int *)(*((_QWORD *)v157 + 2) + 3004LL) >= 1105 )
LABEL_62:
      v70 = VIDPN_MGR::GetAdapterDefaultScaling(v156);
    else
      v70 = D3DKMDT_VPPS_NOTSPECIFIED;
    *(_DWORD *)((char *)v33 + v49 + 24) = v70;
LABEL_64:
    Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage();
    v71 = *(_DWORD **)((char *)v33 + v49 + 16);
    if ( (*v71 & 0x200LL) == 0 )
    {
      RecommendedRotation = BmlGetRecommendedRotation(*a1, v48, v168);
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
          WdLogGlobalForLineNumber = 4700;
          goto LABEL_69;
        }
      }
    }
    if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v72) == 1 )
    {
      v158 = 0;
      if ( v168 )
      {
        v76 = *a1;
        if ( (unsigned __int8)BmlIsSecondaryHardwareClonePath(*a1, v48, &v158) )
        {
          v77 = *(_DWORD *)(*((_QWORD *)v76 + 15 * v158 + 2) + 132LL);
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
    if ( !v168 )
    {
      WdLogSingleEntry3(3LL, *a1, v48, v72);
      WdLogGlobalForLineNumber = 4690;
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
      WdLogGlobalForLineNumber = 4679;
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
    v148 = 0;
    if ( (int)MonitorIsBoostRefreshRateEnabledByDefault(v150, v83, &v148) >= 0 )
    {
      v84 = v148;
    }
    else
    {
      WdLogSingleEntry3(
        2LL,
        *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 28LL),
        *(int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 20LL),
        *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 16LL));
      v84 = 0;
      WdLogGlobalForLineNumber = 4739;
      v148 = 0;
    }
    *(_DWORD *)((char *)v33 + v49 + 128) = v84 | *(_DWORD *)((_BYTE *)v33 + v49 + 128) & 0xFFFFFFFE;
    if ( (unsigned __int8)BmlIsSecondaryHardwareClonePath(*a1, v48, 0LL) )
      *(_WORD *)((char *)v33 + v49 + 66) = 0;
    v85 = *(_QWORD *)((char *)v33 + v49 + 16);
    v164 = 0LL;
    v86 = 0;
    v154 = 0;
    LODWORD(v85) = *(_DWORD *)(v85 + 28);
    v87 = 0;
    v147 = 0;
    v88 = 0;
    v171 = 0;
    v149 = 0;
    if ( (int)MonitorGetMonitorHandle(v150, v85, 1u, BmlPreparePathOrderAndVidPn, &v164) >= 0 )
    {
      v89 = v164;
      IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(
                                     v164,
                                     (union MONITOR_AND_LINK_HDR_CAPS *)&v154,
                                     0LL);
      v88 = 0;
      if ( IsMonitorAndLinkHDRCapable >= 0 )
      {
        v86 = v154;
        v91 = a2;
      }
      else
      {
        v154 = 0;
        v91 = a2;
        WdLogSingleEntry3(
          2LL,
          *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 28LL),
          a2,
          IsMonitorAndLinkHDRCapable);
        WdLogGlobalForLineNumber = 4785;
      }
      IsHdrEnabled = MonitorIsHdrEnabled(v89, &v171);
      if ( IsHdrEnabled >= 0 )
      {
        v88 = v171;
      }
      else
      {
        v171 = 0;
        WdLogSingleEntry3(2LL, *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 28LL), v91, IsHdrEnabled);
        WdLogGlobalForLineNumber = 4799;
      }
      if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v88 )
        {
          v93 = v153;
          if ( !DMMVIDPNPRESENTPATH::IsHdrAllowedOnVidPnPath(v153) )
          {
            v98 = WdLogNewEntry5_WdTrace(v95, v94, v96, v97);
            *(_QWORD *)(v98 + 24) = *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 28LL);
            *(_QWORD *)(v98 + 32) = v93;
            v88 = 0;
            v171 = 0;
            WdLogGlobalForLineNumber = 4812;
          }
        }
      }
      IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(v89, &v147, 0LL);
      if ( IsMonitorAndDriverWCGCapable >= 0 )
      {
        v87 = v147;
      }
      else
      {
        v87 = 0;
        v147 = 0;
        WdLogSingleEntry3(
          2LL,
          *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 28LL),
          a2,
          IsMonitorAndDriverWCGCapable);
        WdLogGlobalForLineNumber = 4828;
      }
      IsWcgEnabled = MonitorIsWcgEnabled(v89, &v149);
      if ( IsWcgEnabled < 0 )
      {
        v87 = 0;
        v147 = 0;
        WdLogSingleEntry3(2LL, *(unsigned int *)(*(_QWORD *)((char *)v33 + v49 + 16) + 28LL), a2, IsWcgEnabled);
        WdLogGlobalForLineNumber = 4838;
      }
      MonitorReleaseMonitorHandle(v150, v89, v101);
      v65 = v149;
    }
    *(_DWORD *)((char *)v33 + v49 + 116) = v86;
    v102 = *((_BYTE *)v33 + v49 + 132) & 0xF1 | (2 * (v88 | (2 * (v65 | (2 * v87)))));
    *(_DWORD *)((char *)v33 + v49 + 120) = 0;
    v103 = (ADAPTER_DISPLAY **)v150;
    *((_BYTE *)v33 + v49 + 132) = v102;
    if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                          v103[390],
                          *(_DWORD *)(*(_QWORD *)((char *)v33 + v49 + 16) + 24LL)) == 1
       || !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                           *((ADAPTER_DISPLAY **)v150 + 390),
                           *(_DWORD *)(*(_QWORD *)((char *)v33 + v49 + 16) + 24LL)))
      && (*((_BYTE *)v33 + v49 + 132) & 1) == 0 )
    {
      if ( v88 && (v86 & 1) != 0 )
      {
        *(_DWORD *)((char *)v33 + v49 + 120) = v151;
      }
      else if ( v65 && v87 && v151 == 2 )
      {
        *(_DWORD *)((char *)v33 + v49 + 120) = 3;
      }
    }
    if ( (a7 & 0x20000000) != 0 )
      *(_DWORD *)((char *)v33 + v49 + 120) = 0;
    *((_BYTE *)v33 + v49 + 132) = *((_BYTE *)v33 + v49 + 132) & 0xEF | (*(_DWORD *)((char *)v33 + v49 + 120) != 0
                                                                      ? 0x10
                                                                      : 0);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v165, 0LL);
    v33 = *a1;
    v48 = v152 + 1;
    v152 = v48;
    v36 = *(unsigned __int8 *)v33;
  }
  while ( v48 < v36 );
  v21 = 0;
LABEL_126:
  v159 = v21;
  v104 = v21;
  if ( (_BYTE)v36 )
  {
    do
    {
      v105 = (ADAPTER_DISPLAY *)(120LL * v104);
      v157 = v105;
      v106 = BmlIsSecondaryHardwareClonePath(v33, v104, 0LL);
      v21 = 0;
      if ( !v106 )
      {
        v107 = *a1;
        v108 = 0;
        v150 = 0LL;
        v109 = 0;
        v110 = v104;
        v151 = v104;
        if ( v104 < *(unsigned __int8 *)v107 )
        {
          do
          {
            v111 = 120LL * v110;
            if ( *(_DWORD *)(*(_QWORD *)((char *)v107 + v111 + 16) + 24LL) == *(_DWORD *)(*(_QWORD *)((char *)v33 + (_QWORD)v105 + 16)
                                                                                        + 24LL) )
            {
              v112 = *(DMMVIDPNPRESENTPATH **)((char *)v107 + v111 + 44);
              v153 = v112;
              if ( !v168
                || (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)((char *)v107 + v111 + 28)) - 2) & 0xFFFFFFFD) != 0 )
              {
                v113 = HIDWORD(v153);
                v114 = (unsigned int)v153;
              }
              else
              {
                v113 = (unsigned int)v153;
                v114 = HIDWORD(v153);
                v153 = (DMMVIDPNPRESENTPATH *)__PAIR64__((unsigned int)v153, HIDWORD(v153));
                v112 = v153;
              }
              v152 = v114;
              if ( !v114 || !v113 )
              {
                WdLogSingleEntry0(1LL);
                v114 = v152;
                v110 = v151;
                WdLogGlobalForLineNumber = 4918;
              }
              if ( v108 && v109 )
              {
                v105 = v157;
                if ( v108 > v114 )
                  v108 = v114;
                LODWORD(v150) = v108;
                if ( v109 > v113 )
                {
                  v109 = v113;
                  HIDWORD(v150) = v113;
                }
              }
              else
              {
                v150 = v112;
                v108 = (unsigned int)v112;
                v109 = HIDWORD(v112);
                v105 = v157;
              }
            }
            v107 = *a1;
            v151 = ++v110;
          }
          while ( v110 < *(unsigned __int8 *)v107 );
          v104 = v159;
        }
        *(_QWORD *)((char *)v33 + (_QWORD)v105 + 36) = v150;
        *(_DWORD *)((char *)v33 + (_QWORD)v105 + 60) = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)((char *)v105 + (_QWORD)v33 + 52));
        v21 = 0;
      }
      v33 = *a1;
      v159 = ++v104;
      v36 = *(unsigned __int8 *)v33;
    }
    while ( v104 < v36 );
  }
  v118 = v21;
  if ( !(_BYTE)v36 )
    return 0LL;
  while ( 2 )
  {
    v119 = 120LL * v118;
    v169 = DMMVIDPNTOPOLOGY::FindPath(
             v162,
             *(_DWORD *)(*(_QWORD *)((char *)v33 + v119 + 16) + 24LL),
             *(_DWORD *)(*(_QWORD *)((char *)v33 + v119 + 16) + 28LL));
    v120 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v169 + 11));
    v121 = *(_QWORD *)((char *)v33 + v119 + 16);
    v122 = v120;
    v167[0] = (__int64)v120;
    v123 = *(_QWORD *)(v121 + 8);
    if ( (v123 & 0x18001820B8FLL) == 0 )
      goto LABEL_168;
    if ( (*(_DWORD *)v121 & 0x100LL) == 0
      || (v123 & 0x100) == 0
      || (unsigned __int8)BmlIsSecondaryHardwareClonePath(*a1, v118, 0LL) )
    {
      WdLogSingleEntry2(3LL, *a1, v118);
      WdLogGlobalForLineNumber = 5116;
LABEL_168:
      v128 = v169;
LABEL_169:
      if ( DMMVIDPNPRESENTPATH::IsFunctional(v128) )
      {
        v138 = *a1;
        for ( i = 0; i < *(unsigned __int8 *)*a1; ++i )
        {
          v140 = 120LL * i;
          if ( *(_DWORD *)(*(_QWORD *)((char *)v138 + v140 + 16) + 24LL) == *(_DWORD *)(*(_QWORD *)((char *)v33
                                                                                                  + v119
                                                                                                  + 16)
                                                                                      + 24LL) )
            *(_WORD *)((char *)v138 + v140 + 66) = 0;
          v138 = *a1;
        }
        *(_WORD *)((char *)v33 + v119 + 70) = 0;
      }
LABEL_175:
      auto_rc<DMMVIDPNSOURCEMODESET>::reset(v167, 0LL);
      v33 = *a1;
      if ( ++v118 >= *(unsigned __int8 *)*a1 )
        return 0LL;
      continue;
    }
    break;
  }
  v124 = *a1;
  v155 = -1;
  if ( (int)BmlGetNextBestSourceMode((_DWORD)v124, a2, (unsigned __int16)v118, (_DWORD)v122, -1, (__int64)&v155) < 0 )
  {
    v125 = *(_QWORD *)((char *)v33 + v119 + 16);
    if ( !_bittest64((const signed __int64 *)v125, 0x36u) )
    {
      DxgkLogCodePointPacket(
        0x13u,
        *(_DWORD *)(v125 + 96),
        *(_DWORD *)(v125 + 100),
        *(_DWORD *)(v125 + 116),
        *(_QWORD *)(v125 + 16));
      WdLogSingleEntry4(3LL, *a1, a2, v118, v155);
      WdLogGlobalForLineNumber = 5006;
LABEL_180:
      LODWORD(v135) = -1071774970;
      goto LABEL_182;
    }
    *(_QWORD *)(v125 + 8) &= 0xFFFFFFFFFFFFFE78uLL;
    goto LABEL_175;
  }
  v126 = VIDPN_MGR::PinVidPnSourceMode(v156, v122, v155, 1);
  v127 = v126;
  if ( v126 >= 0 )
  {
    v128 = v169;
    *(_WORD *)((char *)v33 + v119 + 66) = 0;
    v129 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v169 + 12));
    v131 = *(_QWORD *)((char *)v33 + v119 + 16);
    v132 = v129;
    v163 = v129;
    if ( (*(_BYTE *)v131 & 0x87) != 0x87
      || (*(_BYTE *)(v131 + 8) & 0x87) != 0x87
      || *(_DWORD *)(v131 + 56) == (_DWORD)v130
      || *(_DWORD *)(v131 + 52) == (_DWORD)v130 )
    {
      v137 = -1;
    }
    else
    {
      v133 = *a1;
      v160 = -1;
      v166 = v130;
      v161 = 1;
      if ( (int)BmlGetNextBestTargetMode(v133, a2, (unsigned __int16)v118, v129, v122, -1, &v160, &v166, &v161) < 0 )
      {
        v144 = DivideAndRound(
                 *(unsigned int *)(*(_QWORD *)((char *)v33 + v119 + 16) + 52LL),
                 *(unsigned int *)(*(_QWORD *)((char *)v33 + v119 + 16) + 56LL));
        DxgkLogCodePointPacket(0x14u, *(_DWORD *)(v145 + 44), *(_DWORD *)(v145 + 48), v144, v146);
        WdLogSingleEntry3(3LL, *a1, a2, v118);
        WdLogGlobalForLineNumber = 5071;
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v163, 0LL);
        goto LABEL_180;
      }
      v134 = VIDPN_MGR::PinVidPnTargetMode(v156, v132, v160, 1);
      v135 = v134;
      if ( v134 < 0 )
      {
        v141 = DivideAndRound(
                 *(unsigned int *)(*(_QWORD *)((char *)v33 + v119 + 16) + 52LL),
                 *(unsigned int *)(*(_QWORD *)((char *)v33 + v119 + 16) + 56LL));
        DxgkLogCodePointPacket(0x16u, *(_DWORD *)(v142 + 44), *(_DWORD *)(v142 + 48), v141, v143);
        WdLogSingleEntry4(3LL, v135, *a1, a2, v118);
        WdLogGlobalForLineNumber = 5091;
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v163, 0LL);
        goto LABEL_182;
      }
      v136 = *((_QWORD *)v132 + 18);
      *(_QWORD *)(v136 + 152) = v166;
      *(_DWORD *)(v136 + 160) = v161;
      v137 = 0;
    }
    *(_WORD *)((char *)v33 + v119 + 70) = v137;
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v163, 0LL);
    goto LABEL_169;
  }
  DxgkLogCodePointPacket(
    0x15u,
    *(_DWORD *)(*(_QWORD *)((char *)v33 + v119 + 16) + 96LL),
    *(_DWORD *)(*(_QWORD *)((char *)v33 + v119 + 16) + 100LL),
    *(_DWORD *)(*(_QWORD *)((char *)v33 + v119 + 16) + 116LL),
    *(_QWORD *)(*(_QWORD *)((char *)v33 + v119 + 16) + 16LL));
  WdLogSingleEntry4(3LL, v127, *a1, a2, v118);
  WdLogGlobalForLineNumber = 5027;
  LODWORD(v135) = v127;
LABEL_182:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(v167, 0LL);
  return (unsigned int)v135;
}
