/*
 * XREFs of DxgkGetAdapterDeviceDesc @ 0x140412B00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14002C700 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x14003336C (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x140036924 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1400406B0 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x14004CDC0 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14018BCE0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401C49D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x14028EF80 (-MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140293650 (DxgkAcquireSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140298418 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x14029AE08 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1402B8DC8 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1402D744C (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402E09E0 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402E0FA8 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402E1840 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402E1D74 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1403087EC (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x140315D70 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x140315FE0 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x14039CF90 (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 *     ?SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1403A84FC (-SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?MonitorGetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN@@PEAUDISPLAY_COLORIMETRY_INTERNAL@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_OUT@@@Z @ 0x14042E1D4 (-MonitorGetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN@.c)
 */

__int64 __fastcall DxgkGetAdapterDeviceDesc(struct _LUID a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v6; // r12
  __int64 v8; // rdi
  DXGGLOBAL *Global; // rax
  int v10; // esi
  __int64 v11; // r13
  int v12; // eax
  DXGGLOBAL *v13; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rbx
  bool v18; // zf
  unsigned __int64 *v19; // rax
  struct DXGADAPTER **v20; // rcx
  unsigned int v21; // edx
  _BOOL8 v22; // rbx
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v25; // rcx
  _BOOL8 v26; // rbx
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 HighPart; // rsi
  bool v30; // zf
  DXGADAPTER *v31; // rsi
  DXGADAPTER *v32; // r9
  bool v33; // zf
  int IndirectDisplayPairedAdapter; // eax
  DXGGLOBAL **v35; // rcx
  DXGGLOBAL **v36; // rcx
  DXGADAPTER *v37; // rsi
  DXGADAPTER *v38; // rsi
  char *v39; // rcx
  DXGADAPTER *v40; // rcx
  __int64 v41; // r11
  __int64 v42; // rdx
  __int64 v43; // r11
  unsigned int v44; // esi
  DXGADAPTER *v45; // rsi
  DXGADAPTER *v46; // r13
  __int64 v47; // rcx
  unsigned int v48; // ecx
  int TargetUsage; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rsi
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int CurrentOrientation; // eax
  unsigned int v55; // edx
  int LinkInfoFromTarget; // eax
  int v57; // ecx
  unsigned int *v58; // r8
  __int16 v59; // dx
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  struct HDXGMONITOR__ *v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rsi
  __int64 v68; // rax
  MONITOR_MGR *v69; // rsi
  int MonitorInstance; // eax
  __int64 v71; // r12
  unsigned int v72; // eax
  struct DXGMONITOR *v73; // rax
  int CurrentWireFormatAndColorSpace; // eax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v75; // ecx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v76; // r12d
  const struct _DXGK_DISPLAYMODE_INFO *v77; // rax
  int v78; // eax
  struct HDXGMONITOR__ *v79; // r12
  int v80; // r8d
  void *v81; // r8
  __int64 v82; // r9
  void *v83; // r8
  __int64 v84; // r9
  struct HDXGMONITOR__ *v85; // rdx
  __int64 v86; // r12
  int v87; // esi
  __int64 v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v93; // rdx
  int v94; // eax
  __int64 v95; // rcx
  __int64 v96; // r8
  int v97; // [rsp+50h] [rbp-B0h]
  DXGADAPTER *v98; // [rsp+50h] [rbp-B0h]
  unsigned int v99; // [rsp+50h] [rbp-B0h]
  unsigned int v100; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v101; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 v102[3]; // [rsp+59h] [rbp-A7h] BYREF
  char v103; // [rsp+5Ch] [rbp-A4h] BYREF
  char v104; // [rsp+5Dh] [rbp-A3h]
  BOOL v105; // [rsp+60h] [rbp-A0h]
  DXGADAPTER *v106; // [rsp+68h] [rbp-98h] BYREF
  char v107; // [rsp+70h] [rbp-90h]
  DXGADAPTER *v108; // [rsp+78h] [rbp-88h] BYREF
  struct HDXGMONITOR__ *SessionViewOwner; // [rsp+80h] [rbp-80h]
  unsigned int v110; // [rsp+88h] [rbp-78h] BYREF
  struct _LUID v111; // [rsp+90h] [rbp-70h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v112; // [rsp+98h] [rbp-68h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v113; // [rsp+9Ch] [rbp-64h] BYREF
  const struct _DXGK_DISPLAYMODE_INFO *v114; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall *v115)(struct _LUID, unsigned int); // [rsp+A8h] [rbp-58h] BYREF
  struct DXGMONITOR *v116; // [rsp+B0h] [rbp-50h]
  int v117; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v118; // [rsp+C0h] [rbp-40h]
  char v119; // [rsp+C8h] [rbp-38h]
  __int64 v120; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v121; // [rsp+D8h] [rbp-28h] BYREF
  struct _DXGK_MONITORLINKINFO v122; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v123; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v124[16]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v125; // [rsp+108h] [rbp+8h] BYREF
  __int128 v126; // [rsp+118h] [rbp+18h]
  __int128 v127; // [rsp+128h] [rbp+28h]
  unsigned __int64 v128; // [rsp+138h] [rbp+38h] BYREF
  struct DXGADAPTER *v129; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v130[2]; // [rsp+150h] [rbp+50h] BYREF
  char v131; // [rsp+160h] [rbp+60h]
  _BYTE v132[24]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v133[16]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v134; // [rsp+190h] [rbp+90h]
  DXGADAPTER *v135; // [rsp+198h] [rbp+98h]
  char v136; // [rsp+1A0h] [rbp+A0h]
  __int64 v137; // [rsp+1A8h] [rbp+A8h]
  __int64 v138; // [rsp+1D0h] [rbp+D0h]
  DXGADAPTER *v139; // [rsp+1D8h] [rbp+D8h]
  char v140; // [rsp+1E0h] [rbp+E0h]
  __int64 v141; // [rsp+1E8h] [rbp+E8h]

  v4 = 0LL;
  v111 = a1;
  v6 = a2;
  v117 = -1;
  v118 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v119 = 1;
    v117 = 2185;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(-1LL, (__int64)&EventProfilerEnter, a3, 2185);
  }
  else
  {
    v119 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v117, 2185);
  v108 = 0LL;
  v8 = 0LL;
  v106 = 0LL;
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7181;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NULL != pDisplayInfo", 7181LL, 0LL, 0LL, 0LL, 0LL);
  }
  v128 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  SessionViewOwner = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v128);
  if ( !SessionViewOwner )
  {
    v10 = 1144079361;
    LODWORD(v11) = -1073741811;
    WdLogSingleEntry3(2LL, v111.HighPart, a1.LowPart, 1144079361LL);
    WdLogGlobalForLineNumber = 7197;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetAdapterDeviceDesc function.",
      v111.HighPart,
      a1.LowPart,
      1144079361LL,
      0LL,
      0LL);
