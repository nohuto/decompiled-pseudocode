/*
 * XREFs of DxgkGetMonitorInternalInfo @ 0x140413FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline @ 0x14006DE94 (Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x14006DF90 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?MonitorGetDisplayHdrSupportLevel@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS2@@@Z @ 0x14026E3A0 (-MonitorGetDisplayHdrSupportLevel@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@.c)
 *     ?MonitorGetLinkInfoFromMonitor@@YAJPEAUHDXGMONITOR__@@AEAU_DXGK_MONITORLINKINFO@@@Z @ 0x14028E91C (-MonitorGetLinkInfoFromMonitor@@YAJPEAUHDXGMONITOR__@@AEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402E06D8 (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402E09E0 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?MonitorGetDisplayIDFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z @ 0x140306B84 (-MonitorGetDisplayIDFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x140307C80 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z @ 0x14033C188 (-MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z.c)
 *     ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x14035F81C (-MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4Mo.c)
 *     ?MonitorGetMonitorOrientationsFromMonitor@@YAJPEAUHDXGMONITOR__@@PEAK1@Z @ 0x140378C18 (-MonitorGetMonitorOrientationsFromMonitor@@YAJPEAUHDXGMONITOR__@@PEAK1@Z.c)
 *     ?MonitorGetNativeFlags@@YAJPEAUHDXGMONITOR__@@PEAE11@Z @ 0x1403ADE68 (-MonitorGetNativeFlags@@YAJPEAUHDXGMONITOR__@@PEAE11@Z.c)
 *     ?_GetPreferredMonitorSourceMode@MonitorModes@DxgMonitor@@QEBAJPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403B862C (-_GetPreferredMonitorSourceMode@MonitorModes@DxgMonitor@@QEBAJPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@.c)
 *     ?MonitorGetPseudoSpecializedState@@YAJPEAUHDXGMONITOR__@@PEA_N11@Z @ 0x1403DD5BC (-MonitorGetPseudoSpecializedState@@YAJPEAUHDXGMONITOR__@@PEA_N11@Z.c)
 *     ?MonitorIsMonitorEdidless@@YAJPEAUHDXGMONITOR__@@AEAE@Z @ 0x1403EC9C4 (-MonitorIsMonitorEdidless@@YAJPEAUHDXGMONITOR__@@AEAE@Z.c)
 *     ?MonitorGetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN@@PEAUDISPLAY_COLORIMETRY_INTERNAL@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_OUT@@@Z @ 0x14042E1D4 (-MonitorGetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN@.c)
 *     ?MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z @ 0x14042E40C (-MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z.c)
 */

