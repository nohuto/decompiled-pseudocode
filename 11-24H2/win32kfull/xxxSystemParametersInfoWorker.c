/*
 * XREFs of xxxSystemParametersInfoWorker @ 0x14018F9C8
 * Callers:
 *     EditionxxxSystemParametersInfoWorker @ 0x14018F9B0 (EditionxxxSystemParametersInfoWorker.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     GetMonitorWorkRect @ 0x1400267BC (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x140026800 (GetMonitorRect.c)
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14003D210 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     xxxInternalInvalidate @ 0x1400428C0 (xxxInternalInvalidate.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 *     ?GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ @ 0x140068874 (-GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ.c)
 *     ??1CCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140069164 (--1CCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetWindowNCMetrics @ 0x14007901C (GetWindowNCMetrics.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x14007AA08 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     CheckWinstaAttributeAccess @ 0x140093660 (CheckWinstaAttributeAccess.c)
 *     GetMonitorMenuRect @ 0x140098A04 (GetMonitorMenuRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsWindowUnderActiveLockScreen @ 0x1400F86A4 (IsWindowUnderActiveLockScreen.c)
 *     xxxMetricsRecalc @ 0x140110EAC (xxxMetricsRecalc.c)
 *     SortMonitorsInSpatialOrder @ 0x140112190 (SortMonitorsInSpatialOrder.c)
 *     bSetDevDragWidth @ 0x1401121C4 (bSetDevDragWidth.c)
 *     SetKeyboardRate @ 0x14011335C (SetKeyboardRate.c)
 *     ??1?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140113474 (--1-$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     CreateBitmapStrip @ 0x140113600 (CreateBitmapStrip.c)
 *     EditionxxxBroadcastSPIChange @ 0x140116DC0 (EditionxxxBroadcastSPIChange.c)
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 *     xxxSetDeskWallpaper @ 0x14012AE2C (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x14012B2FC (LoadWallpaperFilenameFromRegistry.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012B408 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14012C7E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     SetPointer @ 0x140131500 (SetPointer.c)
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140133644 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x14013495C (xxxUpdateSystemIconsFromRegistry.c)
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x140149014 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 *     CheckGrantedAccess @ 0x140174598 (CheckGrantedAccess.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1401886E8 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     _GetIMEShowStatus @ 0x1401C78FC (_GetIMEShowStatus.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1401CA764 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     UpdateWinIniInt @ 0x1401CA854 (UpdateWinIniInt.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1401CA8E8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1401CB0A8 (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     ?IsWDAGContainer@@YAHXZ @ 0x1401D34F4 (-IsWDAGContainer@@YAHXZ.c)
 *     GetEasTimeout @ 0x1401E715C (GetEasTimeout.c)
 *     SetDesktopPattern @ 0x1401FC718 (SetDesktopPattern.c)
 *     GreSetFontEnumeration @ 0x1401FD4AC (GreSetFontEnumeration.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1401FD550 (-_SwapMouseButton@@YAHH@Z.c)
 *     GetUserHandedness @ 0x1401FE310 (GetUserHandedness.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x14020EDE4 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     GetKbdLangSwitch @ 0x140211080 (GetKbdLangSwitch.c)
 *     ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x140212F50 (-xxxSetIMEShowStatus@@YAHHHPEAH@Z.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x140214460 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     _SetDoubleClickTime @ 0x140214894 (_SetDoubleClickTime.c)
 *     ?UpdateCurrent@CTopologyManager@@SA_NXZ @ 0x1402175E8 (-UpdateCurrent@CTopologyManager@@SA_NXZ.c)
 *     ?WorkAreaChanged@DesktopRecalc@InputTraceLogging@@SAXPEAXUtagRECT@@11H@Z @ 0x140218C44 (-WorkAreaChanged@DesktopRecalc@InputTraceLogging@@SAXPEAXUtagRECT@@11H@Z.c)
 *     GreSetLCDOrientation @ 0x1402197F0 (GreSetLCDOrientation.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x140221584 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     SetMouseTrails @ 0x140239574 (SetMouseTrails.c)
 *     ClearKeyboardStates @ 0x14024045C (ClearKeyboardStates.c)
 *     ReadPointerDeviceSettingsFull @ 0x14024DD74 (ReadPointerDeviceSettingsFull.c)
 *     ?NotifyISMPenButtonYieldSettingChange@@YAXXZ @ 0x14028F7E0 (-NotifyISMPenButtonYieldSettingChange@@YAXXZ.c)
 *     ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x14028FC5C (-SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x14028FEA4 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x14028FFA4 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1402900A4 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     WritePointerDeviceSettingsFull @ 0x1402ACC7C (WritePointerDeviceSettingsFull.c)
 *     ?DwmNotifyWorkAreaChanged@@YAXXZ @ 0x1402ADFDC (-DwmNotifyWorkAreaChanged@@YAXXZ.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1402B658C (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1402B668C (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1402B6710 (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1402B6794 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?ValidateDesktopRecalcSetting@DesktopRecalcSettings@@YA_NIK@Z @ 0x1402C4E2C (-ValidateDesktopRecalcSetting@DesktopRecalcSettings@@YA_NIK@Z.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1402DE8F0 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1402DF644 (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     GetDpiMetricsForCurrentThread @ 0x1402F1688 (GetDpiMetricsForCurrentThread.c)
 *     GetDpiServerInfoForCurrentProcess @ 0x1402F1860 (GetDpiServerInfoForCurrentProcess.c)
 *     GetDpiServerInfoForCurrentThread @ 0x1402F189C (GetDpiServerInfoForCurrentThread.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x140323B5C (DwmAsyncNotifyWindowShadowChange.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall xxxSystemParametersInfoWorker(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned __int64 CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r15d
  int v11; // ebx
  int v12; // r14d
  unsigned int updated; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 v18; // r9
  struct tagPROCESSINFO *v19; // r8
  int v20; // eax
  bool v21; // zf
  unsigned int v22; // eax
  bool v23; // zf
  unsigned int v24; // eax
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // esi
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // esi
  int v39; // ecx
  unsigned int v40; // esi
  struct _UNICODE_STRING *v41; // rax
  struct _UNICODE_STRING *v42; // r15
  int v43; // ebx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r13
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int8 v53; // al
  int v54; // ebx
  int v55; // ebx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rax
  int v62; // ecx
  int v63; // ecx
  unsigned int DpiForSystem; // eax
  int v65; // ecx
  int UserHandedness; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  unsigned int v72; // esi
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  INT v76; // ebx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r13
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  struct tagWND *v91; // rcx
  struct _UNICODE_STRING *v92; // rsi
  int v93; // ebx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rax
  int v106; // eax
  __int64 v107; // r15
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  int v111; // esi
  int v112; // r13d
  int v113; // ebx
  __int64 v114; // rdx
  __int64 v115; // rcx
  int v116; // eax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rax
  int v120; // ecx
  int v121; // edx
  int v122; // edx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  unsigned int v128; // esi
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  INT v132; // ebx
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // rcx
  __int64 v145; // rcx
  __int64 DpiMetricsForCurrentThread; // rax
  _WORD *v147; // r8
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // rax
  bool v152; // zf
  struct _UNICODE_STRING *v153; // rax
  int v154; // ebx
  _DWORD *v155; // rdi
  __int64 v156; // rcx
  __int64 v157; // rdx
  __int64 v158; // rbx
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rcx
  __int64 v162; // rdx
  __int64 v163; // rbx
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rcx
  __int64 v167; // rdx
  int *v168; // rbx
  int v169; // ecx
  struct tagMOUSEKEYS *v170; // r15
  __int64 v171; // rcx
  int v172; // edx
  unsigned int v173; // ecx
  struct _UNICODE_STRING *v174; // rbx
  struct tagMOUSEKEYS *v175; // r13
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rsi
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int16 v183; // bx
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // rax
  __int64 v187; // rcx
  int v188; // edi
  __int64 v189; // rdx
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // rdx
  __int64 v193; // rcx
  struct tagTHREADINFO *v194; // rbx
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // rbx
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // rcx
  __int64 v203; // rdx
  __int64 v204; // rax
  _OWORD *MonitorMenuRect; // rax
  __int64 v206; // rax
  int *v207; // rdi
  __int64 v208; // rdx
  __int64 v209; // rcx
  struct CMonitorTopology *Current; // rbx
  char v211; // di
  __int64 v212; // rcx
  __int64 v213; // rdx
  __int64 v214; // rcx
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // rcx
  unsigned int v218; // eax
  __int64 v219; // rax
  __int64 v220; // rdx
  char v221; // cl
  _DWORD *v222; // rcx
  int v223; // edi
  int v224; // esi
  int v225; // r14d
  int v226; // r15d
  __int64 v227; // rax
  int v228; // r8d
  int v229; // edx
  __int64 v230; // rdx
  __int64 v231; // rcx
  struct CMonitorTopology *v232; // rdx
  __int64 v233; // rcx
  bool v234; // r15
  __int64 v235; // rax
  int v236; // r8d
  int v237; // edx
  bool v238; // bl
  __int64 v239; // rax
  int v240; // r8d
  int v241; // edx
  _DWORD *v242; // rbx
  unsigned int v243; // eax
  __int64 v244; // rcx
  unsigned int v245; // eax
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // rcx
  __int64 v249; // rdx
  __int64 v250; // rax
  __int64 v251; // rdx
  __int64 v252; // rcx
  int v253; // ebx
  __int64 v254; // rdx
  __int64 v255; // rcx
  const wchar_t *v256; // r9
  __int64 v257; // rax
  const wchar_t *v258; // r9
  __int64 v259; // rax
  _OWORD *v260; // rcx
  _OWORD *v261; // rax
  unsigned int v262; // r15d
  struct tagSOUNDSENTRYW *v263; // rsi
  __int64 v264; // rcx
  int v265; // edx
  unsigned int v266; // ecx
  struct _UNICODE_STRING *v267; // rbx
  _DWORD *v268; // r15
  __int64 v269; // rcx
  size_t v270; // r8
  const void *v271; // rdx
  __int64 v272; // rbx
  __int64 v273; // rdx
  __int64 v274; // rcx
  int v275; // ecx
  __int64 v276; // rax
  __int64 v277; // rdx
  __int64 v278; // rax
  __int64 v279; // rdx
  __int64 v280; // rcx
  __int64 v281; // rdx
  __int64 v282; // rcx
  unsigned int v283; // esi
  unsigned int v284; // edx
  int v285; // edx
  __int64 v286; // rbx
  struct tagTHREADINFO *v287; // rax
  __int64 v288; // rdx
  __int64 v289; // rcx
  __int64 v290; // rbx
  __int64 v291; // rcx
  __int64 v292; // rcx
  __int64 v293; // rcx
  __int64 v294; // rdx
  __int64 v295; // rcx
  __int64 v296; // rcx
  __int64 v297; // rdx
  __int64 v298; // rcx
  __int64 v299; // rdx
  __int64 v300; // rcx
  unsigned int v301; // esi
  __int64 v302; // rcx
  __int64 v303; // rcx
  __int64 v304; // rdx
  __int64 v305; // rcx
  volatile signed __int32 *v306; // rcx
  unsigned int *v307; // r15
  __int64 v308; // rax
  __int64 v309; // rdi
  const wchar_t *v310; // rsi
  const wchar_t *v311; // r9
  int v312; // ebx
  __int64 v313; // r15
  __int64 v314; // rbx
  __int64 v315; // rdx
  __int64 v316; // rcx
  __int64 UserSessionState; // rax
  __int64 v318; // rax
  bool v319; // zf
  unsigned int i; // ebx
  unsigned int v321; // eax
  unsigned int v322; // eax
  unsigned int v323; // eax
  __int64 v324; // rdx
  __int64 v325; // rcx
  __int64 v326; // rdx
  __int64 v327; // rcx
  __int64 v328; // rdx
  __int64 v329; // rcx
  bool v330; // zf
  unsigned int v331; // eax
  unsigned int v332; // eax
  unsigned int v333; // eax
  __int64 v334; // rax
  int *v335; // rsi
  __int64 v336; // rcx
  __int64 v337; // rdx
  __int64 v338; // rcx
  __int64 v339; // rdx
  __int64 v340; // rcx
  __int64 v341; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 DispInfo; // rax
  int v344; // ecx
  InteractiveControlManager *v345; // rax
  InteractiveControlManager *v346; // rax
  __int64 v347; // rdx
  __int64 v348; // rcx
  __int64 v349; // rdx
  __int64 v350; // rcx
  __int64 v351; // rdx
  __int64 v352; // rcx
  __int64 v353; // rdx
  __int64 v354; // rcx
  __int64 v355; // rdx
  __int64 v356; // rcx
  __int64 v357; // rdx
  __int64 v358; // rcx
  __int64 v359; // rax
  __int64 v360; // rdx
  __int64 v361; // rax
  __int64 v362; // rdx
  __int64 v363; // rcx
  __int64 v364; // rdx
  __int64 v365; // rcx
  __int64 v366; // rcx
  int v367; // edi
  int v368; // ebx
  __int64 v369; // rdx
  __int64 v370; // rcx
  __int64 v371; // rdi
  __int64 v372; // rdx
  __int64 v373; // rcx
  __int64 v374; // r13
  __int64 v375; // rdx
  __int64 v376; // rcx
  __int64 v377; // r14
  __int64 v378; // rdx
  __int64 v379; // rcx
  __int64 v380; // rsi
  __int64 v381; // rdx
  __int64 v382; // rcx
  __int64 v383; // rbx
  __int64 v384; // rdx
  __int64 v385; // rcx
  __int64 v386; // r15
  __int64 v387; // rdx
  __int64 v388; // rcx
  int v389; // ecx
  int v390; // edx
  int *v391; // rax
  __int64 v392; // rdx
  int v393; // ecx
  __int64 v394; // rax
  __int64 v395; // rcx
  int v396; // eax
  unsigned int ProfileValue; // eax
  __int64 v398; // rbx
  int v399; // r8d
  unsigned __int64 v400; // rax
  int v401; // ecx
  int v402; // r8d
  unsigned __int64 v403; // rdx
  int v404; // r8d
  __int64 v405; // rcx
  int v406; // r8d
  unsigned int v407; // esi
  unsigned int v408; // esi
  unsigned int v409; // esi
  unsigned int v410; // esi
  unsigned int v411; // esi
  __int64 v412; // rbx
  __int64 v413; // rdx
  __int64 v414; // rcx
  __int64 v415; // rdx
  __int64 v416; // rcx
  int v417; // ebx
  __int64 v418; // rbx
  __int64 v419; // rdx
  __int64 v420; // rcx
  __int64 v421; // rbx
  __int64 v422; // rdx
  __int64 v423; // rcx
  __int64 v424; // rax
  void *v425; // rax
  __int64 v426; // rbx
  __int64 v427; // rdx
  __int64 v428; // rcx
  __int64 v429; // rdx
  __int64 v430; // rcx
  __int64 v431; // rax
  __int64 v432; // rdx
  __int64 v433; // rcx
  struct tagWND *v434; // rcx
  unsigned int v435; // r8d
  __int64 v436; // rax
  __int64 v437; // rbx
  __int64 v438; // rax
  unsigned int v439; // r14d
  int v440; // ebx
  __int64 v441; // rdx
  __int64 v442; // rcx
  int v443; // ebx
  __int64 v444; // rdx
  __int64 v445; // rcx
  int v446; // ebx
  __int64 v447; // rdx
  int v448; // ecx
  _DWORD *v449; // rax
  int v450; // ebx
  __int64 v451; // rdx
  __int64 v452; // rcx
  char v453; // r14
  bool v454; // r13
  int v455; // ebx
  int v456; // edi
  __int64 v457; // rdx
  __int64 v458; // rcx
  __int64 v459; // rax
  int v460; // r8d
  int v461; // edx
  int v462; // ebx
  __int64 v463; // rdx
  __int64 v464; // rcx
  __int64 v465; // rax
  unsigned int *v466; // rax
  __int64 v467; // rcx
  int v468; // edi
  BOOL v469; // ebx
  __int64 v470; // rdx
  __int64 v471; // rdx
  __int64 v472; // rcx
  int v473; // [rsp+80h] [rbp-3F8h]
  _DWORD v474[3]; // [rsp+84h] [rbp-3F4h] BYREF
  int v475; // [rsp+90h] [rbp-3E8h] BYREF
  int v476; // [rsp+94h] [rbp-3E4h] BYREF
  int v477; // [rsp+98h] [rbp-3E0h]
  char v478; // [rsp+9Ch] [rbp-3DCh]
  __int64 v479; // [rsp+A0h] [rbp-3D8h] BYREF
  int v480; // [rsp+A8h] [rbp-3D0h]
  bool v481; // [rsp+ACh] [rbp-3CCh]
  int v482; // [rsp+B0h] [rbp-3C8h]
  int v483; // [rsp+B4h] [rbp-3C4h]
  int v484; // [rsp+B8h] [rbp-3C0h]
  int v485; // [rsp+BCh] [rbp-3BCh]
  unsigned int v486; // [rsp+C0h] [rbp-3B8h]
  __int64 v487; // [rsp+C8h] [rbp-3B0h]
  struct tagPROCESSINFO *v488; // [rsp+D0h] [rbp-3A8h]
  struct tagMOUSEKEYS *v489; // [rsp+D8h] [rbp-3A0h]
  struct tagRECT v490; // [rsp+E0h] [rbp-398h] BYREF
  struct tagRECT v491; // [rsp+100h] [rbp-378h] BYREF
  struct tagRECT v492; // [rsp+110h] [rbp-368h] BYREF
  struct tagRECT v493; // [rsp+130h] [rbp-348h] BYREF
  __int128 v494; // [rsp+140h] [rbp-338h]
  __int128 v495; // [rsp+150h] [rbp-328h] BYREF
  __int128 v496; // [rsp+160h] [rbp-318h] BYREF
  __int128 v497; // [rsp+170h] [rbp-308h] BYREF
  unsigned __int16 v498[40]; // [rsp+180h] [rbp-2F8h] BYREF
  _WORD v499[40]; // [rsp+1D0h] [rbp-2A8h] BYREF
  _BYTE v500[528]; // [rsp+220h] [rbp-258h] BYREF

  v486 = a4;
  v6 = a1;
  v474[0] = a1;
  LODWORD(v479) = a1;
  *(_QWORD *)&v474[1] = a3;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v488 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v9 = -*(_QWORD *)CurrentProcessWin32Process;
    v8 = (struct tagPROCESSINFO *)(CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL));
    v488 = v8;
  }
  v10 = 0;
  v473 = 0;
  v476 = 0;
  v11 = a4 & 1;
  v482 = v11;
  v12 = (a4 >> 1) & 1;
  v483 = v12;
  LODWORD(v487) = v12;
  updated = !(a4 & 1);
  v477 = updated;
  v475 = updated;
  v480 = v486 & 0x8000;
  v485 = 0;
  *(_QWORD *)&v492.left = W32GetUserSessionState(v9, v8);
  *(_QWORD *)&v491.left = *(_QWORD *)&v492.left + 21000LL;
  v489 = (struct tagMOUSEKEYS *)(*(_QWORD *)&v492.left + 20632LL);
  *(_QWORD *)&v493.left = *(_QWORD *)&v492.left + 21112LL;
  *(_QWORD *)&v490.left = W32GetUserSessionState(*(_QWORD *)&v492.left + 21112LL, *(_QWORD *)&v492.left);
  *(_QWORD *)&v495 = *(_QWORD *)&v490.left + 67060LL;
  v499[0] = 0;
  if ( v6 > 0x50 )
  {
    switch ( v6 )
    {
      case 'Q':
      case 'R':
        return 1LL;
      case 'S':
      case 'T':
        goto LABEL_14;
      case 'U':
      case 'V':
        return 1LL;
      case '\\':
      case 'a':
        goto LABEL_951;
    }
  }
  else
  {
    switch ( v6 )
    {
      case 0x50u:
LABEL_14:
        **(_DWORD **)&v474[1] = 0;
        return 1LL;
      case 7u:
        goto LABEL_951;
      case 8u:
        goto LABEL_951;
      case 0xCu:
        goto LABEL_951;
      case 0x27u:
        goto LABEL_951;
      case 0x28u:
        goto LABEL_951;
      case 0x31u:
        goto LABEL_951;
      case 0x3Eu:
        goto LABEL_951;
    }
    v15 = v6 - 63;
    if ( v6 == 63 )
      goto LABEL_951;
    if ( v6 == 79 )
      goto LABEL_14;
  }
  if ( (v6 & 1) != 0 && v6 == 8193 && *((int *)v488 + 3) >= 0 && !CanForceForeground(v488, v14) )
  {
LABEL_951:
    v275 = 87;
    goto LABEL_952;
  }
  UserGdiSessionState = W32GetUserGdiSessionState(v15);
  v19 = v488;
  if ( *(_QWORD *)v488 == *(_QWORD *)(UserGdiSessionState + 40) )
  {
    v27 = 2LL;
LABEL_99:
    v475 = 1;
    v477 = 1;
    updated = 1;
    goto LABEL_100;
  }
  if ( v6 > 0x35 )
  {
    if ( v6 > 0x77 )
    {
      if ( v6 == 161 || v6 == 163 )
        goto LABEL_95;
      v23 = v6 == 4135;
LABEL_87:
      if ( !v23 )
        goto LABEL_88;
LABEL_95:
      v28 = 16;
      goto LABEL_96;
    }
    if ( v6 == 119 )
      goto LABEL_95;
    if ( v6 > 0x4D )
    {
      if ( v6 <= 0x63 )
      {
        if ( v6 == 99 || v6 == 87 || v6 == 88 || v6 == 90 || v6 == 91 )
          goto LABEL_95;
        v21 = v6 == 96;
        goto LABEL_37;
      }
      v24 = v6 - 101;
      if ( v6 - 101 > 8 )
        goto LABEL_88;
      v25 = 325;
    }
    else
    {
      if ( v6 == 77 )
        goto LABEL_95;
      if ( v6 > 0x43 )
      {
        if ( v6 == 69 || v6 == 71 || v6 == 73 || v6 == 75 )
          goto LABEL_95;
        v21 = v6 == 76;
        goto LABEL_37;
      }
      v24 = v6 - 55;
      if ( v6 - 55 > 0xC )
        goto LABEL_88;
      v25 = 5205;
    }
    if ( _bittest(&v25, v24) )
      goto LABEL_95;
    goto LABEL_88;
  }
  if ( v6 == 53 )
    goto LABEL_95;
  if ( v6 > 0x1C )
  {
    if ( v6 <= 0x25 )
    {
      switch ( v6 )
      {
        case 0x25u:
          goto LABEL_95;
        case 0x1Du:
          goto LABEL_95;
        case 0x1Eu:
          goto LABEL_95;
        case 0x20u:
          goto LABEL_95;
        case 0x21u:
          goto LABEL_95;
      }
      v22 = v6 - 34;
      if ( v6 == 34 )
        goto LABEL_95;
LABEL_55:
      v23 = v22 == 2;
      goto LABEL_87;
    }
    if ( v6 == 42 || v6 == 44 || v6 == 46 || v6 == 47 )
      goto LABEL_95;
    v21 = v6 == 51;
LABEL_37:
    if ( v21 )
      goto LABEL_95;
LABEL_88:
    if ( (v6 & 0x3000) != 0 && (v6 & 1) != 0 )
    {
      v484 = 16;
      goto LABEL_90;
    }
    v28 = 2;
LABEL_96:
    v484 = v28;
    if ( v28 == 2 )
      goto LABEL_97;
LABEL_90:
    v26 = CheckWinstaAttributeAccess(16LL);
    goto LABEL_91;
  }
  if ( v6 == 28 )
    goto LABEL_95;
  if ( v6 > 0x11 )
  {
    if ( v6 == 19 || v6 == 20 || v6 == 21 || v6 == 23 )
      goto LABEL_95;
    v22 = v6 - 24;
    if ( v6 == 24 )
      goto LABEL_44;
    goto LABEL_55;
  }
  v20 = 133204;
  if ( _bittest(&v20, v6) )
    goto LABEL_95;
  if ( v6 != 13 )
  {
    v21 = v6 == 15;
    goto LABEL_37;
  }
LABEL_44:
  if ( (*(_QWORD *)&v474[1] & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( !a2 )
      return 1LL;
    goto LABEL_95;
  }
  v484 = 2;
LABEL_97:
  v26 = CheckGrantedAccess(*((_DWORD *)v488 + 168), 2u);
LABEL_91:
  if ( !v26 )
    return 0LL;
  v27 = 2LL;
  if ( v484 == 2 )
    goto LABEL_99;
LABEL_100:
  v29 = 4134LL;
  if ( v6 > 0x1026 )
  {
    if ( v6 == 4135 )
    {
      LOBYTE(v10) = a2 != 0;
      if ( (unsigned int)CheckDesktopPolicy(0LL, 112LL) )
      {
        v11 = 0;
        updated = 0;
      }
      if ( v11 )
      {
        updated = UpdateWinIniInt(0LL, 4LL, 112LL, v10);
        v473 = updated;
      }
      v38 = v12;
      if ( updated )
        *(_DWORD *)(W32GetUserSessionState(v472, v471) + 19128) = v10;
      goto LABEL_945;
    }
    if ( v6 == 8228 )
    {
      UserHandedness = GetUserHandedness();
      goto LABEL_167;
    }
    if ( v6 != 8229 )
      goto LABEL_808;
    a2 = 0;
    if ( (unsigned int)RIMIsDefaultUILanguageRTL() )
      LOBYTE(a2) = v474[1] == 0;
    else
      LOBYTE(a2) = v474[1] != 0;
    goto LABEL_934;
  }
  if ( v6 == 4134 )
  {
    v319 = *(_DWORD *)(W32GetUserSessionState(4134LL, 2LL) + 19128) == 0;
    goto LABEL_676;
  }
  if ( v6 > 0x64 )
  {
    v29 = 137LL;
    if ( v6 <= 0x89 )
    {
      if ( v6 == 137 )
        goto LABEL_695;
      if ( v6 <= 0x78 )
      {
        if ( v6 == 120 )
        {
          v39 = *(_DWORD *)(W32GetUserSessionState(137LL, 2LL) + 69368);
          goto LABEL_127;
        }
        if ( v6 <= 0x6F )
        {
          if ( v6 != 111 )
          {
            v296 = v6 - 101;
            switch ( v6 )
            {
              case 'e':
                if ( v11 )
                {
                  v473 = UpdateWinIniInt(0LL, 12LL, 92LL, a2);
                  updated = v473;
                }
                if ( updated )
                  *(_DWORD *)(W32GetUserSessionState(v296, v27) + 16280) = a2;
                goto LABEL_125;
              case 'f':
                v39 = *(_DWORD *)(W32GetUserSessionState(v6 - 102, 2LL) + 16284);
                goto LABEL_127;
              case 'g':
                v301 = 10;
                if ( a2 >= 0xA )
                  v301 = a2;
                v302 = 0x7FFFFFFFLL;
                if ( v301 > 0x7FFFFFFF )
                  v301 = 0x7FFFFFFF;
                if ( v11 )
                {
                  v473 = UpdateWinIniInt(0LL, 12LL, 93LL, v301);
                  updated = v473;
                }
                if ( updated )
                  *(_DWORD *)(W32GetUserSessionState(v302, v27) + 16284) = v301;
                goto LABEL_125;
              case 'j':
                v39 = *(_DWORD *)(W32GetUserSessionState(v6 - 106, 2LL) + 66072);
                goto LABEL_127;
              case 'k':
                if ( (unsigned int)CheckDesktopPolicy(0LL, 94LL) )
                {
                  v11 = 0;
                  updated = 0;
                }
                if ( v11 )
                {
                  v473 = UpdateWinIniInt(0LL, 4LL, 94LL, a2);
                  updated = v473;
                }
                if ( updated )
                  *(_DWORD *)(W32GetUserSessionState(v300, v299) + 66072) = a2;
                goto LABEL_125;
            }
            if ( v6 != 108 )
            {
              v29 = v6 - 109;
              if ( v6 == 109 )
              {
                if ( (unsigned int)CheckDesktopPolicy(0LL, 15LL) )
                {
                  v11 = 0;
                  updated = 0;
                }
                if ( v11 )
                {
                  v473 = UpdateWinIniInt(0LL, 4LL, 15LL, a2);
                  updated = v473;
                }
                if ( updated )
                  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v298, v297) + 19928) + 4992LL) = a2;
                goto LABEL_125;
              }
              if ( v6 != 110 )
                goto LABEL_808;
              UserHandedness = GetIMEShowStatus();
LABEL_167:
              **(_DWORD **)&v474[1] = UserHandedness;
              goto LABEL_125;
            }
            v122 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6 - 108, 2LL) + 19928) + 4992LL);
            goto LABEL_282;
          }
          updated = xxxSetIMEShowStatus(a2 != 0, v11, &v476);
          goto LABEL_363;
        }
        if ( v6 == 112 )
        {
          UserHandedness = GetMouseSensitivity(0LL);
          goto LABEL_167;
        }
        if ( v6 == 113 )
        {
          if ( (unsigned __int8)IsValidMouseSensitivity(v474[1]) )
          {
            if ( v11 )
            {
              RtlStringCchPrintfW(v498, 0x28uLL, L"%d", *(_QWORD *)&v474[1]);
              v473 = FastUpdateWinIni(0LL, 12LL, 608LL, v498);
              updated = v473;
            }
            if ( updated )
            {
              UpdateMouseSensitivity(v474[1]);
              for ( i = 0; i < 2; ++i )
                ResetAccelerationCurves(i);
            }
            goto LABEL_125;
          }
          return 0LL;
        }
        if ( v6 != 114 )
        {
          switch ( v6 )
          {
            case 's':
              if ( *(_QWORD *)(W32GetUserSessionState(v6 - 115, 2LL) + 62832) )
              {
                UserSessionState = W32GetUserSessionState(v316, v315);
                RtlStringCchCopyW(*(char **)&v474[1], 260LL, (char *)(*(_QWORD *)(UserSessionState + 62832) + 4LL));
                goto LABEL_125;
              }
              tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v493);
              v318 = CreateProfileUserName(&v493);
              LoadWallpaperFilenameFromRegistry(v318, *(unsigned __int16 **)&v474[1], 0x104u);
              goto LABEL_139;
            case 't':
              if ( a2 && a2 != 12 )
                return 0LL;
              v269 = *(_QWORD *)&v474[1];
              if ( !*(_QWORD *)&v474[1] || **(_DWORD **)&v474[1] != 12 )
                return 0LL;
              v270 = 8LL;
              v271 = (const void *)(*(_QWORD *)&v492.left + 21892LL);
              goto LABEL_517;
            case 'u':
              v307 = *(unsigned int **)&v474[1];
              *(_QWORD *)&v495 = *(_QWORD *)&v474[1];
              if ( (!a2 || a2 == 12) && *(_QWORD *)&v474[1] && **(_DWORD **)&v474[1] == 12 )
              {
                if ( v11 )
                {
                  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v490);
                  v308 = CreateProfileUserName(&v490);
                  v309 = v308;
                  *(_QWORD *)&v493.left = v308;
                  v310 = L"1";
                  v311 = L"1";
                  if ( !*(_DWORD *)(*(_QWORD *)&v474[1] + 4LL) )
                    v311 = L"0";
                  v312 = FastWriteProfileStringW(v308, 48LL, L"On", v311);
                  RtlStringCchPrintfW(v498, 0x28uLL, L"%d", *(unsigned int *)(*(_QWORD *)&v474[1] + 8LL));
                  v473 = v312 & FastWriteProfileStringW(v309, 48LL, L"Locale", v498);
                  updated = v473;
                  if ( !v473 )
                  {
                    v313 = *(_QWORD *)&v492.left;
                    if ( !*(_DWORD *)(*(_QWORD *)&v492.left + 21892LL) )
                      v310 = L"0";
                    FastWriteProfileStringW(*(_QWORD *)&v493.left, 48LL, L"On", v310);
                    RtlStringCchPrintfW(v498, 0x28uLL, L"%d", *(unsigned int *)(v313 + 21896));
                    FastWriteProfileStringW(*(_QWORD *)&v493.left, 48LL, L"Locale", v498);
                  }
                  Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v490);
                  v307 = (unsigned int *)v495;
                }
                if ( updated )
                {
                  v314 = *(_QWORD *)&v492.left;
                  memmove((void *)(*(_QWORD *)&v492.left + 21888LL), v307, *v307);
                  *(_DWORD *)(v314 + 21888) = 12;
                }
                goto LABEL_125;
              }
              return 0LL;
          }
          v303 = v6 - 118;
          if ( v6 != 118 )
          {
            if ( *(_DWORD *)(W32GetUserSessionState(v303, 2LL) + 62744) && !v480 )
              goto LABEL_796;
            if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL) )
            {
              v11 = 0;
              updated = 0;
              v475 = 0;
            }
            if ( v11 )
            {
              v473 = UpdateWinIniInt(0LL, 4LL, 618LL, a2 != 0);
              v476 = v473;
              updated = v473;
              v475 = v473;
            }
            if ( !updated )
              goto LABEL_366;
            v306 = *(volatile signed __int32 **)(W32GetUserSessionState(v305, v304) + 19928);
            if ( a2 )
              _InterlockedOr(v306, 0x200u);
            else
              _InterlockedAnd(v306, 0xFFFFFDFF);
            v93 = v476;
            goto LABEL_650;
          }
          v285 = **(_DWORD **)(W32GetUserSessionState(v303, 2LL) + 19928) >> 9;
LABEL_556:
          **(_DWORD **)&v474[1] = v285 & 1;
          goto LABEL_134;
        }
        v319 = *(_QWORD *)(W32GetUserSessionState(v6 - 114, 2LL) + 62864) == 0LL;
LABEL_676:
        v39 = !v319;
        goto LABEL_127;
      }
      if ( v6 <= 0x81 )
      {
        if ( v6 != 129 )
        {
          switch ( v6 )
          {
            case 'y':
              if ( (unsigned int)CheckDesktopPolicy(0LL, 621LL) )
              {
                v11 = 0;
                updated = 0;
              }
              if ( v11 )
              {
                v473 = UpdateWinIniInt(0LL, 4LL, 621LL, a2);
                updated = v473;
              }
              if ( updated )
                *(_DWORD *)(W32GetUserSessionState(v329, v328) + 69368) = a2;
              goto LABEL_125;
            case 'z':
              v39 = *(_DWORD *)(W32GetUserSessionState(137LL, 2LL) + 36472);
              goto LABEL_127;
            case '{':
              if ( (unsigned int)CheckDesktopPolicy(0LL, 622LL) )
              {
                v11 = 0;
                updated = 0;
              }
              if ( v11 )
              {
                v473 = UpdateWinIniInt(0LL, 4LL, 622LL, a2);
                updated = v473;
              }
              if ( updated )
                *(_DWORD *)(W32GetUserSessionState(v327, v326) + 36472) = a2;
              goto LABEL_125;
            case '|':
              v39 = *(_DWORD *)(W32GetUserSessionState(137LL, 2LL) + 36468);
              goto LABEL_127;
          }
          v321 = v6 - 125;
          if ( v6 == 125 )
          {
            if ( (unsigned int)CheckDesktopPolicy(0LL, 623LL) )
            {
              v11 = 0;
              updated = 0;
            }
            if ( v11 )
            {
              v473 = UpdateWinIniInt(0LL, 52LL, 623LL, a2);
              updated = v473;
            }
            if ( updated )
              *(_DWORD *)(W32GetUserSessionState(v325, v324) + 36468) = a2;
            goto LABEL_125;
          }
          goto LABEL_693;
        }
        goto LABEL_695;
      }
      v330 = v6 == 130;
      v331 = v6 - 130;
LABEL_717:
      if ( !v330 )
      {
        v332 = v331 - 1;
        if ( v332 )
        {
          v333 = v332 - 1;
          if ( v333 )
          {
            v321 = v333 - 1;
            if ( v321 )
            {
LABEL_693:
              v322 = v321 - 1;
              if ( v322 && v322 - 1 > 1 )
                goto LABEL_808;
            }
          }
        }
      }
LABEL_695:
      v323 = WindowArrangementSPI::ArrangementParameterInfo(v6, a2, *(_DWORD **)&v474[1], v11, updated != 0);
      v473 = v323 & 1;
      updated = (v323 >> 1) & 1;
      goto LABEL_134;
    }
    if ( v6 <= 0x9C )
    {
      if ( v6 == 156 )
        goto LABEL_734;
      if ( v6 <= 0x94 )
      {
        if ( v6 != 148 )
        {
          if ( v6 == 138 )
            goto LABEL_695;
          v331 = v6 - 139;
          v330 = v6 == 139;
          goto LABEL_717;
        }
LABEL_734:
        updated = ReadPointerDeviceSettingsFull(v6, *(_QWORD *)&v474[1]);
        goto LABEL_125;
      }
      if ( v6 != 149 && (v6 == 150 || v6 != 151 && (v6 == 152 || v6 == 154)) )
        goto LABEL_734;
LABEL_733:
      v93 = WritePointerDeviceSettingsFull(v6, *(_QWORD *)&v474[1], v486 & 1);
      goto LABEL_227;
    }
    if ( v6 > 0xA6 )
    {
      if ( v6 != 167 )
      {
        switch ( v6 )
        {
          case 0xA8u:
            v39 = *(_DWORD *)(W32GetUserSessionState(137LL, 2LL) + 66136);
            goto LABEL_127;
          case 0xA9u:
            if ( !*(_DWORD *)(W32GetUserGdiSessionState(137LL) + 36) )
            {
              if ( !*(_DWORD *)(W32GetUserSessionState(v363, v362) + 62744) || v480 )
              {
                *(_DWORD *)(W32GetUserSessionState(v365, v364) + 66136) = a2 != 0;
                if ( v482 )
                {
                  updated = UpdateWinIniInt(0LL, 4LL, 205LL, a2);
                  v473 = updated;
                }
                goto LABEL_125;
              }
              goto LABEL_796;
            }
            break;
          case 0xAAu:
            v39 = *(_DWORD *)(W32GetUserSessionState(137LL, 2LL) + 66132);
            goto LABEL_127;
          case 0xABu:
            v348 = *(_QWORD *)(W32GetUserSessionState(137LL, 2LL) + 63592);
            if ( *((_DWORD *)v488 + 14) == v348 )
            {
              *(_DWORD *)(W32GetUserSessionState(v348, v347) + 66132) = a2 != 0;
              if ( *(_DWORD *)(W32GetUserSessionState(v350, v349) + 66132) )
              {
                if ( !*(_QWORD *)(W32GetUserSessionState(v352, v351) + 18960)
                  || (v356 = *(_QWORD *)(W32GetUserSessionState(v354, v353) + 18960), !*(_QWORD *)(v356 + 472))
                  || (v358 = *(_QWORD *)(W32GetUserSessionState(v356, v355) + 18960),
                      !*(_QWORD *)(*(_QWORD *)(v358 + 472) + 128LL))
                  || (v359 = W32GetUserSessionState(v358, v357),
                      (unsigned int)IsWindowUnderActiveLockScreen(
                                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v359 + 18960) + 472LL) + 128LL),
                                      v360)) )
                {
                  xxxSetForegroundWindow2(0LL, 0LL, 0LL);
                }
                ClearKeyboardStates();
              }
              v361 = W32GetUserSessionState(v352, v351);
              GreLddmProcessLockScreen(*(unsigned int *)(v361 + 66132));
              goto LABEL_125;
            }
            break;
          case 0xACu:
            v346 = InteractiveControlManager::Instance(137LL, 2LL);
            updated = (int)InteractiveControlManager::GetExternalParameters(
                             v346,
                             *(struct tagINTERACTIVECTRL_PARAMETERS **)&v474[1]) >= 0;
            goto LABEL_125;
          case 0xADu:
            v345 = InteractiveControlManager::Instance(137LL, 2LL);
            v473 = (int)InteractiveControlManager::SetExternalParameters(
                          v345,
                          *(struct tagINTERACTIVECTRL_PARAMETERS **)&v474[1],
                          v486 & 1) >= 0;
            goto LABEL_125;
          default:
            goto LABEL_808;
        }
        return 0LL;
      }
      goto LABEL_800;
    }
    if ( v6 != 166 )
    {
      if ( v6 == 157 )
        goto LABEL_733;
      if ( v6 == 158 )
      {
LABEL_800:
        v493 = 0LL;
        v494 = 0LL;
        if ( (int)DrvDisplayConfigGetScaleFactorOverrides(&v493, 1LL) >= 0 )
        {
          if ( a2 != 158 )
          {
            v366 = *(_QWORD *)&v474[1];
            **(_QWORD **)&v474[1] = *(_QWORD *)((char *)&v494 + 4);
            *(_DWORD *)(v366 + 8) = HIDWORD(v494);
            goto LABEL_125;
          }
          v39 = DWORD2(v494);
          goto LABEL_127;
        }
        return 0LL;
      }
      if ( v6 != 159 )
      {
        switch ( v6 )
        {
          case 0xA0u:
            **(_DWORD **)&v474[1] = 6;
            goto LABEL_134;
          case 0xA1u:
            goto LABEL_133;
          case 0xA2u:
            DispInfo = GetDispInfo(137LL, 2LL);
            MonitorMenuRect = GetMonitorMenuRect(&v493, *(struct tagMONITOR **)(DispInfo + 104));
            goto LABEL_415;
          case 0xA3u:
            v493 = 0LL;
            if ( *(_QWORD *)&v474[1] )
            {
              if ( *(_DWORD *)(*(_QWORD *)&v474[1] + 8LL) < **(_DWORD **)&v474[1]
                || *(_DWORD *)(*(_QWORD *)&v474[1] + 12LL) < *(_DWORD *)(*(_QWORD *)&v474[1] + 4LL) )
              {
                return 0LL;
              }
              v334 = MonitorFromRect(*(INT **)&v474[1], 1u, 0);
            }
            else
            {
              v334 = *(_QWORD *)(GetDispInfo(137LL, 2LL) + 104);
            }
            *(_QWORD *)&v490.left = v334;
            v497 = *(_OWORD *)GetMonitorRect((__int64)&v495, v334);
            v335 = (int *)&v497;
            if ( *(_QWORD *)&v474[1] )
              v335 = *(int **)&v474[1];
            if ( (unsigned int)IntersectRect(&v493, v335, (int *)&v497)
              && *(_QWORD *)&v493.left == *(_QWORD *)v335
              && *(_QWORD *)&v493.right == *((_QWORD *)v335 + 1) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v336) & 0xF) != 2
                && *((_QWORD *)PtiCurrent(v338, v337) + 62)
                && (v341 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v340, v339) + 62) + 8LL),
                    (*(_DWORD *)(v341 + 64) & 1) != 0) )
              {
                CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v341);
                LogicalToPhysicalDPIRect(*(_QWORD *)&v490.left + 112LL, &v493, CurrentThreadDpiAwarenessContext, &v490);
              }
              else
              {
                *(struct tagRECT *)(*(_QWORD *)&v490.left + 112LL) = v493;
              }
              goto LABEL_125;
            }
            goto LABEL_951;
        }
        if ( v6 != 165 )
          goto LABEL_808;
        goto LABEL_800;
      }
    }
    if ( a2 + 11 <= 0x16 )
    {
      if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL) )
      {
        v11 = 0;
        updated = 0;
      }
      if ( v11 )
      {
        v493 = 0LL;
        LODWORD(v494) = 0;
        DWORD1(v494) = a2;
        LODWORD(v479) = a2 != 159;
        if ( PreAllocateForPrimaryMonitorChange() && (int)DrvDisplayConfigSetScaleFactorOverride(&v493, &v479) >= 0 )
        {
          if ( a2 == 159 )
            TraceLoggingSPISetModernDPIOverrideEvent(v344, 159);
          else
            TraceLoggingSPISetDesktopDPIOverrideEvent(v344, a2);
          updated = 1;
        }
        else
        {
          updated = 0;
        }
      }
      goto LABEL_125;
    }
    return 0LL;
  }
  if ( v6 == 100 )
  {
    v39 = *(_DWORD *)(W32GetUserSessionState(4134LL, 2LL) + 16280);
    goto LABEL_127;
  }
  if ( v6 <= 0x2B )
  {
    if ( v6 == 43 )
    {
      v155 = *(_DWORD **)&v474[1];
      **(_DWORD **)&v474[1] = 20;
      v156 = *(_QWORD *)(W32GetUserSessionState(4134LL, 2LL) + 19928);
      v155[1] = *(_DWORD *)(v156 + 2124) - 6;
      v158 = *(_QWORD *)(W32GetUserSessionState(v156, v157) + 19928);
      v161 = (unsigned int)(*(_DWORD *)(v158 + 2084)
                          - *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v160, v159) + 19928) + 2124LL));
      v155[2] = v161;
      v163 = *(_QWORD *)(W32GetUserSessionState(v161, v162) + 19928);
      v166 = (unsigned int)(*(_DWORD *)(v163 + 2088)
                          - *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v165, v164) + 19928) + 2128LL));
      v155[3] = v166;
      v155[4] = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v166, v167) + 19928) + 2120LL);
LABEL_368:
      v38 = v12;
      updated = v477;
      goto LABEL_945;
    }
    if ( v6 <= 0x18 )
    {
      if ( v6 == 24 )
      {
        if ( (*(_QWORD *)&v474[1] & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
          if ( a2 )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(4134LL) & 0xF) != 0 )
            {
              v129 = PsGetCurrentProcessWin32Process(v124);
              if ( v129 )
              {
                v131 = -*(_QWORD *)v129;
                v130 = -(__int64)(*(_QWORD *)v129 != 0LL);
                v129 &= v130;
              }
              v132 = *(unsigned __int16 *)(v129 + 272);
              v133 = W32GetUserSessionState(v131, v130);
              v128 = EngMulDiv(a2, *(unsigned __int16 *)(*(_QWORD *)(v133 + 19928) + 6998LL), v132);
              v135 = PsGetCurrentProcessWin32Process(v134);
              if ( v135 )
                v135 &= -(__int64)(*(_QWORD *)v135 != 0LL);
              a2 = EngMulDiv(v128, 96, *(unsigned __int16 *)(v135 + 272));
              v11 = v482;
            }
            else
            {
              v125 = W32GetUserSessionState(v124, v123);
              v128 = EngMulDiv(a2, *(unsigned __int16 *)(*(_QWORD *)(v125 + 19928) + 6998LL), 96);
            }
            v137 = *(_QWORD *)(W32GetUserSessionState(v127, v126) + 19928);
            if ( v128 <= *(_DWORD *)(v137 + 2308) )
            {
              v137 = *(_QWORD *)(W32GetUserSessionState(v137, v136) + 19928);
              v128 = *(_DWORD *)(v137 + 2308);
            }
            v139 = *(_QWORD *)(W32GetUserSessionState(v137, v136) + 19928);
            if ( a2 <= *(_DWORD *)(v139 + 2428) )
              a2 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v139, v138) + 19928) + 2428LL);
            if ( v11 )
            {
              v473 = SetWindowMetricInt(0LL, 0x41u, v128);
              updated = v473;
            }
            if ( updated )
            {
              SetDpiDepSysMet(19LL, v128);
              *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v141, v140) + 19928) + 2480LL) = a2;
            }
          }
          goto LABEL_125;
        }
        DpiForSystem = GetDpiForSystem(4134LL);
        v65 = 19;
LABEL_166:
        UserHandedness = GetDpiDependentMetric(v65, DpiForSystem);
        goto LABEL_167;
      }
      v29 = 13LL;
      if ( v6 <= 0xD )
      {
        if ( v6 != 13 )
        {
          if ( v6 != 1 )
          {
            if ( v6 == 2 )
            {
              if ( v11 )
              {
                RtlLoadStringOrError(105 - (unsigned int)(a2 != 0), v498, 10LL);
                v473 = FastUpdateWinIni(0LL, 11LL, 9LL, v498);
                updated = v473;
              }
              if ( updated )
              {
                v61 = W32GetUserSessionState(v29, v27);
                if ( a2 )
                  *(_DWORD *)(v61 + 67056) |= 0x80000u;
                else
                  *(_DWORD *)(v61 + 67056) &= ~0x80000u;
              }
              goto LABEL_125;
            }
            if ( v6 == 3 )
            {
              v59 = *(unsigned int *)(W32GetUserSessionState(13LL, 2LL) + 16288);
              **(_DWORD **)&v474[1] = v59;
              *(_DWORD *)(*(_QWORD *)&v474[1] + 4LL) = *(_DWORD *)(W32GetUserSessionState(v59, v60) + 16292);
              *(_DWORD *)(*(_QWORD *)&v474[1] + 8LL) = (unsigned __int8)MouseAccelerationEnabled();
              goto LABEL_125;
            }
            if ( v6 != 4 )
            {
              if ( v6 == 5 )
              {
                v39 = *(_DWORD *)(GetDpiServerInfoForCurrentThread() + 4);
                goto LABEL_127;
              }
              if ( v6 != 6 )
              {
                if ( v6 != 10 )
                {
                  if ( v6 == 11 )
                  {
                    v30 = 31;
                    if ( a2 <= 0x1F )
                      v30 = a2;
                    if ( v11 )
                    {
                      v473 = UpdateWinIniInt(0LL, 13LL, 13LL, v30);
                      updated = v473;
                    }
                    if ( !updated )
                      goto LABEL_125;
                    v33 = v30 | *(_DWORD *)(W32GetUserSessionState(v29, v27) + 12876) & 0xFFFFFFE0;
                    goto LABEL_124;
                  }
                  goto LABEL_808;
                }
                v39 = *(_DWORD *)(W32GetUserSessionState(13LL, 2LL) + 12876) & 0x1F;
LABEL_127:
                **(_DWORD **)&v474[1] = v39;
                goto LABEL_125;
              }
              v40 = 1;
              if ( (int)a2 > 1 )
                v40 = a2;
              if ( v40 >= 0x32 )
                v40 = 50;
              if ( v40 == (__int64)*(int *)(GetDpiServerInfoForCurrentThread() + 4) )
                goto LABEL_133;
              tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v493);
              v41 = (struct _UNICODE_STRING *)CreateProfileUserName(&v493);
              v42 = v41;
              if ( v11 )
              {
                v473 = SetWindowMetricInt(v41, 0x88u, v40);
                updated = v473;
              }
              if ( updated )
              {
                xxxSetAndDrawNCMetrics(v42, v40, 0LL);
                v43 = *(_DWORD *)(GetDpiServerInfoForCurrentProcess() + 4);
                v46 = W32GetUserSessionState(v45, v44);
                bSetDevDragWidth(*(_QWORD *)(*(_QWORD *)(v46 + 57008) + 48LL), v43 + 3);
              }
LABEL_139:
              Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v493);
              goto LABEL_125;
            }
            if ( !v11 )
            {
LABEL_152:
              if ( updated )
              {
                v54 = **(_DWORD **)&v474[1];
                *(_DWORD *)(W32GetUserSessionState(v29, v27) + 16288) = v54;
                v55 = *(_DWORD *)(*(_QWORD *)&v474[1] + 4LL);
                *(_DWORD *)(W32GetUserSessionState(v57, v56) + 16292) = v55;
                LOBYTE(v58) = *(_DWORD *)(*(_QWORD *)&v474[1] + 8LL) != 0;
                EnableMouseAcceleration(v58);
              }
              goto LABEL_125;
            }
            tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v493);
            v47 = CreateProfileUserName(&v493);
            v486 = UpdateWinIniInt(v47, 12LL, 10LL, (unsigned int)**(_DWORD **)&v474[1]);
            v483 = UpdateWinIniInt(v47, 12LL, 11LL, *(unsigned int *)(*(_QWORD *)&v474[1] + 4LL));
            v48 = UpdateWinIniInt(v47, 12LL, 12LL, *(unsigned int *)(*(_QWORD *)&v474[1] + 8LL));
            v485 = v48;
            v50 = v486;
            if ( v486 )
            {
              if ( v483 && v48 )
              {
                v10 = 1;
                v473 = 1;
LABEL_151:
                updated = v10;
                Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v493);
                goto LABEL_152;
              }
              v51 = W32GetUserSessionState(v486, v49);
              UpdateWinIniInt(v47, 12LL, 10LL, *(unsigned int *)(v51 + 16288));
            }
            if ( v483 )
            {
              v52 = W32GetUserSessionState(v50, v49);
              UpdateWinIniInt(v47, 12LL, 11LL, *(unsigned int *)(v52 + 16292));
            }
            if ( v485 )
            {
              v53 = MouseAccelerationEnabled();
              UpdateWinIniInt(v47, 12LL, 12LL, v53);
            }
            goto LABEL_151;
          }
          v62 = *(_DWORD *)(W32GetUserSessionState(13LL, 2LL) + 67056) >> 19;
          goto LABEL_162;
        }
        if ( (*(_QWORD *)&v474[1] & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
          if ( a2 )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(13LL) & 0xF) != 0 )
            {
              v73 = PsGetCurrentProcessWin32Process(v68);
              if ( v73 )
              {
                v75 = -*(_QWORD *)v73;
                v74 = -(__int64)(*(_QWORD *)v73 != 0LL);
                v73 &= v74;
              }
              v76 = *(unsigned __int16 *)(v73 + 272);
              v77 = W32GetUserSessionState(v75, v74);
              v72 = EngMulDiv(a2, *(unsigned __int16 *)(*(_QWORD *)(v77 + 19928) + 6998LL), v76);
              v79 = PsGetCurrentProcessWin32Process(v78);
              if ( v79 )
                v79 &= -(__int64)(*(_QWORD *)v79 != 0LL);
              a2 = EngMulDiv(v72, 96, *(unsigned __int16 *)(v79 + 272));
              v11 = v482;
            }
            else
            {
              v69 = W32GetUserSessionState(v68, v67);
              v72 = EngMulDiv(a2, *(unsigned __int16 *)(*(_QWORD *)(v69 + 19928) + 6998LL), 96);
            }
            v81 = *(_QWORD *)(W32GetUserSessionState(v71, v70) + 19928);
            if ( v72 <= *(_DWORD *)(v81 + 2304) )
            {
              v81 = *(_QWORD *)(W32GetUserSessionState(v81, v80) + 19928);
              v72 = *(_DWORD *)(v81 + 2304);
            }
            v83 = *(_QWORD *)(W32GetUserSessionState(v81, v80) + 19928);
            if ( a2 <= *(_DWORD *)(v83 + 2424) )
              a2 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v83, v82) + 19928) + 2424LL);
            if ( v11 )
            {
              v473 = SetWindowMetricInt(0LL, 0x40u, v72);
              updated = v473;
            }
            if ( updated )
            {
              SetDpiDepSysMet(18LL, v72);
              *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v85, v84) + 19928) + 2476LL) = a2;
            }
          }
          goto LABEL_125;
        }
        DpiForSystem = GetDpiForSystem(13LL);
        v65 = 18;
        goto LABEL_166;
      }
      if ( v6 != 14 )
      {
        if ( v6 != 15 )
        {
          if ( v6 == 16 )
          {
            v39 = *(_DWORD *)(W32GetUserSessionState(13LL, 2LL) + 62856) > 0;
            goto LABEL_127;
          }
          if ( v6 != 17 )
          {
            if ( v6 != 20 )
            {
              if ( v6 != 21 )
              {
                if ( v6 == 22 )
                {
                  v39 = (*(int *)(W32GetUserSessionState(13LL, 2LL) + 12876) >> 5) & 3;
                  goto LABEL_127;
                }
                if ( v6 == 23 )
                {
                  if ( v11 )
                  {
                    v473 = UpdateWinIniInt(0LL, 13LL, 106LL, a2);
                    updated = v473;
                  }
                  if ( !updated )
                    goto LABEL_125;
                  v33 = (32 * a2) | *(_DWORD *)(W32GetUserSessionState(v29, v27) + 12876) & 0xFFFFFF9F;
LABEL_124:
                  *(_DWORD *)(W32GetUserSessionState(v32, v31) + 12876) = v33;
                  v36 = W32GetUserSessionState(v35, v34);
                  SetKeyboardRate(*(unsigned int *)(v36 + 12876), v37);
LABEL_125:
                  v38 = v12;
LABEL_945:
                  v93 = v473;
                  goto LABEL_946;
                }
                goto LABEL_808;
              }
              if ( a2 != -1 || !*(_QWORD *)&v474[1] )
              {
                tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v493);
                v86 = CreateProfileUserName(&v493);
                if ( (unsigned int)CheckDesktopPolicy(v86, 2LL) )
                {
                  v11 = 0;
                  updated = 0;
                }
                if ( v11 && *(_QWORD *)&v474[1] )
                {
                  FastGetProfileStringFromIDW(v86, 4LL, 2LL, &pszFormat, v500, 260, 0);
                  v473 = FastUpdateWinIni(v86, 4LL, 2LL, *(_QWORD *)&v474[1]);
                  updated = v473;
                }
                if ( updated )
                {
                  if ( !(unsigned int)SetDesktopPattern(v86, *(_QWORD *)&v474[1]) )
                  {
                    if ( v11 && *(_QWORD *)&v474[1] )
                      FastUpdateWinIni(v86, 4LL, 2LL, v500);
                    Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v493);
                    return 0LL;
                  }
                  xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x15u, 0LL, 0LL, 1);
                  if ( *((_QWORD *)PtiCurrent(v88, v87) + 62) )
                    v91 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v90, v89) + 62) + 8LL) + 24LL);
                  else
                    v91 = 0LL;
                  xxxInternalInvalidate(v91, (HRGN)1, 0x10485u);
                }
                goto LABEL_139;
              }
              goto LABEL_951;
            }
            tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v493);
            v92 = (struct _UNICODE_STRING *)CreateProfileUserName(&v493);
            if ( (unsigned int)CheckDesktopPolicy(v92, 67LL) )
            {
              v11 = 0;
              updated = 0;
            }
            if ( v11 )
            {
              if ( a2 == -1 )
              {
                updated = 1;
              }
              else
              {
                FastGetProfileStringFromIDW(v92, 4LL, 67LL, &pszFormat, v500, 260, 8);
                v473 = FastUpdateWinIni(v92, 4LL, 67LL, *(_QWORD *)&v474[1]);
                updated = v473;
              }
            }
            if ( updated && !(unsigned int)xxxSetDeskWallpaper(v92, *(__int64 *)&v474[1]) )
            {
              if ( !v11 )
              {
                v93 = 0;
                updated = 0;
                goto LABEL_226;
              }
              if ( a2 != -1 )
              {
                FastUpdateWinIni(v92, 4LL, 67LL, v500);
                v473 = 0;
                updated = 0;
              }
            }
            v93 = v473;
LABEL_226:
            Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v493);
LABEL_227:
            v38 = v12;
LABEL_946:
            v262 = v474[0];
            goto LABEL_947;
          }
          if ( a2 - 2 > 0xFFFFFFFC )
          {
            if ( !*(_DWORD *)(W32GetUserSessionState(13LL, 2LL) + 62744) || v480 )
            {
              v96 = W32GetUserSessionState(v95, v94);
              v99 = W32GetUserSessionState(v98, v97);
              *(_DWORD *)(v99 + 66140) = a2 == -1;
              if ( *(_DWORD *)(W32GetUserGdiSessionState(v100) + 36) )
                return 0LL;
              if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL) )
              {
                v11 = 0;
                updated = 0;
                v475 = 0;
              }
              if ( v11 )
              {
                v473 = UpdateWinIniInt(0LL, 4LL, 100LL, a2);
                v476 = v473;
                updated = v473;
                v475 = v473;
              }
              if ( updated )
              {
                if ( *(_DWORD *)(W32GetUserSessionState(v102, v101) + 19128) )
                {
                  v93 = v473;
                }
                else
                {
                  v105 = W32GetUserSessionState(v104, v103);
                  CInputGlobals::UpdateLastInputTime(
                    *(_QWORD *)(v105 + 3064),
                    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                    7LL);
                  v93 = v476;
                  updated = v475;
                }
                v106 = *(_DWORD *)(v96 + 62856);
                if ( v106 >= 0 )
                {
                  if ( a2 )
                    goto LABEL_227;
                }
                else if ( !a2 )
                {
                  goto LABEL_227;
                }
                *(_DWORD *)(v96 + 62856) = -v106;
                goto LABEL_227;
              }
LABEL_366:
              v93 = v473;
              goto LABEL_227;
            }
LABEL_796:
            v275 = 329;
LABEL_952:
            UserSetLastError(v275);
          }
          return 0LL;
        }
        v107 = W32GetUserSessionState(13LL, 2LL);
        if ( *(_DWORD *)(W32GetUserGdiSessionState(v108) + 36) )
          return 0LL;
        if ( *(_DWORD *)(W32GetUserSessionState(v110, v109) + 62744) && !v480 )
          goto LABEL_796;
        v111 = 1000 * a2;
        v112 = 1000 * GetEasTimeout();
        if ( v112 && ((v485 = 1, *(int *)(v107 + 62856) > 0) && v112 < v111 || (v482 = v11, v111 <= 0)) )
        {
          UserSetLastError(1260);
          v113 = 0;
          updated = 0;
          v475 = 0;
        }
        else
        {
          v113 = v482;
        }
        if ( (unsigned int)CheckDesktopPolicy(0LL, 99LL) )
        {
          if ( !v485 )
          {
LABEL_268:
            v475 = 0;
            updated = 0;
            v113 = 0;
            goto LABEL_269;
          }
          v480 = 0;
          if ( (unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL) )
          {
            v116 = 1000 * v480;
            v480 = v116;
            if ( v116 )
            {
              if ( v116 < v112 && *(int *)(v107 + 62856) > 0 && v116 < v111 )
              {
                UserSetLastError(1260);
                goto LABEL_268;
              }
            }
          }
        }
LABEL_269:
        if ( v113 )
        {
          v473 = UpdateWinIniInt(0LL, 4LL, 99LL, v111 / 0x3E8u);
          v476 = v473;
          updated = v473;
          v475 = v473;
        }
        if ( updated )
        {
          if ( *(_DWORD *)(W32GetUserSessionState(v115, v114) + 19128) )
          {
            v93 = v473;
          }
          else
          {
            v119 = W32GetUserSessionState(v118, v117);
            CInputGlobals::UpdateLastInputTime(
              *(_QWORD *)(v119 + 3064),
              (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
              7LL);
            v93 = v476;
            updated = v475;
          }
          if ( *(int *)(v107 + 62856) < 0 && !v485 )
            v111 = -v111;
          *(_DWORD *)(v107 + 62856) = v111;
          goto LABEL_227;
        }
        goto LABEL_366;
      }
      v120 = *(_DWORD *)(W32GetUserSessionState(13LL, 2LL) + 62856);
      v121 = -v120;
      if ( v120 > 0 )
        v121 = v120;
      v122 = v121 / 1000;
LABEL_282:
      **(_DWORD **)&v474[1] = v122;
      goto LABEL_125;
    }
    if ( v6 <= 0x21 )
    {
      if ( v6 == 33 )
      {
        if ( v11 )
        {
          v473 = UpdateWinIniInt(0LL, 12LL, 5LL, a2);
          updated = v473;
        }
        if ( updated )
          _SwapMouseButton(a2 != 0);
        goto LABEL_125;
      }
      if ( v6 != 25 )
      {
        v142 = v6 - 26;
        if ( v6 == 26 )
        {
          if ( v11 )
          {
            v473 = SetWindowMetricInt(0LL, 0x42u, a2 != 0);
            updated = v473;
          }
          if ( updated )
          {
            v148 = W32GetUserSessionState(v142, v27);
            if ( a2 )
              *(_DWORD *)(v148 + 67056) |= 0x200000u;
            else
              *(_DWORD *)(v148 + 67056) &= ~0x200000u;
            xxxMetricsRecalc(2LL, 0LL, 0, 0, 0, 0, 0);
          }
          goto LABEL_125;
        }
        if ( v6 == 27 )
        {
          v122 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6 - 27, 2LL) + 19928) + 2056LL);
          goto LABEL_282;
        }
        v143 = v6 - 28;
        if ( v6 != 28 )
        {
          v144 = v6 - 29;
          if ( v6 == 29 )
          {
            if ( v11 )
            {
              v473 = UpdateWinIniInt(0LL, 12LL, 97LL, a2);
              updated = v473;
            }
            if ( updated )
              *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v144, v27) + 19928) + 2040LL) = a2;
            goto LABEL_125;
          }
          v145 = v6 - 30;
          if ( v6 == 30 )
          {
            if ( v11 )
            {
              v473 = UpdateWinIniInt(0LL, 12LL, 98LL, a2);
              updated = v473;
            }
            if ( updated )
              *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v145, v27) + 19928) + 2044LL) = a2;
            goto LABEL_125;
          }
          if ( v6 != 31 )
          {
            if ( v11 )
            {
              v473 = UpdateWinIniInt(0LL, 12LL, 6LL, a2);
              updated = v473;
            }
            if ( updated )
              SetDoubleClickTime(a2);
            goto LABEL_125;
          }
          DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread(v6 - 31, 2LL);
          v147 = *(_WORD **)&v474[1];
          goto LABEL_315;
        }
LABEL_934:
        if ( v11 )
        {
          v473 = UpdateWinIniInt(0LL, 3LL, 96LL, a2);
          updated = v473;
          v477 = v473;
        }
        if ( updated )
        {
          v467 = *(_QWORD *)(W32GetUserSessionState(v143, v27) + 19928);
          v468 = *(_DWORD *)(v467 + 2056);
          v469 = a2 != 0;
          *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v467, v470) + 19928) + 2056LL) = v469;
          TraceLoggingSPISetMenuDropAlignmentEvent(v468, v469);
          updated = v477;
        }
        goto LABEL_125;
      }
      v62 = *(_DWORD *)(W32GetUserSessionState(v6 - 25, 2LL) + 67056) >> 21;
LABEL_162:
      v63 = v62 & 1;
LABEL_163:
      **(_DWORD **)&v474[1] = v63;
      goto LABEL_134;
    }
    if ( v6 != 34 )
    {
      if ( v6 == 35 )
      {
        **(_DWORD **)&v474[1] = 1;
        goto LABEL_134;
      }
      if ( v6 != 36 )
      {
        switch ( v6 )
        {
          case '%':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 107LL) )
            {
              v11 = 0;
              updated = 0;
            }
            if ( v11 )
            {
              v473 = UpdateWinIniInt(0LL, 4LL, 107LL, a2 == 1);
              updated = v473;
            }
            if ( updated )
            {
              v151 = W32GetUserSessionState(v150, v149);
              if ( a2 == 1 )
                *(_DWORD *)(v151 + 67056) |= 0x100000u;
              else
                *(_DWORD *)(v151 + 67056) &= ~0x100000u;
            }
            goto LABEL_125;
          case '&':
            v62 = *(_DWORD *)(W32GetUserSessionState(4134LL, 2LL) + 67056) >> 20;
            goto LABEL_162;
          case ')':
            if ( *(_QWORD *)&v474[1] )
            {
              GetWindowNCMetrics(*(__int64 *)&v474[1], 2LL, (__int64)v19, v18);
              goto LABEL_125;
            }
            return 0LL;
        }
LABEL_343:
        v21 = (unsigned int)xxxSetSPIMetrics(0LL, v6, *(void **)&v474[1], v11, &v476) == 0;
        v473 = v476;
        if ( v21 )
        {
          updated = 0;
        }
        else if ( v11 )
        {
          updated = v476;
        }
        RtlLoadStringOrError(135LL, v499, 40LL);
        goto LABEL_125;
      }
LABEL_134:
      v38 = v12;
      goto LABEL_945;
    }
    if ( *(_QWORD *)&v474[1] )
      v152 = a2 == 92;
    else
      v152 = a2 == 0;
    if ( !v152 )
      return 0LL;
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v493);
    v153 = (struct _UNICODE_STRING *)CreateProfileUserName(&v493);
    v154 = xxxSetSPIMetrics(v153, 0x22u, *(void **)&v474[1], v11, &v476);
    Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v493);
    if ( v154 )
    {
      v473 = v476;
      if ( v482 )
        updated = v476;
      goto LABEL_366;
    }
    updated = 0;
LABEL_363:
    v93 = v476;
    goto LABEL_227;
  }
  if ( v6 <= 0x48 )
  {
    if ( v6 == 72 )
    {
      v272 = *(_QWORD *)&v474[1];
      if ( !*(_QWORD *)&v474[1] || a2 != 8 )
        return 0LL;
      **(_DWORD **)&v474[1] = 8;
      *(_DWORD *)(v272 + 4) = *(_WORD *)(W32GetUserSessionState(4134LL, 2LL) + 67058) & 1;
      goto LABEL_134;
    }
    if ( v6 <= 0x39 )
    {
      switch ( v6 )
      {
        case '9':
          if ( v11 )
          {
            RtlStringCchPrintfW(v498, 0x28uLL, L"%d", a2 == 1);
            v473 = FastWriteProfileStringW(0LL, 20LL, L"On", v498);
            updated = v473;
          }
          if ( updated )
          {
            v250 = W32GetUserSessionState(v29, v27);
            if ( a2 == 1 )
              *(_DWORD *)(v250 + 67056) |= 0x8000u;
            else
              *(_DWORD *)(v250 + 67056) &= ~0x8000u;
            SetAccessEnabledFlag();
            v253 = (*(_DWORD *)(W32GetUserSessionState(v252, v251) + 67056) >> 15) & 1;
            *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v255, v254) + 19928) + 2176LL) = v253;
          }
          goto LABEL_125;
        case ',':
          goto LABEL_343;
        case '-':
          v242 = *(_DWORD **)&v474[1];
          **(_DWORD **)&v474[1] = 108;
          v243 = GetDpiForSystem(4134LL);
          v242[1] = GetDpiDependentMetric(18, v243);
          v245 = GetDpiForSystem(v244);
          v242[2] = GetDpiDependentMetric(19, v245);
          v248 = (*(_DWORD *)(W32GetUserSessionState(v247, v246) + 67056) >> 21) & 1;
          v242[3] = v248;
          DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread(v248, v249);
          v147 = v242 + 4;
LABEL_315:
          GreExtGetObjectW(*(Gre::Base **)(DpiMetricsForCurrentThread + 72), 92LL, v147);
          goto LABEL_125;
        case '.':
          goto LABEL_343;
        case '/':
          v493 = 0LL;
          if ( *(_QWORD *)&v474[1] )
          {
            if ( *(_DWORD *)(*(_QWORD *)&v474[1] + 8LL) < **(_DWORD **)&v474[1]
              || *(_DWORD *)(*(_QWORD *)&v474[1] + 12LL) < *(_DWORD *)(*(_QWORD *)&v474[1] + 4LL) )
            {
              return 0LL;
            }
            v206 = MonitorFromRect(*(INT **)&v474[1], 1u, 0);
          }
          else
          {
            v206 = *(_QWORD *)(GetDispInfo(4134LL, 2LL) + 104);
          }
          v479 = v206;
          v496 = *(_OWORD *)GetMonitorRect((__int64)&v495, v206);
          v207 = (int *)&v496;
          if ( *(_QWORD *)&v474[1] )
            v207 = *(int **)&v474[1];
          if ( (unsigned int)IntersectRect(&v493, v207, (int *)&v496)
            && *(_QWORD *)&v493.left == *(_QWORD *)v207
            && *(_QWORD *)&v493.right == *((_QWORD *)v207 + 1) )
          {
            v495 = *(_OWORD *)GetMonitorWorkRect((__int64)&v495, v479);
            if ( v495 != *(_OWORD *)&v493 )
            {
              Current = CTopologyManager::GetCurrent(v209, v208);
              *(_QWORD *)&v495 = Current;
              v211 = 1;
              v473 = 1;
              if ( (W32GetCurrentThreadDpiAwarenessContext(v212) & 0xF) != 2 )
              {
                if ( *((_QWORD *)PtiCurrent(v214, v213) + 62) )
                {
                  v217 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v216, v215) + 62) + 8LL);
                  if ( (*(_DWORD *)(v217 + 64) & 1) != 0 )
                  {
                    v218 = W32GetCurrentThreadDpiAwarenessContext(v217);
                    LogicalToPhysicalDPIRect(&v493, &v493, v218, &v479);
                  }
                }
              }
              v490 = v493;
              v219 = *(_QWORD *)(v479 + 40);
              v492 = *(struct tagRECT *)(v219 + 44);
              v491 = *(struct tagRECT *)(v219 + 28);
              InputTraceLogging::DesktopRecalc::WorkAreaChanged(*(void **)v479, &v491, &v492, &v490, a2 != 0);
              v220 = v479;
              *(struct tagRECT *)(*(_QWORD *)(v479 + 40) + 44LL) = v493;
              if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
                || (v221 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
              {
                v221 = 0;
              }
              v478 = v221;
              v481 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v221 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v222 = *(_DWORD **)(v479 + 40);
                v223 = v222[14];
                v224 = v222[13];
                v225 = v222[12];
                v226 = v222[11];
                v227 = W32GetUserSessionState(v222, v220);
                LOBYTE(v228) = v481;
                LOBYTE(v229) = v478;
                WPP_RECORDER_AND_TRACE_SF_dddddddd(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                  v229,
                  v228,
                  *(_QWORD *)(v227 + 69416),
                  4,
                  7,
                  10,
                  (__int64)&WPP_e9119d9aba1231428d621ec28dbeb9a6_Traceguids,
                  v226,
                  v225,
                  v224,
                  v223,
                  v493.left,
                  v493.top,
                  v493.right,
                  v493.bottom);
                v12 = v483;
                v211 = 1;
              }
              CTopologyManager::UpdateCurrent();
              v233 = *(_QWORD *)(GetDispInfo(v231, v230) + 104);
              if ( v479 == v233 )
                SortMonitorsInSpatialOrder(v233, (__int64)v232);
              if ( a2 )
              {
                if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                  || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
                  || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
                {
                  v211 = 0;
                }
                v234 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v211 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  v235 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v232);
                  LOBYTE(v236) = v234;
                  LOBYTE(v237) = v211;
                  WPP_RECORDER_AND_TRACE_SF_(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v237,
                    v236,
                    *(_QWORD *)(v235 + 69416),
                    4,
                    7,
                    11,
                    (__int64)&WPP_e9119d9aba1231428d621ec28dbeb9a6_Traceguids);
                }
                DesktopRecalc::OnWorkAreaChanged(Current, v232);
              }
              else
              {
                if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                  || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
                  || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
                {
                  v211 = 0;
                }
                v238 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v211 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  v239 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v232);
                  LOBYTE(v240) = v238;
                  LOBYTE(v241) = v211;
                  WPP_RECORDER_AND_TRACE_SF_(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v241,
                    v240,
                    *(_QWORD *)(v239 + 69416),
                    3,
                    7,
                    12,
                    (__int64)&WPP_e9119d9aba1231428d621ec28dbeb9a6_Traceguids);
                }
              }
              DwmNotifyWorkAreaChanged();
              CCurrentMonitorTopologyPtr::~CCurrentMonitorTopologyPtr((CMonitorTopology **)&v495);
            }
LABEL_133:
            updated = 1;
            goto LABEL_134;
          }
          goto LABEL_951;
      }
      if ( v6 != 48 )
      {
        if ( v6 == 54 )
        {
          v197 = *(_QWORD *)&v474[1];
          if ( (!a2 || a2 == 28) && *(_QWORD *)&v474[1] && **(_DWORD **)&v474[1] == 28 )
          {
            memmove((void *)(*(_QWORD *)&v474[1] + 4LL), (char *)v489 + 4, 0x18uLL);
            *(_DWORD *)(*(_QWORD *)&v474[1] + 4LL) &= 0x4CFFFFFFu;
            if ( *(_BYTE *)(W32GetUserSessionState(v199, v198) + 20943) )
              *(_DWORD *)(v197 + 4) |= 0x80000000;
            v202 = (*(unsigned __int16 *)(W32GetUserSessionState(v201, v200) + 20660) & 3u) << 24;
            *(_DWORD *)(v197 + 4) |= v202;
            *(_DWORD *)(v197 + 4) |= (*(_WORD *)(W32GetUserSessionState(v202, v203) + 20662) & 3) << 28;
            goto LABEL_125;
          }
          return 0LL;
        }
        if ( v6 == 55 )
        {
          v170 = *(struct tagMOUSEKEYS **)&v474[1];
          if ( !a2 || a2 == 28 )
          {
            if ( *(_QWORD *)&v474[1] )
            {
              if ( **(_DWORD **)&v474[1] == 28 )
              {
                v171 = *(_DWORD *)(*(_QWORD *)&v474[1] + 4LL) & 0x4CFFFFFF;
                *(_DWORD *)(*(_QWORD *)&v474[1] + 4LL) = v171;
                if ( (unsigned __int8)v171 == (_DWORD)v171 )
                {
                  v172 = *(_DWORD *)(W32GetUserSessionState(v171, 2LL) + 20636);
                  v173 = *((_DWORD *)v170 + 1) | 2;
                  if ( (v172 & 2) == 0 )
                    v173 = *((_DWORD *)v170 + 1) & 0xFFFFFFFD;
                  *((_DWORD *)v170 + 1) = v173;
                  if ( (unsigned int)(*((_DWORD *)v170 + 2) - 10) <= 0x15E
                    && (unsigned int)(*((_DWORD *)v170 + 3) - 1000) <= 0xFA0 )
                  {
                    if ( v11 )
                    {
                      tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v493);
                      v174 = (struct _UNICODE_STRING *)CreateProfileUserName(&v493);
                      v473 = SetMouseKeys(v174, v170);
                      updated = v473;
                      v477 = v473;
                      v175 = v489;
                      if ( !v473 )
                        SetMouseKeys(v174, v489);
                      Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v493);
                    }
                    else
                    {
                      v175 = v489;
                    }
                    if ( updated )
                    {
                      memmove(v175, v170, *(unsigned int *)v170);
                      *(_DWORD *)v175 = 28;
                      CalculateMouseTable();
                      v179 = *(unsigned int *)(W32GetUserSessionState(v177, v176) + 20636);
                      if ( (v179 & 1) != 0 )
                      {
                        v180 = W32GetUserSessionState(v179, v178);
                        v183 = *(_WORD *)(W32GetUserSessionState(v182, v181) + 13984);
                        v186 = W32GetUserSessionState(v185, v184);
                        v187 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)v183 >> 2) + v180 + 14336);
                        v188 = v187 & (1 << (2 * (*(_WORD *)(v186 + 13984) & 3) + 1));
                        v191 = (*(_DWORD *)(W32GetUserSessionState(v187, v189) + 20636) >> 7) & 1;
                        *(_BYTE *)(W32GetUserSessionState(v191, v190) + 20943) = (_DWORD)v191 != (v188 != 0);
                        MKShowMouseCursor();
                        updated = v477;
                      }
                      else
                      {
                        MKHideMouseCursor();
                      }
                      SetAccessEnabledFlag();
                      v194 = PtiCurrent(v193, v192);
                      if ( ((*((_DWORD *)v194 + 180) | *(_DWORD *)(**((_QWORD **)PtiCurrent(v196, v195) + 63) + 16LL)) & 0x800) != 0 )
                        xxxCallHook(11LL, 3LL, 0LL, 10);
                      PostShellHookMessagesEx((LastWokenThread *)0xB, 3LL);
                    }
                    goto LABEL_125;
                  }
                }
              }
            }
          }
          return 0LL;
        }
        if ( v6 != 56 )
          goto LABEL_808;
        v168 = *(int **)&v474[1];
        v169 = *(_DWORD *)(W32GetUserSessionState(4134LL, 2LL) + 67056) >> 15;
LABEL_382:
        *v168 = v169 & 1;
        goto LABEL_134;
      }
      v204 = GetDispInfo(4134LL, 2LL);
      MonitorMenuRect = (_OWORD *)GetMonitorWorkRect((__int64)&v493, *(_QWORD *)(v204 + 104));
LABEL_415:
      **(_OWORD **)&v474[1] = *MonitorMenuRect;
      goto LABEL_125;
    }
    if ( v6 != 64 )
    {
      if ( v6 == 65 )
      {
        v263 = *(struct tagSOUNDSENTRYW **)&v474[1];
        if ( !a2 || a2 == 56 )
        {
          if ( *(_QWORD *)&v474[1] )
          {
            if ( **(_DWORD **)&v474[1] == 56 )
            {
              v264 = *(unsigned int *)(*(_QWORD *)&v474[1] + 4LL);
              if ( (*(_DWORD *)(*(_QWORD *)&v474[1] + 4LL) & 7) == (_DWORD)v264
                && *(_DWORD *)(*(_QWORD *)&v474[1] + 32LL) <= 3u
                && !*(_DWORD *)(*(_QWORD *)&v474[1] + 8LL)
                && !*(_DWORD *)(*(_QWORD *)&v474[1] + 20LL) )
              {
                v265 = *(_DWORD *)(W32GetUserSessionState(v264, 2LL) + 21004);
                v266 = *(_DWORD *)(*(_QWORD *)&v474[1] + 4LL) | 2;
                if ( (v265 & 2) == 0 )
                  v266 = *(_DWORD *)(*(_QWORD *)&v474[1] + 4LL) & 0xFFFFFFFD;
                *(_DWORD *)(*(_QWORD *)&v474[1] + 4LL) = v266;
                if ( v11 )
                {
                  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v493);
                  v267 = (struct _UNICODE_STRING *)CreateProfileUserName(&v493);
                  v473 = SetSoundSentry(v267, v263);
                  updated = v473;
                  v268 = *(_DWORD **)&v491.left;
                  if ( !v473 )
                    SetSoundSentry(v267, *(struct tagSOUNDSENTRYW **)&v491.left);
                  Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v493);
                }
                else
                {
                  v268 = *(_DWORD **)&v491.left;
                }
                if ( updated )
                {
                  memmove(v268, v263, *(unsigned int *)v263);
                  *v268 = 56;
                  SetAccessEnabledFlag();
                }
                goto LABEL_125;
              }
            }
          }
        }
        return 0LL;
      }
      if ( v6 == 66 )
      {
        *(_QWORD *)&v495 = *(_QWORD *)&v474[1];
        *(_DWORD *)(*(_QWORD *)&v474[1] + 4LL) = *(_DWORD *)(*(_QWORD *)&v492.left + 21100LL);
        v260 = *(_OWORD **)(v495 + 8);
        v261 = *(_OWORD **)&v493.left;
        do
        {
          *v260 = *v261;
          v260[1] = v261[1];
          v260[2] = v261[2];
          v260[3] = v261[3];
          v260[4] = v261[4];
          v260[5] = v261[5];
          v260[6] = v261[6];
          v260 += 8;
          *(v260 - 1) = v261[7];
          v261 += 8;
          --v27;
        }
        while ( v27 );
        v262 = v474[0];
        v38 = v12;
        v93 = v476;
        updated = v475;
        goto LABEL_947;
      }
      if ( v6 != 67 )
      {
        switch ( v6 )
        {
          case 'D':
            v168 = *(int **)&v474[1];
            v169 = *(_DWORD *)(W32GetUserSessionState(4134LL, 2LL) + 67056) >> 17;
            break;
          case 'E':
            if ( v11 )
            {
              v258 = L"1";
              if ( !a2 )
                v258 = L"0";
              v473 = FastWriteProfileStringW(0LL, 27LL, L"On", v258);
              updated = v473;
            }
            if ( updated )
            {
              v259 = W32GetUserSessionState(v29, v27);
              if ( a2 )
                *(_DWORD *)(v259 + 67056) |= 0x20000u;
              else
                *(_DWORD *)(v259 + 67056) &= ~0x20000u;
            }
            goto LABEL_125;
          case 'F':
            v168 = *(int **)&v474[1];
            v169 = *(_DWORD *)(W32GetUserSessionState(4134LL, 2LL) + 67056) >> 18;
            break;
          case 'G':
            if ( v11 )
            {
              v256 = L"1";
              if ( !a2 )
                v256 = L"0";
              v473 = FastWriteProfileStringW(0LL, 28LL, L"On", v256);
              updated = v473;
            }
            if ( updated )
            {
              v257 = W32GetUserSessionState(v29, v27);
              if ( a2 )
                *(_DWORD *)(v257 + 67056) |= 0x40000u;
              else
                *(_DWORD *)(v257 + 67056) &= ~0x40000u;
            }
            goto LABEL_125;
          default:
            goto LABEL_808;
        }
        goto LABEL_382;
      }
      v93 = SetHighContrastWorker(*(struct tagINTERNALSETHIGHCONTRAST *volatile *)&v474[1], v11, &v475);
LABEL_650:
      updated = v475;
      goto LABEL_227;
    }
    if ( a2 && a2 != 56 )
      return 0LL;
    v269 = *(_QWORD *)&v474[1];
    if ( !*(_QWORD *)&v474[1] || **(_DWORD **)&v474[1] != 56 )
      return 0LL;
    v270 = 52LL;
    v271 = (const void *)(*(_QWORD *)&v491.left + 4LL);
LABEL_517:
    memmove((void *)(v269 + 4), v271, v270);
    goto LABEL_125;
  }
  if ( v6 > 0x5A )
  {
    switch ( v6 )
    {
      case '[':
        return GetKbdLangSwitch(0LL);
      case ']':
        if ( v11 )
        {
          RtlStringCchPrintfW(v498, 0x28uLL, L"%d", a2);
          v473 = FastUpdateWinIni(0LL, 12LL, 613LL, v498);
          updated = v473;
        }
        if ( updated )
          SetMouseTrails(a2);
        goto LABEL_125;
      case '^':
        if ( *(_DWORD *)(W32GetUserSessionState(v6 - 94, 2LL) + 16296) )
          v63 = *(_DWORD *)(W32GetUserSessionState(v295, v294) + 16296) + 1;
        else
          v63 = *(_DWORD *)(W32GetUserSessionState(v295, v294) + 16296);
        goto LABEL_163;
    }
    if ( v6 != 95 )
    {
      v291 = v6 - 96;
      if ( v6 == 96 )
      {
        if ( v11 )
        {
          v473 = UpdateWinIniInt(0LL, 12LL, 7LL, a2 != 0);
          updated = v473;
        }
        if ( updated )
        {
          v293 = *(_QWORD *)(W32GetUserSessionState(v291, v27) + 19928);
          if ( a2 )
            *(_DWORD *)(v293 + 7004) |= 2u;
          else
            *(_DWORD *)(v293 + 7004) &= ~2u;
        }
        goto LABEL_125;
      }
      v292 = v6 - 98;
      if ( v6 != 98 )
      {
        if ( v11 )
        {
          v473 = UpdateWinIniInt(0LL, 12LL, 91LL, a2);
          updated = v473;
        }
        if ( updated )
          *(_DWORD *)(W32GetUserSessionState(v292, v27) + 16276) = a2;
        goto LABEL_125;
      }
      v39 = *(_DWORD *)(W32GetUserSessionState(v292, 2LL) + 16276);
      goto LABEL_127;
    }
    v284 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6 - 95, 2LL) + 19928) + 7004LL);
    goto LABEL_555;
  }
  switch ( v6 )
  {
    case 'Z':
      v286 = **(_QWORD **)&v474[1];
      v287 = PtiCurrent(4134LL, 2LL);
      v290 = HKLtoPKL(v287, v286);
      if ( v290 )
      {
        if ( updated )
        {
          *(_QWORD *)&v493.left = W32GetUserSessionState(v289, v288) + 14272;
          *(_QWORD *)&v493.right = v290;
          HMAssignmentLock(&v493, 0LL);
        }
        goto LABEL_125;
      }
      return 0LL;
    case 'I':
      goto LABEL_343;
    case 'J':
      v284 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(4134, 2LL) + 96) + 20372LL);
LABEL_555:
      v285 = v284 >> 1;
      goto LABEL_556;
    case 'K':
      if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL) )
      {
        v11 = 0;
        updated = 0;
      }
      v283 = a2 != 0 ? 2 : 0;
      if ( v11 )
      {
        v473 = UpdateWinIniInt(0LL, 4LL, 200LL, v283);
        updated = v473;
      }
      if ( updated )
        GreSetFontEnumeration(v283 | 4);
      goto LABEL_125;
    case 'L':
      if ( (unsigned int)CheckDesktopPolicy(0LL, 198LL) )
      {
        v11 = 0;
        updated = 0;
      }
      if ( v11 )
      {
        v473 = UpdateWinIniInt(0LL, 4LL, 198LL, a2);
        updated = v473;
      }
      if ( updated )
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v282, v281) + 19928) + 2168LL) = a2;
      goto LABEL_125;
    case 'M':
      if ( (unsigned int)CheckDesktopPolicy(0LL, 199LL) )
      {
        v11 = 0;
        updated = 0;
      }
      if ( v11 )
      {
        v473 = UpdateWinIniInt(0LL, 4LL, 199LL, a2);
        updated = v473;
      }
      if ( updated )
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v280, v279) + 19928) + 2172LL) = a2;
      goto LABEL_125;
    case 'W':
      tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v493);
      v278 = CreateProfileUserName(&v493);
      xxxUpdateSystemCursorsFromRegistry(v278, 2u);
      goto LABEL_139;
    case 'X':
      tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v493);
      v276 = CreateProfileUserName(&v493);
      xxxUpdateSystemIconsFromRegistry(v276, v277);
      goto LABEL_139;
    case 'Y':
      if ( *(_QWORD *)(W32GetUserSessionState(4134LL, 2LL) + 14272) )
      {
        **(_QWORD **)&v474[1] = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v274, v273) + 14272) + 40LL);
        goto LABEL_125;
      }
      v275 = 21;
      goto LABEL_952;
  }
LABEL_808:
  if ( v6 < 0xB6 )
  {
    v275 = 1439;
    goto LABEL_952;
  }
  LODWORD(v479) = v6 & 0x3000;
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 0x3000) != 0x1000 )
    {
      v391 = (int *)UPDWORDPointer(v6);
      v393 = *v391;
      **(_DWORD **)&v474[1] = *v391;
      if ( v6 != 8204 || v393 )
        goto LABEL_368;
      v390 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(0, v392) + 96) + 13456LL);
      goto LABEL_845;
    }
    v367 = 0;
    v368 = 0;
    if ( v6 < 0x103E )
    {
      if ( *(int *)(W32GetUserSessionState(v29, 2LL) + 67060) < 0 )
      {
        if ( v6 != 4104 )
        {
          if ( v6 == 4106 )
          {
            v367 = (*(_DWORD *)(W32GetUserSessionState(v29, v27) + 67056) >> 17) & 1;
            v368 = v367;
            goto LABEL_835;
          }
          if ( v6 != 4114 && v6 != 4116 && v6 != 4120 && v6 != 4122 )
          {
            if ( v6 == 4132
              && (*(_DWORD *)(W32GetUserSessionState(v29, v27) + 43304)
               || *(_DWORD *)(W32GetUserSessionState(v29, v27) + 63456)) )
            {
              v368 = 1;
            }
            goto LABEL_835;
          }
        }
        if ( *(_DWORD *)(W32GetUserSessionState(v29, v27) + 43304) )
          v368 = 1;
        goto LABEL_835;
      }
      if ( v6 != 4096 )
      {
        if ( v6 == 4106 )
        {
          v367 = 1;
        }
        else if ( v6 == 4108 || v6 == 4124 || v6 == 4126 )
        {
          goto LABEL_835;
        }
        v368 = 1;
      }
    }
LABEL_835:
    if ( v368 )
    {
      **(_DWORD **)&v474[1] = v367;
      goto LABEL_368;
    }
    if ( v6 == 4158 && IsRemoteConnection(v29, v27) && !(unsigned int)IsWDAGContainer() )
    {
      v371 = W32GetUserSessionState(v370, v369);
      v374 = W32GetUserSessionState(v373, v372);
      v377 = W32GetUserSessionState(v376, v375);
      v380 = W32GetUserSessionState(v379, v378);
      v383 = W32GetUserSessionState(v382, v381);
      v386 = W32GetUserSessionState(v385, v384);
      **(_DWORD **)&v474[1] = (*(_DWORD *)(v374 + 67060) & 2 | *(_DWORD *)(v386 + 67060) & 4 | *(_DWORD *)(W32GetUserSessionState(v388, v387) + 67060) & 8 | *(_DWORD *)(v377 + 67060) & 0x200 | *(_DWORD *)(v380 + 67060) & 0x800 | *(_DWORD *)(v383 + 67060) & 0x1000 | *(_DWORD *)(v371 + 67060) & 0x2000) != 0;
      v12 = v483;
      goto LABEL_368;
    }
    v389 = *(_DWORD *)(v495 + 4 * ((unsigned __int64)(v6 - 4096) >> 6));
    v390 = _bittest(&v389, (unsigned __int8)(((v6 - 4096) >> 1) - 32 * ((v6 - 4096) >> 6)));
LABEL_845:
    **(_DWORD **)&v474[1] = v390;
    goto LABEL_368;
  }
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v493);
  v394 = CreateProfileUserName(&v493);
  v487 = v394;
  if ( (_DWORD)v479 != 4096 )
  {
    if ( *(_DWORD *)(UPDWORDPointer(v6) + 4) == 4 )
    {
      v436 = UPDWORDPointer(v6);
      if ( (unsigned int)CheckDesktopPolicy(v487, *(_QWORD *)(v436 + 8)) )
      {
        v11 = 0;
        updated = 0;
        v477 = 0;
      }
    }
    v38 = v12;
    v262 = v474[0];
    if ( v11 )
    {
      if ( v474[0] == 8235 || v474[0] == 8239 )
      {
        v38 = 0;
        if ( !DesktopRecalcSettings::ValidateDesktopRecalcSetting((DesktopRecalcSettings *)v474[0], v474[1], v435) )
        {
          updated = 0;
          v477 = 0;
          v11 = 0;
        }
      }
      if ( v11 )
      {
        v437 = *(_QWORD *)(UPDWORDPointer(v474[0]) + 8);
        v438 = UPDWORDPointer(v474[0]);
        v473 = FastWriteProfileValue(v487, *(unsigned int *)(v438 + 4), v437, 4LL, &v474[1], 4);
        updated = v473;
        v477 = v473;
      }
    }
    v439 = *(_DWORD *)UPDWORDPointer(v474[0]);
    if ( updated )
    {
      v440 = v474[1];
      *(_DWORD *)UPDWORDPointer(v474[0]) = v440;
      if ( v474[0] > 0x2011u )
      {
        switch ( v474[0] )
        {
          case 0x2013:
            v466 = (unsigned int *)UPDWORDPointer(8211LL);
            GreSetLCDOrientation(*v466);
            break;
          case 0x201D:
            TraceLoggingMouseWheelRoutingModeChange(v474[1]);
            break;
          case 0x201F:
            TraceLoggingSPISetPenVisualizationEvent(v439, v474[1]);
            break;
          case 0x2029:
            v465 = W32GetUserSessionState(v442, v441);
            CCursorSizes::zzzRefreshSizes(*(CCursorSizes **)(v465 + 36400));
            break;
        }
      }
      else
      {
        switch ( v474[0] )
        {
          case 0x2011:
            if ( *(_DWORD *)UPDWORDPointer(v474[0]) )
            {
              v462 = *(_DWORD *)UPDWORDPointer(8209LL);
              *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v464, v463) + 19928) + 2232LL) = v462;
            }
            break;
          case 0x2001:
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
              || (v453 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
            {
              v453 = 0;
            }
            v454 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v453 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v455 = *(_DWORD *)UPDWORDPointer(v474[0]);
              v456 = *((_DWORD *)v488 + 14);
              v459 = W32GetUserSessionState(v458, v457);
              LOBYTE(v460) = v454;
              LOBYTE(v461) = v453;
              WPP_RECORDER_AND_TRACE_SF_Dd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v461,
                v460,
                *(_QWORD *)(v459 + 69416),
                4,
                2,
                13,
                (__int64)&WPP_e9119d9aba1231428d621ec28dbeb9a6_Traceguids,
                v456,
                v455);
              updated = v477;
            }
            break;
          case 0x2007:
            v450 = *(_DWORD *)UPDWORDPointer(8199LL);
            *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v452, v451) + 19928) + 7008LL) = v450;
            break;
          case 0x200B:
            v449 = (_DWORD *)UPDWORDPointer(8203LL);
            GreSetFontEnumeration(8 * (*v449 & 2 | 4u));
            break;
          case 0x200D:
            v446 = *(_DWORD *)UPDWORDPointer(8205LL);
            *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v448, v447) + 96) + 13456LL) = v446;
            break;
          default:
            if ( v474[0] == 8207 && *(_DWORD *)UPDWORDPointer(8207LL) )
            {
              v443 = *(_DWORD *)UPDWORDPointer(v474[0]);
              *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v445, v444) + 19928) + 2228LL) = v443;
            }
            break;
        }
      }
    }
    goto LABEL_930;
  }
  v395 = *(_QWORD *)&v490.left;
  if ( *(_DWORD *)(*(_QWORD *)&v490.left + 67076LL) == 4 )
  {
    v396 = CheckDesktopPolicy(v394, *(_QWORD *)(*(_QWORD *)&v490.left + 67080LL));
    v395 = *(_QWORD *)&v490.left;
    v21 = v396 == 0;
    v394 = v487;
    if ( !v21 )
    {
      v11 = 0;
      updated = 0;
    }
  }
  if ( v11 )
  {
    ProfileValue = FastGetProfileValue(
                     v394,
                     *(unsigned int *)(v395 + 67076),
                     *(_QWORD *)(v395 + 67080),
                     0LL,
                     &v479,
                     8,
                     0);
    v398 = v495;
    memmove((char *)&v479 + ProfileValue, (const void *)(ProfileValue + (_QWORD)v495), 8LL - ProfileValue);
    v399 = 1 << (((v6 - 4096) >> 1) - 32 * ((v6 - 4096) >> 6));
    v400 = (unsigned __int64)(v6 - 4096) >> 6;
    v401 = *((_DWORD *)&v479 + v400);
    if ( *(_QWORD *)&v474[1] )
      v402 = v401 | v399;
    else
      v402 = v401 & ~v399;
    *((_DWORD *)&v479 + v400) = v402;
    v473 = FastWriteProfileValue(
             v487,
             *(unsigned int *)(*(_QWORD *)&v490.left + 67076LL),
             *(_QWORD *)(*(_QWORD *)&v490.left + 67080LL),
             3LL,
             &v479,
             8);
    updated = v473;
  }
  else
  {
    v398 = v495;
  }
  if ( !updated )
    goto LABEL_889;
  v403 = v6 - 4096;
  v404 = 1 << (((v6 - 4096) >> 1) - 32 * ((v6 - 4096) >> 6));
  v405 = *(unsigned int *)(v398 + 4 * (v403 >> 6));
  if ( *(_QWORD *)&v474[1] )
    v406 = v405 | v404;
  else
    v406 = v405 & ~v404;
  *(_DWORD *)(v398 + 4 * (v403 >> 6)) = v406;
  if ( v6 > 0x1025 )
  {
    if ( v6 != 4159 )
    {
      switch ( v6 )
      {
        case 0x104Fu:
        case 0x1051u:
          xxxWindowEvent(0x80000007, 0LL, v6, *(_QWORD *)&v474[1] != 0LL, 0);
          break;
        case 0x1053u:
          NotifyISMPenButtonYieldSettingChange();
          break;
        case 0x1055u:
          *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v405, v403) + 96) + 24320LL) = *(_QWORD *)&v474[1] != 0LL;
          break;
      }
      goto LABEL_889;
    }
    v426 = *(_QWORD *)(W32GetUserSessionState(v405, v403) + 19928);
    LODWORD(v426) = (*(_DWORD *)(W32GetUserSessionState(v428, v427) + 67060) ^ *(_DWORD *)(v426 + 7004)) & 0x80000000;
    v431 = W32GetUserSessionState(v430, v429);
    *(_DWORD *)(*(_QWORD *)(v431 + 19928) + 7004LL) ^= v426;
    SetPointer(1LL);
    goto LABEL_884;
  }
  if ( v6 == 4133 )
  {
    v425 = (void *)ReferenceDwmApiPort(v405, v403);
    DwmAsyncNotifyWindowShadowChange(v425);
    goto LABEL_889;
  }
  v407 = v6 - 4101;
  if ( !v407 )
  {
    v421 = *(_QWORD *)(W32GetUserSessionState(v405, v403) + 19928);
    v417 = (*(_DWORD *)(W32GetUserSessionState(v423, v422) + 67060) ^ *(_DWORD *)(v421 + 7004)) & 4;
    goto LABEL_873;
  }
  v408 = v407 - 2;
  if ( !v408 )
  {
    v418 = *(_QWORD *)(W32GetUserSessionState(v405, v403) + 19928);
    v417 = (*(_DWORD *)(W32GetUserSessionState(v420, v419) + 67060) ^ *(_DWORD *)(v418 + 7004)) & 8;
    goto LABEL_873;
  }
  v409 = v408 - 2;
  if ( !v409 )
  {
LABEL_884:
    CreateBitmapStrip();
LABEL_885:
    if ( *((_QWORD *)PtiCurrent(v405, v403) + 62) )
      v434 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v433, v432) + 62) + 8LL) + 24LL);
    else
      v434 = 0LL;
    xxxInternalInvalidate(v434, (HRGN)1, 0x10485u);
    goto LABEL_889;
  }
  v410 = v409 - 2;
  if ( !v410 )
  {
    v412 = *(_QWORD *)(W32GetUserSessionState(v405, v403) + 19928);
    v417 = (*(_DWORD *)(W32GetUserSessionState(v414, v413) + 67060) ^ *(_DWORD *)(v412 + 7004)) & 0x20;
LABEL_873:
    v424 = W32GetUserSessionState(v416, v415);
    *(_DWORD *)(*(_QWORD *)(v424 + 19928) + 7004LL) ^= v417;
    goto LABEL_889;
  }
  v411 = v410 - 16;
  if ( v411 )
  {
    if ( v411 == 8 )
      goto LABEL_885;
  }
  else
  {
    SetPointer(1LL);
  }
LABEL_889:
  v38 = v12;
  v262 = v474[0];
LABEL_930:
  Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v493);
  v93 = v473;
LABEL_947:
  if ( v93 )
  {
    if ( v38 )
      EditionxxxBroadcastSPIChange(v262, (__int64)v499, 1);
  }
  return updated;
}
