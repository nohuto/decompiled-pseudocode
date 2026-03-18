/*
 * XREFs of xxxSystemParametersInfoWorker @ 0x1C00D9A30
 * Callers:
 *     EditionxxxSystemParametersInfoWorker @ 0x1C00D9A10 (EditionxxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?IsWDAGContainer@@YAHXZ @ 0x1C0010DA4 (-IsWDAGContainer@@YAHXZ.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C001D40C (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C002A700 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C002D4B0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C0033170 (xxxSendNotifyMessage.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003B918 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C0041160 (CheckWinstaAttributeAccess.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C0043A44 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GreExtGetObjectW @ 0x1C004B0D0 (GreExtGetObjectW.c)
 *     xxxInternalInvalidate @ 0x1C004FB80 (xxxInternalInvalidate.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1C005A14C (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     ?UpdateCurrent@CTopologyManager@@SAXXZ @ 0x1C005A528 (-UpdateCurrent@CTopologyManager@@SAXXZ.c)
 *     xxxSetDeskWallpaper @ 0x1C0062778 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C0062AC0 (LoadWallpaperFilenameFromRegistry.c)
 *     bSetDevDragWidth @ 0x1C0088950 (bSetDevDragWidth.c)
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXXZ @ 0x1C00889D8 (-UpdateDesktopMonitorNavigationOrder@@YAXXZ.c)
 *     ClearKeyboardStates @ 0x1C0088ED8 (ClearKeyboardStates.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00892D4 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     GetDPIServerInfo @ 0x1C00899B8 (GetDPIServerInfo.c)
 *     GetProcessDpiServerInfo @ 0x1C00899EC (GetProcessDpiServerInfo.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C009A708 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x1C009DA0C (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C009F9A4 (xxxInvalidateWallpaperWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _MonitorFromRect @ 0x1C00AE960 (_MonitorFromRect.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00AF200 (IsWindowUnderActiveLockScreen.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00B29B8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00B2C00 (PostShellHookMessagesEx.c)
 *     CreateBitmapStrip @ 0x1C00D4250 (CreateBitmapStrip.c)
 *     GreSetFontEnumeration @ 0x1C00D5580 (GreSetFontEnumeration.c)
 *     GetKbdLangSwitch @ 0x1C00D5694 (GetKbdLangSwitch.c)
 *     GreSetLCDOrientation @ 0x1C00D59CC (GreSetLCDOrientation.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C00D60F8 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     GetEasTimeout @ 0x1C00D61F0 (GetEasTimeout.c)
 *     SetDesktopPattern @ 0x1C00D6380 (SetDesktopPattern.c)
 *     ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x1C00D64F4 (-xxxSetIMEShowStatus@@YAHHHPEAH@Z.c)
 *     _SetDoubleClickTime @ 0x1C00D801C (_SetDoubleClickTime.c)
 *     SetMouseTrails @ 0x1C00D8380 (SetMouseTrails.c)
 *     GetMonitorWorkRect @ 0x1C00D8B88 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C00D8BCC (GetMonitorRect.c)
 *     SetKeyboardRate @ 0x1C00D8C70 (SetKeyboardRate.c)
 *     GetDPIMetrics @ 0x1C00D8D88 (GetDPIMetrics.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C00D9628 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 *     ReadPointerDeviceSettingsFull @ 0x1C00DD4E0 (ReadPointerDeviceSettingsFull.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00DE3A8 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00E10B4 (xxxUpdateSystemIconsFromRegistry.c)
 *     GetWindowNCMetrics @ 0x1C00E8CD4 (GetWindowNCMetrics.c)
 *     GetDpiDependentMetric @ 0x1C00E91E0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00EB100 (GetDpiForSystem.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01BEBD8 (-_SwapMouseButton@@YAHH@Z.c)
 *     GetUserHandedness @ 0x1C01C2960 (GetUserHandedness.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444444@Z @ 0x1C01C69D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@.c)
 *     ?NotifyISMPenButtonYieldSettingChange@@YAXXZ @ 0x1C01C6C28 (-NotifyISMPenButtonYieldSettingChange@@YAXXZ.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C73BC (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01C760C (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01C770C (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01C780C (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01C7B3C (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01C7D50 (EditionxxxBroadcastSPIChange.c)
 *     UpdateWinIniInt @ 0x1C01C7DF0 (UpdateWinIniInt.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1C01C7E84 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     xxxMetricsRecalc @ 0x1C01C804C (xxxMetricsRecalc.c)
 *     WritePointerDeviceSettingsFull @ 0x1C01F320C (WritePointerDeviceSettingsFull.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C02015F8 (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C0201A90 (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C0201B0C (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C0201B88 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?ValidateDesktopRecalcSetting@DesktopRecalcSettings@@YA_NIK@Z @ 0x1C0225BEC (-ValidateDesktopRecalcSetting@DesktopRecalcSettings@@YA_NIK@Z.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C0240190 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C0240DB0 (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     GetMonitorMenuRect @ 0x1C024B3C4 (GetMonitorMenuRect.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C026CAF8 (DwmAsyncNotifyWindowShadowChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSystemParametersInfoWorker(__int64 a1, unsigned int a2, void *a3, int a4)
{
  unsigned int v5; // ebx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v7; // r8
  _QWORD *v8; // rdx
  struct tagWND *v9; // r14
  int updated; // r12d
  unsigned int v11; // r13d
  int v12; // r15d
  unsigned int PointerDeviceSettingsFull; // esi
  Gre::Base *v15; // rcx
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r10
  int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdi
  int v23; // esi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int8 v28; // al
  int v29; // ebx
  int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned int v33; // ebx
  struct _UNICODE_STRING *v34; // rax
  struct _UNICODE_STRING *v35; // rdi
  __int64 v36; // rcx
  __int64 ProcessDpiServerInfo; // rax
  unsigned int v38; // ebx
  unsigned int v39; // r14d
  __int64 v40; // rcx
  unsigned int v41; // ebx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int DpiForSystem; // eax
  __int64 v46; // rcx
  unsigned int v47; // edx
  __int64 v48; // rax
  INT v49; // ebx
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned int v52; // ebx
  unsigned int v53; // r14d
  unsigned int v54; // eax
  __int64 v55; // rcx
  unsigned int v56; // eax
  __int64 v57; // rax
  INT v58; // ebx
  __int64 v59; // rcx
  __int64 v60; // rax
  unsigned int v61; // ebx
  unsigned int v62; // r14d
  int v63; // edi
  int v64; // ecx
  int v65; // ecx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rbx
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 DPIMetrics; // rax
  bool v73; // zf
  struct _UNICODE_STRING *v74; // rdi
  int v75; // ebx
  _DWORD *v76; // rdx
  _DWORD *v77; // rbx
  unsigned int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // rax
  int v84; // eax
  __int64 v85; // rax
  const wchar_t *v86; // rax
  int *v87; // rsi
  __int64 v88; // rcx
  DesktopRecalc *v89; // rsi
  __int64 v90; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  wchar_t *v92; // r9
  __int64 v93; // rax
  int v94; // r8d
  char v95; // dl
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 DispInfo; // rax
  struct CMonitorTopology *v100; // rdx
  int v101; // r8d
  __int64 v102; // rax
  __int64 v103; // rax
  int *v104; // rdi
  __int64 v105; // rcx
  __int64 v106; // rcx
  unsigned int v107; // eax
  _DWORD *v108; // rbx
  int v109; // ecx
  int v110; // edx
  struct tagMOUSEKEYS *v111; // rbx
  int v112; // edx
  unsigned int v113; // eax
  int v114; // edx
  struct _UNICODE_STRING *v115; // rdi
  __int64 v116; // rcx
  __int64 v117; // rdi
  __int64 v118; // rcx
  __int16 v119; // bx
  __int64 v120; // rcx
  _QWORD *v121; // rdx
  _OWORD *v122; // rax
  unsigned __int16 *v123; // rcx
  __int64 v124; // rcx
  const wchar_t *v125; // r9
  const wchar_t *v126; // r9
  struct tagSOUNDSENTRYW *v127; // rbx
  int v128; // edx
  unsigned int v129; // eax
  int v130; // edx
  struct _UNICODE_STRING *v131; // rdi
  unsigned int v132; // r14d
  __int64 v133; // rax
  __int64 v134; // rdi
  const wchar_t *v135; // rbx
  const wchar_t *v136; // r9
  int v137; // r12d
  unsigned int v138; // eax
  _DWORD *v139; // rcx
  int v140; // ecx
  InteractiveControlManager *v141; // rax
  InteractiveControlManager *v142; // rax
  int v143; // edi
  int v144; // r8d
  BOOL v145; // edx
  int v146; // ecx
  __int64 v147; // rcx
  const wchar_t *v148; // rcx
  int v149; // eax
  unsigned int ProfileValue; // eax
  unsigned int v151; // r13d
  int v152; // edx
  int *v153; // rcx
  int v154; // eax
  int v155; // eax
  __int64 v156; // rdx
  CursorApiRouter *v157; // rcx
  CursorApiRouter *v158; // rcx
  __int64 v159; // rax
  __int64 v160; // rax
  void *v161; // rax
  unsigned int v162; // r8d
  __int64 v163; // rax
  __int64 v164; // rbx
  __int64 v165; // rax
  unsigned int v166; // r14d
  int v167; // ebx
  _DWORD *v168; // rax
  int v169; // ebx
  __int64 v170; // rcx
  unsigned int *v171; // rax
  bool v172; // r14
  bool v173; // r15
  BOOL v174; // ebx
  int *v175; // [rsp+20h] [rbp-488h]
  int v176; // [rsp+28h] [rbp-480h]
  int v177; // [rsp+30h] [rbp-478h]
  unsigned int v178; // [rsp+90h] [rbp-418h]
  void *Src; // [rsp+98h] [rbp-410h] BYREF
  int v180; // [rsp+A0h] [rbp-408h] BYREF
  int v181; // [rsp+A4h] [rbp-404h] BYREF
  __int64 v182; // [rsp+A8h] [rbp-400h] BYREF
  wchar_t *v183; // [rsp+B0h] [rbp-3F8h] BYREF
  __int64 v184[2]; // [rsp+B8h] [rbp-3F0h] BYREF
  __int128 v185; // [rsp+C8h] [rbp-3E0h] BYREF
  __int64 v186; // [rsp+D8h] [rbp-3D0h]
  int v187; // [rsp+E0h] [rbp-3C8h] BYREF
  _QWORD *v188; // [rsp+E8h] [rbp-3C0h] BYREF
  int v189; // [rsp+F0h] [rbp-3B8h] BYREF
  int v190; // [rsp+F8h] [rbp-3B0h] BYREF
  __int64 v191; // [rsp+100h] [rbp-3A8h] BYREF
  int v192; // [rsp+108h] [rbp-3A0h] BYREF
  int v193; // [rsp+10Ch] [rbp-39Ch] BYREF
  int v194; // [rsp+110h] [rbp-398h] BYREF
  int v195; // [rsp+114h] [rbp-394h] BYREF
  int v196; // [rsp+118h] [rbp-390h] BYREF
  int v197; // [rsp+11Ch] [rbp-38Ch] BYREF
  __int64 v198; // [rsp+120h] [rbp-388h] BYREF
  __int128 v199; // [rsp+130h] [rbp-378h]
  __int128 v200; // [rsp+140h] [rbp-368h]
  __int128 v201; // [rsp+158h] [rbp-350h] BYREF
  __int128 v202; // [rsp+168h] [rbp-340h] BYREF
  __int128 v203; // [rsp+180h] [rbp-328h] BYREF
  struct tagRECT v204; // [rsp+190h] [rbp-318h] BYREF
  __int128 v205; // [rsp+1A0h] [rbp-308h]
  unsigned __int16 v206[40]; // [rsp+1B0h] [rbp-2F8h] BYREF
  _WORD v207[40]; // [rsp+200h] [rbp-2A8h] BYREF
  _BYTE v208[528]; // [rsp+250h] [rbp-258h] BYREF

  LODWORD(v184[0]) = a4;
  v5 = a1;
  v178 = a1;
  v190 = a1;
  Src = a3;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v8 = CurrentProcessWin32Process;
  v188 = CurrentProcessWin32Process;
  v9 = 0LL;
  if ( CurrentProcessWin32Process )
  {
    if ( !*CurrentProcessWin32Process )
      v8 = 0LL;
    v188 = v8;
  }
  updated = 0;
  v180 = 0;
  v11 = v184[0] & 1;
  v12 = (LODWORD(v184[0]) >> 1) & 1;
  LODWORD(v191) = v12;
  PointerDeviceSettingsFull = !(v184[0] & 1);
  v181 = PointerDeviceSettingsFull;
  LODWORD(v184[0]) = v184[0] & 0x8000;
  HIDWORD(v182) = 0;
  v185 = 0LL;
  v186 = 0LL;
  v207[0] = 0;
  switch ( v5 )
  {
    case 7u:
    case 8u:
    case 0xCu:
    case 0x27u:
    case 0x28u:
    case 0x31u:
    case 0x3Eu:
    case 0x3Fu:
    case 0x5Cu:
    case 0x61u:
      goto LABEL_253;
    case 0x4Fu:
    case 0x50u:
    case 0x53u:
    case 0x54u:
      *(_DWORD *)Src = 0;
      return 1LL;
    case 0x51u:
    case 0x52u:
    case 0x55u:
    case 0x56u:
      return 1LL;
    default:
      v189 = v5 & 1;
      if ( (v5 & 1) == 0 || v5 != 8193 || *((int *)v8 + 3) < 0 )
        goto LABEL_12;
      if ( !CanForceForeground((const struct tagPROCESSINFO *)v8) )
      {
LABEL_253:
        UserSetLastError(87LL);
        return 0LL;
      }
      v8 = v188;
LABEL_12:
      v15 = (Gre::Base *)gpepCSRSS;
      if ( *v8 != gpepCSRSS )
      {
        if ( v5 > 0x1027 )
        {
LABEL_19:
          if ( (v5 & 0x3000) == 0 || (v5 & 1) == 0 )
          {
LABEL_22:
            LODWORD(v182) = 2;
            if ( RtlAreAllAccessesGranted(*((_DWORD *)v8 + 170), 2u) )
            {
              v16 = 1LL;
              v17 = 1;
            }
            else
            {
              UserSetLastError(5LL);
              v17 = 0;
              v16 = 1LL;
            }
            if ( v17 )
            {
LABEL_26:
              v18 = 2LL;
              v8 = v188;
              if ( (_DWORD)v182 != 2 )
                goto LABEL_30;
              goto LABEL_29;
            }
            return 0LL;
          }
        }
        else if ( v5 != 4135 )
        {
          switch ( v5 )
          {
            case 2u:
            case 4u:
            case 6u:
            case 0xBu:
            case 0xFu:
            case 0x11u:
            case 0x13u:
            case 0x14u:
            case 0x15u:
            case 0x17u:
            case 0x1Au:
            case 0x1Cu:
            case 0x1Du:
            case 0x1Eu:
            case 0x20u:
            case 0x21u:
            case 0x22u:
            case 0x24u:
            case 0x25u:
            case 0x2Au:
            case 0x2Cu:
            case 0x2Eu:
            case 0x2Fu:
            case 0x33u:
            case 0x35u:
            case 0x37u:
            case 0x39u:
            case 0x3Bu:
            case 0x3Du:
            case 0x41u:
            case 0x43u:
            case 0x45u:
            case 0x47u:
            case 0x49u:
            case 0x4Bu:
            case 0x4Cu:
            case 0x4Du:
            case 0x57u:
            case 0x58u:
            case 0x5Au:
            case 0x5Bu:
            case 0x60u:
            case 0x63u:
            case 0x65u:
            case 0x67u:
            case 0x6Bu:
            case 0x6Du:
            case 0x77u:
            case 0xA1u:
            case 0xA3u:
              break;
            case 0xDu:
            case 0x18u:
              if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) != 0 )
                goto LABEL_22;
              if ( !a2 )
                return 1LL;
              break;
            default:
              goto LABEL_19;
          }
        }
        LODWORD(v182) = 16;
        if ( (unsigned int)CheckWinstaAttributeAccess(16LL) )
        {
          v16 = 1LL;
          goto LABEL_26;
        }
        return 0LL;
      }
      v16 = 1LL;
      v18 = 2LL;
LABEL_29:
      v181 = 1;
      PointerDeviceSettingsFull = 1;
LABEL_30:
      if ( v5 <= 0x1026 )
      {
        if ( v5 == 4134 )
        {
          LOBYTE(v9) = gbBlockSendInputResets != 0;
          *(_DWORD *)Src = (_DWORD)v9;
          v19 = v12;
        }
        else
        {
          switch ( v5 )
          {
            case 1u:
              *(_DWORD *)Src = (gdwPUDFlags >> 19) & 1;
              v19 = v12;
              goto LABEL_693;
            case 2u:
              if ( v11 )
              {
                RtlLoadStringOrError(105 - (unsigned int)(a2 != 0), v206, 10LL);
                updated = FastUpdateWinIni(0LL, 11LL, 9LL, v206);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( a2 )
              {
                gdwPUDFlags |= 0x80000u;
                v19 = v12;
                goto LABEL_693;
              }
              gdwPUDFlags &= ~0x80000u;
              goto LABEL_40;
            case 3u:
              v21 = *(unsigned int *)(SGDGetUserSessionState(v15) + 15928);
              *(_DWORD *)Src = v21;
              *((_DWORD *)Src + 1) = *(_DWORD *)(SGDGetUserSessionState(v21) + 15932);
              *((_DWORD *)Src + 2) = (unsigned __int8)MouseAccelerationEnabled();
              v19 = v12;
              goto LABEL_693;
            case 4u:
              if ( !v11 )
                goto LABEL_69;
              v22 = CreateProfileUserName(&v185);
              HIDWORD(v182) = UpdateWinIniInt(v22, 12LL, 10LL, *(unsigned int *)Src);
              v23 = UpdateWinIniInt(v22, 12LL, 11LL, *((unsigned int *)Src + 1));
              v24 = UpdateWinIniInt(v22, 12LL, 12LL, *((unsigned int *)Src + 2));
              LODWORD(v182) = v24;
              v25 = HIDWORD(v182);
              if ( !HIDWORD(v182) )
                goto LABEL_64;
              if ( v23 && v24 )
              {
                updated = 1;
              }
              else
              {
                v26 = SGDGetUserSessionState(HIDWORD(v182));
                UpdateWinIniInt(v22, 12LL, 10LL, *(unsigned int *)(v26 + 15928));
LABEL_64:
                if ( v23 )
                {
                  v27 = SGDGetUserSessionState(v25);
                  UpdateWinIniInt(v22, 12LL, 11LL, *(unsigned int *)(v27 + 15932));
                }
                if ( (_DWORD)v182 )
                {
                  v28 = MouseAccelerationEnabled();
                  UpdateWinIniInt(v22, 12LL, 12LL, v28);
                }
              }
              PointerDeviceSettingsFull = updated;
              FreeProfileUserName(v22, &v185);
LABEL_69:
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              v29 = *(_DWORD *)Src;
              *(_DWORD *)(SGDGetUserSessionState(v15) + 15928) = v29;
              v30 = *((_DWORD *)Src + 1);
              *(_DWORD *)(SGDGetUserSessionState(v31) + 15932) = v30;
              LOBYTE(v32) = *((_DWORD *)Src + 2) != 0;
              EnableMouseAcceleration(v32);
              v19 = v12;
              goto LABEL_693;
            case 5u:
              *(_DWORD *)Src = *(_DWORD *)(GetDPIServerInfo((__int64)v15) + 4);
              v19 = v12;
              goto LABEL_693;
            case 6u:
              v33 = 1;
              if ( (int)a2 > 1 )
                v33 = a2;
              if ( v33 >= 0x32 )
                v33 = 50;
              if ( v33 == (__int64)*(int *)(GetDPIServerInfo((__int64)v15) + 4) )
              {
                PointerDeviceSettingsFull = 1;
                v19 = v12;
              }
              else
              {
                v34 = (struct _UNICODE_STRING *)CreateProfileUserName(&v185);
                v35 = v34;
                if ( v11 )
                {
                  updated = SetWindowMetricInt(v34, 0x88u, v33);
                  PointerDeviceSettingsFull = updated;
                }
                if ( PointerDeviceSettingsFull )
                {
                  xxxSetAndDrawNCMetrics(v35, v33, 0LL);
                  ProcessDpiServerInfo = GetProcessDpiServerInfo(v36);
                  bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), *(_DWORD *)(ProcessDpiServerInfo + 4) + 3);
                }
                FreeProfileUserName(v35, &v185);
                v19 = v12;
              }
              goto LABEL_693;
            case 0xAu:
              *(_DWORD *)Src = *(_DWORD *)(SGDGetUserSessionState(v15) + 12612) & 0x1F;
              v19 = v12;
              goto LABEL_693;
            case 0xBu:
              v39 = 31;
              if ( a2 <= 0x1F )
                v39 = a2;
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 13LL, 13LL, v39);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              v41 = v39 | *(_DWORD *)(SGDGetUserSessionState(v15) + 12612) & 0xFFFFFFE0;
              goto LABEL_105;
            case 0xDu:
              if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) != 0 )
              {
                DpiForSystem = GetDpiForSystem(v15, v8);
                *(_DWORD *)Src = GetDpiDependentMetric(18LL, DpiForSystem);
                v19 = v12;
                goto LABEL_693;
              }
              if ( !a2 )
                goto LABEL_40;
              if ( (W32GetCurrentThreadDpiAwarenessContext(v15) & 0xF) != 0 )
              {
                v48 = PsGetCurrentProcessWin32Process(v46);
                if ( v48 && !*(_QWORD *)v48 )
                  v48 = 0LL;
                v49 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), *(unsigned __int16 *)(v48 + 284));
                v51 = PsGetCurrentProcessWin32Process(v50);
                if ( v51 && !*(_QWORD *)v51 )
                  v51 = 0LL;
                a2 = EngMulDiv(v49, 96, *(unsigned __int16 *)(v51 + 284));
                v47 = v49;
              }
              else
              {
                v47 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), 96);
              }
              v52 = *(_DWORD *)(gpsi + 2304LL);
              if ( v47 > v52 )
                v52 = v47;
              v53 = *(_DWORD *)(gpsi + 2424LL);
              if ( a2 > v53 )
                v53 = a2;
              if ( v11 )
              {
                updated = SetWindowMetricInt(0LL, 0x40u, v52);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              SetDpiDepSysMet(18LL, v52);
              *(_DWORD *)(gpsi + 2476LL) = v53;
              v19 = v12;
              goto LABEL_693;
            case 0xEu:
              *(_DWORD *)Src = (int)abs32(giScreenSaveTimeOutMs) / 1000;
              v19 = v12;
              goto LABEL_693;
            case 0xFu:
              v183 = (wchar_t *)giScreenSaveTimeOutMs;
              if ( gfSwitchInProgress )
                return 0LL;
              if ( gdwRITdaemonLockState && !LODWORD(v184[0]) )
                goto LABEL_223;
              v63 = 1000 * a2;
              LODWORD(v182) = v63;
              v64 = 1000 * GetEasTimeout();
              v187 = v64;
              if ( v64 )
              {
                if ( (HIDWORD(v182) = 1, *(int *)v183 > 0) && v64 < v63 || v63 <= 0 )
                {
                  UserSetLastError(1260LL);
                  v11 = 0;
                  PointerDeviceSettingsFull = 0;
                  v181 = 0;
                }
              }
              if ( !(unsigned int)CheckDesktopPolicy(0LL, 99LL) )
                goto LABEL_177;
              if ( !HIDWORD(v182) )
                goto LABEL_176;
              LODWORD(v184[0]) = 0;
              v176 = 2;
              v175 = (int *)v184;
              v63 = v182;
              if ( (unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL, 0LL) )
              {
                v65 = 1000 * LODWORD(v184[0]);
                LODWORD(v184[0]) = v65;
                if ( v65 )
                {
                  if ( v65 < v187 && *(int *)v183 > 0 && v65 < (int)v182 )
                  {
                    UserSetLastError(1260LL);
LABEL_176:
                    v181 = 0;
                    PointerDeviceSettingsFull = 0;
                    v11 = 0;
                  }
                }
              }
LABEL_177:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 99LL, v63 / 0x3E8u);
                v180 = updated;
                PointerDeviceSettingsFull = updated;
                v181 = updated;
              }
              if ( PointerDeviceSettingsFull )
              {
                if ( !gbBlockSendInputResets )
                {
                  CInputGlobals::UpdateLastInputTime(
                    gpInputGlobals,
                    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                    7LL);
                  updated = v180;
                  PointerDeviceSettingsFull = v181;
                }
                if ( *(int *)v183 < 0 && !HIDWORD(v182) )
                  v63 = -v63;
                *(_DWORD *)v183 = v63;
              }
              v19 = v12;
              goto LABEL_693;
            case 0x10u:
              LOBYTE(v9) = giScreenSaveTimeOutMs > 0;
              *(_DWORD *)Src = (_DWORD)v9;
              v19 = v12;
              goto LABEL_693;
            case 0x11u:
              if ( a2 - 2 <= 0xFFFFFFFC )
                return 0LL;
              if ( gdwRITdaemonLockState && !LODWORD(v184[0]) )
                goto LABEL_223;
              gbLockConsoleActive = a2 == -1;
              if ( gfSwitchInProgress )
                return 0LL;
              if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
                v181 = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 100LL, a2);
                v180 = updated;
                PointerDeviceSettingsFull = updated;
                v181 = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( !gbBlockSendInputResets )
              {
                CInputGlobals::UpdateLastInputTime(
                  gpInputGlobals,
                  (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                  7LL);
                updated = v180;
                PointerDeviceSettingsFull = v181;
              }
              if ( giScreenSaveTimeOutMs >= 0 )
                goto LABEL_218;
              if ( a2 )
                goto LABEL_219;
              if ( giScreenSaveTimeOutMs < 0 )
                goto LABEL_40;
LABEL_218:
              if ( a2 )
                goto LABEL_40;
LABEL_219:
              giScreenSaveTimeOutMs = -giScreenSaveTimeOutMs;
              v19 = v12;
              goto LABEL_693;
            case 0x14u:
              v69 = CreateProfileUserName(&v185);
              if ( (unsigned int)CheckDesktopPolicy(v69, 67LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( !v11 )
                goto LABEL_238;
              if ( a2 == -1 )
              {
                PointerDeviceSettingsFull = 1;
              }
              else
              {
                FastGetProfileStringFromIDW(v69, 4LL, 67LL, &word_1C03123AC, v208, 260, 8);
                updated = FastUpdateWinIni(v69, 4LL, 67LL, Src);
                PointerDeviceSettingsFull = updated;
LABEL_238:
                if ( !PointerDeviceSettingsFull )
                  goto LABEL_247;
              }
              if ( (unsigned int)xxxSetDeskWallpaper(v69, (size_t *)Src) )
              {
                xxxInvalidateWallpaperWindow();
                goto LABEL_247;
              }
              if ( v11 )
              {
                if ( a2 == -1 )
                  goto LABEL_247;
                FastUpdateWinIni(v69, 4LL, 67LL, v208);
              }
              PointerDeviceSettingsFull = 0;
              updated = 0;
              goto LABEL_247;
            case 0x15u:
              v183 = (wchar_t *)Src;
              if ( a2 == -1 && Src )
                goto LABEL_253;
              v70 = CreateProfileUserName(&v185);
              v191 = v70;
              if ( (unsigned int)CheckDesktopPolicy(v70, 2LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 && v183 )
              {
                FastGetProfileStringFromIDW(v70, 4LL, 2LL, &word_1C03123AC, v208, 260, 0);
                updated = FastUpdateWinIni(v70, 4LL, 2LL, v183);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_268;
              if ( !(unsigned int)SetDesktopPattern(v70, v183) )
              {
                if ( v11 && v183 )
                  FastUpdateWinIni(v70, 4LL, 2LL, v208);
                FreeProfileUserName(v70, &v185);
                return 0LL;
              }
              xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x15u, 0LL, 0LL, 1);
              v71 = *(_QWORD *)(gptiCurrent + 456LL);
              if ( v71 )
                v9 = *(struct tagWND **)(*(_QWORD *)(v71 + 8) + 24LL);
              xxxInternalInvalidate(v9, (HRGN)1, 0x10485u);
LABEL_268:
              FreeProfileUserName(v191, &v185);
              v19 = v12;
              goto LABEL_693;
            case 0x16u:
              *(_DWORD *)Src = (*(int *)(SGDGetUserSessionState(v15) + 12612) >> 5) & 3;
              v19 = v12;
              goto LABEL_693;
            case 0x17u:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 13LL, 106LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              v41 = (32 * a2) | *(_DWORD *)(SGDGetUserSessionState(v15) + 12612) & 0xFFFFFF9F;
LABEL_105:
              *(_DWORD *)(SGDGetUserSessionState(v40) + 12612) = v41;
              v43 = SGDGetUserSessionState(v42);
              SetKeyboardRate(*(unsigned int *)(v43 + 12612));
              v19 = v12;
              goto LABEL_693;
            case 0x18u:
              if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) != 0 )
              {
                v54 = GetDpiForSystem(v15, v8);
                *(_DWORD *)Src = GetDpiDependentMetric(19LL, v54);
                v19 = v12;
                goto LABEL_693;
              }
              if ( !a2 )
                goto LABEL_40;
              if ( (W32GetCurrentThreadDpiAwarenessContext(v15) & 0xF) != 0 )
              {
                v57 = PsGetCurrentProcessWin32Process(v55);
                if ( v57 && !*(_QWORD *)v57 )
                  v57 = 0LL;
                v58 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), *(unsigned __int16 *)(v57 + 284));
                v60 = PsGetCurrentProcessWin32Process(v59);
                if ( v60 && !*(_QWORD *)v60 )
                  v60 = 0LL;
                a2 = EngMulDiv(v58, 96, *(unsigned __int16 *)(v60 + 284));
                v56 = v58;
              }
              else
              {
                v56 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), 96);
              }
              v61 = *(_DWORD *)(gpsi + 2308LL);
              if ( v56 > v61 )
                v61 = v56;
              v62 = *(_DWORD *)(gpsi + 2428LL);
              if ( a2 > v62 )
                v62 = a2;
              if ( v11 )
              {
                updated = SetWindowMetricInt(0LL, 0x41u, v61);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              SetDpiDepSysMet(19LL, v61);
              *(_DWORD *)(gpsi + 2480LL) = v62;
              v19 = v12;
              goto LABEL_693;
            case 0x19u:
              *(_DWORD *)Src = (gdwPUDFlags >> 21) & 1;
              v19 = v12;
              goto LABEL_693;
            case 0x1Au:
              if ( v11 )
              {
                updated = SetWindowMetricInt(0LL, 0x42u, a2 != 0);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( a2 )
                gdwPUDFlags |= 0x200000u;
              else
                gdwPUDFlags &= ~0x200000u;
              xxxMetricsRecalc(2, 0, 0, 0, 0, 0, 0);
              v19 = v12;
              goto LABEL_693;
            case 0x1Bu:
              *(_DWORD *)Src = *(_DWORD *)(gpsi + 2056LL);
              v19 = v12;
              goto LABEL_693;
            case 0x1Cu:
              goto LABEL_682;
            case 0x1Du:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 97LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_DWORD *)(gpsi + 2040LL) = a2;
              v19 = v12;
              goto LABEL_693;
            case 0x1Eu:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 98LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_DWORD *)(gpsi + 2044LL) = a2;
              v19 = v12;
              goto LABEL_693;
            case 0x1Fu:
              DPIMetrics = GetDPIMetrics((__int64)v15);
              GreExtGetObjectW(*(HBRUSH *)(DPIMetrics + 64), 92LL, (__int64)Src);
              v19 = v12;
              goto LABEL_693;
            case 0x20u:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 6LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              SetDoubleClickTime(a2, v8, v7, v16);
              v19 = v12;
              goto LABEL_693;
            case 0x21u:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 5LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              LOBYTE(v9) = a2 != 0;
              _SwapMouseButton((int)v9);
              v19 = v12;
              goto LABEL_693;
            case 0x22u:
              if ( Src )
                v73 = a2 == 92;
              else
                v73 = a2 == 0;
              if ( !v73 )
                return 0LL;
              v74 = (struct _UNICODE_STRING *)CreateProfileUserName(&v185);
              v75 = xxxSetSPIMetrics(v74, v5, (struct tagMINIMIZEDMETRICS *)Src, v11, &v180);
              FreeProfileUserName(v74, &v185);
              updated = v180;
              if ( !v75 )
                goto LABEL_304;
              if ( v11 )
                PointerDeviceSettingsFull = v180;
              v19 = v12;
              goto LABEL_693;
            case 0x23u:
              *(_DWORD *)Src = 1;
              v19 = v12;
              goto LABEL_693;
            case 0x24u:
              goto LABEL_40;
            case 0x25u:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 107LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 )
              {
                LOBYTE(v9) = a2 == 1;
                updated = UpdateWinIniInt(0LL, 4LL, 107LL, (unsigned int)v9);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( a2 == 1 )
                gdwPUDFlags |= 0x100000u;
              else
                gdwPUDFlags &= ~0x100000u;
              v19 = v12;
              goto LABEL_693;
            case 0x26u:
              *(_DWORD *)Src = (gdwPUDFlags >> 20) & 1;
              v19 = v12;
              goto LABEL_693;
            case 0x29u:
              if ( !Src )
                return 0LL;
              GetWindowNCMetrics(Src, v8, v7, 1LL);
              v19 = v12;
              goto LABEL_693;
            case 0x2Au:
            case 0x2Cu:
            case 0x2Eu:
            case 0x49u:
              v84 = xxxSetSPIMetrics(0LL, v5, (struct tagMINIMIZEDMETRICS *)Src, v11, &v180);
              updated = v180;
              if ( v84 )
              {
                if ( v11 )
                  PointerDeviceSettingsFull = v180;
              }
              else
              {
                PointerDeviceSettingsFull = 0;
              }
              RtlLoadStringOrError(135LL, v207, 40LL);
              v19 = v12;
              goto LABEL_693;
            case 0x2Bu:
              v16 = (__int64)Src;
              *(_DWORD *)Src = 20;
              *(_DWORD *)(v16 + 4) = *(_DWORD *)(gpsi + 2124LL) - 6;
              *(_DWORD *)(v16 + 8) = *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
              *(_DWORD *)(v16 + 12) = *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
              *(_DWORD *)(v16 + 16) = *(_DWORD *)(gpsi + 2120LL);
              v19 = v12;
              goto LABEL_693;
            case 0x2Du:
              v77 = Src;
              *(_DWORD *)Src = 108;
              v78 = GetDpiForSystem(v15, v8);
              v77[1] = GetDpiDependentMetric(18LL, v78);
              v81 = GetDpiForSystem(v80, v79);
              v77[2] = GetDpiDependentMetric(19LL, v81);
              v82 = (gdwPUDFlags >> 21) & 1;
              v77[3] = v82;
              v83 = GetDPIMetrics(v82);
              GreExtGetObjectW(*(HBRUSH *)(v83 + 64), 92LL, (__int64)(v77 + 4));
              v19 = v12;
              goto LABEL_693;
            case 0x2Fu:
              v202 = 0LL;
              if ( Src )
              {
                if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
                  return 0LL;
                v86 = (const wchar_t *)MonitorFromRect((__int64)Src, 1LL, 0LL);
              }
              else
              {
                v86 = *(const wchar_t **)(GetDispInfo(v15, v8, v7) + 96);
              }
              v183 = (wchar_t *)v86;
              v203 = *(_OWORD *)GetMonitorRect(v184, (__int64)v86);
              v87 = (int *)&v203;
              if ( Src )
                v87 = (int *)Src;
              if ( !(unsigned int)IntersectRect(&v202, v87, (int *)&v203) || v202 != *(_OWORD *)v87 )
                goto LABEL_253;
              v204 = (struct tagRECT)*GetMonitorWorkRect(&v201, (__int64)v183);
              if ( *(_OWORD *)&v204 != v202 )
              {
                _InterlockedIncrement((volatile signed __int32 *)qword_1C035E320);
                v89 = qword_1C035E320;
                if ( !qword_1C035E320 )
                  return 0LL;
                v180 = 1;
                if ( (W32GetCurrentThreadDpiAwarenessContext(v88) & 0xF) != 2 )
                {
                  if ( *((_QWORD *)PtiCurrentShared() + 57) )
                  {
                    v90 = **(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL);
                    if ( (*(_DWORD *)(v90 + 64) & 1) != 0 )
                    {
                      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v90);
                      LogicalToPhysicalDPIRect(&v202, &v202, CurrentThreadDpiAwarenessContext, &v183);
                    }
                  }
                }
                v92 = v183;
                v93 = *((_QWORD *)v183 + 5);
                v199 = *(_OWORD *)(v93 + 44);
                v200 = *(_OWORD *)(v93 + 28);
                if ( (unsigned int)dword_1C0359080 > 4 && tlgKeywordOn((__int64)&dword_1C0359080, 32LL) )
                {
                  LOBYTE(v9) = a2 != 0;
                  v187 = (int)v9;
                  v182 = *((_QWORD *)&v202 + 1);
                  v192 = DWORD1(v202);
                  v193 = v202;
                  v194 = HIDWORD(v199);
                  v195 = DWORD2(v199);
                  v196 = DWORD1(v199);
                  v197 = v199;
                  LODWORD(v188) = HIDWORD(v200);
                  v189 = DWORD2(v200);
                  v190 = DWORD1(v200);
                  LODWORD(v191) = v200;
                  v198 = *(_QWORD *)v92;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (unsigned int)&dword_1C0359080,
                    (unsigned int)&unk_1C031BA93,
                    v94,
                    (_DWORD)v92,
                    (__int64)&v198,
                    (__int64)&v191,
                    (__int64)&v190,
                    (__int64)&v189,
                    (__int64)&v188,
                    (__int64)&v197,
                    (__int64)&v196,
                    (__int64)&v195,
                    (__int64)&v194,
                    (__int64)&v193,
                    (__int64)&v192,
                    (__int64)&v182,
                    (__int64)&v182 + 4,
                    (__int64)&v187);
                  v92 = v183;
                }
                *(_OWORD *)(*((_QWORD *)v92 + 5) + 44LL) = v202;
                v95 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                if ( v95 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_AND_TRACE_SF_dddddddd(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    v95,
                    WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                    (__int64)gFullLog,
                    (int)v175,
                    7u,
                    0xAu,
                    (__int64)&WPP_de8dbbd74b6f3353e3dc754537999fe8_Traceguids);
                CTopologyManager::UpdateCurrent();
                DispInfo = GetDispInfo(v97, v96, v98);
                if ( v183 == *(wchar_t **)(DispInfo + 96) && *(_DWORD *)*gpDispInfo )
                  UpdateDesktopMonitorNavigationOrder();
                if ( a2 )
                {
                  LOBYTE(v100) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                  if ( (_BYTE)v100 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v101) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                    WPP_RECORDER_AND_TRACE_SF_(
                      WPP_GLOBAL_Control->AttachedDevice,
                      (_DWORD)v100,
                      v101,
                      v16,
                      4,
                      7,
                      11,
                      (__int64)&WPP_de8dbbd74b6f3353e3dc754537999fe8_Traceguids);
                  }
                  DesktopRecalc::OnWorkAreaChanged(v89, v100);
                }
                else
                {
                  LOBYTE(v100) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
                  if ( (_BYTE)v100 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v101) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                    WPP_RECORDER_AND_TRACE_SF_(
                      WPP_GLOBAL_Control->AttachedDevice,
                      (_DWORD)v100,
                      v101,
                      v16,
                      3,
                      7,
                      12,
                      (__int64)&WPP_de8dbbd74b6f3353e3dc754537999fe8_Traceguids);
                  }
                }
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v89, 0xFFFFFFFF) == 1 )
                  Win32FreePool(v89);
                updated = v180;
              }
              PointerDeviceSettingsFull = 1;
              v19 = v12;
              goto LABEL_693;
            case 0x30u:
              v85 = GetDispInfo(v15, v8, v7);
              *(_OWORD *)Src = *GetMonitorWorkRect(&v204, *(_QWORD *)(v85 + 96));
              v19 = v12;
              goto LABEL_693;
            case 0x36u:
              v108 = Src;
              if ( a2 && a2 != 28 || !Src || *(_DWORD *)Src != 28 )
                return 0LL;
              memmove((char *)Src + 4, (char *)&gMouseKeys + 4, 0x18uLL);
              v109 = *((_DWORD *)Src + 1) & 0x4CFFFFFF;
              *((_DWORD *)Src + 1) = v109;
              if ( gbMKMouseMode )
              {
                v109 |= 0x80000000;
                v108[1] = v109;
              }
              v110 = v109 | ((gwMKButtonState & 3) << 24);
              v108[1] = v110;
              v108[1] = v110 | ((gwMKCurrentButton & 3) << 28);
              v19 = v12;
              goto LABEL_693;
            case 0x37u:
              v111 = (struct tagMOUSEKEYS *)Src;
              if ( a2 && a2 != 28 )
                return 0LL;
              if ( !Src )
                return 0LL;
              if ( *(_DWORD *)Src != 28 )
                return 0LL;
              v112 = *((_DWORD *)Src + 1) & 0x4CFFFFFF;
              *((_DWORD *)Src + 1) = v112;
              if ( (unsigned __int8)v112 != v112 )
                return 0LL;
              v113 = v112 & 0xFFFFFFFD;
              v114 = v112 | 2;
              if ( (HIDWORD(gMouseKeys) & 2) == 0 )
                v114 = v113;
              *((_DWORD *)v111 + 1) = v114;
              if ( (unsigned int)(*((_DWORD *)v111 + 2) - 10) > 0x15E
                || (unsigned int)(*((_DWORD *)v111 + 3) - 1000) > 0xFA0 )
              {
                return 0LL;
              }
              if ( v11 )
              {
                v115 = (struct _UNICODE_STRING *)CreateProfileUserName(&v185);
                updated = SetMouseKeys(v115, v111);
                PointerDeviceSettingsFull = updated;
                if ( !updated )
                  SetMouseKeys(v115, gMouseKeys);
                FreeProfileUserName(v115, &v185);
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              memmove(gMouseKeys, v111, *(unsigned int *)v111);
              LODWORD(gMouseKeys) = 28;
              CalculateMouseTable();
              v116 = HIDWORD(gMouseKeys);
              if ( (v116 & 1) != 0 )
              {
                v117 = SGDGetUserSessionState(v116);
                v119 = *(_WORD *)(SGDGetUserSessionState(v118) + 13768);
                LOBYTE(v9) = ((unsigned __int8)(1 << (2 * (*(_WORD *)(SGDGetUserSessionState(v120) + 13768) & 3) + 1)) & *(_BYTE *)(((unsigned __int64)(unsigned __int8)v119 >> 2) + v117 + 13992)) != 0;
                gbMKMouseMode = ((HIDWORD(gMouseKeys) >> 7) & 1) != (_DWORD)v9;
                MKShowMouseCursor();
              }
              else
              {
                MKHideMouseCursor();
              }
              SetAccessEnabledFlag();
              if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(11LL, 3uLL, 0LL, 10LL);
              PostShellHookMessagesEx(0xBu, 3LL, 0LL);
              v19 = v12;
              goto LABEL_693;
            case 0x38u:
              *(_DWORD *)Src = (gdwPUDFlags >> 15) & 1;
              v19 = v12;
              goto LABEL_693;
            case 0x39u:
              if ( v11 )
              {
                LOBYTE(v9) = a2 == 1;
                RtlStringCchPrintfW(v206, 0x28uLL, (size_t *)L"%d", (unsigned int)v9);
                updated = FastWriteProfileStringW(0LL, 20LL, L"On", v206);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( a2 == 1 )
                gdwPUDFlags |= 0x8000u;
              else
                gdwPUDFlags &= ~0x8000u;
              SetAccessEnabledFlag();
              *(_DWORD *)(gpsi + 2176LL) = (gdwPUDFlags >> 15) & 1;
              v19 = v12;
              goto LABEL_693;
            case 0x40u:
              if ( a2 && a2 != 56 || !Src || *(_DWORD *)Src != 56 )
                return 0LL;
              memmove((char *)Src + 4, (char *)&gSoundSentry + 4, 0x34uLL);
              v19 = v12;
              goto LABEL_693;
            case 0x41u:
              v127 = (struct tagSOUNDSENTRYW *)Src;
              if ( a2 && a2 != 56 )
                return 0LL;
              if ( !Src )
                return 0LL;
              if ( *(_DWORD *)Src != 56 )
                return 0LL;
              v128 = *((_DWORD *)Src + 1);
              if ( (v128 & 7) != v128 || *((_DWORD *)Src + 8) > 3u || *((_DWORD *)Src + 2) || *((_DWORD *)Src + 5) )
                return 0LL;
              v129 = v128 & 0xFFFFFFFD;
              v130 = v128 | 2;
              if ( (HIDWORD(gSoundSentry) & 2) == 0 )
                v130 = v129;
              *((_DWORD *)Src + 1) = v130;
              if ( v11 )
              {
                v131 = (struct _UNICODE_STRING *)CreateProfileUserName(&v185);
                updated = SetSoundSentry(v131, v127);
                PointerDeviceSettingsFull = updated;
                if ( !updated )
                  SetSoundSentry(v131, gSoundSentry);
                FreeProfileUserName(v131, &v185);
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              memmove(gSoundSentry, v127, *(unsigned int *)v127);
              LODWORD(gSoundSentry) = 56;
              SetAccessEnabledFlag();
              v19 = v12;
              goto LABEL_693;
            case 0x42u:
              v121 = Src;
              *((_DWORD *)Src + 1) = gHighContrast[1];
              v122 = (_OWORD *)v121[1];
              v123 = gHighContrastDefaultScheme;
              do
              {
                *v122 = *(_OWORD *)v123;
                v122[1] = *((_OWORD *)v123 + 1);
                v122[2] = *((_OWORD *)v123 + 2);
                v122[3] = *((_OWORD *)v123 + 3);
                v122[4] = *((_OWORD *)v123 + 4);
                v122[5] = *((_OWORD *)v123 + 5);
                v122[6] = *((_OWORD *)v123 + 6);
                v122 += 8;
                *(v122 - 1) = *((_OWORD *)v123 + 7);
                v123 += 64;
                --v18;
              }
              while ( v18 );
              v124 = v178;
              v19 = v12;
              goto LABEL_694;
            case 0x43u:
              updated = SetHighContrastWorker((struct tagINTERNALSETHIGHCONTRAST *)Src, v11, &v181);
              v19 = v12;
              PointerDeviceSettingsFull = v181;
              goto LABEL_693;
            case 0x44u:
              *(_DWORD *)Src = (gdwPUDFlags >> 17) & 1;
              v19 = v12;
              goto LABEL_693;
            case 0x45u:
              if ( v11 )
              {
                v125 = L"1";
                if ( !a2 )
                  v125 = L"0";
                updated = FastWriteProfileStringW(0LL, 27LL, L"On", v125);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( a2 )
                gdwPUDFlags |= 0x20000u;
              else
                gdwPUDFlags &= ~0x20000u;
              v19 = v12;
              goto LABEL_693;
            case 0x46u:
              *(_DWORD *)Src = (gdwPUDFlags >> 18) & 1;
              v19 = v12;
              goto LABEL_693;
            case 0x47u:
              if ( v11 )
              {
                v126 = L"1";
                if ( !a2 )
                  v126 = L"0";
                updated = FastWriteProfileStringW(0LL, 28LL, L"On", v126);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( a2 )
                gdwPUDFlags |= 0x40000u;
              else
                gdwPUDFlags &= ~0x40000u;
              v19 = v12;
              goto LABEL_693;
            case 0x48u:
              v76 = Src;
              if ( !Src || a2 != 8 )
                return 0LL;
              *(_DWORD *)Src = 8;
              v76[1] = *((_WORD *)&gdwPUDFlags + 1) & 1;
              v19 = v12;
              goto LABEL_693;
            case 0x4Au:
              *(_DWORD *)Src = (*((_DWORD *)Gre::Base::Globals(v15) + 41) >> 1) & 1;
              v19 = v12;
              goto LABEL_693;
            case 0x4Bu:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              v38 = a2 != 0 ? 2 : 0;
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 200LL, v38);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              GreSetFontEnumeration((Gre::Base *)(v38 | 4));
              v19 = v12;
              goto LABEL_693;
            case 0x4Cu:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 198LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 198LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_DWORD *)(gpsi + 2168LL) = a2;
              v19 = v12;
              goto LABEL_693;
            case 0x4Du:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 199LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 199LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_DWORD *)(gpsi + 2172LL) = a2;
              v19 = v12;
              goto LABEL_693;
            case 0x57u:
              v69 = CreateProfileUserName(&v185);
              xxxUpdateSystemCursorsFromRegistry(v69, 2LL);
              goto LABEL_247;
            case 0x58u:
              v69 = CreateProfileUserName(&v185);
              xxxUpdateSystemIconsFromRegistry(v69);
              goto LABEL_247;
            case 0x59u:
              if ( !gspklBaseLayout )
              {
                UserSetLastError(21LL);
                return 0LL;
              }
              *(_QWORD *)Src = *(_QWORD *)(gspklBaseLayout + 40LL);
              v19 = v12;
              goto LABEL_693;
            case 0x5Au:
              v44 = HKLtoPKL(gptiCurrent, *(_QWORD *)Src, v7, 1LL);
              if ( !v44 )
                return 0LL;
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_QWORD *)&v203 = gspklBaseLayout;
              *((_QWORD *)&v203 + 1) = v44;
              HMAssignmentLock(&v203, 0LL);
              v19 = v12;
              goto LABEL_693;
            case 0x5Bu:
              return GetKbdLangSwitch(0LL);
            case 0x5Du:
              if ( v11 )
              {
                RtlStringCchPrintfW(v206, 0x28uLL, (size_t *)L"%d", a2);
                updated = FastUpdateWinIni(0LL, 12LL, 613LL, v206);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              SetMouseTrails(a2);
              v19 = v12;
              goto LABEL_693;
            case 0x5Eu:
              if ( *(_DWORD *)(SGDGetUserSessionState(v15) + 15936) )
                *(_DWORD *)Src = *(_DWORD *)(SGDGetUserSessionState(v20) + 15936) + 1;
              else
                *(_DWORD *)Src = *(_DWORD *)(SGDGetUserSessionState(v20) + 15936);
              v19 = v12;
              goto LABEL_693;
            case 0x5Fu:
              *(_DWORD *)Src = (*(_DWORD *)(gpsi + 7004LL) >> 1) & 1;
              v19 = v12;
              goto LABEL_693;
            case 0x60u:
              if ( v11 )
              {
                LOBYTE(v9) = a2 != 0;
                updated = UpdateWinIniInt(0LL, 12LL, 7LL, (unsigned int)v9);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_78;
              if ( a2 )
              {
                *(_DWORD *)(gpsi + 7004LL) |= 2u;
                v19 = v12;
              }
              else
              {
                *(_DWORD *)(gpsi + 7004LL) &= ~2u;
LABEL_78:
                v19 = v12;
              }
              goto LABEL_693;
            case 0x62u:
              *(_DWORD *)Src = *(_DWORD *)(SGDGetUserSessionState(v15) + 15916);
              v19 = v12;
              goto LABEL_693;
            case 0x63u:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 91LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_DWORD *)(SGDGetUserSessionState(v15) + 15916) = a2;
              v19 = v12;
              goto LABEL_693;
            case 0x64u:
              *(_DWORD *)Src = *(_DWORD *)(SGDGetUserSessionState(v15) + 15920);
              v19 = v12;
              goto LABEL_693;
            case 0x65u:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 92LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_DWORD *)(SGDGetUserSessionState(v15) + 15920) = a2;
              v19 = v12;
              goto LABEL_693;
            case 0x66u:
              *(_DWORD *)Src = *(_DWORD *)(SGDGetUserSessionState(v15) + 15924);
              v19 = v12;
              goto LABEL_693;
            case 0x67u:
              v132 = 10;
              if ( a2 >= 0xA )
                v132 = a2;
              if ( v132 > 0x7FFFFFFF )
                v132 = 0x7FFFFFFF;
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 93LL, v132);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_DWORD *)(SGDGetUserSessionState(v15) + 15924) = v132;
              v19 = v12;
              goto LABEL_693;
            case 0x6Au:
              *(_DWORD *)Src = gdtMNDropDown;
              v19 = v12;
              goto LABEL_693;
            case 0x6Bu:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 94LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 94LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              gdtMNDropDown = a2;
              v19 = v12;
              goto LABEL_693;
            case 0x6Cu:
              *(_DWORD *)Src = *(_DWORD *)(gpsi + 4992LL);
              v19 = v12;
              goto LABEL_693;
            case 0x6Du:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 15LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 15LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_DWORD *)(gpsi + 4992LL) = a2;
              v19 = v12;
              goto LABEL_693;
            case 0x6Eu:
              LOBYTE(v9) = *(_DWORD *)(SGDGetUserSessionState(v15) + 13960) != 0;
              *(_DWORD *)Src = (_DWORD)v9;
              v19 = v12;
              goto LABEL_693;
            case 0x6Fu:
              LOBYTE(v9) = a2 != 0;
              PointerDeviceSettingsFull = xxxSetIMEShowStatus((unsigned int)v9, v11, &v180);
              v19 = v12;
              updated = v180;
              goto LABEL_693;
            case 0x70u:
              *(_DWORD *)Src = GetMouseSensitivity(0LL, v8, v7, 1LL);
              v19 = v12;
              goto LABEL_693;
            case 0x71u:
              if ( !(unsigned __int8)IsValidMouseSensitivity((unsigned int)Src, v8, v7, 1LL) )
                return 0LL;
              if ( v11 )
              {
                RtlStringCchPrintfW(v206, 0x28uLL, (size_t *)L"%d", Src);
                updated = FastUpdateWinIni(0LL, 12LL, 608LL, v206);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              UpdateMouseSensitivity((unsigned int)Src);
              do
              {
                ResetAccelerationCurves((unsigned int)v9);
                LODWORD(v9) = (_DWORD)v9 + 1;
              }
              while ( (unsigned int)v9 < 2 );
              v19 = v12;
              goto LABEL_693;
            case 0x72u:
              LOBYTE(v9) = gppiScreenSaver != 0LL;
              *(_DWORD *)Src = (_DWORD)v9;
              v19 = v12;
              goto LABEL_693;
            case 0x73u:
              if ( g_pWallpaperSettings )
              {
                RtlStringCchCopyW((unsigned __int16 *)Src, 0x104uLL, (size_t *)(g_pWallpaperSettings + 4LL));
                v19 = v12;
              }
              else
              {
                v69 = CreateProfileUserName(&v185);
                LoadWallpaperFilenameFromRegistry(v69, (unsigned __int16 *)Src, 0x104u);
LABEL_247:
                FreeProfileUserName(v69, &v185);
                v19 = v12;
              }
              goto LABEL_693;
            case 0x74u:
              if ( a2 && a2 != 12 || !Src || *(_DWORD *)Src != 12 )
                return 0LL;
              memmove((char *)Src + 4, (char *)&gAudioDescription + 4, 8uLL);
              v19 = v12;
              goto LABEL_693;
            case 0x75u:
              if ( a2 && a2 != 12 || !Src || *(_DWORD *)Src != 12 )
                return 0LL;
              if ( v11 )
              {
                v133 = CreateProfileUserName(&v185);
                v134 = v133;
                v135 = L"1";
                v136 = L"1";
                if ( !*((_DWORD *)Src + 1) )
                  v136 = L"0";
                v137 = FastWriteProfileStringW(v133, 48LL, L"On", v136);
                RtlStringCchPrintfW(v206, 0x28uLL, (size_t *)L"%d", *((unsigned int *)Src + 2));
                updated = FastWriteProfileStringW(v134, 48LL, L"Locale", v206) & v137;
                PointerDeviceSettingsFull = updated;
                if ( !updated )
                {
                  if ( !HIDWORD(gAudioDescription) )
                    v135 = L"0";
                  FastWriteProfileStringW(v134, 48LL, L"On", v135);
                  RtlStringCchPrintfW(v206, 0x28uLL, (size_t *)L"%d", *((unsigned int *)&gAudioDescription + 2));
                  FastWriteProfileStringW(v134, 48LL, L"Locale", v206);
                }
                FreeProfileUserName(v134, &v185);
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              memmove(gAudioDescription, Src, *(unsigned int *)Src);
              LODWORD(gAudioDescription) = 12;
              v19 = v12;
              goto LABEL_693;
            case 0x76u:
              *(_DWORD *)Src = (*gpsi >> 9) & 1;
              v19 = v12;
              goto LABEL_693;
            case 0x77u:
              if ( gdwRITdaemonLockState && !LODWORD(v184[0]) )
                goto LABEL_223;
              if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
                v181 = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 618LL, a2 != 0);
                v180 = updated;
                PointerDeviceSettingsFull = updated;
                v181 = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( a2 )
                _InterlockedOr(gpsi, 0x200u);
              else
                _InterlockedAnd(gpsi, 0xFFFFFDFF);
              PointerDeviceSettingsFull = v181;
              updated = v180;
              v19 = v12;
              goto LABEL_693;
            case 0x78u:
              *(_DWORD *)Src = gdwHungAppTimeout;
              v19 = v12;
              goto LABEL_693;
            case 0x79u:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 621LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 621LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              gdwHungAppTimeout = a2;
              v19 = v12;
              goto LABEL_693;
            case 0x7Au:
              *(_DWORD *)Src = gdwWaitToKillTimeout;
              v19 = v12;
              goto LABEL_693;
            case 0x7Bu:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 622LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 622LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              gdwWaitToKillTimeout = a2;
              v19 = v12;
              goto LABEL_693;
            case 0x7Cu:
              *(_DWORD *)Src = gdwWaitToKillServiceTimeout;
              v19 = v12;
              goto LABEL_693;
            case 0x7Du:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 623LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 52LL, 623LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              gdwWaitToKillServiceTimeout = a2;
              v19 = v12;
              goto LABEL_693;
            case 0x7Eu:
            case 0x7Fu:
            case 0x80u:
            case 0x81u:
            case 0x82u:
            case 0x83u:
            case 0x84u:
            case 0x85u:
            case 0x86u:
            case 0x87u:
            case 0x88u:
            case 0x89u:
            case 0x8Au:
            case 0x8Bu:
            case 0x8Cu:
            case 0x8Du:
            case 0x8Eu:
            case 0x8Fu:
            case 0x90u:
            case 0x91u:
              v138 = WindowArrangementSPI::ArrangementParameterInfo(
                       v5,
                       a2,
                       (int *)Src,
                       v11,
                       PointerDeviceSettingsFull != 0);
              updated = v138 & 1;
              PointerDeviceSettingsFull = (v138 >> 1) & 1;
              v19 = v12;
              goto LABEL_693;
            case 0x94u:
            case 0x96u:
            case 0x98u:
            case 0x9Au:
            case 0x9Cu:
              PointerDeviceSettingsFull = ReadPointerDeviceSettingsFull(v5, Src, v7, 1LL);
              v19 = v12;
              goto LABEL_693;
            case 0x95u:
            case 0x97u:
            case 0x99u:
            case 0x9Bu:
            case 0x9Du:
              updated = WritePointerDeviceSettingsFull(v5, Src, v11, 1LL);
              v19 = v12;
              goto LABEL_693;
            case 0x9Eu:
            case 0xA5u:
            case 0xA7u:
              v204 = 0LL;
              v205 = 0LL;
              if ( (int)DrvDisplayConfigGetScaleFactorOverrides(&v204, 1LL) < 0 )
                return 0LL;
              if ( a2 == 158 )
              {
                *(_DWORD *)Src = DWORD2(v205);
              }
              else
              {
                v139 = Src;
                *(_QWORD *)Src = *(_QWORD *)((char *)&v205 + 4);
                v139[2] = HIDWORD(v205);
              }
              v19 = v12;
              goto LABEL_693;
            case 0x9Fu:
            case 0xA6u:
              if ( a2 + 11 > 0x16 )
                return 0LL;
              if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( !v11 )
                goto LABEL_40;
              v204 = 0LL;
              LODWORD(v205) = 0;
              DWORD1(v205) = a2;
              LODWORD(v184[0]) = a2 != 159;
              if ( (int)DrvDisplayConfigSetScaleFactorOverride(&v204, v184) < 0 )
              {
LABEL_304:
                PointerDeviceSettingsFull = 0;
                v19 = v12;
              }
              else
              {
                if ( a2 == 159 )
                  TraceLoggingSPISetModernDPIOverrideEvent(v140, 159);
                else
                  TraceLoggingSPISetDesktopDPIOverrideEvent(v140, a2);
                PointerDeviceSettingsFull = 1;
                v19 = v12;
              }
              goto LABEL_693;
            case 0xA0u:
              *(_DWORD *)Src = 6;
              v19 = v12;
              goto LABEL_693;
            case 0xA1u:
              PointerDeviceSettingsFull = 1;
              v19 = v12;
              goto LABEL_693;
            case 0xA2u:
              v102 = GetDispInfo(v15, v8, v7);
              *(_OWORD *)Src = *(_OWORD *)GetMonitorMenuRect(&v204, *(struct tagMONITOR **)(v102 + 96));
              v19 = v12;
              goto LABEL_693;
            case 0xA3u:
              v203 = 0LL;
              if ( Src )
              {
                if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
                  return 0LL;
                v103 = MonitorFromRect((__int64)Src, 1LL, 0LL);
              }
              else
              {
                v103 = *(_QWORD *)(GetDispInfo(v15, v8, v7) + 96);
              }
              v184[0] = v103;
              v204 = *(struct tagRECT *)GetMonitorRect((__int64 *)&v204.left, v103);
              v104 = (int *)&v204;
              if ( Src )
                v104 = (int *)Src;
              if ( !(unsigned int)IntersectRect(&v203, v104, &v204.left) || v203 != *(_OWORD *)v104 )
                goto LABEL_253;
              if ( (W32GetCurrentThreadDpiAwarenessContext(v105) & 0xF) != 2
                && *((_QWORD *)PtiCurrentShared() + 57)
                && (v106 = **(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL), (*(_DWORD *)(v106 + 64) & 1) != 0) )
              {
                v107 = W32GetCurrentThreadDpiAwarenessContext(v106);
                LogicalToPhysicalDPIRect(v184[0] + 112, &v203, v107, v184);
                v19 = v12;
              }
              else
              {
                *(_OWORD *)(v184[0] + 112) = v203;
                v19 = v12;
              }
              goto LABEL_693;
            case 0xA8u:
              *(_DWORD *)Src = gbLockScreenAutoLockActive;
              v19 = v12;
              goto LABEL_693;
            case 0xA9u:
              if ( gfSwitchInProgress )
                return 0LL;
              if ( gdwRITdaemonLockState && !LODWORD(v184[0]) )
              {
LABEL_223:
                UserSetLastError(329LL);
                return 0LL;
              }
              LOBYTE(v9) = a2 != 0;
              gbLockScreenAutoLockActive = (int)v9;
              if ( !v11 )
                goto LABEL_40;
              updated = UpdateWinIniInt(0LL, 4LL, 205LL, a2);
              PointerDeviceSettingsFull = updated;
              v19 = v12;
              break;
            case 0xAAu:
              *(_DWORD *)Src = gbLockScreenActive;
              v19 = v12;
              goto LABEL_693;
            case 0xABu:
              if ( *((_DWORD *)v8 + 14) != gpidLogonUI )
                return 0LL;
              LOBYTE(v9) = a2 != 0;
              gbLockScreenActive = (_DWORD)v9;
              if ( a2 )
              {
                if ( !gptiForeground
                  || (v66 = *(_QWORD *)(gptiForeground + 432LL)) == 0
                  || (v67 = *(_QWORD *)(v66 + 128)) == 0
                  || (unsigned int)IsWindowUnderActiveLockScreen(v67) )
                {
                  xxxSetForegroundWindow2(0LL, 0LL, 0);
                }
                ClearKeyboardStates(v68);
              }
              GreLddmProcessLockScreen(gbLockScreenActive, v8, v7, v16);
              v19 = v12;
              goto LABEL_693;
            case 0xACu:
              v141 = InteractiveControlManager::Instance((__int64)v15);
              PointerDeviceSettingsFull = (int)InteractiveControlManager::GetExternalParameters(
                                                 v141,
                                                 (struct tagINTERACTIVECTRL_PARAMETERS *)Src) >= 0;
              v19 = v12;
              goto LABEL_693;
            case 0xADu:
              v142 = InteractiveControlManager::Instance((__int64)v15);
              LOBYTE(updated) = (int)InteractiveControlManager::SetExternalParameters(
                                       v142,
                                       (struct tagINTERACTIVECTRL_PARAMETERS *)Src,
                                       v11) >= 0;
              v19 = v12;
              goto LABEL_693;
            default:
              goto LABEL_589;
          }
        }
        goto LABEL_693;
      }
      switch ( v5 )
      {
        case 0x1027u:
          v174 = a2 != 0;
          if ( (unsigned int)CheckDesktopPolicy(0LL, 112LL) )
          {
            v11 = 0;
            PointerDeviceSettingsFull = 0;
          }
          if ( v11 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 112LL, a2 != 0);
            PointerDeviceSettingsFull = updated;
          }
          v19 = v12;
          if ( PointerDeviceSettingsFull )
            gbBlockSendInputResets = v174;
          goto LABEL_693;
        case 0x2024u:
          *(_DWORD *)Src = GetUserHandedness(v15, v8, v7, 1LL);
          v19 = v12;
          goto LABEL_693;
        case 0x2025u:
          a2 = 0;
          if ( (unsigned int)RIMIsDefaultUILanguageRTL(v15, v8, v7, 1LL) )
            LOBYTE(a2) = (_DWORD)Src == 0;
          else
            LOBYTE(a2) = (_DWORD)Src != 0;
LABEL_682:
          if ( v11 )
          {
            updated = UpdateWinIniInt(0LL, 3LL, 96LL, a2);
            PointerDeviceSettingsFull = updated;
          }
          if ( PointerDeviceSettingsFull )
          {
            LOBYTE(v9) = a2 != 0;
            *(_DWORD *)(gpsi + 2056LL) = (_DWORD)v9;
            TraceLoggingSPISetMenuDropAlignmentEvent();
            v19 = v12;
            goto LABEL_693;
          }
          goto LABEL_40;
      }
LABEL_589:
      if ( v5 < 0xB2 )
      {
        UserSetLastError(1439LL);
        return 0LL;
      }
      v143 = v5 & 0x3000;
      if ( !v189 )
      {
        if ( v143 == 4096 )
        {
          v144 = 0;
          v145 = 0;
          if ( v5 < 0x103E )
          {
            if ( (int)gpdwCPUserPreferencesMask < 0 )
            {
              switch ( v5 )
              {
                case 0x1008u:
                case 0x1012u:
                case 0x1014u:
                case 0x1018u:
                case 0x101Au:
                  v145 = gbDisableAlpha != 0;
                  break;
                case 0x100Au:
                  v144 = (gdwPUDFlags >> 17) & 1;
                  v145 = v144;
                  break;
                case 0x1024u:
                  if ( gbDisableAlpha || gcOverlays )
                    v145 = 1;
                  break;
                default:
                  break;
              }
            }
            else if ( v5 != 4096 )
            {
              if ( v5 == 4106 )
              {
                v144 = 1;
                v145 = 1;
              }
              else if ( v5 != 4108 && v5 != 4124 )
              {
                v145 = v5 != 4126;
              }
            }
          }
          if ( v145 )
          {
            *(_DWORD *)Src = v144;
            v19 = v12;
          }
          else if ( v5 == 4158 && gProtocolType && !(unsigned int)IsWDAGContainer() )
          {
            LOBYTE(v9) = ((unsigned __int16)gpdwCPUserPreferencesMask & 0x3A0E) != 0;
            *(_DWORD *)Src = (_DWORD)v9;
            v19 = v12;
          }
          else
          {
            v146 = *((_DWORD *)&gpdwCPUserPreferencesMask + ((unsigned __int64)(v5 - 4096) >> 6));
            LOBYTE(v9) = _bittest(&v146, (unsigned __int8)(((v5 - 4096) >> 1) - 32 * ((v5 - 4096) >> 6)));
            *(_DWORD *)Src = (_DWORD)v9;
            v19 = v12;
          }
          goto LABEL_693;
        }
        v147 = *(unsigned int *)UPDWORDPointer(v5);
        *(_DWORD *)Src = v147;
        if ( v5 == 8204 && !(_DWORD)v147 )
        {
          *(_DWORD *)Src = *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v147) + 32) + 8584LL);
          v19 = v12;
          goto LABEL_693;
        }
LABEL_40:
        v19 = v12;
        goto LABEL_693;
      }
      v148 = (const wchar_t *)CreateProfileUserName(&v185);
      v183 = (wchar_t *)v148;
      if ( v143 == 4096 )
      {
        if ( *((_DWORD *)&gpviCPUserPreferences + 1) == 4 )
        {
          v149 = CheckDesktopPolicy(v148, *((_QWORD *)&gpviCPUserPreferences + 1));
          v148 = v183;
          if ( v149 )
          {
            v11 = 0;
            PointerDeviceSettingsFull = 0;
          }
        }
        if ( v11 )
        {
          ProfileValue = FastGetProfileValue(
                           v148,
                           *((unsigned int *)&gpviCPUserPreferences + 1),
                           *((_QWORD *)&gpviCPUserPreferences + 1),
                           0LL,
                           v184,
                           8,
                           0);
          memmove((char *)v184 + ProfileValue, (char *)&gpdwCPUserPreferencesMask + ProfileValue, 8LL - ProfileValue);
          v151 = v5 - 4096;
          v152 = 1 << (((v5 - 4096) >> 1) - 32 * ((v5 - 4096) >> 6));
          v153 = (int *)v184 + ((unsigned __int64)(v5 - 4096) >> 6);
          v154 = *v153;
          if ( Src )
            v155 = v152 | v154;
          else
            v155 = ~v152 & v154;
          *v153 = v155;
          updated = FastWriteProfileValue(
                      v183,
                      *((unsigned int *)&gpviCPUserPreferences + 1),
                      *((_QWORD *)&gpviCPUserPreferences + 1),
                      3LL,
                      v184,
                      8);
          PointerDeviceSettingsFull = updated;
        }
        else
        {
          v151 = v5 - 4096;
        }
        if ( PointerDeviceSettingsFull )
        {
          v156 = (unsigned int)(1 << ((v151 >> 1) - 32 * (v151 >> 6)));
          v157 = (CursorApiRouter *)((unsigned __int64)v151 >> 6);
          if ( Src )
          {
            *((_DWORD *)&gpdwCPUserPreferencesMask + (_QWORD)v157) |= v156;
          }
          else
          {
            v156 = (unsigned int)~(_DWORD)v156;
            *((_DWORD *)&gpdwCPUserPreferencesMask + (_QWORD)v157) &= v156;
          }
          switch ( v5 )
          {
            case 0x1005u:
              *(_DWORD *)(gpsi + 7004LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 7004LL)) & 4;
              v19 = v12;
              break;
            case 0x1007u:
              *(_DWORD *)(gpsi + 7004LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 7004LL)) & 8;
              v19 = v12;
              break;
            case 0x1009u:
              goto LABEL_633;
            case 0x100Bu:
              *(_DWORD *)(gpsi + 7004LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 7004LL)) & 0x20;
              v19 = v12;
              break;
            case 0x101Bu:
              LOBYTE(v157) = 1;
              SetPointerInternal(v157, 6u);
              v19 = v12;
              break;
            case 0x1023u:
              v160 = *(_QWORD *)(gptiCurrent + 456LL);
              if ( v160 )
                v9 = *(struct tagWND **)(*(_QWORD *)(v160 + 8) + 24LL);
              goto LABEL_635;
            case 0x1025u:
              v161 = (void *)ReferenceDwmApiPort(v157, v156);
              DwmAsyncNotifyWindowShadowChange(v161);
              v19 = v12;
              break;
            case 0x103Fu:
              v158 = (CursorApiRouter *)*(unsigned int *)(gpsi + 7004LL);
              *(_DWORD *)(gpsi + 7004LL) = (unsigned int)v158 ^ ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 7004LL)) & 0x80000000;
              LOBYTE(v158) = 1;
              SetPointerInternal(v158, 6u);
LABEL_633:
              CreateBitmapStrip((__int64)v157);
              v159 = *(_QWORD *)(gptiCurrent + 456LL);
              if ( v159 )
                v9 = *(struct tagWND **)(*(_QWORD *)(v159 + 8) + 24LL);
LABEL_635:
              xxxInternalInvalidate(v9, (HRGN)1, 0x10485u);
              v19 = v12;
              break;
            case 0x104Fu:
            case 0x1051u:
              xxxWindowEvent(0x80000007, 0);
              v19 = v12;
              break;
            case 0x1053u:
              NotifyISMPenButtonYieldSettingChange();
              goto LABEL_646;
            default:
              goto LABEL_646;
          }
        }
        else
        {
LABEL_646:
          v19 = v12;
        }
      }
      else
      {
        if ( *(_DWORD *)(UPDWORDPointer(v5) + 4) == 4 )
        {
          v163 = UPDWORDPointer(v5);
          if ( (unsigned int)CheckDesktopPolicy(v183, *(_QWORD *)(v163 + 8)) )
          {
            v11 = 0;
            PointerDeviceSettingsFull = 0;
          }
        }
        v19 = v12;
        if ( v11 )
        {
          if ( v5 == 8235 || v5 == 8239 )
          {
            v19 = 0;
            if ( !DesktopRecalcSettings::ValidateDesktopRecalcSetting(
                    (DesktopRecalcSettings *)v5,
                    (unsigned int)Src,
                    v162) )
            {
              PointerDeviceSettingsFull = 0;
              v11 = 0;
            }
          }
          if ( v11 )
          {
            v164 = *(_QWORD *)(UPDWORDPointer(v5) + 8);
            v165 = UPDWORDPointer(v178);
            updated = FastWriteProfileValue(v183, *(unsigned int *)(v165 + 4), v164, 4LL, &Src, 4);
            PointerDeviceSettingsFull = updated;
            v5 = v178;
          }
        }
        v166 = *(_DWORD *)UPDWORDPointer(v5);
        if ( PointerDeviceSettingsFull )
        {
          v167 = (int)Src;
          *(_DWORD *)UPDWORDPointer(v178) = v167;
          switch ( v178 )
          {
            case 0x2001u:
              v172 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              v173 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v172 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                UPDWORDPointer(v178);
                WPP_RECORDER_AND_TRACE_SF_Dd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v172,
                  v173,
                  (_DWORD)gFullLog,
                  (_DWORD)v175,
                  v176,
                  v177);
              }
              break;
            case 0x2007u:
              *(_DWORD *)(gpsi + 7008LL) = *(_DWORD *)UPDWORDPointer(v178);
              break;
            case 0x200Bu:
              v168 = (_DWORD *)UPDWORDPointer(v178);
              GreSetFontEnumeration((Gre::Base *)(8 * (*v168 & 2 | 4u)));
              break;
            case 0x200Du:
              v169 = *(_DWORD *)UPDWORDPointer(v178);
              *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v170) + 32) + 8584LL) = v169;
              break;
            case 0x200Fu:
              if ( *(_DWORD *)UPDWORDPointer(v178) )
                *(_DWORD *)(gpsi + 2228LL) = *(_DWORD *)UPDWORDPointer(v178);
              break;
            case 0x2011u:
              if ( *(_DWORD *)UPDWORDPointer(v178) )
                *(_DWORD *)(gpsi + 2232LL) = *(_DWORD *)UPDWORDPointer(v178);
              break;
            case 0x2013u:
              v171 = (unsigned int *)UPDWORDPointer(v178);
              GreSetLCDOrientation(*v171);
              break;
            case 0x201Du:
              TraceLoggingMouseWheelRoutingModeChange((unsigned int)Src);
              break;
            case 0x201Fu:
              TraceLoggingSPISetPenVisualizationEvent(v166, (unsigned int)Src);
              break;
            case 0x2029u:
              CCursorSizes::zzzRefreshSizes(gpCursorSizes);
              break;
            default:
              break;
          }
        }
      }
      FreeProfileUserName(v183, &v185);
LABEL_693:
      v124 = v178;
LABEL_694:
      if ( updated )
      {
        if ( v19 )
          EditionxxxBroadcastSPIChange(v124, v207, 1LL, v16, v175, v176);
      }
      return PointerDeviceSettingsFull;
  }
}