__int64 __fastcall DxgkGetMonitorInternalInfo(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  unsigned int v6; // ebx
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // zf
  DXGGLOBAL *Global; // rax
  DWORD LowPart; // edi
  struct DXGADAPTER *v17; // rax
  DXGADAPTER *v18; // r13
  __int64 HighPart; // rbx
  unsigned int v20; // esi
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v23; // zf
  bool v24; // zf
  __int64 v25; // rbx
  int v26; // eax
  int MonitorHandle; // eax
  void *v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdi
  struct HDXGMONITOR__ *v31; // r15
  int CCDMonitorID; // eax
  __int64 v33; // rdi
  int AdvancedColorParams; // eax
  __int64 v35; // rsi
  __int64 v36; // rdi
  int v37; // edx
  unsigned int v38; // edx
  int v39; // edx
  int IsMonitorAndLinkHDRCapable; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  _DWORD *v42; // rdi
  enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *v43; // rdx
  int DisplayIDFromMonitor; // eax
  unsigned int v45; // edx
  bool v46; // cf
  int v47; // eax
  int PreferredMonitorSourceMode; // esi
  int v49; // eax
  int LinkInfoFromMonitor; // eax
  unsigned int v51; // ecx
  unsigned int *v52; // rdi
  _DWORD *v53; // rbx
  char v54; // cl
  unsigned int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned __int8 v58; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v59; // [rsp+51h] [rbp-AFh] BYREF
  bool v60; // [rsp+52h] [rbp-AEh] BYREF
  bool v61; // [rsp+53h] [rbp-ADh] BYREF
  bool v62; // [rsp+54h] [rbp-ACh] BYREF
  bool v63; // [rsp+55h] [rbp-ABh] BYREF
  unsigned __int8 v64; // [rsp+56h] [rbp-AAh] BYREF
  unsigned __int8 v65; // [rsp+57h] [rbp-A9h] BYREF
  bool v66; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v67; // [rsp+5Ch] [rbp-A4h] BYREF
  LONG v68; // [rsp+60h] [rbp-A0h]
  int v69; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v70; // [rsp+68h] [rbp-98h]
  unsigned __int8 v71; // [rsp+6Ah] [rbp-96h]
  unsigned int v72; // [rsp+6Ch] [rbp-94h] BYREF
  __int16 v73; // [rsp+70h] [rbp-90h] BYREF
  int v74; // [rsp+78h] [rbp-88h] BYREF
  __int64 v75; // [rsp+80h] [rbp-80h]
  char v76; // [rsp+88h] [rbp-78h]
  unsigned int v77; // [rsp+90h] [rbp-70h] BYREF
  int v78; // [rsp+94h] [rbp-6Ch] BYREF
  struct _LUID v79; // [rsp+98h] [rbp-68h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v81; // [rsp+A8h] [rbp-58h]
  unsigned int v82; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v83; // [rsp+B8h] [rbp-48h]
  struct HDXGMONITOR__ *v84; // [rsp+C0h] [rbp-40h] BYREF
  struct _DXGK_MONITORLINKINFO v85; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v86; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v87; // [rsp+E8h] [rbp-18h]
  __int128 v88; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v89; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v90[4]; // [rsp+110h] [rbp+10h] BYREF
  _D3DKMDT_MONITOR_SOURCE_MODE v91; // [rsp+130h] [rbp+30h] BYREF
  __int64 v92; // [rsp+190h] [rbp+90h] BYREF
  int v93; // [rsp+198h] [rbp+98h]
  _BYTE v94[144]; // [rsp+1A0h] [rbp+A0h] BYREF

  v74 = -1;
  v6 = a1;
  v7 = a2;
  v83 = a4;
  v67 = a2;
  v80 = a1;
  v81 = a5;
  v75 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v76 = 1;
    v74 = 2186;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2186);
  }
  else
  {
    v76 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v74, 2186);
  v79 = 0LL;
  v77 = 0;
  v84 = 0LL;
  v8 = DxgkConvertLegacyQDCAdapterAndIdToActual((struct _LUID *)&v80, v7, &v79, &v77);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = SHIDWORD(v80);
    WdLogSingleEntry4(2LL, SHIDWORD(v80), v6, v7, v8);
    WdLogGlobalForLineNumber = 8014;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to get adapter LUID from LUID (0x%I64x%08I64x), target ID 0x%I64x (Status = 0x%I64x).",
      v10,
      v6,
      v7,
      v9,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v74);
    v13 = v76 == 0;
LABEL_7:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v74);
    return (unsigned int)v9;
  }
  v89 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  LowPart = v79.LowPart;
  v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v79, &v89);
  v18 = v17;
  if ( !v17 )
  {
    HighPart = v79.HighPart;
    v20 = -1073741811;
    WdLogSingleEntry4(2LL, v79.HighPart, LowPart, -1073741811LL, 0LL);
    WdLogGlobalForLineNumber = 8030;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetMonitorInternalInfo function, returning 0x%I64x.",
      HighPart,
      LowPart,
      -1073741811LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v74);
    v23 = v76 == 0;
    goto LABEL_13;
  }
  if ( !*((_QWORD *)v17 + 390) )
  {
    DXGADAPTER::ReleaseReference(v17);
    v25 = v79.HighPart;
    v20 = -1073741811;
    WdLogSingleEntry4(2LL, v79.HighPart, LowPart, -1073741811LL, 1LL);
    WdLogGlobalForLineNumber = 8040;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified adapter 0x%I64x%08I64x is not a display adapter, returning 0x%I64x",
      v25,
      LowPart,
      -1073741811LL,
      1LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v74);
    if ( v76 )
    {
      v24 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_18:
      if ( !v24 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v74);
    }
    return v20;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v94, v17, 0LL);
  DXGADAPTER::ReleaseReference(v18);
  v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v94, 0LL);
  v20 = v26;
  if ( v26 < 0 )
  {
    WdLogSingleEntry3(3LL, v79.HighPart, LowPart, v26);
    WdLogGlobalForLineNumber = 8058;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v94);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v74);
    v23 = v76 == 0;