LABEL_143:
    if ( *(_DWORD *)a4 == -21 )
      *(_DWORD *)(a4 + 2024) = v10;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v117);
    if ( v119 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v90, (__int64)&EventProfilerExit, v91, v117);
    }
    return (unsigned int)v11;
  }
  v12 = DxgkAcquireSessionModeChangeLock(0);
  v11 = v12;
  v105 = v12 >= 0;
  if ( v12 < 0 )
  {
    v10 = 1144079362;
    WdLogSingleEntry2(2LL, v12, 1144079362LL);
    WdLogGlobalForLineNumber = 7215;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v11,
      1144079362LL,
      0LL,
      0LL,
      0LL);
LABEL_20:
    v18 = !v105;
    goto LABEL_21;
  }
  if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
  {
    v121 = 0LL;
    v19 = (unsigned __int64 *)&v120;
    v20 = &v108;
    v120 = -1LL;
    if ( (_DWORD)v6 == -1 )
    {
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0;
    }
    else
    {
      v21 = v6;
    }
  }
  else
  {
    v13 = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(v13);
    if ( !SessionData )
    {
      v10 = 1144079369;
      LODWORD(v11) = -1073741811;
      v22 = PsGetCurrentProcess(v15) != (_QWORD)PsInitialSystemProcess;
      CurrentProcess = PsGetCurrentProcess(PsInitialSystemProcess);
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      WdLogSingleEntry3(2LL, ProcessSessionId, v22, 1144079369LL);
      WdLogGlobalForLineNumber = 7245;
      v26 = PsGetCurrentProcess(v25) != (_QWORD)PsInitialSystemProcess;
      v27 = PsGetCurrentProcess(PsInitialSystemProcess);
      v28 = PsGetProcessSessionId(v27);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Remote session: No session data for session 0x%I64x!!! System Process %I64d (0x%I64x)",
        v28,
        v26,
        1144079369LL,
        0LL,
        0LL);
      goto LABEL_20;
    }
    if ( *((_DWORD *)SessionData + 4627) == *((_DWORD *)SessionViewOwner + 103)
      && *((_DWORD *)SessionData + 4628) == *((_DWORD *)SessionViewOwner + 104) )
    {
      v16 = *((_DWORD *)SessionData + 4629);
    }
    else
    {
      v16 = 0;
    }
    if ( (_DWORD)v6 != -1 && (unsigned int)v6 >= v16 )
    {
      v10 = 1144079363;
      LODWORD(v11) = -1073741811;
      v17 = v16;
      WdLogSingleEntry3(2LL, v6, v16, 1144079363LL);
      WdLogGlobalForLineNumber = 7259;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Remote session: VidPnSourceId 0x%I64x is not less than the number of VidPnSources 0x%I64x.  (0x%I64x)",
        v6,
        v17,
        1144079363LL,
        0LL,
        0LL);
      goto LABEL_20;
    }
    v121 = 0LL;
    v120 = -1LL;
    LODWORD(v6) = -1;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0;
  }
  if ( (int)DxgkpGetPairingAdapters(SessionViewOwner, v21, &v106, &v121, v20, v19, 0) < 0 )
  {
    LODWORD(v11) = -1073741811;
    v97 = 1144079364;
    HighPart = v111.HighPart;
    WdLogSingleEntry4(2LL, v111.HighPart, a1.LowPart, (unsigned int)v6, 1144079364LL);
    WdLogGlobalForLineNumber = 7293;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to get pairing adapters from adapter (0x%I64x%08I64x) VidPn source 0x%I64x! (0x%I64x)",
      HighPart,
      a1.LowPart,
      (unsigned int)v6,
      1144079364LL,
      0LL);
    v30 = !v105;
