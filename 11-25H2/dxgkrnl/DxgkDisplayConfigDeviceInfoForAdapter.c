/*
 * XREFs of DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x140282AF0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140034AC8 (--1-$unique_storage@U-$resource_policy@PEAG$$A6AXPEAG@_E$1-FreePoolWithTag@-$pool_helpers@PEAG$0.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1400369D4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14003E96C (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x14004C954 (-reset@-$unique_storage@U-$resource_policy@PEAG$$A6AXPEAG@_E$1-FreePoolWithTag@-$pool_helpers@PE.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x140054B24 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     DpiGetAdapterMdmSupport @ 0x1400596BC (DpiGetAdapterMdmSupport.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x140062E2C (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline @ 0x14006E094 (Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x14006E13C (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline @ 0x14006E1E4 (Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14006E238 (Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_LogColorPipelineStateInDispdiag__private_IsEnabledDeviceUsageNoInline @ 0x14006E28C (Feature_LogColorPipelineStateInDispdiag__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x14006E2E0 (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     ?MonitorSetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@_N1@Z @ 0x140181E14 (-MonitorSetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@_N1@Z.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x140186B9C (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z @ 0x14018A338 (-MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z.c)
 *     ?DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x140196940 (-DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     TriggerExternalBrightnessPolicyChangedWnf @ 0x1401C1980 (TriggerExternalBrightnessPolicyChangedWnf.c)
 *     TriggerHdrSdrCompensationPolicyChangedWnf @ 0x1401C1A38 (TriggerHdrSdrCompensationPolicyChangedWnf.c)
 *     TriggerSDRWhiteLevelChangedWnf @ 0x1401C2758 (TriggerSDRWhiteLevelChangedWnf.c)
 *     DxgkNotifyDisplayChange @ 0x1401F6724 (DxgkNotifyDisplayChange.c)
 *     ?MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140266D8C (-MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?MonitorEnableBoostRefreshRateEnabledByDefault@@YAJPEAXI_N@Z @ 0x140266F20 (-MonitorEnableBoostRefreshRateEnabledByDefault@@YAJPEAXI_N@Z.c)
 *     ?MonitorEnableDisableHdr@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x140266FFC (-MonitorEnableDisableHdr@@YAJPEAUHDXGMONITOR__@@_N@Z.c)
 *     ?MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x1402670B0 (-MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z.c)
 *     ?MonitorGetColorPipelineState2@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE_2@@@Z @ 0x140267164 (-MonitorGetColorPipelineState2@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE_2@.c)
 *     ?MonitorGetColorPipelineState@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE@@@Z @ 0x140267320 (-MonitorGetColorPipelineState@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE@@@Z.c)
 *     ?MonitorGetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@PEA_N1PEAW4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@PEAW4_DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT@@@Z @ 0x1402674A0 (-MonitorGetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@PEA_N1PEAW4_DISPLAYCONFIG_HDR_BRIGHTN.c)
 *     ?MonitorGetHdrBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@@Z @ 0x1402675BC (-MonitorGetHdrBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@@.c)
 *     ?MonitorGetHdrFlavor@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_FLAVOR@@1@Z @ 0x140267658 (-MonitorGetHdrFlavor@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_FLAVOR@@1@Z.c)
 *     ?MonitorGetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@PEAK@Z @ 0x1402678B0 (-MonitorGetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@PEAK@Z.c)
 *     ?MonitorSetDefaultAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@@Z @ 0x140268254 (-MonitorSetDefaultAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorSetHdrBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@@Z @ 0x1402683DC (-MonitorSetHdrBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@@Z.c)
 *     ?MonitorSetHdrFlavor@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x1402684A0 (-MonitorSetHdrFlavor@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_FLAVOR@@@Z.c)
 *     ?MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z @ 0x1402686F0 (-MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z.c)
 *     ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x1402BF950 (-MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4Mo.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402CA140 (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CA448 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?MonitorIsMonitorVirtualModeDisabled@@YAJPEAXIPEAE@Z @ 0x1402CA7F0 (-MonitorIsMonitorVirtualModeDisabled@@YAJPEAXIPEAE@Z.c)
 *     ?DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1402D4C08 (-DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     IsCurrentModeAdvancedColor @ 0x1402D5268 (IsCurrentModeAdvancedColor.c)
 *     CheckGivenTargetIsPartOfCloneGroup @ 0x1402D5454 (CheckGivenTargetIsPartOfCloneGroup.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402D57C8 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1402E8E90 (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1402E8EDC (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x1403BB0BC (-MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapable.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@AEBVDXGADAPTER_REFERENCE@@@Z @ 0x1403BF514 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@AEBVDXGADAPTER_REFE.c)
 *     ?MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x1403D010C (-MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z.c)
 *     ?MonitorIsWcgEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x1403D15F4 (-MonitorIsWcgEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z.c)
 *     ?MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z @ 0x1403E10B0 (-MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z.c)
 *     ?MonitorGetDitheringCaps@@YAJPEAUHDXGMONITOR__@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1403E1860 (-MonitorGetDitheringCaps@@YAJPEAUHDXGMONITOR__@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?MonitorGetPseudoSpecializedState@@YAJPEAUHDXGMONITOR__@@PEA_N11@Z @ 0x1403E5D9C (-MonitorGetPseudoSpecializedState@@YAJPEAUHDXGMONITOR__@@PEA_N11@Z.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@AEBVDXGADAPTER_REFERENCE@@@Z @ 0x1403EA5BC (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@AEBVDXGADAPTER_REFERENCE.c)
 *     ?MonitorSetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAI111KKK@Z @ 0x1403F3D3C (-MonitorSetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAI111KKK@Z.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfoForAdapter(
        __int64 a1,
        const struct DXGADAPTER_REFERENCE *a2,
        unsigned int *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  char v7; // di
  int v8; // r13d
  __int64 v9; // rax
  const wchar_t *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  int MonitorHandle; // eax
  unsigned int v17; // edi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  bool v21; // zf
  struct HDXGMONITOR__ *v23; // rdi
  int ColorPipelineState; // eax
  void *v25; // r8
  __int64 v26; // r9
  struct HDXGMONITOR__ *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // r8
  bool v30; // zf
  __int64 v31; // rcx
  bool v32; // zf
  unsigned int v33; // edx
  unsigned int v34; // edx
  void *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  int TargetBaseType; // eax
  struct _DEVICE_OBJECT *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r8
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  struct _DEVICE_OBJECT *v43; // rbx
  NTSTATUS DeviceInterfaces; // eax
  bool v45; // zf
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  __int64 v51; // r12
  void *v52; // rcx
  int v53; // eax
  __int64 v54; // rdx
  _QWORD *v55; // rcx
  int v56; // eax
  struct HDXGMONITOR__ *v57; // rdi
  int PseudoSpecializedState; // eax
  __int64 v59; // r9
  const wchar_t *v60; // r9
  __int64 v61; // r8
  __int64 v62; // rdi
  _QWORD *v63; // rcx
  int v64; // eax
  __int64 v65; // rbx
  const wchar_t *v66; // r9
  int ExternalBrightnessPolicy; // eax
  __int64 v68; // rdi
  _QWORD *v69; // rcx
  int v70; // eax
  __int64 v71; // rbx
  __int64 v72; // rdx
  _QWORD *v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rcx
  __int64 v76; // r8
  _QWORD *v77; // rcx
  int v78; // eax
  int v79; // eax
  __int64 v80; // rdx
  _QWORD *v81; // rcx
  int v82; // eax
  int ColorPipelineState2; // eax
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  int v88; // ecx
  int v89; // edx
  int v90; // ecx
  int v91; // edx
  _QWORD *v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // r8
  int v95; // eax
  unsigned int *v96; // rcx
  unsigned int *v97; // r9
  unsigned int *v98; // r8
  unsigned int *v99; // rdx
  unsigned int v100; // eax
  struct HDXGMONITOR__ *v101; // r14
  int v102; // eax
  void *v103; // r8
  __int64 v104; // r9
  __int64 v105; // rcx
  __int64 v106; // rax
  void *v107; // r8
  __int64 v108; // r9
  _QWORD *v109; // rcx
  int v110; // eax
  __int64 v111; // rbx
  __int64 v112; // rcx
  __int64 v113; // r8
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v115; // rbx
  __int64 v116; // rdi
  const wchar_t *v117; // r9
  int IsMonitorAndDriverWCGCapable; // eax
  __int64 v119; // rcx
  int v120; // eax
  int v121; // eax
  char v122; // dl
  int v123; // eax
  BOOL v124; // ecx
  bool v125; // zf
  int v126; // eax
  int v127; // eax
  unsigned int v128; // eax
  int SDRWhiteLevel; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  struct HDXGMONITOR__ *v131; // rbx
  int HdrBrightnessPolicy; // eax
  unsigned int v133; // edx
  int v134; // eax
  __int64 v135; // rdi
  __int64 v136; // rax
  DXGADAPTER *v137; // rcx
  struct _LUID *v138; // rdx
  __int64 v139; // r8
  int HdrFlavor; // eax
  int v141; // eax
  int DitheringCaps; // eax
  struct HDXGMONITOR__ *v143; // rbx
  int IsWcgEnabled; // eax
  int IsHdrEnabled; // eax
  char v146; // bl
  char v147; // al
  char v148; // di
  int v149; // edx
  int v150; // eax
  unsigned int v151; // eax
  unsigned int v152; // ecx
  unsigned int v153; // eax
  unsigned int v154; // edx
  bool IsHdrAllowedOnTarget; // al
  int v156; // edx
  unsigned int v157; // ecx
  int v158; // eax
  BOOL v159; // edx
  unsigned int ColorDepthFromPickedWireFormat; // eax
  unsigned int Value; // ecx
  unsigned int v162; // eax
  unsigned int v163; // edx
  struct HDXGMONITOR__ *v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // rdx
  _QWORD *v168; // rcx
  int v169; // eax
  struct HDXGMONITOR__ **v170; // rax
  struct _GUID *p_DestinationString; // r8
  unsigned int v172; // r9d
  struct _GUID *v173; // rdx
  __int128 v174; // xmm0
  unsigned int v175; // r9d
  __int64 v176; // rax
  unsigned int v177; // edx
  __int64 v178; // rcx
  int IsBoostRefreshRateEnabledByDefault; // eax
  bool v180; // al
  unsigned int v181; // edx
  _QWORD *v182; // rcx
  int SourceConnectedToTargetInClientVidPn; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  struct HDXGMONITOR__ **v185; // [rsp+28h] [rbp-A9h]
  __int64 v186; // [rsp+28h] [rbp-A9h]
  __int64 v187; // [rsp+28h] [rbp-A9h]
  struct HDXGMONITOR__ **v188; // [rsp+28h] [rbp-A9h]
  __int64 v189; // [rsp+28h] [rbp-A9h]
  struct HDXGMONITOR__ **v190; // [rsp+28h] [rbp-A9h]
  __int64 v191; // [rsp+30h] [rbp-A1h]
  __int64 v192; // [rsp+30h] [rbp-A1h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v193[2]; // [rsp+30h] [rbp-A1h]
  __int64 v194; // [rsp+30h] [rbp-A1h]
  bool v195; // [rsp+30h] [rbp-A1h]
  unsigned int v196; // [rsp+38h] [rbp-99h]
  __int64 v197; // [rsp+38h] [rbp-99h]
  const struct _UNICODE_STRING *v198; // [rsp+38h] [rbp-99h]
  unsigned int v199; // [rsp+40h] [rbp-91h]
  char v200; // [rsp+58h] [rbp-79h]
  bool v201; // [rsp+59h] [rbp-78h] BYREF
  char v202; // [rsp+5Ah] [rbp-77h]
  bool v203; // [rsp+5Bh] [rbp-76h] BYREF
  bool v204; // [rsp+5Ch] [rbp-75h] BYREF
  bool v205; // [rsp+5Dh] [rbp-74h] BYREF
  _BYTE v206[2]; // [rsp+5Eh] [rbp-73h] BYREF
  int v207; // [rsp+60h] [rbp-71h] BYREF
  __int64 v208; // [rsp+68h] [rbp-69h]
  char v209; // [rsp+70h] [rbp-61h]
  char v210; // [rsp+78h] [rbp-59h] BYREF
  bool v211; // [rsp+79h] [rbp-58h] BYREF
  bool v212; // [rsp+7Ah] [rbp-57h] BYREF
  bool v213; // [rsp+7Bh] [rbp-56h] BYREF
  bool v214; // [rsp+7Ch] [rbp-55h] BYREF
  bool v215; // [rsp+7Dh] [rbp-54h] BYREF
  _WORD v216[3]; // [rsp+7Eh] [rbp-53h] BYREF
  _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v217; // [rsp+84h] [rbp-4Dh] BYREF
  struct HDXGMONITOR__ *v218; // [rsp+88h] [rbp-49h]
  PZZWSTR SymbolicLinkList[2]; // [rsp+98h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v221; // [rsp+B8h] [rbp-19h] BYREF
  unsigned int v222; // [rsp+C0h] [rbp-11h] BYREF
  int v223; // [rsp+C4h] [rbp-Dh] BYREF
  struct HDXGMONITOR__ *v224; // [rsp+C8h] [rbp-9h] BYREF
  struct HDXGMONITOR__ *v225; // [rsp+D0h] [rbp-1h] BYREF
  struct HDXGMONITOR__ *v226; // [rsp+D8h] [rbp+7h] BYREF
  unsigned __int64 v227; // [rsp+E0h] [rbp+Fh] BYREF
  __int128 v228; // [rsp+E8h] [rbp+17h] BYREF
  __int128 v229; // [rsp+F8h] [rbp+27h]
  char v230; // [rsp+148h] [rbp+77h]
  unsigned int v231; // [rsp+148h] [rbp+77h]

  v207 = -1;
  v208 = 0LL;
  v7 = a1;
  v8 = 2;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v209 = 1;
    v207 = 2184;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 2184);
  }
  else
  {
    v209 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v207, 2184);
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    v9 = 5231LL;
    v10 = L"io_pRequestPacket != NULL";
LABEL_161:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_162;
  }
  if ( (unsigned int)Feature_LogColorPipelineStateInDispdiag__private_IsEnabledDeviceUsageNoInline() && *a3 == -42 )
  {
    v14 = a3[4];
    v15 = *(_QWORD **)a2;
    SymbolicLinkList[0] = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(
                      v15,
                      v14,
                      0LL,
                      DxgkDisplayConfigDeviceInfo,
                      (struct HDXGMONITOR__ **)SymbolicLinkList);
    v17 = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      v18 = MonitorHandle;
      WdLogSingleEntry4(
        2LL,
        *(int *)(*(_QWORD *)a2 + 416LL),
        *(unsigned int *)(*(_QWORD *)a2 + 412LL),
        a3[4],
        MonitorHandle);
      WdLogGlobalForLineNumber = 5254;
LABEL_11:
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
        *(int *)(*(_QWORD *)a2 + 416LL),
        *(unsigned int *)(*(_QWORD *)a2 + 412LL),
        a3[4],
        v18,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v207);
      v21 = v209 == 0;
      goto LABEL_12;
    }
    v23 = (struct HDXGMONITOR__ *)SymbolicLinkList[0];
    if ( !SymbolicLinkList[0] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5258;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 5258LL, 0LL, 0LL, 0LL, 0LL);
    }
    ColorPipelineState = MonitorGetColorPipelineState(v23, (struct _DISPLAYCONFIG_COLOR_PIPELINE_STATE *)a3);
    v27 = (struct HDXGMONITOR__ *)ColorPipelineState;
    if ( ColorPipelineState < 0 )
    {
      WdLogSingleEntry1(2LL, ColorPipelineState);
      WdLogGlobalForLineNumber = 5265;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to call MonitorGetColorPipelineState with status 0x%I64x",
        (__int64)v27,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    MonitorReleaseMonitorHandle(*(_QWORD **)a2, v23, v25, v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v207);
    v30 = v209 == 0;
LABEL_139:
    if ( !v30 )
    {
      v45 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_141:
      if ( !v45 )
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v207);
      return (unsigned int)v27;
    }
    return (unsigned int)v27;
  }
  v31 = *a3;
  if ( (unsigned int)v31 <= 0x64 )
  {
    if ( (_DWORD)v31 != 100 )
    {
      if ( (unsigned int)v31 <= 0xA )
      {
        if ( (_DWORD)v31 == 10 )
          goto LABEL_71;
        if ( (_DWORD)v31 == 2 )
        {
          if ( !v7 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5323;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_bGetDeviceInfo", 5323LL, 0LL, 0LL, 0LL, 0LL);
          }
          TargetBaseType = DisplayConfigFillTargetDeviceInfo((struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a3, a2);
LABEL_63:
          LODWORD(v27) = TargetBaseType;
          goto LABEL_138;
        }
        if ( (_DWORD)v31 != 4 )
        {
          if ( (_DWORD)v31 == 6 )
          {
            if ( !v7 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5333;
              DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_bGetDeviceInfo", 5333LL, 0LL, 0LL, 0LL, 0LL);
            }
            TargetBaseType = DisplayConfigGetTargetBaseType((struct DISPLAYCONFIG_TARGET_BASE_TYPE *)a3, a2);
          }
          else
          {
            if ( (_DWORD)v31 != 7 && (_DWORD)v31 != 8 )
            {
              v32 = (_DWORD)v31 == 9;
              goto LABEL_70;
            }
            if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 3120LL) + 290LL) )
            {
              WdLogSingleEntry3(
                3LL,
                *(_QWORD *)a2,
                *(int *)(*(_QWORD *)a2 + 416LL),
                *(unsigned int *)(*(_QWORD *)a2 + 412LL));
              WdLogGlobalForLineNumber = 5352;
              goto LABEL_168;
            }
            if ( (_DWORD)v31 == 7 )
            {
              v203 = 0;
              if ( !v7 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 5363;
                DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_bGetDeviceInfo", 5363LL, 0LL, 0LL, 0LL, 0LL);
              }
              v33 = a3[4];
              a3[5] = 0;
              LODWORD(v27) = MonitorIsMonitorVirtualModeDisabled(*(_QWORD **)a2, v33, (unsigned __int8 *)&v203);
              if ( (int)v27 >= 0 )
                a3[5] = v203 | a3[5] & 0xFFFFFFFE;
              goto LABEL_138;
            }
            if ( v7 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5380;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"(!i_bGetDeviceInfo)&& (io_pRequestPacket->type == DISPLAYCONFIG_DEVICE_INFO_SET_SUPPORT_VIRTUAL_RESOLUTION)",
                5380LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v34 = a3[4];
            v35 = *(void **)a2;
            v210 = 0;
            if ( (int)CheckGivenTargetIsPartOfCloneGroup(v35, v34, &v210) >= 0 && v210 )
            {
              WdLogSingleEntry3(3LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), a3[4]);
              WdLogGlobalForLineNumber = 5393;
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v207);
              if ( v209 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit, v37, v207);
              return 3221225647LL;
            }
            TargetBaseType = MonitorDisableMonitorVirtualModeSupport(*(_QWORD *)a2, a3[4], a3[5] & 1, a4);
          }
          goto LABEL_63;
        }
        v39 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)a2 + 216LL);
        if ( !v39 )
        {
          WdLogSingleEntry1(2LL, *(_QWORD *)a2);
          v185 = *(struct HDXGMONITOR__ ***)a2;
          WdLogGlobalForLineNumber = 5283;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Adapter 0x%I64x had no FDO",
            (__int64)v185,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v207);
          if ( v209 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v40, (__int64)&EventProfilerExit, v41, v207);
          return 3221226021LL;
        }
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v39);
        SymbolicLinkList[0] = 0LL;
        *(_QWORD *)&DestinationString.Length = DeviceAttachmentBaseRef;
        v43 = DeviceAttachmentBaseRef;
        _reset___unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAAXPEAG_Z(
          (__int64 *)SymbolicLinkList,
          0LL);
        DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_DISPLAY_ADAPTER, v43, 0, SymbolicLinkList);
        LODWORD(v27) = DeviceInterfaces;
        if ( DeviceInterfaces >= 0 )
        {
          wcsncpy_s((wchar_t *)a3 + 10, 0x80uLL, SymbolicLinkList[0], 0xFFFFFFFFFFFFFFFFuLL);
          *((_WORD *)a3 + 11) = 92;
          __1__unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAA_XZ((void **)SymbolicLinkList);
          wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)&DestinationString);
LABEL_138:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v207);
          v30 = v209 == 0;
          goto LABEL_139;
        }
        WdLogSingleEntry2(3LL, v43, DeviceInterfaces);
        WdLogGlobalForLineNumber = 5299;
        __1__unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAA_XZ((void **)SymbolicLinkList);
        wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)&DestinationString);
LABEL_57:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v207);
        if ( v209 )
        {
          v45 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
          goto LABEL_141;
        }
        return (unsigned int)v27;
      }
      v46 = v31 - 11;
      if ( !v46 )
        goto LABEL_71;
      v47 = v46 - 1;
      if ( v47 )
      {
        v48 = v47 - 1;
        if ( v48 )
        {
          v49 = v48 - 2;
          if ( !v49 )
            goto LABEL_71;
          v50 = v49 - 1;
          if ( !v50 )
            goto LABEL_71;
          v32 = v50 == 1;
LABEL_70:
          if ( v32 )
            goto LABEL_71;
LABEL_150:
          LODWORD(v27) = -1073741811;
          goto LABEL_138;
        }
        goto LABEL_337;
      }
      v54 = a3[4];
      v55 = *(_QWORD **)a2;
      *(_QWORD *)&DestinationString.Length = 0LL;
      v56 = MonitorGetMonitorHandle(
              v55,
              v54,
              0LL,
              DxgkDisplayConfigDeviceInfo,
              (struct HDXGMONITOR__ **)&DestinationString);
      v17 = v56;
      if ( v56 < 0 )
      {
        v18 = v56;
        WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), a3[4], v56);
        WdLogGlobalForLineNumber = 6344;
        goto LABEL_11;
      }
      v57 = *(struct HDXGMONITOR__ **)&DestinationString.Length;
      if ( !*(_QWORD *)&DestinationString.Length )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6348;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 6348LL, 0LL, 0LL, 0LL, 0LL);
      }
      v211 = 0;
      v213 = 0;
      v212 = 0;
      PseudoSpecializedState = MonitorGetPseudoSpecializedState(v57, &v213, &v212, &v211);
      v27 = (struct HDXGMONITOR__ *)PseudoSpecializedState;
      if ( PseudoSpecializedState >= 0 )
      {
        v61 = (v213 ? 2 : 0) | (v212 ? 4 : 0) | v211 | a3[5] & 0xFFFFFFF8;
        a3[5] = v61;
        goto LABEL_355;
      }
      WdLogSingleEntry1(2LL, PseudoSpecializedState);
      v60 = L"Failed to call MonitorGetPseudoSpecializedState with status 0x%I64x";
      WdLogGlobalForLineNumber = 6357;
      goto LABEL_83;
    }
LABEL_151:
    v84 = *(_QWORD *)a2;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 444LL) & 0x100) == 0 )
    {
      WdLogSingleEntry3(3LL, *(_QWORD *)a2, *(int *)(v84 + 416), *(unsigned int *)(v84 + 412));
      WdLogGlobalForLineNumber = 5509;
      goto LABEL_168;
    }
    if ( *a3 == -10 )
    {
      if ( (int)ADAPTER_DISPLAY::DodGetRenderAdapter(*(ADAPTER_DISPLAY **)(v84 + 3120), a3[4], (struct _LUID *)(a3 + 5)) < 0 )
      {
        WdLogSingleEntry3(3LL, *(_QWORD *)a2, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL));
        WdLogGlobalForLineNumber = 5524;
LABEL_162:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v207);
        if ( v209 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v86, (__int64)&EventProfilerExit, v87, v207);
        }
        return 3221225485LL;
      }
    }
    else
    {
      if ( *a3 != 100 )
      {
        WdLogSingleEntry0(1LL);
        v9 = 5548LL;
        v10 = L"DISPLAYCONFIG_DEVICE_INFO type not handled";
        goto LABEL_161;
      }
      v85 = a3[4];
      v228 = 0LL;
      *(_QWORD *)&v229 = 0LL;
      if ( (int)DXGADAPTER::GetVirtualMonitorInfo(
                  (DXGADAPTER *)v84,
                  v85,
                  (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&v228) < 0 )
      {
        WdLogSingleEntry3(3LL, *(_QWORD *)a2, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL));
        WdLogGlobalForLineNumber = 5540;
        goto LABEL_162;
      }
      a3[5] = DWORD1(v228);
    }
LABEL_137:
    LODWORD(v27) = 0;
    goto LABEL_138;
  }
  if ( (unsigned int)v31 > 0xFFFFFFDF )
  {
    if ( (unsigned int)(v31 + 27) <= 1 )
    {
      if ( a3[1] < 0x18 )
      {
        v176 = WdLogNewEntry5_WdTrace(v31, v11, v12, v13);
        v17 = -1073741789;
        *(_QWORD *)(v176 + 24) = a3[1];
        *(_QWORD *)(v176 + 32) = -1073741789LL;
        WdLogGlobalForLineNumber = 5414;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v207);
        v21 = v209 == 0;
LABEL_12:
        if ( !v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v207);
        return v17;
      }
      v177 = a3[4];
      v21 = (_DWORD)v31 == -26;
      v178 = *(_QWORD *)a2;
      if ( v21 )
      {
        v203 = 0;
        IsBoostRefreshRateEnabledByDefault = MonitorIsBoostRefreshRateEnabledByDefault(v178, v177, &v203);
        LODWORD(v27) = IsBoostRefreshRateEnabledByDefault;
        if ( IsBoostRefreshRateEnabledByDefault == -1073741632 )
        {
          LODWORD(v27) = 0;
          v180 = 0;
        }
        else
        {
          if ( IsBoostRefreshRateEnabledByDefault < 0 )
            goto LABEL_138;
          v180 = v203;
        }
        *((_BYTE *)a3 + 20) = v180;
        goto LABEL_138;
      }
      LODWORD(v27) = MonitorEnableBoostRefreshRateEnabledByDefault(v178, v177, *((_BYTE *)a3 + 20) != 0);
      if ( (_DWORD)v27 != -1073741802 )
        goto LABEL_138;
      v181 = a3[4];
      v182 = *(_QWORD **)a2;
      LODWORD(SymbolicLinkList[0]) = 0;
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(
                                               v182,
                                               v181,
                                               (unsigned int *)SymbolicLinkList);
      LODWORD(v27) = SourceConnectedToTargetInClientVidPn;
      if ( SourceConnectedToTargetInClientVidPn != -1071774884 && SourceConnectedToTargetInClientVidPn != -1071774912 )
      {
        if ( SourceConnectedToTargetInClientVidPn >= 0 )
        {
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                              *(ADAPTER_DISPLAY **)(*(_QWORD *)a2 + 3120LL),
                              (unsigned int)SymbolicLinkList[0]);
          if ( *((_BYTE *)a3 + 20) || *((_DWORD *)DisplayModeInfo + 18) >= 2u )
            LODWORD(v27) = -1073741802;
        }
        goto LABEL_138;
      }
      goto LABEL_137;
    }
    if ( (_DWORD)v31 == -23 )
    {
LABEL_337:
      if ( !IsCurrentProcessAdmin() )
      {
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v207);
        if ( v209 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v165, (__int64)&EventProfilerExit, v166, v207);
        return 3221225506LL;
      }
      v167 = a3[4];
      v168 = *(_QWORD **)a2;
      *(_QWORD *)&DestinationString.Length = 0LL;
      v169 = MonitorGetMonitorHandle(
               v168,
               v167,
               0LL,
               DxgkDisplayConfigDeviceInfo,
               (struct HDXGMONITOR__ **)&DestinationString);
      v27 = (struct HDXGMONITOR__ *)v169;
      if ( v169 < 0 )
      {
        WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), a3[4], v169);
        v197 = a3[4];
        v194 = *(unsigned int *)(*(_QWORD *)a2 + 412LL);
        v189 = *(int *)(*(_QWORD *)a2 + 416LL);
        WdLogGlobalForLineNumber = 6278;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
          v189,
          v194,
          v197,
          (__int64)v27,
          0LL);
        goto LABEL_57;
      }
      v57 = *(struct HDXGMONITOR__ **)&DestinationString.Length;
      if ( !*(_QWORD *)&DestinationString.Length )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6282;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 6282LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *a3 == -23 )
      {
        v170 = (struct HDXGMONITOR__ **)*((_QWORD *)a3 + 5);
        p_DestinationString = (struct _GUID *)&DestinationString;
        v172 = a3[9];
        v173 = (struct _GUID *)SymbolicLinkList;
        v198 = 0LL;
        DestinationString = 0LL;
        v174 = *(_OWORD *)(a3 + 5);
        v195 = 0;
        v190 = v170;
      }
      else
      {
        if ( *a3 != 13 )
          goto LABEL_355;
        v227 = 0LL;
        if ( (int)RtlStringCbLengthW((const unsigned __int16 *)a3 + 28, 0x100uLL, &v227) < 0 || !v227 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 6305;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"DISPLAYCONFIG_DEVICE_INFO_SET_MONITOR_SPECIALIZATION was called with an invalid app name string.",
            6305LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v27) = -1073741811;
          goto LABEL_355;
        }
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)a3 + 28);
        v175 = a3[5];
        v174 = *(_OWORD *)(a3 + 10);
        v198 = &DestinationString;
        p_DestinationString = (struct _GUID *)SymbolicLinkList;
        v195 = 1;
        v173 = (struct _GUID *)&v228;
        v228 = *(_OWORD *)(a3 + 6);
        v190 = 0LL;
        v172 = v175 & 1;
      }
      *(_OWORD *)SymbolicLinkList = v174;
      v79 = MonitorSetAppOverride(v57, v173, p_DestinationString, v172, (unsigned __int64)v190, v195, v198);
      goto LABEL_349;
    }
    if ( (_DWORD)v31 != -18 )
    {
      if ( (_DWORD)v31 != -16 )
      {
        if ( (_DWORD)v31 == -12 )
        {
          a3[5] = 0;
          v88 = (*(_DWORD *)(*(_QWORD *)a2 + 2448LL) >> 2) & 1;
          a3[5] = v88;
          v89 = v88 | (*(_DWORD *)(*(_QWORD *)a2 + 2448LL) >> 2) & 2;
          a3[5] = v89;
          v90 = v89 | (*(_DWORD *)(*(_QWORD *)a2 + 2448LL) >> 2) & 4;
          a3[5] = v90;
          v91 = v90 | (32 * (*(_DWORD *)(*(_QWORD *)a2 + 2448LL) & 1));
          a3[5] = v91;
          a3[5] = v91 | (8 * (*(_DWORD *)(*(_QWORD *)a2 + 2448LL) & 2));
          goto LABEL_137;
        }
        if ( (_DWORD)v31 != -10 )
          goto LABEL_150;
        goto LABEL_151;
      }
      v92 = *(_QWORD **)a2;
      v68 = a3[4];
      if ( *(int *)(*(_QWORD *)a2 + 2736LL) >= 9216 )
      {
        *(_QWORD *)&DestinationString.Length = 0LL;
        LOBYTE(v12) = 1;
        v95 = MonitorGetMonitorHandle(
                v92,
                (unsigned int)v68,
                v12,
                DxgkDisplayConfigDeviceInfoForAdapter,
                (struct HDXGMONITOR__ **)&DestinationString);
        LODWORD(v27) = v95;
        if ( v95 >= 0 )
        {
          v96 = a3 + 11;
          v199 = a3[15];
          v97 = a3 + 9;
          v98 = a3 + 7;
          v196 = a3[14];
          v99 = a3 + 5;
          v100 = a3[13];
          v101 = *(struct HDXGMONITOR__ **)&DestinationString.Length;
          v102 = MonitorSetAdvancedColorParams(
                   *(struct HDXGMONITOR__ **)&DestinationString.Length,
                   v99,
                   v98,
                   v97,
                   v96,
                   v100,
                   v196,
                   v199);
          v105 = *(_QWORD *)a2;
          v27 = (struct HDXGMONITOR__ *)v102;
          if ( v102 >= 0 )
          {
            MonitorReleaseMonitorHandle((_QWORD *)v105, v101, v103, v104);
            if ( (_DWORD)v27 != 255 )
              LODWORD(v27) = 255;
            goto LABEL_138;
          }
          WdLogSingleEntry4(2LL, *(int *)(v105 + 416), *(unsigned int *)(v105 + 412), v68, v102);
          v106 = *(_QWORD *)a2;
          WdLogGlobalForLineNumber = 5636;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"MonitorSetAdvancedColorParams() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
            *(int *)(v106 + 416),
            *(unsigned int *)(v106 + 412),
            v68,
            (__int64)v27,
            0LL);
          MonitorReleaseMonitorHandle(*(_QWORD **)a2, v101, v107, v108);
          goto LABEL_57;
        }
        v71 = v95;
        WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), v68, v95);
        WdLogGlobalForLineNumber = 5610;
        goto LABEL_107;
      }
LABEL_168:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v207);
      if ( v209 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v93, (__int64)&EventProfilerExit, v94, v207);
      return 3221225659LL;
    }
LABEL_71:
    if ( ((unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() || *a3 + 44 > 1)
      && ((unsigned int)Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline() || *a3 != -45) )
    {
      v52 = *(void **)a2;
      LODWORD(SymbolicLinkList[0]) = a3[4];
      v51 = LODWORD(SymbolicLinkList[0]);
      v206[0] = 0;
      v53 = CheckGivenTargetIsPartOfCloneGroup(v52, (unsigned int)SymbolicLinkList[0], v206);
      v221 = v51;
      if ( v53 == -1073741275 )
      {
        WdLogSingleEntry4(
          3LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          (unsigned int)v51,
          -1073741275LL);
        WdLogGlobalForLineNumber = 5713;
        v230 = 0;
        v206[0] = 0;
      }
      else
      {
        v230 = v206[0];
        v221 = v51;
      }
      v109 = *(_QWORD **)a2;
      v226 = 0LL;
      v110 = MonitorGetMonitorHandle(v109, (unsigned int)v51, 0LL, DxgkDisplayConfigDeviceInfo, &v226);
      LODWORD(v218) = v110;
      if ( v110 < 0 )
      {
        v111 = v110;
        WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), v51, v110);
        v192 = *(unsigned int *)(*(_QWORD *)a2 + 412LL);
        v187 = *(int *)(*(_QWORD *)a2 + 416LL);
        WdLogGlobalForLineNumber = 5734;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
          v187,
          v192,
          v51,
          v111,
          0LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v207);
        if ( v209 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v112, (__int64)&EventProfilerExit, v113, v207);
        return (unsigned int)v218;
      }
      v27 = v226;
      v218 = v226;
      if ( !v226 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5738;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 5738LL, 0LL, 0LL, 0LL, 0LL);
      }
      *(_DWORD *)&v216[1] = 0;
      IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(
                                     v27,
                                     (union MONITOR_AND_LINK_HDR_CAPS *)&v216[1],
                                     0LL);
      LODWORD(v27) = IsMonitorAndLinkHDRCapable;
      if ( IsMonitorAndLinkHDRCapable < 0 )
      {
        v115 = IsMonitorAndLinkHDRCapable;
        v116 = v221;
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          v221,
          IsMonitorAndLinkHDRCapable);
        v117 = L"MonitorIsMonitorAndLinkHDRCapable() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 5748;
LABEL_188:
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          v117,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          v116,
          v115,
          0LL);
LABEL_335:
        v164 = v218;
LABEL_336:
        MonitorReleaseMonitorHandle(*(_QWORD **)a2, v164, (void *)v61, v59);
        goto LABEL_138;
      }
      v201 = 0;
      IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(v218, &v201, 0LL);
      v119 = *(_QWORD *)a2;
      LODWORD(v27) = IsMonitorAndDriverWCGCapable;
      if ( IsMonitorAndDriverWCGCapable < 0 )
      {
        v115 = IsMonitorAndDriverWCGCapable;
        v116 = v221;
        WdLogSingleEntry4(2LL, *(int *)(v119 + 416), *(unsigned int *)(v119 + 412), v221, IsMonitorAndDriverWCGCapable);
        v117 = L"MonitorIsMonitorAndDriverWCGCapable() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 5760;
        goto LABEL_188;
      }
      v217.Value = 0;
      v223 = 0;
      v216[0] = 0;
      v120 = IsCurrentModeAdvancedColor(
               (int *)v119,
               (unsigned int)SymbolicLinkList[0],
               &v217,
               (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)&v223,
               (char *)v216,
               (bool *)v216 + 1);
      LODWORD(v27) = v120;
      if ( v120 < 0 )
      {
        v115 = v120;
        v116 = v221;
        WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), v221, v120);
        v117 = L"IsCurrentModeAdvancedColor() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 5780;
        goto LABEL_188;
      }
      v202 = HIBYTE(v216[0]);
      v200 = v216[0];
      if ( v230 && v216[0] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5790;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"!bCurrentModeHdr && !bCurrentModeWcg",
          5790LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v121 = *a3;
      if ( *a3 != 9 && v121 != 15 )
      {
        if ( v121 == 10 )
        {
          if ( v7 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5888;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!i_bGetDeviceInfo", 5888LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( (v216[1] & 1) == 0 && !v201 || v230 )
            goto LABEL_204;
          v122 = a3[5] & 1;
          if ( (v216[1] & 1) != 0 )
            v123 = MonitorEnableDisableHdr(v218, v122);
          else
            v123 = MonitorEnableDisableWcg(v218, v122);
          LODWORD(v27) = v123;
          if ( v123 < 0 )
          {
            v116 = LODWORD(SymbolicLinkList[0]);
            v115 = v123;
            WdLogSingleEntry4(
              2LL,
              *(int *)(*(_QWORD *)a2 + 416LL),
              *(unsigned int *)(*(_QWORD *)a2 + 412LL),
              LODWORD(SymbolicLinkList[0]),
              v123);
            v117 = L"MonitorEnableDisableAdvancedColor() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
            WdLogGlobalForLineNumber = 5923;
            goto LABEL_188;
          }
          if ( v123 != 255 )
            goto LABEL_335;
          v124 = v200 || (v216[1] & 1) == 0 && v202;
          v125 = (a3[5] & 1) == v124;
        }
        else if ( v121 == 16 )
        {
          if ( v7 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5945;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!i_bGetDeviceInfo", 5945LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( (v216[1] & 1) == 0 || v230 )
            goto LABEL_204;
          v126 = MonitorEnableDisableHdr(v218, a3[5] & 1);
          LODWORD(v27) = v126;
          if ( v126 < 0 )
          {
            v115 = v126;
            v116 = LODWORD(SymbolicLinkList[0]);
            WdLogSingleEntry4(
              2LL,
              *(int *)(*(_QWORD *)a2 + 416LL),
              *(unsigned int *)(*(_QWORD *)a2 + 412LL),
              LODWORD(SymbolicLinkList[0]),
              v126);
            v117 = L"MonitorEnableDisableHdr() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
            WdLogGlobalForLineNumber = 5973;
            goto LABEL_188;
          }
          if ( v126 != 255 )
            goto LABEL_335;
          v125 = (a3[5] & 1) == v200;
        }
        else
        {
          if ( v121 != 17 )
          {
            if ( v121 == 11 )
            {
              if ( !v7 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 6045;
                DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_bGetDeviceInfo", 6045LL, 0LL, 0LL, 0LL, 0LL);
              }
              v128 = 1000;
              v222 = 1000;
              if ( v200 && (v216[1] & 1) != 0 )
              {
                SDRWhiteLevel = MonitorGetSDRWhiteLevel(v218, &v222);
                LODWORD(v27) = SDRWhiteLevel;
                if ( SDRWhiteLevel >= 0 )
                {
                  v128 = v222;
                }
                else
                {
                  WdLogSingleEntry4(
                    3LL,
                    *(int *)(*(_QWORD *)a2 + 416LL),
                    *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                    LODWORD(SymbolicLinkList[0]),
                    SDRWhiteLevel);
                  v128 = 3000;
                  WdLogGlobalForLineNumber = 6063;
                }
              }
              a3[5] = v128;
              goto LABEL_335;
            }
            if ( v121 == -18 )
            {
              if ( v7 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 6074;
                DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!i_bGetDeviceInfo", 6074LL, 0LL, 0LL, 0LL, 0LL);
              }
              IsEnabledDeviceUsageNoInline = Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline();
              v131 = v218;
              if ( !IsEnabledDeviceUsageNoInline )
                goto LABEL_253;
              LODWORD(v221) = 0;
              HdrBrightnessPolicy = MonitorGetHdrBrightnessPolicy(
                                      v218,
                                      (enum _DISPLAYCONFIG_HDR_BRIGHTNESS_MODE *)&v221);
              LODWORD(v27) = HdrBrightnessPolicy;
              if ( HdrBrightnessPolicy < 0 )
              {
                v115 = HdrBrightnessPolicy;
                v116 = LODWORD(SymbolicLinkList[0]);
                WdLogSingleEntry4(
                  2LL,
                  *(int *)(*(_QWORD *)a2 + 416LL),
                  *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                  LODWORD(SymbolicLinkList[0]),
                  HdrBrightnessPolicy);
                v117 = L"MonitorGetHdrBrightnessPolicy() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
                WdLogGlobalForLineNumber = 6090;
                goto LABEL_188;
              }
              if ( (_DWORD)v221 )
              {
LABEL_253:
                v133 = a3[5];
                if ( v133 - 1000 > 0x1388 )
                {
                  LODWORD(v27) = -1073741811;
                }
                else if ( v200 && (v216[1] & 1) != 0 )
                {
                  v134 = MonitorSetSDRWhiteLevel(v131, v133);
                  v27 = (struct HDXGMONITOR__ *)v134;
                  if ( v134 >= 0 )
                  {
                    if ( v134 )
                    {
                      if ( v134 == 255 )
                        LODWORD(v27) = 0;
                    }
                    else
                    {
                      if ( !*((_BYTE *)a3 + 24) )
                        goto LABEL_335;
                      TriggerSDRWhiteLevelChangedWnf();
                      v137 = *(DXGADAPTER **)a2;
                      *(_QWORD *)&DestinationString.Length = 0LL;
                      v228 = 0LL;
                      LODWORD(v228) = 13;
                      v229 = 0LL;
                      DXGADAPTER::IsAdapterSessionized(v137, v138, 0LL, (unsigned __int64 *)&DestinationString.Length);
                      SMgrGdiCallout(
                        &v228,
                        *(_QWORD *)&DestinationString.Length,
                        v139,
                        0LL,
                        v139 & (unsigned __int64)v188,
                        v139 & *(_QWORD *)&v193[0].0);
                    }
                  }
                  else
                  {
                    v135 = LODWORD(SymbolicLinkList[0]);
                    WdLogSingleEntry4(
                      2LL,
                      *(int *)(*(_QWORD *)a2 + 416LL),
                      *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                      LODWORD(SymbolicLinkList[0]),
                      v134);
                    v136 = *(_QWORD *)a2;
                    WdLogGlobalForLineNumber = 6125;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      0xFFFFFFFFLL,
                      L"MonitorSetSDRWhiteLevel() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
                      *(int *)(v136 + 416),
                      *(unsigned int *)(v136 + 412),
                      v135,
                      (__int64)v27,
                      0LL);
                  }
                }
                else
                {
                  LODWORD(v27) = -1073741637;
                }
                if ( *((_BYTE *)a3 + 24) )
                  DxgkNotifyDisplayChange(0);
                goto LABEL_335;
              }
            }
            else if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline()
                   && *a3 == -44 )
            {
              if ( !v7 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 6181;
                DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_bGetDeviceInfo", 6181LL, 0LL, 0LL, 0LL, 0LL);
              }
              if ( (v216[1] & 1) != 0 && !v230 )
              {
                HdrFlavor = MonitorGetHdrFlavor(
                              v218,
                              (enum _DISPLAYCONFIG_HDR_FLAVOR *)(a3 + 5),
                              (enum _DISPLAYCONFIG_HDR_FLAVOR *)(a3 + 6));
                LODWORD(v27) = HdrFlavor;
                if ( HdrFlavor < 0 )
                {
                  WdLogSingleEntry4(
                    3LL,
                    *(int *)(*(_QWORD *)a2 + 416LL),
                    *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                    LODWORD(SymbolicLinkList[0]),
                    HdrFlavor);
                  WdLogGlobalForLineNumber = 6201;
                }
                goto LABEL_335;
              }
            }
            else
            {
              if ( !(unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline()
                || *a3 != -43 )
              {
                if ( (unsigned int)Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline() && *a3 == -45 )
                {
                  DitheringCaps = MonitorGetDitheringCaps(v218, &v217);
                  v27 = (struct HDXGMONITOR__ *)DitheringCaps;
                  if ( DitheringCaps >= 0 )
                  {
                    a3[5] = v217.Value ^ (v217.Value ^ (v217.Value >> 2)) & 0xFC0000 ^ (v217.Value ^ (v217.Value ^ (v217.Value >> 2)) & 0xFC0000 ^ (v217.Value >> 2)) & 0x3F000 ^ (*(_WORD *)&v217.0 ^ (*(_WORD *)&v217.0 ^ (unsigned __int16)(v217.Value >> 2)) & 0xF000 ^ (unsigned __int16)(v217.Value >> 2)) & 0xFC0;
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL, DitheringCaps);
                    WdLogGlobalForLineNumber = 6238;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      0xFFFFFFFFLL,
                      L"MonitorGetDitheringCaps() failed 0x%I64x)",
                      (__int64)v27,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    a3[5] = 0;
                    LODWORD(v27) = -1073741823;
                  }
                }
                goto LABEL_335;
              }
              if ( v7 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 6209;
                DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!i_bGetDeviceInfo", 6209LL, 0LL, 0LL, 0LL, 0LL);
              }
              if ( (v216[1] & 1) != 0 && !v230 )
              {
                v141 = MonitorSetHdrFlavor((__int64)v218, a3[5]);
                LODWORD(v27) = v141;
                if ( v141 >= 0 )
                  goto LABEL_335;
                v115 = v141;
                v116 = LODWORD(SymbolicLinkList[0]);
                WdLogSingleEntry4(
                  2LL,
                  *(int *)(*(_QWORD *)a2 + 416LL),
                  *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                  LODWORD(SymbolicLinkList[0]),
                  v141);
                v117 = L"MonitorSetHdrFlavor() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
                WdLogGlobalForLineNumber = 6228;
                goto LABEL_188;
              }
            }
LABEL_204:
            LODWORD(v27) = -1073741637;
            goto LABEL_335;
          }
          if ( v7 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5995;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!i_bGetDeviceInfo", 5995LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( !v201 || v230 )
            goto LABEL_204;
          v127 = MonitorEnableDisableWcg(v218, a3[5] & 1);
          LODWORD(v27) = v127;
          if ( v127 < 0 )
          {
            v115 = v127;
            v116 = LODWORD(SymbolicLinkList[0]);
            WdLogSingleEntry4(
              2LL,
              *(int *)(*(_QWORD *)a2 + 416LL),
              *(unsigned int *)(*(_QWORD *)a2 + 412LL),
              LODWORD(SymbolicLinkList[0]),
              v127);
            v117 = L"MonitorEnableDisableWcg() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
            WdLogGlobalForLineNumber = 6023;
            goto LABEL_188;
          }
          if ( v127 != 255 )
            goto LABEL_335;
          v125 = (a3[5] & 1) == v202;
        }
        if ( !v125 )
          LODWORD(v27) = 0;
        goto LABEL_335;
      }
      if ( !v7 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5799;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_bGetDeviceInfo", 5799LL, 0LL, 0LL, 0LL, 0LL);
      }
      v143 = v218;
      v205 = 0;
      IsWcgEnabled = MonitorIsWcgEnabled(v218, &v205);
      LODWORD(v27) = IsWcgEnabled;
      if ( IsWcgEnabled < 0 )
      {
        v205 = 0;
        v115 = IsWcgEnabled;
        v116 = LODWORD(SymbolicLinkList[0]);
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          LODWORD(SymbolicLinkList[0]),
          IsWcgEnabled);
        WdLogGlobalForLineNumber = 5810;
LABEL_292:
        v117 = L"MonitorGetIsAutoColorManagementSupported() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        goto LABEL_188;
      }
      v204 = 0;
      IsHdrEnabled = MonitorIsHdrEnabled(v143, &v204);
      LODWORD(v27) = IsHdrEnabled;
      if ( IsHdrEnabled < 0 )
      {
        v204 = 0;
        v115 = IsHdrEnabled;
        v116 = LODWORD(SymbolicLinkList[0]);
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          LODWORD(SymbolicLinkList[0]),
          IsHdrEnabled);
        WdLogGlobalForLineNumber = 5824;
        goto LABEL_292;
      }
      v146 = v216[1];
      if ( v205 && !v204 )
      {
        v147 = v202;
      }
      else
      {
        v147 = v202;
        if ( !v202 && (!v201 || (v216[1] & 1) != 0) )
        {
          v61 = 0LL;
          v59 = 0LL;
          goto LABEL_303;
        }
      }
      v61 = 1LL;
      v59 = 1LL;
LABEL_303:
      if ( *a3 != 15 )
      {
        if ( *a3 == 9 )
        {
          v159 = ((v216[1] & 1) != 0 || v201) && !v230;
          if ( !v200 && !v147 )
            v8 = 0;
          a3[5] = (4 * v61) | v8 & 0xFFFFFFFB | v159 & 0xFFFFFFF9 | a3[5] & 0xFFFFFFF8;
          ColorDepthFromPickedWireFormat = GetColorDepthFromPickedWireFormat(v217);
          Value = v217.Value;
          a3[7] = ColorDepthFromPickedWireFormat;
          v162 = ConvertDmmToDisplayConfigColorEncoding(Value);
          v163 = (unsigned int)SymbolicLinkList[0];
          a3[6] = v162;
          a3[5] = a3[5] & 0xFFFFFFF7 | (8 * !DmmIsHdrAllowedOnTarget(*(struct DXGADAPTER **)a2, v163));
        }
        goto LABEL_335;
      }
      if ( (v216[1] & 1) != 0 || v201 )
      {
        v148 = v230;
        if ( !v230 )
        {
          v149 = 1;
          goto LABEL_310;
        }
      }
      else
      {
        v148 = v230;
      }
      v149 = 0;
LABEL_310:
      if ( v200 || v147 )
        v150 = 2;
      else
        v150 = 0;
      a3[5] = (4 * v59) | v150 & 0xFFFFFFFB | v149 & 0xFFFFFFF9 | a3[5] & 0xFFFFFFF8;
      v151 = GetColorDepthFromPickedWireFormat(v217);
      v152 = v217.Value;
      a3[7] = v151;
      v153 = ConvertDmmToDisplayConfigColorEncoding(v152);
      v154 = (unsigned int)SymbolicLinkList[0];
      a3[6] = v153;
      IsHdrAllowedOnTarget = DmmIsHdrAllowedOnTarget(*(struct DXGADAPTER **)a2, v154);
      if ( (v146 & 1) == 0 || v148 )
        v156 = 0;
      else
        v156 = 16;
      v157 = (v205 ? 0x80 : 0) | v156 & 0xFFFFFF7F | (v204 ? 0x20 : 0) | (8 * !IsHdrAllowedOnTarget) & 0x4F | a3[5] & 0x47;
      if ( !v201 || v148 )
        v158 = 0;
      else
        v158 = 64;
      a3[5] = v158 | v157 & 0xFFFFFFBF;
      if ( !v200 )
        v8 = v202 != 0;
      a3[8] = v8;
      goto LABEL_335;
    }
    goto LABEL_150;
  }
  if ( (_DWORD)v31 == -33 )
  {
    DpiGetAdapterMdmSupport(*(_QWORD *)(*(_QWORD *)a2 + 216LL), a3 + 5);
    goto LABEL_137;
  }
  if ( (_DWORD)v31 == -46 )
  {
    if ( !(unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_150;
    v80 = a3[4];
    v81 = *(_QWORD **)a2;
    *(_QWORD *)&DestinationString.Length = 0LL;
    v82 = MonitorGetMonitorHandle(
            v81,
            v80,
            0LL,
            DxgkDisplayConfigDeviceInfo,
            (struct HDXGMONITOR__ **)&DestinationString);
    v17 = v82;
    if ( v82 < 0 )
    {
      v18 = v82;
      WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), a3[4], v82);
      WdLogGlobalForLineNumber = 6598;
      goto LABEL_11;
    }
    v57 = *(struct HDXGMONITOR__ **)&DestinationString.Length;
    if ( !*(_QWORD *)&DestinationString.Length )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6603;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 6603LL, 0LL, 0LL, 0LL, 0LL);
    }
    ColorPipelineState2 = MonitorGetColorPipelineState2(v57, (struct _DISPLAYCONFIG_COLOR_PIPELINE_STATE_2 *)a3);
    v27 = (struct HDXGMONITOR__ *)ColorPipelineState2;
    if ( ColorPipelineState2 >= 0 )
    {
LABEL_355:
      v164 = v57;
      goto LABEL_336;
    }
    WdLogSingleEntry1(2LL, ColorPipelineState2);
    v60 = L"Failed to call MonitorGetColorPipelineState2 with status 0x%I64x";
    WdLogGlobalForLineNumber = 6610;
LABEL_83:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v60, (__int64)v27, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_355;
  }
  if ( (unsigned int)(v31 + 45) <= 2 )
    goto LABEL_71;
  if ( (_DWORD)v31 != -41 )
  {
    switch ( (_DWORD)v31 )
    {
      case 0xFFFFFFD8:
        if ( (unsigned int)Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline() )
        {
          v72 = a3[4];
          v73 = *(_QWORD **)a2;
          *(_QWORD *)&DestinationString.Length = 0LL;
          MonitorGetMonitorHandle(
            v73,
            v72,
            0LL,
            DxgkDisplayConfigDeviceInfo,
            (struct HDXGMONITOR__ **)&DestinationString);
          v57 = *(struct HDXGMONITOR__ **)&DestinationString.Length;
          if ( !*(_QWORD *)&DestinationString.Length )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 6523;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 6523LL, 0LL, 0LL, 0LL, 0LL);
          }
          LODWORD(v27) = MonitorSetHdrBrightnessPolicy((__int64)v57, a3[5]);
          if ( (int)v27 >= 0 )
            TriggerHdrSdrCompensationPolicyChangedWnf();
          goto LABEL_355;
        }
        break;
      case 0xFFFFFFDA:
        if ( (unsigned int)Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline() )
        {
          v68 = a3[4];
          v69 = *(_QWORD **)a2;
          *(_QWORD *)&DestinationString.Length = 0LL;
          v70 = MonitorGetMonitorHandle(
                  v69,
                  v68,
                  0LL,
                  DxgkDisplayConfigDeviceInfo,
                  (struct HDXGMONITOR__ **)&DestinationString);
          LODWORD(v27) = v70;
          if ( v70 >= 0 )
          {
            v57 = *(struct HDXGMONITOR__ **)&DestinationString.Length;
            if ( !*(_QWORD *)&DestinationString.Length )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 6484;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"MonitorHandle != NULL",
                6484LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            LODWORD(v27) = MonitorSetExternalBrightnessPolicy(v57, a3[6] != 0, a3[5] != 0);
            if ( (int)v27 >= 0 )
              TriggerExternalBrightnessPolicyChangedWnf();
            goto LABEL_355;
          }
          v71 = v70;
          WdLogSingleEntry4(
            2LL,
            *(int *)(*(_QWORD *)a2 + 416LL),
            *(unsigned int *)(*(_QWORD *)a2 + 412LL),
            (unsigned int)v68,
            v70);
          WdLogGlobalForLineNumber = 6480;
LABEL_107:
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
            *(int *)(*(_QWORD *)a2 + 416LL),
            *(unsigned int *)(*(_QWORD *)a2 + 412LL),
            v68,
            v71,
            0LL);
          goto LABEL_57;
        }
        break;
      case 0xFFFFFFDB:
        if ( !(unsigned int)Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline() )
          goto LABEL_168;
        if ( !v7 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6388;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_bGetDeviceInfo", 6388LL, 0LL, 0LL, 0LL, 0LL);
        }
        v62 = a3[4];
        v63 = *(_QWORD **)a2;
        v231 = a3[4];
        v224 = 0LL;
        v64 = MonitorGetMonitorHandle(v63, (unsigned int)v62, 0LL, DxgkDisplayConfigDeviceInfo, &v224);
        LODWORD(v27) = v64;
        if ( v64 >= 0 )
        {
          v57 = v224;
          if ( !v224 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 6414;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 6414LL, 0LL, 0LL, 0LL, 0LL);
          }
          v214 = 0;
          v215 = 0;
          ExternalBrightnessPolicy = MonitorGetExternalBrightnessPolicy(
                                       v57,
                                       &v214,
                                       &v215,
                                       (enum _DISPLAYCONFIG_HDR_BRIGHTNESS_MODE *)(a3 + 8),
                                       (enum _DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT *)(a3 + 7));
          LODWORD(v27) = ExternalBrightnessPolicy;
          if ( ExternalBrightnessPolicy >= 0 )
          {
            v21 = !v215;
            a3[5] = v214;
            a3[6] = !v21;
            a3[9] = (*(_DWORD *)(*(_QWORD *)a2 + 2448LL) >> 4) & 1;
            a3[10] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 216LL) + 64LL) + 3128LL) != 0LL;
            goto LABEL_355;
          }
          v65 = ExternalBrightnessPolicy;
          v62 = v231;
          WdLogSingleEntry4(
            2LL,
            *(int *)(*(_QWORD *)a2 + 416LL),
            *(unsigned int *)(*(_QWORD *)a2 + 412LL),
            v231,
            ExternalBrightnessPolicy);
          v66 = L"MonitorGetExternalBrightnessPolicy() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
          WdLogGlobalForLineNumber = 6429;
        }
        else
        {
          v65 = v64;
          WdLogSingleEntry4(
            2LL,
            *(int *)(*(_QWORD *)a2 + 416LL),
            *(unsigned int *)(*(_QWORD *)a2 + 412LL),
            (unsigned int)v62,
            v64);
          v66 = L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
          WdLogGlobalForLineNumber = 6410;
        }
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          v66,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          v62,
          v65,
          0LL);
        goto LABEL_138;
      default:
        goto LABEL_150;
    }
    goto LABEL_168;
  }
  if ( v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6541;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!i_bGetDeviceInfo", 6541LL, 0LL, 0LL, 0LL, 0LL);
  }
  v74 = a3[4];
  if ( a3[5] )
  {
    v77 = *(_QWORD **)a2;
    v225 = 0LL;
    v78 = MonitorGetMonitorHandle(v77, (unsigned int)v74, 0LL, DxgkDisplayConfigDeviceInfo, &v225);
    v27 = (struct HDXGMONITOR__ *)v78;
    if ( v78 < 0 )
    {
      WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), v74, v78);
      v191 = *(unsigned int *)(*(_QWORD *)a2 + 412LL);
      v186 = *(int *)(*(_QWORD *)a2 + 416LL);
      WdLogGlobalForLineNumber = 6565;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
        v186,
        v191,
        v74,
        (__int64)v27,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v207);
      v30 = v209 == 0;
      goto LABEL_139;
    }
    v57 = v225;
    if ( !v225 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6569;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 6569LL, 0LL, 0LL, 0LL, 0LL);
    }
    v79 = MonitorSetDefaultAdvancedColorParams(v57);
LABEL_349:
    LODWORD(v27) = v79;
    goto LABEL_355;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v207);
  if ( v209 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v75, (__int64)&EventProfilerExit, v76, v207);
  return 255LL;
}
