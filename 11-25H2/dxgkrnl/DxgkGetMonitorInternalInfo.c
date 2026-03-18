/*
 * XREFs of DxgkGetMonitorInternalInfo @ 0x140419880
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036128 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x14006E13C (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x14028A2B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x1402BF950 (-MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4Mo.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402CA140 (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CA448 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?MonitorGetDisplayIDFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z @ 0x140324404 (-MonitorGetDisplayIDFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x140325500 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z @ 0x140367A88 (-MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z.c)
 *     ?MonitorGetMonitorOrientationsFromMonitor@@YAJPEAUHDXGMONITOR__@@PEAK1@Z @ 0x14038C4C0 (-MonitorGetMonitorOrientationsFromMonitor@@YAJPEAUHDXGMONITOR__@@PEAK1@Z.c)
 *     ?MonitorGetLinkInfoFromMonitor@@YAJPEAUHDXGMONITOR__@@AEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403B232C (-MonitorGetLinkInfoFromMonitor@@YAJPEAUHDXGMONITOR__@@AEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?MonitorGetNativeFlags@@YAJPEAUHDXGMONITOR__@@PEAE11@Z @ 0x1403B9728 (-MonitorGetNativeFlags@@YAJPEAUHDXGMONITOR__@@PEAE11@Z.c)
 *     ?_GetPreferredMonitorSourceMode@MonitorModes@DxgMonitor@@QEBAJPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403C3BF0 (-_GetPreferredMonitorSourceMode@MonitorModes@DxgMonitor@@QEBAJPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@.c)
 *     ?MonitorGetPseudoSpecializedState@@YAJPEAUHDXGMONITOR__@@PEA_N11@Z @ 0x1403E5D9C (-MonitorGetPseudoSpecializedState@@YAJPEAUHDXGMONITOR__@@PEA_N11@Z.c)
 *     ?MonitorGetDisplayHdrSupportLevel@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@@Z @ 0x1403E7B68 (-MonitorGetDisplayHdrSupportLevel@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@.c)
 *     ?MonitorIsMonitorEdidless@@YAJPEAUHDXGMONITOR__@@AEAE@Z @ 0x1403F2FD0 (-MonitorIsMonitorEdidless@@YAJPEAUHDXGMONITOR__@@AEAE@Z.c)
 *     ?MonitorGetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN@@PEAUDISPLAY_COLORIMETRY_INTERNAL@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_OUT@@@Z @ 0x14042C2E8 (-MonitorGetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN@.c)
 *     ?MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z @ 0x14042C520 (-MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z.c)
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
  int DisplayIDFromMonitor; // eax
  unsigned int v42; // edx
  bool v43; // cf
  int v44; // eax
  int PreferredMonitorSourceMode; // esi
  int v46; // eax
  int LinkInfoFromMonitor; // eax
  unsigned int v48; // ecx
  unsigned int *v49; // rdi
  _DWORD *v50; // rbx
  char v51; // cl
  unsigned int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned __int8 v55; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v56; // [rsp+51h] [rbp-AFh] BYREF
  bool v57; // [rsp+52h] [rbp-AEh] BYREF
  bool v58; // [rsp+53h] [rbp-ADh] BYREF
  bool v59; // [rsp+54h] [rbp-ACh] BYREF
  bool v60; // [rsp+55h] [rbp-ABh] BYREF
  unsigned __int8 v61; // [rsp+56h] [rbp-AAh] BYREF
  unsigned __int8 v62; // [rsp+57h] [rbp-A9h] BYREF
  bool v63; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v64; // [rsp+5Ch] [rbp-A4h] BYREF
  LONG v65; // [rsp+60h] [rbp-A0h]
  int v66; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v67; // [rsp+68h] [rbp-98h]
  unsigned __int8 v68; // [rsp+6Ah] [rbp-96h]
  unsigned int v69; // [rsp+6Ch] [rbp-94h] BYREF
  __int16 v70; // [rsp+70h] [rbp-90h] BYREF
  int v71; // [rsp+78h] [rbp-88h] BYREF
  __int64 v72; // [rsp+80h] [rbp-80h]
  char v73; // [rsp+88h] [rbp-78h]
  unsigned int v74; // [rsp+90h] [rbp-70h] BYREF
  int v75; // [rsp+94h] [rbp-6Ch] BYREF
  struct _LUID v76; // [rsp+98h] [rbp-68h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-58h]
  unsigned int v79; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v80; // [rsp+B8h] [rbp-48h]
  struct HDXGMONITOR__ *v81; // [rsp+C0h] [rbp-40h] BYREF
  struct _DXGK_MONITORLINKINFO v82; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v83; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v84; // [rsp+E8h] [rbp-18h]
  __int128 v85; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v86; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v87[4]; // [rsp+110h] [rbp+10h] BYREF
  _D3DKMDT_MONITOR_SOURCE_MODE v88; // [rsp+130h] [rbp+30h] BYREF
  __int64 v89; // [rsp+190h] [rbp+90h] BYREF
  int v90; // [rsp+198h] [rbp+98h]
  _BYTE v91[144]; // [rsp+1A0h] [rbp+A0h] BYREF

  v71 = -1;
  v6 = a1;
  v7 = a2;
  v80 = a4;
  v64 = a2;
  v77 = a1;
  v78 = a5;
  v72 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v73 = 1;
    v71 = 2186;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2186);
  }
  else
  {
    v73 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v71, 2186);
  v76 = 0LL;
  v74 = 0;
  v81 = 0LL;
  v8 = DxgkConvertLegacyQDCAdapterAndIdToActual((struct _LUID *)&v77, v7, &v76, &v74);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = SHIDWORD(v77);
    WdLogSingleEntry4(2LL, SHIDWORD(v77), v6, v7, v8);
    WdLogGlobalForLineNumber = 8016;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get adapter LUID from LUID (0x%I64x%08I64x), target ID 0x%I64x (Status = 0x%I64x).",
      v10,
      v6,
      v7,
      v9,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71);
    v13 = v73 == 0;
LABEL_7:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v71);
    return (unsigned int)v9;
  }
  v86 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  LowPart = v76.LowPart;
  v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v76, &v86);
  v18 = v17;
  if ( !v17 )
  {
    HighPart = v76.HighPart;
    v20 = -1073741811;
    WdLogSingleEntry4(2LL, v76.HighPart, LowPart, -1073741811LL, 0LL);
    WdLogGlobalForLineNumber = 8032;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetMonitorInternalInfo function, returning 0x%I64x.",
      HighPart,
      LowPart,
      -1073741811LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71);
    v23 = v73 == 0;
    goto LABEL_13;
  }
  if ( !*((_QWORD *)v17 + 390) )
  {
    DXGADAPTER::ReleaseReference(v17);
    v25 = v76.HighPart;
    v20 = -1073741811;
    WdLogSingleEntry4(2LL, v76.HighPart, LowPart, -1073741811LL, 1LL);
    WdLogGlobalForLineNumber = 8042;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter 0x%I64x%08I64x is not a display adapter, returning 0x%I64x",
      v25,
      LowPart,
      -1073741811LL,
      1LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71);
    if ( v73 )
    {
      v24 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_18:
      if ( !v24 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v71);
    }
    return v20;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v91, v17, 0LL);
  DXGADAPTER::ReleaseReference(v18);
  v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v91, 0LL);
  v20 = v26;
  if ( v26 < 0 )
  {
    WdLogSingleEntry3(3LL, v76.HighPart, LowPart, v26);
    WdLogGlobalForLineNumber = 8060;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71);
    v23 = v73 == 0;
LABEL_13:
    if ( !v23 )
    {
      v24 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
      goto LABEL_18;
    }
    return v20;
  }
  v69 = v74;
  MonitorHandle = MonitorGetMonitorHandle(v18, v74, 0LL, DxgkGetMonitorInternalInfo, &v81);
  v9 = MonitorHandle;
  if ( MonitorHandle < 0 )
  {
    v30 = SHIDWORD(v77);
    WdLogSingleEntry5(2LL, SHIDWORD(v77), v6, v7, MonitorHandle, 0LL);
    WdLogGlobalForLineNumber = 8081;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get connected monitor from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
      v30,
      v6,
      v7,
      v9,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71);
    v13 = v73 == 0;
    goto LABEL_7;
  }
  v31 = v81;
  if ( !v81 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8085;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 8085LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a3 )
  {
    CCDMonitorID = MonitorGetCCDMonitorID(v31, 0x104u, (unsigned __int16 *)(a3 + 20));
    v65 = HIDWORD(v77);
    if ( CCDMonitorID < 0 )
    {
      v33 = CCDMonitorID;
      WdLogSingleEntry4(2LL, SHIDWORD(v77), v6, v64, CCDMonitorID);
      WdLogGlobalForLineNumber = 8099;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get monitor CCD name from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
        v65,
        v6,
        v64,
        v33,
        0LL);
    }
    v70 = 0;
    v66 = 0;
    v67 = 0;
    v68 = 0;
    v83 = 0LL;
    v84 = 0LL;
    v85 = 0LL;
    AdvancedColorParams = MonitorGetAdvancedColorParams(
                            v31,
                            (struct DISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN *)&v70,
                            (struct DISPLAY_COLORIMETRY_INTERNAL *)&v83,
                            (struct DISPLAY_COLORIMETRY_FLAGS_INTERNAL_OUT *)&v66);
    if ( AdvancedColorParams >= 0 )
    {
      v13 = (_BYTE)v66 == 0;
      v37 = *(_DWORD *)(a3 + 588);
      *(_OWORD *)(a3 + 540) = v83;
      *(_OWORD *)(a3 + 556) = v84;
      *(_QWORD *)(a3 + 572) = v85;
      *(_DWORD *)(a3 + 580) = DWORD2(v85);
      v38 = ((_BYTE)v67 != 0 ? 2 : 0) | (BYTE1(v66) != 0 ? 0x400 : 0) | !v13 | v37 & 0xFFFFFBFC;
      *(_DWORD *)(a3 + 588) = v38 ^ ((unsigned __int16)v38 ^ (unsigned __int16)(HIBYTE(v67) << 9)) & 0x200;
      if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
        *(_DWORD *)(a3 + 588) ^= ((unsigned __int16)*(_DWORD *)(a3 + 588) ^ (unsigned __int16)(v68 << 12)) & 0x1000;
      v39 = *(_DWORD *)(a3 + 584);
      v75 = 0;
      *(_DWORD *)(a3 + 584) = (HIBYTE(v66) != 0 ? 4 : 0) | (BYTE2(v66) != 0 ? 2 : 0) | v39 & 0xFFFFFFF9;
      IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v31, (union MONITOR_AND_LINK_HDR_CAPS *)&v75, 0LL);
      if ( IsMonitorAndLinkHDRCapable >= 0 )
      {
        *(_DWORD *)(a3 + 588) = (2 * (v75 & 2)) & 0xBF | *(_DWORD *)(a3 + 588) & 0xFFFFFFBB | (16 * (v75 & 4));
        goto LABEL_38;
      }
      v35 = v64;
      v36 = IsMonitorAndLinkHDRCapable;
      WdLogSingleEntry4(2LL, v65, v6, v64, IsMonitorAndLinkHDRCapable);
      WdLogGlobalForLineNumber = 8154;
    }
    else
    {
      v35 = v64;
      v36 = AdvancedColorParams;
      WdLogSingleEntry4(2LL, v65, v6, v64, AdvancedColorParams);
      WdLogGlobalForLineNumber = 8118;
    }
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get monitor HDR caps for adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
      v65,
      v6,
      v35,
      v36,
      0LL);
LABEL_38:
    if ( (int)MonitorGetDisplayHdrSupportLevel(v31, (enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *)(a3 + 936)) < 0 )
      *(_DWORD *)(a3 + 936) = 0;
    v55 = 0;
    v62 = 0;
    v61 = 0;
    if ( (int)MonitorGetNativeFlags(v31, &v55, &v62, &v61) >= 0 )
      *(_DWORD *)(a3 + 588) = (v55 != 0 ? 8 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFF7;
    v56 = 1;
    if ( (int)MonitorIsMonitorEdidless(v31, (bool *)&v56) >= 0 )
      *(_DWORD *)(a3 + 588) = (v56 == 0 ? 0x10 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFEF;
    v79 = 0;
    DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(v31, 0, &v79, 0LL);
    v42 = v69;
    *(_DWORD *)(a3 + 924) = 0;
    v43 = DisplayIDFromMonitor != -1071841279;
    v57 = 0;
    v44 = *(_DWORD *)(a3 + 588);
    v63 = 0;
    *(_DWORD *)(a3 + 588) = v44 & 0xFFFFFFDF | (v43 ? 0x20 : 0);
    v89 = 0LL;
    v90 = 0;
    *(_DWORD *)(a3 + 928) = 0;
    if ( MonitorGetDpiInfoFromDescriptor(
           v18,
           v42,
           (struct DISPLAY_PREFERRED_MODE_INFO *)&v89,
           (unsigned int *)(a3 + 924),
           (unsigned int *)(a3 + 928),
           &v57,
           &v63) >= 0
      && v57 )
    {
      *(_QWORD *)(a3 + 916) = v89;
    }
    else
    {
      memset(&v88, 0, sizeof(v88));
      if ( v31 )
      {
        MONITOR_MGR::AcquireMonitorShared(v87, (__int64)v31);
        if ( v87[0] )
        {
          PreferredMonitorSourceMode = DxgMonitor::MonitorModes::_GetPreferredMonitorSourceMode(
                                         *(DxgMonitor::MonitorModes **)(v87[0] + 232LL),
                                         &v88);
        }
        else
        {
          PreferredMonitorSourceMode = -1073741275;
          WdLogSingleEntry1(2LL, -1073741275LL);
          WdLogGlobalForLineNumber = 3161;
        }
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v87);
      }
      else
      {
        PreferredMonitorSourceMode = -1073741811;
      }
      if ( PreferredMonitorSourceMode < 0 )
        *(_QWORD *)(a3 + 916) = 0LL;
      else
        *(D3DKMDT_2DREGION *)(a3 + 916) = v88.VideoSignalInfo.ActiveSize;
    }
    v60 = 0;
    v58 = 0;
    v59 = 0;
    MonitorGetPseudoSpecializedState(v31, &v58, &v59, &v60);
    if ( !v58 || (v46 = 128, !v59) )
      v46 = 0;
    *(_DWORD *)(a3 + 588) = (v46 | *(_DWORD *)(a3 + 588) & 0xFFFFFF7F) ^ ((unsigned __int16)(v46 | *(_WORD *)(a3 + 588) & 0xFF7F) ^ (v60 << 8)) & 0x100;
    *(_QWORD *)&v82.UsageHints.0 = 0LL;
    v82.DitheringSupport.Value = 0;
    LinkInfoFromMonitor = MonitorGetLinkInfoFromMonitor(v31, &v82);
    v48 = *(_DWORD *)(a3 + 588) & 0xFFFFF7FF;
    if ( LinkInfoFromMonitor >= 0 )
    {
      *(_DWORD *)(a3 + 588) = v48 | *(_WORD *)&v82.Capabilities.0 & 0x800;
    }
    else
    {
      *(_DWORD *)(a3 + 588) = v48;
      WdLogSingleEntry4(3LL, v65, v6, v64, LinkInfoFromMonitor);
      WdLogGlobalForLineNumber = 8235;
    }
    v49 = v80;
    goto LABEL_62;
  }
  v49 = v80;
  if ( v80 )
  {
LABEL_62:
    v50 = (_DWORD *)v78;
    goto LABEL_63;
  }
  v50 = (_DWORD *)v78;
  if ( v78 )
  {
LABEL_63:
    v64 = 0;
    v69 = 0;
    MonitorGetMonitorOrientationsFromMonitor(v31, &v64, &v69);
    v51 = v64;
    v52 = v69;
    if ( v49 && v50 )
    {
      *v49 = v64;
      *v50 = v52;
    }
    if ( a3 )
      *(_DWORD *)(a3 + 932) = (((_BYTE)v52 - v51) & 3) + 1;
  }
  if ( (int)MonitorReleaseMonitorHandle(v18, v31, v28, v29) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8272;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(Status2)", 8272LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71);
  if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v53, (__int64)&EventProfilerExit, v54, v71);
  return 0LL;
}