LABEL_140:
    if ( !v30 )
      DxgkReleaseSessionModeChangeLock();
    v10 = v97;
    goto LABEL_143;
  }
  v31 = v106;
  if ( !v106 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7298;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pRenderAdapter != NULL", 7298LL, 0LL, 0LL, 0LL, 0LL);
  }
  v32 = v108;
  v98 = v108;
  if ( ((_DWORD)v6 == -1) != (v108 == 0LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7299;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(VidPnSourceId == D3DDDI_ID_UNINITIALIZED) == (pDisplayAdapter == NULL)",
      7299LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v32 = v98;
  }
  v33 = v32 == 0LL;
  if ( v32 )
  {
    if ( (*((_DWORD *)v32 + 111) & 0x100) != 0 )
    {
      v129 = 0LL;
      IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(v32, 0, &v129);
      v35 = (DXGGLOBAL **)v129;
      if ( IndirectDisplayPairedAdapter >= 0 )
        v8 = *(_QWORD *)((char *)v129 + 412);
      if ( v129 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v129 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(v35[2], (struct DXGADAPTER *)v35);
        v32 = v108;
        v31 = v106;
      }
      else
      {
        v32 = v98;
      }
      v129 = 0LL;
    }
    v33 = v32 == 0LL;
  }
  if ( v33 )
    v32 = v31;
  v133[1] = 0;
  v135 = v31;
  v136 = 0;
  v137 = 0LL;
  if ( v31 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)v31 + 3);
    v31 = v106;
    v134 = -1LL;
  }
  v140 = 0;
  v141 = 0LL;
  if ( v32 )
  {
    v31 = v32;
    v139 = v32;
  }
  else
  {
    v139 = v31;
    if ( !v31 )
      goto LABEL_54;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v31 + 3);
  v138 = -1LL;