LABEL_13:
    if ( !v23 )
    {
      v24 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
      goto LABEL_18;
    }
    return v20;
  }
  v72 = v77;
  MonitorHandle = MonitorGetMonitorHandle(v18, v77, 0LL, DxgkGetMonitorInternalInfo, &v84);
  v9 = MonitorHandle;
  if ( MonitorHandle < 0 )
  {
    v30 = SHIDWORD(v80);
    WdLogSingleEntry5(2LL, SHIDWORD(v80), v6, v7, MonitorHandle, 0LL);
    WdLogGlobalForLineNumber = 8079;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to get connected monitor from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
      v30,
      v6,
      v7,
      v9,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v94);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v74);
    v13 = v76 == 0;
    goto LABEL_7;
  }
  v31 = v84;
  if ( !v84 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8083;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 8083LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a3 )
  {
    CCDMonitorID = MonitorGetCCDMonitorID(v31, 0x104u, (unsigned __int16 *)(a3 + 20));
    v68 = HIDWORD(v80);
    if ( CCDMonitorID < 0 )
    {
      v33 = CCDMonitorID;
      WdLogSingleEntry4(2LL, SHIDWORD(v80), v6, v67, CCDMonitorID);
      WdLogGlobalForLineNumber = 8097;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to get monitor CCD name from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
        v68,
        v6,
        v67,
        v33,
        0LL);
    }
    v73 = 0;
    v69 = 0;
    v70 = 0;
    v71 = 0;
    v86 = 0LL;
    v87 = 0LL;
    v88 = 0LL;
    AdvancedColorParams = MonitorGetAdvancedColorParams(
                            v31,
                            (struct DISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN *)&v73,
                            (struct DISPLAY_COLORIMETRY_INTERNAL *)&v86,
                            (struct DISPLAY_COLORIMETRY_FLAGS_INTERNAL_OUT *)&v69);
    if ( AdvancedColorParams >= 0 )
    {
      v13 = (_BYTE)v69 == 0;
      v37 = *(_DWORD *)(a3 + 588);
      *(_OWORD *)(a3 + 540) = v86;
      *(_OWORD *)(a3 + 556) = v87;
      *(_QWORD *)(a3 + 572) = v88;
      *(_DWORD *)(a3 + 580) = DWORD2(v88);
      v38 = ((_BYTE)v70 != 0 ? 2 : 0) | (BYTE1(v69) != 0 ? 0x400 : 0) | !v13 | v37 & 0xFFFFFBFC;
      *(_DWORD *)(a3 + 588) = v38 ^ ((unsigned __int16)v38 ^ (unsigned __int16)(HIBYTE(v70) << 9)) & 0x200;
      if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
        *(_DWORD *)(a3 + 588) ^= ((unsigned __int16)*(_DWORD *)(a3 + 588) ^ (unsigned __int16)(v71 << 12)) & 0x1000;
      v39 = *(_DWORD *)(a3 + 584);
      v78 = 0;
      *(_DWORD *)(a3 + 584) = (HIBYTE(v69) != 0 ? 4 : 0) | (BYTE2(v69) != 0 ? 2 : 0) | v39 & 0xFFFFFFF9;
      IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v31, (union MONITOR_AND_LINK_HDR_CAPS *)&v78, 0LL);
      if ( IsMonitorAndLinkHDRCapable >= 0 )
      {
        *(_DWORD *)(a3 + 588) = (2 * (v78 & 2)) & 0xBF | *(_DWORD *)(a3 + 588) & 0xFFFFFFBB | (16 * (v78 & 4));
        goto LABEL_38;
      }
      v35 = v67;
      v36 = IsMonitorAndLinkHDRCapable;
      WdLogSingleEntry4(2LL, v68, v6, v67, IsMonitorAndLinkHDRCapable);
      WdLogGlobalForLineNumber = 8152;
    }
    else
    {
      v35 = v67;
      v36 = AdvancedColorParams;
      WdLogSingleEntry4(2LL, v68, v6, v67, AdvancedColorParams);
      WdLogGlobalForLineNumber = 8116;
    }
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to get monitor HDR caps for adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
      v68,
      v6,
      v35,
      v36,
      0LL);