LABEL_54:
  v36 = (DXGGLOBAL **)SessionViewOwner;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)SessionViewOwner + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(v36[2], (struct DXGADAPTER *)v36);
  v37 = v106;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v106 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v106 + 2), v106);
  if ( v108 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v108 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v108 + 2), v108);
  }
  else
  {
    v108 = v106;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v37 + 3);
  v38 = v106;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v38 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v38 + 38);
  if ( *((_DWORD *)v106 + 50) != 1 )
  {
    v10 = 1144079365;
    LODWORD(v11) = -1073741130;
    WdLogSingleEntry4(3LL, v111.HighPart, a1.LowPart, (unsigned int)v6, 1144079365LL);
    v39 = (char *)v106 + 136;
    WdLogGlobalForLineNumber = 7349;
    _InterlockedDecrement((volatile signed __int32 *)v106 + 38);
    ExReleasePushLockSharedEx(v39, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v106 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v106 + 2), v106);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v133);
    v18 = !v105;
    goto LABEL_21;
  }
  v40 = v106;
  *(_DWORD *)(a4 + 832) = *((_DWORD *)v106 + 110);
  *(_DWORD *)(a4 + 836) = *((_DWORD *)v40 + 105);
  *(_DWORD *)(a4 + 840) = *((_DWORD *)v40 + 106);
  *(_DWORD *)(a4 + 844) = *((_DWORD *)v40 + 107);
  *(_DWORD *)(a4 + 848) = *((_DWORD *)v40 + 108);
  *(_DWORD *)(a4 + 852) = *((_DWORD *)v40 + 109);
  *(_DWORD *)(a4 + 1636) = (*((_DWORD *)v40 + 111) >> 7) & 1;
  *(_DWORD *)(a4 + 1640) = *((_DWORD *)v40 + 74) > 1u;
  *(_DWORD *)(a4 + 856) = *((_DWORD *)v40 + 751);
  DXGADAPTER::GetDeviceDescriptor(v40, 0x100u, (unsigned __int16 *)(a4 + 860));
  RtlStringCbCopyNW(
    (char *)(a4 + 1116),
    v42,
    *(char **)(*(_QWORD *)(v41 + 1928) + 8LL),
    **(unsigned __int16 **)(v41 + 1928));
  _InterlockedDecrement((volatile signed __int32 *)(v43 + 152));
  ExReleasePushLockSharedEx(v43 + 136, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v106 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v106 + 2), v106);
  v44 = v6;
  if ( v108 )
  {
    v130[1] = v108;
    _InterlockedIncrement64((volatile signed __int64 *)v108 + 3);
    v45 = v108;
    v130[0] = -1LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v45 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)v45 + 38);
    v131 = 1;
    if ( *((_DWORD *)v108 + 50) != 1 )
    {
      v10 = 1144079366;
      LODWORD(v11) = -1073741130;
      WdLogSingleEntry4(3LL, v111.HighPart, a1.LowPart, (unsigned int)v6, 1144079366LL);
      WdLogGlobalForLineNumber = 7398;
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v130);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v133);
      v18 = !v105;
LABEL_21:
      if ( !v18 )
        DxgkReleaseSessionModeChangeLock();
      goto LABEL_143;
    }
    v99 = v6;
    if ( (_DWORD)v6 == -1 || (v99 = v6, !(unsigned int)DxgIsSessionUsingWddmMonitors()) )
    {
      v46 = v108;
LABEL_150:
      v44 = v99;
      goto LABEL_151;
    }
    v46 = v108;
    v47 = *((_QWORD *)v108 + 390);
    if ( !v47 )
    {
      v48 = -1;
LABEL_139:
      LODWORD(v11) = -1073741811;
      v97 = 1144079367;
      v88 = v111.HighPart;
      v89 = v48;
      WdLogSingleEntry5(2LL, (unsigned int)v6, v48, v111.HighPart, a1.LowPart, 1144079367LL);
      WdLogGlobalForLineNumber = 7635;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Caller specified VidPnSourceId 0x%I64x is bigger than the total number of VidPnSources 0x%I64x on adapter (0x%I6"
         "4x%08I64x). (0x%I64x)",
        (unsigned int)v6,
        v89,
        v88,
        a1.LowPart,
        1144079367LL);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v130);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v133);
      v30 = !v105;
      goto LABEL_140;
    }
    if ( (unsigned int)v6 >= *(_DWORD *)(v47 + 96) )
    {
      v48 = *(_DWORD *)(v47 + 96);
      goto LABEL_139;
    }
    SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)SessionViewOwner + 390), v6);
    if ( !SessionViewOwner )
    {
      *(_DWORD *)(a4 + 1916) = -1;
      SessionViewOwner = 0LL;
      *(_OWORD *)(a4 + 1644) = 0LL;
      *(_OWORD *)(a4 + 1952) = 0LL;
      *(_QWORD *)(a4 + 1924) = 0LL;
      *(_QWORD *)(a4 + 1932) = 5LL;
      *(_DWORD *)(a4 + 1940) = 1;
      *(_QWORD *)(a4 + 1944) = 1LL;
      *(_QWORD *)(a4 + 1968) = 0LL;
      SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
      v44 = v6;
LABEL_151:
      *(_DWORD *)(a4 + 20) = *((_DWORD *)v46 + 110);
      *(_DWORD *)(a4 + 24) = *((_DWORD *)v46 + 105);
      *(_DWORD *)(a4 + 28) = *((_DWORD *)v46 + 106);
      *(_DWORD *)(a4 + 32) = *((_DWORD *)v46 + 107);
      *(_DWORD *)(a4 + 36) = *((_DWORD *)v46 + 108);
      *(_DWORD *)(a4 + 40) = *((_DWORD *)v46 + 109);
      *(_DWORD *)(a4 + 824) = (*((_DWORD *)v46 + 111) >> 7) & 1;
      *(_DWORD *)(a4 + 828) = *((_DWORD *)v46 + 74) > 1u;
      *(_DWORD *)(a4 + 44) = *((_DWORD *)v46 + 751);
      DXGADAPTER::GetDeviceDescriptor(v46, 0x100u, (unsigned __int16 *)(a4 + 48));
      RtlStringCbCopyNW(
        (char *)(a4 + 304),
        v93,
        *(char **)(*((_QWORD *)v46 + 241) + 8LL),
        **((unsigned __int16 **)v46 + 241));
      if ( (*((_DWORD *)v46 + 111) & 0x100) != 0 )
        v4 = v8;
      *(_QWORD *)(a4 + 2044) = v4;
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v130);
      goto LABEL_154;
    }
    v110 = -1;
    DmmGetMostImportantClientVidPnPathTargetsFromSource(v46, v6, &v110);
    *(_DWORD *)(a4 + 2052) = *(_DWORD *)(a4 + 2052) & 0xFFFF7FFF | (*((_DWORD *)v46 + 111) >> 3) & 0x8000;
    if ( v110 == -1 )
      TargetUsage = 0;
    else
      TargetUsage = DmmGetTargetUsage((__int64)v46, v110, 0LL);
    *(_DWORD *)(a4 + 2028) = TargetUsage;
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v46 + 390), v6);
    v114 = DisplayModeInfo;
    if ( *(_DWORD *)(a4 + 2028) )
    {
      *(_OWORD *)(a4 + 1644) = 0LL;
      *(_OWORD *)(a4 + 1952) = 0LL;
    }
    else
    {
      *(_OWORD *)(a4 + 1644) = *(_OWORD *)((char *)SessionViewOwner + 24);
      *(_OWORD *)(a4 + 1952) = *(_OWORD *)(4024LL * (unsigned int)v6 + *(_QWORD *)(*((_QWORD *)v46 + 390) + 128LL) + 688);
    }
    *(_DWORD *)(a4 + 1916) = v110;
    *(_DWORD *)(a4 + 1920) = ADAPTER_DISPLAY::GetDisplayId(*((ADAPTER_DISPLAY **)v46 + 390), v6);
    *(_DWORD *)(a4 + 1924) = *(_DWORD *)DisplayModeInfo;
    *(_DWORD *)(a4 + 1928) = *((_DWORD *)DisplayModeInfo + 1);
    switch ( *((_DWORD *)DisplayModeInfo + 2) )
    {
      case 0x14:
        v51 = 3;
        break;
      case 0x15:
      case 0x16:
        v51 = 4;
        break;
      case 0x17:
        v51 = 2;
        break;
      case 0x29:
        v51 = 1;
        break;
      default:
        v51 = 5;
        break;
    }
    *(_DWORD *)(a4 + 1932) = v51;
    v52 = *((_DWORD *)DisplayModeInfo + 4);
    if ( v52 == -2 && *((_DWORD *)DisplayModeInfo + 5) == -2 )
    {
      *(_DWORD *)(a4 + 1936) = 64;
      v53 = 1;
    }
    else
    {
      *(_DWORD *)(a4 + 1936) = v52;
      v53 = *((_DWORD *)DisplayModeInfo + 5);
    }
    *(_DWORD *)(a4 + 1940) = v53;
    CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)v46 + 390), v6, 2);
    v55 = *(_DWORD *)(a4 + 1916);
    *(_DWORD *)(a4 + 1944) = CurrentOrientation;
    *(_DWORD *)(a4 + 1948) = *((_DWORD *)DisplayModeInfo + 6);
    *(_QWORD *)&v122.UsageHints.0 = 0LL;
    v122.DitheringSupport.Value = 0;
    LinkInfoFromTarget = MonitorGetLinkInfoFromTarget((__int64)v46, v55, &v122);
    v57 = *(_DWORD *)(a4 + 2052);
    v58 = (unsigned int *)(a4 + 2052);
    if ( LinkInfoFromTarget < 0 )
    {
      v61 = v57 & 0xFFFFB61F;
    }
    else
    {
      v59 = (__int16)v122.Capabilities.0;
      v60 = v57 & 0xFFFFF61F | 0x20 | ((*(_BYTE *)&v122.Capabilities.0 & 1) << 6) & 0x7F | (unsigned __int8)(32 * (*(_BYTE *)&v122.Capabilities.0 & 4)) | ((*(_BYTE *)&v122.Capabilities.0 & 2) << 7) & 0xF7FF | (4 * (*(_WORD *)&v122.Capabilities.0 & 0x200));
      *(_DWORD *)(a4 + 2052) = v60;
      if ( *((_BYTE *)v46 + 3068) )
      {
        v61 = v60 | 0x4000;
        v58 = (unsigned int *)(a4 + 2052);
      }
      else
      {
        v61 = v60 & 0xFFFFBFFF | (8 * (v59 & 0x800));
      }
    }
    v62 = SessionViewOwner;
    *v58 = v61;
    *(_QWORD *)(a4 + 1968) = *((_QWORD *)v62 + 8);
    SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
    v44 = v6;
    v99 = v6;
    if ( *(_DWORD *)(v63 + 40) == 1 )
    {
      v67 = v110;
      v100 = v110;
      v68 = WdLogNewEntry5_WdTrace(v64, v63, v65, v66);
      *(_QWORD *)(v68 + 24) = v67;
      *(_QWORD *)(v68 + 32) = v46;
      WdLogGlobalForLineNumber = 2330;
      if ( (_DWORD)v67 != -1 )
      {
        if ( !*((_QWORD *)v46 + 390) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2351;
        }
        v69 = *(MONITOR_MGR **)(*((_QWORD *)v46 + 390) + 112LL);
        if ( v69 )
        {
          v116 = 0LL;
          v115 = DxgkGetAdapterDeviceDesc;
          MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v115);
          MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v69, v100, 0, (struct MONITOR_REF_ACCESSOR *)&v115);
          if ( MonitorInstance == -1073741275 )
          {
            WdLogSingleEntry2(7LL, v100, v69);
            WdLogGlobalForLineNumber = 2376;
          }
          else
          {
            if ( MonitorInstance >= 0 )
            {
              v73 = v116;
              SessionViewOwner = v116;
              if ( !v116 )
              {
                WdLogSingleEntry0(1LL);
                v73 = SessionViewOwner;
                WdLogGlobalForLineNumber = 2388;
              }
              v99 = v6;
              v44 = v6;
              v116 = 0LL;
              SessionViewOwner = MONITOR_MGR::_GetMonitorHandle(v73);
              MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v115);
              v112.Value = 0;
              v113 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
              CurrentWireFormatAndColorSpace = DmmGetCurrentWireFormatAndColorSpace(v46, v6, v110, &v112, &v113);
              v75.0 = v112.0;
              if ( CurrentWireFormatAndColorSpace >= 0 )
              {
                v76 = v113;
              }
              else
              {
                v113 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
                v75.Value = v112.Value & 0xFFFFFF03 | 8;
                v76 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
                v112.0 = v75.0;
              }
              *(_DWORD *)(a4 + 1976) = GetColorDepthFromPickedWireFormat(v75);
              v77 = v114;
              *(_DWORD *)(a4 + 1980) = v76;
              v125 = 0LL;
              *(_DWORD *)(a4 + 2040) = *((_DWORD *)v77 + 19);
              v111.LowPart = 0;
              LOWORD(v111.HighPart) = 0;
              BYTE2(v111.HighPart) = 0;
              v126 = 0LL;
              v127 = 0LL;
              if ( (v76 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020
                 || (v103 = 0, v76 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL))
                && (v103 = 1, v76 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL) )
              {
                v78 = *((_DWORD *)v46 + 111);
                v104 = 1;
                if ( (v78 & 0x200) == 0 && (v78 & 8) == 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7530;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"(PickedColorSpace != D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL) || pDisplayAdapter->GetAdapter"
                     "()->IsXBoxOneDevice() || pDisplayAdapter->GetAdapter()->IsSoftGPU()",
                    7530LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
              }
              else
              {
                v104 = 0;
              }
              v79 = SessionViewOwner;
              if ( (int)MonitorGetAdvancedColorParams(
                          SessionViewOwner,
                          (struct DISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN *)&v103,
                          (struct DISPLAY_COLORIMETRY_INTERNAL *)&v125,
                          (struct DISPLAY_COLORIMETRY_FLAGS_INTERNAL_OUT *)&v111) >= 0 )
              {
                *(_OWORD *)(a4 + 1984) = v125;
                *(_OWORD *)(a4 + 2000) = v126;
                v80 = *(_DWORD *)(a4 + 2052);
                *(_QWORD *)(a4 + 2016) = v127;
                *(_DWORD *)(a4 + 2024) = DWORD2(v127);
                *(_DWORD *)(a4 + 2052) = (BYTE1(v111.LowPart) != 0 ? 0x1000 : 0) | (LOBYTE(v111.LowPart) != 0 ? 0x200 : 0) | v80 & 0xFFFFEDFF;
              }
              MONITOR_MGR::AcquireMonitorShared(&v123, (__int64)v79);
              if ( v123 )
              {
                v107 = *(_BYTE *)(v123 + 176);
                ExReleaseResourceLite((PERESOURCE)(v123 + 40));
                KeLeaveCriticalRegion();
                v123 = 0LL;
                MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v124);
                if ( v123 )
                {
                  ExReleaseResourceLite((PERESOURCE)(v123 + 40));
                  KeLeaveCriticalRegion();
                }
                v85 = SessionViewOwner;
                v99 = v44;
                *(_DWORD *)(a4 + 2052) ^= ((unsigned __int16)*(_DWORD *)(a4 + 2052) ^ (unsigned __int16)(v107 >> 31)) & 0x2000;
                MonitorReleaseMonitorHandle(v46, v85, v83, v84);
              }
              else
              {
                WdLogSingleEntry1(2LL, -1073741275LL);
                WdLogGlobalForLineNumber = 2137;
                MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v124);
                if ( v123 )
                {
                  ExReleaseResourceLite((PERESOURCE)(v123 + 40));
                  KeLeaveCriticalRegion();
                }
                *(_DWORD *)(a4 + 2052) &= ~0x2000u;
                MonitorReleaseMonitorHandle(v46, SessionViewOwner, v81, v82);
              }
              goto LABEL_108;
            }
            WdLogSingleEntry2(2LL, v100, v69);
            WdLogGlobalForLineNumber = 2383;
          }
          MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v115);
        }
        else
        {
          WdLogSingleEntry1(2LL, v46);
          WdLogGlobalForLineNumber = 2361;
        }
      }
      v99 = v6;
      v44 = v6;
    }