LABEL_38:
    IsEnabledDeviceUsageNoInline = Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline();
    v42 = (_DWORD *)(a3 + 936);
    v43 = (enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *)(a3 + 936);
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( (int)MonitorGetDisplayHdrSupportLevel(v31, v43, (enum _DISPLAYCONFIG_HDR_CERTIFICATIONS2 *)(a3 + 940)) < 0 )
      {
        *v42 = 0;
        *(_DWORD *)(a3 + 940) = 0;
      }
    }
    else if ( (int)MonitorGetDisplayHdrSupportLevel(v31, v43, 0LL) < 0 )
    {
      *v42 = 0;
    }
    v58 = 0;
    v65 = 0;
    v64 = 0;
    if ( (int)MonitorGetNativeFlags(v31, &v58, &v65, &v64) >= 0 )
      *(_DWORD *)(a3 + 588) = (v58 != 0 ? 8 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFF7;
    v59 = 1;
    if ( (int)MonitorIsMonitorEdidless(v31, (bool *)&v59) >= 0 )
      *(_DWORD *)(a3 + 588) = (v59 == 0 ? 0x10 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFEF;
    v82 = 0;
    DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(v31, 0, &v82, 0LL);
    v45 = v72;
    *(_DWORD *)(a3 + 924) = 0;
    v46 = DisplayIDFromMonitor != -1071841279;
    v60 = 0;
    v47 = *(_DWORD *)(a3 + 588);
    v66 = 0;
    *(_DWORD *)(a3 + 588) = v47 & 0xFFFFFFDF | (v46 ? 0x20 : 0);
    v92 = 0LL;
    v93 = 0;
    *(_DWORD *)(a3 + 928) = 0;
    if ( MonitorGetDpiInfoFromDescriptor(
           v18,
           v45,
           (struct DISPLAY_PREFERRED_MODE_INFO *)&v92,
           (unsigned int *)(a3 + 924),
           (unsigned int *)(a3 + 928),
           &v60,
           &v66) >= 0
      && v60 )
    {
      *(_QWORD *)(a3 + 916) = v92;
    }
    else
    {
      memset(&v91, 0, sizeof(v91));
      if ( v31 )
      {
        MONITOR_MGR::AcquireMonitorShared(v90, (__int64)v31);
        if ( v90[0] )
        {
          PreferredMonitorSourceMode = DxgMonitor::MonitorModes::_GetPreferredMonitorSourceMode(
                                         *(DxgMonitor::MonitorModes **)(v90[0] + 232LL),
                                         &v91);
        }
        else
        {
          PreferredMonitorSourceMode = -1073741275;
          WdLogSingleEntry1(2LL, -1073741275LL);
          WdLogGlobalForLineNumber = 3161;
        }
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v90);
      }
      else
      {
        PreferredMonitorSourceMode = -1073741811;
      }
      if ( PreferredMonitorSourceMode < 0 )
        *(_QWORD *)(a3 + 916) = 0LL;
      else
        *(D3DKMDT_2DREGION *)(a3 + 916) = v91.VideoSignalInfo.ActiveSize;
    }
    v63 = 0;
    v61 = 0;
    v62 = 0;
    MonitorGetPseudoSpecializedState(v31, &v61, &v62, &v63);
    if ( !v61 || (v49 = 128, !v62) )
      v49 = 0;
    *(_DWORD *)(a3 + 588) = (v49 | *(_DWORD *)(a3 + 588) & 0xFFFFFF7F) ^ ((unsigned __int16)(v49 | *(_WORD *)(a3 + 588) & 0xFF7F) ^ (v63 << 8)) & 0x100;
    *(_QWORD *)&v85.UsageHints.0 = 0LL;
    v85.DitheringSupport.Value = 0;
    LinkInfoFromMonitor = MonitorGetLinkInfoFromMonitor(v31, &v85);
    v51 = *(_DWORD *)(a3 + 588) & 0xFFFFF7FF;
    if ( LinkInfoFromMonitor >= 0 )
    {
      *(_DWORD *)(a3 + 588) = v51 | *(_WORD *)&v85.Capabilities.0 & 0x800;
    }
    else
    {
      *(_DWORD *)(a3 + 588) = v51;
      WdLogSingleEntry4(3LL, v68, v6, v67, LinkInfoFromMonitor);
      WdLogGlobalForLineNumber = 8244;
    }
    v52 = v83;
    goto LABEL_65;
  }
  v52 = v83;
  if ( v83 )
  {
LABEL_65:
    v53 = (_DWORD *)v81;
    goto LABEL_66;
  }
  v53 = (_DWORD *)v81;
  if ( v81 )
  {
LABEL_66:
    v67 = 0;
    v72 = 0;
    MonitorGetMonitorOrientationsFromMonitor(v31, &v67, &v72);
    v54 = v67;
    v55 = v72;
    if ( v52 && v53 )
    {
      *v52 = v67;
      *v53 = v55;
    }
    if ( a3 )
      *(_DWORD *)(a3 + 932) = (((_BYTE)v55 - v54) & 3) + 1;
  }
  if ( (int)MonitorReleaseMonitorHandle(v18, v31, v28, v29) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8281;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(Status2)", 8281LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v94);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v74);
  if ( v76 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v56, (__int64)&EventProfilerExit, v57, v74);
  return 0LL;
}