LABEL_108:
    *(_DWORD *)(a4 + 2052) &= ~0x400u;
    v71 = 4024LL * v44;
    v72 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v46 + 390) + 128LL) + v71 + 3804);
    *(_QWORD *)(a4 + 2032) = v72;
    if ( v72 )
    {
      _mm_lfence();
      v46 = v108;
      if ( *(_DWORD *)(*((_QWORD *)v108 + 390)
                     + 80LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v108 + 390) + 128LL) + v71 + 3804)
                     + 888) == 1 )
      {
        *(_DWORD *)(a4 + 2036) = 1;
      }
      else
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 7592;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"Invalid DXGK_SYNC_LOCK_STYLE, fallback to disable the output SyncLock.",
          7592LL,
          0LL,
          0LL,
          0LL,
          0LL);
        *(_DWORD *)(a4 + 2032) = 0;
      }
    }
    v86 = *(_QWORD *)(*((_QWORD *)v46 + 390) + 128LL) + v71;
    if ( !v86 )
      goto LABEL_151;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v132, (struct DXGFASTMUTEX *const)(v86 + 3808), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v132);
    v87 = *(_DWORD *)(v86 + 16LL * *(unsigned int *)(v86 + 4016) + 3868);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v132);
    *(_DWORD *)(a4 + 2052) = ((v87 & 2) << 15) | *(_DWORD *)(a4 + 2052) & 0xFFFEFFFF;
    goto LABEL_150;
  }
LABEL_154:
  *(_WORD *)(a4 + 306) = 92;
  *(_WORD *)(a4 + 1118) = 92;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v133);
  if ( v105 )
    DxgkReleaseSessionModeChangeLock();
  *(_DWORD *)(a4 + 2052) &= 0xFFFFFFE7;
  if ( *(_DWORD *)a4 == -11 )
  {
    v102[0] = 0;
    v101 = 0;
    v94 = DxgkpAdapterCheckStereoMode(a1, v44, &v101, v102);
    if ( v94 < 0 )
    {
      WdLogSingleEntry1(3LL, v94);
      WdLogGlobalForLineNumber = 7723;
    }
    else
    {
      *(_DWORD *)(a4 + 2052) = (v102[0] != 0 ? 8 : 0) | (v101 != 0 ? 0x10 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFFFE7;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v117);
  if ( v119 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v95, (__int64)&EventProfilerExit, v96, v117);
  return 0LL;
}
