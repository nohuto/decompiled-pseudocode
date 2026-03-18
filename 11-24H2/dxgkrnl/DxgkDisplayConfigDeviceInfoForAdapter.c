/*
 * XREFs of DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1403C5760 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400349F8 (--1-$unique_storage@U-$resource_policy@PEAG$$A6AXPEAG@_E$1-FreePoolWithTag@-$pool_helpers@PEAG$0.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x140036924 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14003DDA0 (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x14004C404 (-reset@-$unique_storage@U-$resource_policy@PEAG$$A6AXPEAG@_E$1-FreePoolWithTag@-$pool_helpers@PE.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140051AB8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x140054770 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     DpiGetAdapterMdmSupport @ 0x14005917C (DpiGetAdapterMdmSupport.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x14006371C (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline @ 0x14006DEE8 (Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x14006DF90 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline @ 0x14006E038 (Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14006E08C (Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x14006E134 (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     ?MonitorSetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@_N1@Z @ 0x1401842AC (-MonitorSetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@_N1@Z.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x140188ECC (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z @ 0x14018C588 (-MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z.c)
 *     ?DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x140198CCC (-DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     TriggerExternalBrightnessPolicyChangedWnf @ 0x1401C5A90 (TriggerExternalBrightnessPolicyChangedWnf.c)
 *     TriggerHdrSdrCompensationPolicyChangedWnf @ 0x1401C5B48 (TriggerHdrSdrCompensationPolicyChangedWnf.c)
 *     TriggerSDRWhiteLevelChangedWnf @ 0x1401C6D78 (TriggerSDRWhiteLevelChangedWnf.c)
 *     DxgkNotifyDisplayChange @ 0x1401FD034 (DxgkNotifyDisplayChange.c)
 *     ?MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DC8C (-MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?MonitorEnableBoostRefreshRateEnabledByDefault@@YAJPEAXI_N@Z @ 0x14026DE20 (-MonitorEnableBoostRefreshRateEnabledByDefault@@YAJPEAXI_N@Z.c)
 *     ?MonitorEnableDisableHdr@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x14026DEFC (-MonitorEnableDisableHdr@@YAJPEAUHDXGMONITOR__@@_N@Z.c)
 *     ?MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x14026DFB0 (-MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z.c)
 *     ?MonitorGetColorPipelineState2@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE_2@@@Z @ 0x14026E064 (-MonitorGetColorPipelineState2@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE_2@.c)
 *     ?MonitorGetColorPipelineState@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE@@@Z @ 0x14026E220 (-MonitorGetColorPipelineState@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE@@@Z.c)
 *     ?MonitorGetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@PEA_N1PEAW4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@PEAW4_DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT@@@Z @ 0x14026E444 (-MonitorGetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@PEA_N1PEAW4_DISPLAYCONFIG_HDR_BRIGHTN.c)
 *     ?MonitorGetHdrBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@@Z @ 0x14026E51C (-MonitorGetHdrBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@@.c)
 *     ?MonitorGetHdrFlavor@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_FLAVOR@@1@Z @ 0x14026E5B8 (-MonitorGetHdrFlavor@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_FLAVOR@@1@Z.c)
 *     ?MonitorGetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@PEAK@Z @ 0x14026E810 (-MonitorGetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@PEAK@Z.c)
 *     ?MonitorSetDefaultAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@@Z @ 0x14026F1B4 (-MonitorSetDefaultAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorSetHdrBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@@Z @ 0x14026F33C (-MonitorSetHdrBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@@Z.c)
 *     ?MonitorSetHdrFlavor@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x14026F400 (-MonitorSetHdrFlavor@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_FLAVOR@@@Z.c)
 *     ?MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z @ 0x14026F650 (-MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1402D7400 (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1402D744C (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402E06D8 (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402E09E0 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?MonitorIsMonitorVirtualModeDisabled@@YAJPEAXIPEAE@Z @ 0x1402E0D88 (-MonitorIsMonitorVirtualModeDisabled@@YAJPEAXIPEAE@Z.c)
 *     ?DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z @ 0x140314B08 (-DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     IsCurrentModeAdvancedColor @ 0x14031516C (IsCurrentModeAdvancedColor.c)
 *     CheckGivenTargetIsPartOfCloneGroup @ 0x140315358 (CheckGivenTargetIsPartOfCloneGroup.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1403156CC (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x14035F81C (-MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4Mo.c)
 *     ?MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x1403AF234 (-MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapable.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@AEBVDXGADAPTER_REFERENCE@@@Z @ 0x1403B3464 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@AEBVDXGADAPTER_REFE.c)
 *     ?MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x1403C291C (-MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z.c)
 *     ?MonitorIsWcgEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x1403C5174 (-MonitorIsWcgEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z.c)
 *     ?MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z @ 0x1403D8C40 (-MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z.c)
 *     ?MonitorGetDitheringCaps@@YAJPEAUHDXGMONITOR__@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1403D9250 (-MonitorGetDitheringCaps@@YAJPEAUHDXGMONITOR__@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?MonitorGetPseudoSpecializedState@@YAJPEAUHDXGMONITOR__@@PEA_N11@Z @ 0x1403DD5BC (-MonitorGetPseudoSpecializedState@@YAJPEAUHDXGMONITOR__@@PEA_N11@Z.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@AEBVDXGADAPTER_REFERENCE@@@Z @ 0x1403E3CD8 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@AEBVDXGADAPTER_REFERENCE.c)
 *     ?MonitorSetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAI111KKK@Z @ 0x1403ED728 (-MonitorSetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAI111KKK@Z.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfoForAdapter(
        __int64 a1,
        const struct DXGADAPTER_REFERENCE *a2,
        unsigned int *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  char v7; // di
  int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  bool v13; // zf
  unsigned int v14; // edx
  struct HDXGMONITOR__ *v15; // rsi
  unsigned int v16; // edx
  void *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  int TargetBaseType; // eax
  struct _DEVICE_OBJECT *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  struct _DEVICE_OBJECT *v26; // rbx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  bool v30; // zf
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  int MonitorHandle; // eax
  unsigned int v39; // edi
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r8
  bool v43; // zf
  struct HDXGMONITOR__ *v44; // rdi
  int PseudoSpecializedState; // eax
  __int64 v46; // r9
  const wchar_t *v47; // r9
  __int64 v48; // r8
  __int64 v49; // rdi
  _QWORD *v50; // rcx
  int v51; // eax
  __int64 v52; // rbx
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // r8
  _QWORD *v58; // rcx
  int v59; // eax
  bool v60; // zf
  int v61; // eax
  __int64 v62; // rdx
  _QWORD *v63; // rcx
  int v64; // eax
  int ColorPipelineState; // eax
  __int64 v66; // rdx
  _QWORD *v67; // rcx
  int v68; // eax
  int ColorPipelineState2; // eax
  __int64 v70; // rdi
  _QWORD *v71; // rcx
  int v72; // eax
  __int64 v73; // rbx
  const wchar_t *v74; // r9
  int ExternalBrightnessPolicy; // eax
  __int64 v76; // r10
  __int64 v77; // rdx
  DXGADAPTER *v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // r8
  int v81; // ecx
  int v82; // edx
  int v83; // ecx
  int v84; // edx
  _QWORD *v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // r8
  int v88; // eax
  unsigned int *v89; // rcx
  unsigned int *v90; // r9
  unsigned int *v91; // r8
  unsigned int *v92; // rdx
  unsigned int v93; // eax
  struct HDXGMONITOR__ *v94; // r14
  int v95; // eax
  void *v96; // r8
  __int64 v97; // r9
  __int64 v98; // rcx
  __int64 v99; // rax
  void *v100; // r8
  __int64 v101; // r9
  __int64 v102; // r12
  void *v103; // rcx
  int v104; // eax
  _QWORD *v105; // rcx
  int v106; // eax
  __int64 v107; // rbx
  __int64 v108; // rcx
  __int64 v109; // r8
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v111; // rbx
  __int64 v112; // rdi
  const wchar_t *v113; // r9
  int IsMonitorAndDriverWCGCapable; // eax
  __int64 v115; // rcx
  int v116; // eax
  int v117; // eax
  char v118; // dl
  int v119; // eax
  BOOL v120; // ecx
  bool v121; // zf
  int v122; // eax
  int v123; // eax
  unsigned int v124; // eax
  int SDRWhiteLevel; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  struct HDXGMONITOR__ *v127; // rbx
  int HdrBrightnessPolicy; // eax
  unsigned int v129; // edx
  int v130; // eax
  __int64 v131; // rdi
  __int64 v132; // rax
  DXGADAPTER *v133; // rcx
  struct _LUID *v134; // rdx
  __int64 v135; // r8
  int HdrFlavor; // eax
  int v137; // eax
  int DitheringCaps; // eax
  struct HDXGMONITOR__ *v139; // rbx
  int IsWcgEnabled; // eax
  int IsHdrEnabled; // eax
  char v142; // bl
  char v143; // al
  char v144; // di
  int v145; // edx
  int v146; // eax
  unsigned int v147; // eax
  unsigned int v148; // ecx
  unsigned int v149; // eax
  unsigned int v150; // edx
  char IsHdrAllowedOnTarget; // al
  int v152; // edx
  unsigned int v153; // ecx
  int v154; // eax
  BOOL v155; // edx
  unsigned int ColorDepthFromPickedWireFormat; // eax
  unsigned int Value; // ecx
  unsigned int v158; // eax
  unsigned int v159; // edx
  struct HDXGMONITOR__ *v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // rdx
  _QWORD *v164; // rcx
  int v165; // eax
  struct HDXGMONITOR__ **v166; // rax
  struct _GUID *p_DestinationString; // r8
  unsigned int v168; // r9d
  struct _GUID *v169; // rdx
  __int128 v170; // xmm0
  unsigned int v171; // r9d
  __int64 v172; // rax
  unsigned int v173; // edx
  void *v174; // rcx
  int IsBoostRefreshRateEnabledByDefault; // eax
  bool v176; // al
  unsigned int v177; // edx
  _QWORD *v178; // rcx
  int SourceConnectedToTargetInClientVidPn; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  struct HDXGMONITOR__ **v181; // [rsp+28h] [rbp-A9h]
  __int64 v182; // [rsp+28h] [rbp-A9h]
  __int64 v183; // [rsp+28h] [rbp-A9h]
  struct HDXGMONITOR__ **v184; // [rsp+28h] [rbp-A9h]
  __int64 v185; // [rsp+28h] [rbp-A9h]
  struct HDXGMONITOR__ **v186; // [rsp+28h] [rbp-A9h]
  __int64 v187; // [rsp+30h] [rbp-A1h]
  __int64 v188; // [rsp+30h] [rbp-A1h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v189[2]; // [rsp+30h] [rbp-A1h]
  __int64 v190; // [rsp+30h] [rbp-A1h]
  bool v191; // [rsp+30h] [rbp-A1h]
  unsigned int v192; // [rsp+38h] [rbp-99h]
  __int64 v193; // [rsp+38h] [rbp-99h]
  const struct _UNICODE_STRING *v194; // [rsp+38h] [rbp-99h]
  unsigned int v195; // [rsp+40h] [rbp-91h]
  char v196; // [rsp+58h] [rbp-79h]
  bool v197; // [rsp+59h] [rbp-78h] BYREF
  char v198; // [rsp+5Ah] [rbp-77h]
  bool v199; // [rsp+5Bh] [rbp-76h] BYREF
  bool v200; // [rsp+5Ch] [rbp-75h] BYREF
  bool v201; // [rsp+5Dh] [rbp-74h] BYREF
  _BYTE v202[2]; // [rsp+5Eh] [rbp-73h] BYREF
  int v203; // [rsp+60h] [rbp-71h] BYREF
  __int64 v204; // [rsp+68h] [rbp-69h]
  char v205; // [rsp+70h] [rbp-61h]
  char v206; // [rsp+78h] [rbp-59h] BYREF
  bool v207; // [rsp+79h] [rbp-58h] BYREF
  bool v208; // [rsp+7Ah] [rbp-57h] BYREF
  bool v209; // [rsp+7Bh] [rbp-56h] BYREF
  bool v210; // [rsp+7Ch] [rbp-55h] BYREF
  bool v211; // [rsp+7Dh] [rbp-54h] BYREF
  _WORD v212[3]; // [rsp+7Eh] [rbp-53h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v213; // [rsp+84h] [rbp-4Dh] BYREF
  struct HDXGMONITOR__ *v214; // [rsp+88h] [rbp-49h]
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-39h] BYREF
  PZZWSTR SymbolicLinkList[2]; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v217; // [rsp+B8h] [rbp-19h] BYREF
  unsigned int v218; // [rsp+C0h] [rbp-11h] BYREF
  int v219; // [rsp+C4h] [rbp-Dh] BYREF
  struct HDXGMONITOR__ *v220; // [rsp+C8h] [rbp-9h] BYREF
  struct HDXGMONITOR__ *v221; // [rsp+D0h] [rbp-1h] BYREF
  struct HDXGMONITOR__ *v222; // [rsp+D8h] [rbp+7h] BYREF
  unsigned __int64 v223; // [rsp+E0h] [rbp+Fh] BYREF
  __int128 v224; // [rsp+E8h] [rbp+17h] BYREF
  __int128 v225; // [rsp+F8h] [rbp+27h]
  unsigned int v226; // [rsp+148h] [rbp+77h]
  char v227; // [rsp+148h] [rbp+77h]

  v203 = -1;
  v204 = 0LL;
  v7 = a1;
  v8 = 2;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v205 = 1;
    v203 = 2184;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 2184);
  }
  else
  {
    v205 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v203, 2184);
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5233;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"io_pRequestPacket != NULL", 5233LL, 0LL, 0LL, 0LL, 0LL);
LABEL_141:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v203);
    if ( v205 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v79, (__int64)&EventProfilerExit, v80, v203);
    }
    return 3221225485LL;
  }
  v12 = *a3;
  if ( (unsigned int)v12 <= 0x64 )
  {
    if ( (_DWORD)v12 != 100 )
    {
      if ( (unsigned int)v12 <= 0xA )
      {
        if ( (_DWORD)v12 == 10 )
          goto LABEL_57;
        if ( (_DWORD)v12 == 2 )
        {
          if ( !v7 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5291;
            DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_bGetDeviceInfo", 5291LL, 0LL, 0LL, 0LL, 0LL);
          }
          TargetBaseType = DisplayConfigFillTargetDeviceInfo((struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a3, a2);
LABEL_49:
          LODWORD(v15) = TargetBaseType;
          goto LABEL_360;
        }
        if ( (_DWORD)v12 != 4 )
        {
          if ( (_DWORD)v12 == 6 )
          {
            if ( !v7 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5301;
              DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_bGetDeviceInfo", 5301LL, 0LL, 0LL, 0LL, 0LL);
            }
            TargetBaseType = DisplayConfigGetTargetBaseType((struct DISPLAYCONFIG_TARGET_BASE_TYPE *)a3, a2);
          }
          else
          {
            if ( (_DWORD)v12 != 7 && (_DWORD)v12 != 8 )
            {
              v13 = (_DWORD)v12 == 9;
              goto LABEL_56;
            }
            if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 3120LL) + 290LL) )
            {
              WdLogSingleEntry3(
                3LL,
                *(_QWORD *)a2,
                *(int *)(*(_QWORD *)a2 + 416LL),
                *(unsigned int *)(*(_QWORD *)a2 + 412LL));
              WdLogGlobalForLineNumber = 5320;
              goto LABEL_147;
            }
            if ( (_DWORD)v12 == 7 )
            {
              v199 = 0;
              if ( !v7 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 5331;
                DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_bGetDeviceInfo", 5331LL, 0LL, 0LL, 0LL, 0LL);
              }
              v14 = a3[4];
              a3[5] = 0;
              LODWORD(v15) = MonitorIsMonitorVirtualModeDisabled(*(_QWORD **)a2, v14, (unsigned __int8 *)&v199);
              if ( (int)v15 >= 0 )
                a3[5] = v199 | a3[5] & 0xFFFFFFFE;
              goto LABEL_360;
            }
            if ( v7 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5348;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"(!i_bGetDeviceInfo)&& (io_pRequestPacket->type == DISPLAYCONFIG_DEVICE_INFO_SET_SUPPORT_VIRTUAL_RESOLUTION)",
                5348LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v16 = a3[4];
            v17 = *(void **)a2;
            v206 = 0;
            if ( (int)CheckGivenTargetIsPartOfCloneGroup(v17, v16, &v206) >= 0 && v206 )
            {
              WdLogSingleEntry3(3LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), a3[4]);
              WdLogGlobalForLineNumber = 5361;
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v203);
              if ( v205 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v203);
              return 3221225647LL;
            }
            TargetBaseType = MonitorDisableMonitorVirtualModeSupport(*(_QWORD *)a2, a3[4], a3[5] & 1, a4);
          }
          goto LABEL_49;
        }
        v22 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)a2 + 216LL);
        if ( !v22 )
        {
          WdLogSingleEntry1(2LL, *(_QWORD *)a2);
          v181 = *(struct HDXGMONITOR__ ***)a2;
          WdLogGlobalForLineNumber = 5251;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Adapter 0x%I64x had no FDO",
            (__int64)v181,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v203);
          if ( v205 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v203);
          return 3221226021LL;
        }
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v22);
        SymbolicLinkList[0] = 0LL;
        *(_QWORD *)&DestinationString.Length = DeviceAttachmentBaseRef;
        v26 = DeviceAttachmentBaseRef;
        _reset___unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAAXPEAG_Z(
          (__int64 *)SymbolicLinkList,
          0LL);
        DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_DISPLAY_ADAPTER, v26, 0, SymbolicLinkList);
        LODWORD(v15) = DeviceInterfaces;
        if ( DeviceInterfaces >= 0 )
        {
          wcsncpy_s((wchar_t *)a3 + 10, 0x80uLL, SymbolicLinkList[0], 0xFFFFFFFFFFFFFFFFuLL);
          *((_WORD *)a3 + 11) = 92;
          __1__unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAA_XZ((void **)SymbolicLinkList);
          wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)&DestinationString);
LABEL_360:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v203);
          v60 = v205 == 0;
LABEL_361:
          if ( !v60 )
          {
            v30 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_363:
            if ( !v30 )
              McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v203);
            return (unsigned int)v15;
          }
          return (unsigned int)v15;
        }
        WdLogSingleEntry2(3LL, v26, DeviceInterfaces);
        WdLogGlobalForLineNumber = 5267;
        __1__unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAA_XZ((void **)SymbolicLinkList);
        wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)&DestinationString);
LABEL_43:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v203);
        if ( v205 )
        {
          v30 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
          goto LABEL_363;
        }
        return (unsigned int)v15;
      }
      v31 = v12 - 11;
      if ( !v31 )
        goto LABEL_57;
      v32 = v31 - 1;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 )
        {
          v34 = v33 - 2;
          if ( !v34 )
            goto LABEL_57;
          v35 = v34 - 1;
          if ( !v35 )
            goto LABEL_57;
          v13 = v35 == 1;
LABEL_56:
          if ( v13 )
            goto LABEL_57;
LABEL_59:
          LODWORD(v15) = -1073741811;
          goto LABEL_360;
        }
        goto LABEL_320;
      }
      v36 = a3[4];
      v37 = *(_QWORD **)a2;
      *(_QWORD *)&DestinationString.Length = 0LL;
      MonitorHandle = MonitorGetMonitorHandle(
                        v37,
                        v36,
                        0LL,
                        DxgkDisplayConfigDeviceInfo,
                        (struct HDXGMONITOR__ **)&DestinationString);
      v39 = MonitorHandle;
      if ( MonitorHandle < 0 )
      {
        v40 = MonitorHandle;
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          a3[4],
          MonitorHandle);
        WdLogGlobalForLineNumber = 6312;
LABEL_62:
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          a3[4],
          v40,
          0LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v203);
        v43 = v205 == 0;
        goto LABEL_341;
      }
      v44 = *(struct HDXGMONITOR__ **)&DestinationString.Length;
      if ( !*(_QWORD *)&DestinationString.Length )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6316;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 6316LL, 0LL, 0LL, 0LL, 0LL);
      }
      v207 = 0;
      v209 = 0;
      v208 = 0;
      PseudoSpecializedState = MonitorGetPseudoSpecializedState(v44, &v209, &v208, &v207);
      v15 = (struct HDXGMONITOR__ *)PseudoSpecializedState;
      if ( PseudoSpecializedState >= 0 )
      {
        v48 = (v209 ? 2 : 0) | (v208 ? 4 : 0) | v207 | a3[5] & 0xFFFFFFF8;
        a3[5] = v48;
        goto LABEL_338;
      }
      WdLogSingleEntry1(2LL, PseudoSpecializedState);
      v47 = L"Failed to call MonitorGetPseudoSpecializedState with status 0x%I64x";
      WdLogGlobalForLineNumber = 6325;
LABEL_67:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v47, (__int64)v15, 0LL, 0LL, 0LL, 0LL);
LABEL_338:
      v160 = v44;
      goto LABEL_319;
    }
LABEL_133:
    v76 = *(_QWORD *)a2;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 444LL) & 0x100) == 0 )
    {
      WdLogSingleEntry3(3LL, *(_QWORD *)a2, *(int *)(v76 + 416), *(unsigned int *)(v76 + 412));
      WdLogGlobalForLineNumber = 5477;
      goto LABEL_147;
    }
    if ( (_DWORD)v12 == -10 )
    {
      if ( (int)ADAPTER_DISPLAY::DodGetRenderAdapter(*(ADAPTER_DISPLAY **)(v76 + 3120), a3[4], (struct _LUID *)(a3 + 5)) < 0 )
      {
        WdLogSingleEntry3(3LL, *(_QWORD *)a2, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL));
        WdLogGlobalForLineNumber = 5492;
        goto LABEL_141;
      }
    }
    else
    {
      v77 = a3[4];
      v78 = *(DXGADAPTER **)a2;
      *(_QWORD *)&v225 = 0LL;
      v224 = 0LL;
      if ( (int)DXGADAPTER::GetVirtualMonitorInfo(v78, v77, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&v224) < 0 )
      {
        WdLogSingleEntry3(3LL, *(_QWORD *)a2, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL));
        WdLogGlobalForLineNumber = 5508;
        goto LABEL_141;
      }
      a3[5] = DWORD1(v224);
    }
LABEL_359:
    LODWORD(v15) = 0;
    goto LABEL_360;
  }
  if ( (unsigned int)v12 > 0xFFFFFFDB )
  {
    if ( (_DWORD)v12 == -33 )
    {
      DpiGetAdapterMdmSupport(*(_QWORD *)(*(_QWORD *)a2 + 216LL), a3 + 5);
      goto LABEL_359;
    }
    if ( (unsigned int)(v12 + 27) <= 1 )
    {
      if ( a3[1] < 0x18 )
      {
        v172 = WdLogNewEntry5_WdTrace(v12, v9, v10, v11);
        v39 = -1073741789;
        *(_QWORD *)(v172 + 24) = a3[1];
        *(_QWORD *)(v172 + 32) = -1073741789LL;
        WdLogGlobalForLineNumber = 5382;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v203);
        v43 = v205 == 0;
LABEL_341:
        if ( !v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v41, (__int64)&EventProfilerExit, v42, v203);
        return v39;
      }
      v173 = a3[4];
      v13 = (_DWORD)v12 == -26;
      v174 = *(void **)a2;
      if ( v13 )
      {
        v199 = 0;
        IsBoostRefreshRateEnabledByDefault = MonitorIsBoostRefreshRateEnabledByDefault(v174, v173, &v199);
        LODWORD(v15) = IsBoostRefreshRateEnabledByDefault;
        if ( IsBoostRefreshRateEnabledByDefault == -1073741632 )
        {
          LODWORD(v15) = 0;
          v176 = 0;
        }
        else
        {
          if ( IsBoostRefreshRateEnabledByDefault < 0 )
            goto LABEL_360;
          v176 = v199;
        }
        *((_BYTE *)a3 + 20) = v176;
        goto LABEL_360;
      }
      LODWORD(v15) = MonitorEnableBoostRefreshRateEnabledByDefault((__int64)v174, v173, *((_BYTE *)a3 + 20) != 0);
      if ( (_DWORD)v15 != -1073741802 )
        goto LABEL_360;
      v177 = a3[4];
      v178 = *(_QWORD **)a2;
      LODWORD(SymbolicLinkList[0]) = 0;
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(
                                               v178,
                                               v177,
                                               (unsigned int *)SymbolicLinkList);
      LODWORD(v15) = SourceConnectedToTargetInClientVidPn;
      if ( SourceConnectedToTargetInClientVidPn != -1071774884 && SourceConnectedToTargetInClientVidPn != -1071774912 )
      {
        if ( SourceConnectedToTargetInClientVidPn >= 0 )
        {
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                              *(ADAPTER_DISPLAY **)(*(_QWORD *)a2 + 3120LL),
                              (unsigned int)SymbolicLinkList[0]);
          if ( *((_BYTE *)a3 + 20) || *((_DWORD *)DisplayModeInfo + 18) >= 2u )
            LODWORD(v15) = -1073741802;
        }
        goto LABEL_360;
      }
      goto LABEL_359;
    }
    if ( (_DWORD)v12 == -23 )
    {
LABEL_320:
      if ( !IsCurrentProcessAdmin() )
      {
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v203);
        if ( v205 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v161, (__int64)&EventProfilerExit, v162, v203);
        return 3221225506LL;
      }
      v163 = a3[4];
      v164 = *(_QWORD **)a2;
      *(_QWORD *)&DestinationString.Length = 0LL;
      v165 = MonitorGetMonitorHandle(
               v164,
               v163,
               0LL,
               DxgkDisplayConfigDeviceInfo,
               (struct HDXGMONITOR__ **)&DestinationString);
      v15 = (struct HDXGMONITOR__ *)v165;
      if ( v165 < 0 )
      {
        WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), a3[4], v165);
        v193 = a3[4];
        v190 = *(unsigned int *)(*(_QWORD *)a2 + 412LL);
        v185 = *(int *)(*(_QWORD *)a2 + 416LL);
        WdLogGlobalForLineNumber = 6246;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
          v185,
          v190,
          v193,
          (__int64)v15,
          0LL);
        goto LABEL_43;
      }
      v44 = *(struct HDXGMONITOR__ **)&DestinationString.Length;
      if ( !*(_QWORD *)&DestinationString.Length )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6250;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 6250LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *a3 == -23 )
      {
        v166 = (struct HDXGMONITOR__ **)*((_QWORD *)a3 + 5);
        p_DestinationString = (struct _GUID *)&DestinationString;
        v168 = a3[9];
        v169 = (struct _GUID *)SymbolicLinkList;
        v194 = 0LL;
        DestinationString = 0LL;
        v170 = *(_OWORD *)(a3 + 5);
        v191 = 0;
        v186 = v166;
      }
      else
      {
        if ( *a3 != 13 )
          goto LABEL_338;
        v223 = 0LL;
        if ( (int)RtlStringCbLengthW((const unsigned __int16 *)a3 + 28, 0x100uLL, &v223) < 0 || !v223 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 6273;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"DISPLAYCONFIG_DEVICE_INFO_SET_MONITOR_SPECIALIZATION was called with an invalid app name string.",
            6273LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v15) = -1073741811;
          goto LABEL_338;
        }
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)a3 + 28);
        v171 = a3[5];
        v170 = *(_OWORD *)(a3 + 10);
        v194 = &DestinationString;
        p_DestinationString = (struct _GUID *)SymbolicLinkList;
        v191 = 1;
        v169 = (struct _GUID *)&v224;
        v224 = *(_OWORD *)(a3 + 6);
        v186 = 0LL;
        v168 = v171 & 1;
      }
      *(_OWORD *)SymbolicLinkList = v170;
      v61 = MonitorSetAppOverride(v44, v169, p_DestinationString, v168, (unsigned __int64)v186, v191, v194);
      goto LABEL_332;
    }
    if ( (_DWORD)v12 != -18 )
    {
      if ( (_DWORD)v12 != -16 )
      {
        if ( (_DWORD)v12 == -12 )
        {
          a3[5] = 0;
          v81 = (*(_DWORD *)(*(_QWORD *)a2 + 2448LL) >> 2) & 1;
          a3[5] = v81;
          v82 = v81 | (*(_DWORD *)(*(_QWORD *)a2 + 2448LL) >> 2) & 2;
          a3[5] = v82;
          v83 = v82 | (*(_DWORD *)(*(_QWORD *)a2 + 2448LL) >> 2) & 4;
          a3[5] = v83;
          v84 = v83 | (32 * (*(_DWORD *)(*(_QWORD *)a2 + 2448LL) & 1));
          a3[5] = v84;
          a3[5] = v84 | (8 * (*(_DWORD *)(*(_QWORD *)a2 + 2448LL) & 2));
          goto LABEL_359;
        }
        if ( (_DWORD)v12 != -10 )
          goto LABEL_59;
        goto LABEL_133;
      }
      v85 = *(_QWORD **)a2;
      v49 = a3[4];
      if ( *(int *)(*(_QWORD *)a2 + 2736LL) >= 9216 )
      {
        *(_QWORD *)&DestinationString.Length = 0LL;
        LOBYTE(v10) = 1;
        v88 = MonitorGetMonitorHandle(
                v85,
                (unsigned int)v49,
                v10,
                DxgkDisplayConfigDeviceInfoForAdapter,
                (struct HDXGMONITOR__ **)&DestinationString);
        LODWORD(v15) = v88;
        if ( v88 >= 0 )
        {
          v89 = a3 + 11;
          v195 = a3[15];
          v90 = a3 + 9;
          v91 = a3 + 7;
          v192 = a3[14];
          v92 = a3 + 5;
          v93 = a3[13];
          v94 = *(struct HDXGMONITOR__ **)&DestinationString.Length;
          v95 = MonitorSetAdvancedColorParams(
                  *(struct HDXGMONITOR__ **)&DestinationString.Length,
                  v92,
                  v91,
                  v90,
                  v89,
                  v93,
                  v192,
                  v195);
          v98 = *(_QWORD *)a2;
          v15 = (struct HDXGMONITOR__ *)v95;
          if ( v95 >= 0 )
          {
            MonitorReleaseMonitorHandle((_QWORD *)v98, v94, v96, v97);
            if ( (_DWORD)v15 != 255 )
              LODWORD(v15) = 255;
            goto LABEL_360;
          }
          WdLogSingleEntry4(2LL, *(int *)(v98 + 416), *(unsigned int *)(v98 + 412), v49, v95);
          v99 = *(_QWORD *)a2;
          WdLogGlobalForLineNumber = 5604;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"MonitorSetAdvancedColorParams() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
            *(int *)(v99 + 416),
            *(unsigned int *)(v99 + 412),
            v49,
            (__int64)v15,
            0LL);
          MonitorReleaseMonitorHandle(*(_QWORD **)a2, v94, v100, v101);
          goto LABEL_43;
        }
        v52 = v88;
        WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), v49, v88);
        WdLogGlobalForLineNumber = 5578;
        goto LABEL_80;
      }
LABEL_147:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v203);
      if ( v205 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v86, (__int64)&EventProfilerExit, v87, v203);
      return 3221225659LL;
    }
LABEL_57:
    if ( ((unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() || *a3 + 44 > 1)
      && ((unsigned int)Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline() || *a3 != -45) )
    {
      v103 = *(void **)a2;
      LODWORD(SymbolicLinkList[0]) = a3[4];
      v102 = LODWORD(SymbolicLinkList[0]);
      v202[0] = 0;
      v104 = CheckGivenTargetIsPartOfCloneGroup(v103, (unsigned int)SymbolicLinkList[0], v202);
      v217 = v102;
      if ( v104 == -1073741275 )
      {
        WdLogSingleEntry4(
          3LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          (unsigned int)v102,
          -1073741275LL);
        WdLogGlobalForLineNumber = 5681;
        v227 = 0;
        v202[0] = 0;
      }
      else
      {
        v227 = v202[0];
        v217 = v102;
      }
      v105 = *(_QWORD **)a2;
      v222 = 0LL;
      v106 = MonitorGetMonitorHandle(v105, (unsigned int)v102, 0LL, DxgkDisplayConfigDeviceInfo, &v222);
      LODWORD(v214) = v106;
      if ( v106 < 0 )
      {
        v107 = v106;
        WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), v102, v106);
        v188 = *(unsigned int *)(*(_QWORD *)a2 + 412LL);
        v183 = *(int *)(*(_QWORD *)a2 + 416LL);
        WdLogGlobalForLineNumber = 5702;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
          v183,
          v188,
          v102,
          v107,
          0LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v203);
        if ( v205 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v108, (__int64)&EventProfilerExit, v109, v203);
        return (unsigned int)v214;
      }
      v15 = v222;
      v214 = v222;
      if ( !v222 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5706;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 5706LL, 0LL, 0LL, 0LL, 0LL);
      }
      *(_DWORD *)&v212[1] = 0;
      IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(
                                     v15,
                                     (union MONITOR_AND_LINK_HDR_CAPS *)&v212[1],
                                     0LL);
      LODWORD(v15) = IsMonitorAndLinkHDRCapable;
      if ( IsMonitorAndLinkHDRCapable < 0 )
      {
        v111 = IsMonitorAndLinkHDRCapable;
        v112 = v217;
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          v217,
          IsMonitorAndLinkHDRCapable);
        v113 = L"MonitorIsMonitorAndLinkHDRCapable() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 5716;
LABEL_171:
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          v113,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          v112,
          v111,
          0LL);
LABEL_318:
        v160 = v214;
LABEL_319:
        MonitorReleaseMonitorHandle(*(_QWORD **)a2, v160, (void *)v48, v46);
        goto LABEL_360;
      }
      v197 = 0;
      IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(v214, &v197, 0LL);
      v115 = *(_QWORD *)a2;
      LODWORD(v15) = IsMonitorAndDriverWCGCapable;
      if ( IsMonitorAndDriverWCGCapable < 0 )
      {
        v111 = IsMonitorAndDriverWCGCapable;
        v112 = v217;
        WdLogSingleEntry4(2LL, *(int *)(v115 + 416), *(unsigned int *)(v115 + 412), v217, IsMonitorAndDriverWCGCapable);
        v113 = L"MonitorIsMonitorAndDriverWCGCapable() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 5728;
        goto LABEL_171;
      }
      v213.Value = 0;
      v219 = 0;
      v212[0] = 0;
      v116 = IsCurrentModeAdvancedColor(
               (int *)v115,
               (unsigned int)SymbolicLinkList[0],
               &v213,
               (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)&v219,
               (char *)v212,
               (bool *)v212 + 1);
      LODWORD(v15) = v116;
      if ( v116 < 0 )
      {
        v111 = v116;
        v112 = v217;
        WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), v217, v116);
        v113 = L"IsCurrentModeAdvancedColor() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 5748;
        goto LABEL_171;
      }
      v198 = HIBYTE(v212[0]);
      v196 = v212[0];
      if ( v227 && v212[0] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5758;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"!bCurrentModeHdr && !bCurrentModeWcg",
          5758LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v117 = *a3;
      if ( *a3 != 9 && v117 != 15 )
      {
        switch ( v117 )
        {
          case 10:
            if ( v7 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5856;
              DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!i_bGetDeviceInfo", 5856LL, 0LL, 0LL, 0LL, 0LL);
            }
            if ( (v212[1] & 1) == 0 && !v197 || v227 )
              goto LABEL_187;
            v118 = a3[5] & 1;
            if ( (v212[1] & 1) != 0 )
              v119 = MonitorEnableDisableHdr(v214, v118);
            else
              v119 = MonitorEnableDisableWcg(v214, v118);
            LODWORD(v15) = v119;
            if ( v119 < 0 )
            {
              v112 = LODWORD(SymbolicLinkList[0]);
              v111 = v119;
              WdLogSingleEntry4(
                2LL,
                *(int *)(*(_QWORD *)a2 + 416LL),
                *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                LODWORD(SymbolicLinkList[0]),
                v119);
              v113 = L"MonitorEnableDisableAdvancedColor() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
              WdLogGlobalForLineNumber = 5891;
              goto LABEL_171;
            }
            if ( v119 != 255 )
              goto LABEL_318;
            v120 = v196 || (v212[1] & 1) == 0 && v198;
            v121 = (a3[5] & 1) == v120;
LABEL_218:
            if ( !v121 )
              LODWORD(v15) = 0;
            goto LABEL_318;
          case 16:
            if ( v7 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5913;
              DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!i_bGetDeviceInfo", 5913LL, 0LL, 0LL, 0LL, 0LL);
            }
            if ( (v212[1] & 1) == 0 || v227 )
              goto LABEL_187;
            v122 = MonitorEnableDisableHdr(v214, a3[5] & 1);
            LODWORD(v15) = v122;
            if ( v122 < 0 )
            {
              v111 = v122;
              v112 = LODWORD(SymbolicLinkList[0]);
              WdLogSingleEntry4(
                2LL,
                *(int *)(*(_QWORD *)a2 + 416LL),
                *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                LODWORD(SymbolicLinkList[0]),
                v122);
              v113 = L"MonitorEnableDisableHdr() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
              WdLogGlobalForLineNumber = 5941;
              goto LABEL_171;
            }
            if ( v122 != 255 )
              goto LABEL_318;
            v121 = (a3[5] & 1) == v196;
            goto LABEL_218;
          case 17:
            if ( v7 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5963;
              DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!i_bGetDeviceInfo", 5963LL, 0LL, 0LL, 0LL, 0LL);
            }
            if ( !v197 || v227 )
              goto LABEL_187;
            v123 = MonitorEnableDisableWcg(v214, a3[5] & 1);
            LODWORD(v15) = v123;
            if ( v123 < 0 )
            {
              v111 = v123;
              v112 = LODWORD(SymbolicLinkList[0]);
              WdLogSingleEntry4(
                2LL,
                *(int *)(*(_QWORD *)a2 + 416LL),
                *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                LODWORD(SymbolicLinkList[0]),
                v123);
              v113 = L"MonitorEnableDisableWcg() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
              WdLogGlobalForLineNumber = 5991;
              goto LABEL_171;
            }
            if ( v123 != 255 )
              goto LABEL_318;
            v121 = (a3[5] & 1) == v198;
            goto LABEL_218;
        }
        if ( v117 != 11 )
        {
          if ( v117 == -18 )
          {
            if ( v7 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 6042;
              DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!i_bGetDeviceInfo", 6042LL, 0LL, 0LL, 0LL, 0LL);
            }
            IsEnabledDeviceUsageNoInline = Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline();
            v127 = v214;
            if ( !IsEnabledDeviceUsageNoInline )
              goto LABEL_235;
            LODWORD(v217) = 0;
            HdrBrightnessPolicy = MonitorGetHdrBrightnessPolicy(v214, (enum _DISPLAYCONFIG_HDR_BRIGHTNESS_MODE *)&v217);
            LODWORD(v15) = HdrBrightnessPolicy;
            if ( HdrBrightnessPolicy < 0 )
            {
              v111 = HdrBrightnessPolicy;
              v112 = LODWORD(SymbolicLinkList[0]);
              WdLogSingleEntry4(
                2LL,
                *(int *)(*(_QWORD *)a2 + 416LL),
                *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                LODWORD(SymbolicLinkList[0]),
                HdrBrightnessPolicy);
              v113 = L"MonitorGetHdrBrightnessPolicy() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
              WdLogGlobalForLineNumber = 6058;
              goto LABEL_171;
            }
            if ( (_DWORD)v217 )
            {
LABEL_235:
              v129 = a3[5];
              if ( v129 - 1000 > 0x1388 )
              {
                LODWORD(v15) = -1073741811;
              }
              else if ( v196 && (v212[1] & 1) != 0 )
              {
                v130 = MonitorSetSDRWhiteLevel(v127, v129);
                v15 = (struct HDXGMONITOR__ *)v130;
                if ( v130 >= 0 )
                {
                  if ( v130 )
                  {
                    if ( v130 == 255 )
                      LODWORD(v15) = 0;
                  }
                  else
                  {
                    if ( !*((_BYTE *)a3 + 24) )
                      goto LABEL_318;
                    TriggerSDRWhiteLevelChangedWnf();
                    v133 = *(DXGADAPTER **)a2;
                    *(_QWORD *)&DestinationString.Length = 0LL;
                    v224 = 0LL;
                    LODWORD(v224) = 13;
                    v225 = 0LL;
                    DXGADAPTER::IsAdapterSessionized(v133, v134, 0LL, (unsigned __int64 *)&DestinationString.Length);
                    SMgrGdiCallout(
                      &v224,
                      *(_QWORD *)&DestinationString.Length,
                      v135,
                      0LL,
                      v135 & (unsigned __int64)v184,
                      v135 & *(_QWORD *)&v189[0].0);
                  }
                }
                else
                {
                  v131 = LODWORD(SymbolicLinkList[0]);
                  WdLogSingleEntry4(
                    2LL,
                    *(int *)(*(_QWORD *)a2 + 416LL),
                    *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                    LODWORD(SymbolicLinkList[0]),
                    v130);
                  v132 = *(_QWORD *)a2;
                  WdLogGlobalForLineNumber = 6093;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000LL,
                    0xFFFFFFFFLL,
                    L"MonitorSetSDRWhiteLevel() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
                    *(int *)(v132 + 416),
                    *(unsigned int *)(v132 + 412),
                    v131,
                    (__int64)v15,
                    0LL);
                }
              }
              else
              {
                LODWORD(v15) = -1073741637;
              }
              if ( *((_BYTE *)a3 + 24) )
                DxgkNotifyDisplayChange(0);
              goto LABEL_318;
            }
          }
          else if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline()
                 && *a3 == -44 )
          {
            if ( !v7 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 6149;
              DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_bGetDeviceInfo", 6149LL, 0LL, 0LL, 0LL, 0LL);
            }
            if ( (v212[1] & 1) != 0 && !v227 )
            {
              HdrFlavor = MonitorGetHdrFlavor(
                            v214,
                            (enum _DISPLAYCONFIG_HDR_FLAVOR *)(a3 + 5),
                            (enum _DISPLAYCONFIG_HDR_FLAVOR *)(a3 + 6));
              LODWORD(v15) = HdrFlavor;
              if ( HdrFlavor < 0 )
              {
                WdLogSingleEntry4(
                  3LL,
                  *(int *)(*(_QWORD *)a2 + 416LL),
                  *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                  LODWORD(SymbolicLinkList[0]),
                  HdrFlavor);
                WdLogGlobalForLineNumber = 6169;
              }
              goto LABEL_318;
            }
          }
          else
          {
            if ( !(unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() || *a3 != -43 )
            {
              if ( (unsigned int)Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline() && *a3 == -45 )
              {
                DitheringCaps = MonitorGetDitheringCaps(v214, &v213);
                v15 = (struct HDXGMONITOR__ *)DitheringCaps;
                if ( DitheringCaps >= 0 )
                {
                  a3[5] = v213.Value ^ (v213.Value ^ (v213.Value >> 2)) & 0xFC0000 ^ (v213.Value ^ (v213.Value ^ (v213.Value >> 2)) & 0xFC0000 ^ (v213.Value >> 2)) & 0x3F000 ^ (*(_WORD *)&v213.0 ^ (*(_WORD *)&v213.0 ^ (unsigned __int16)(v213.Value >> 2)) & 0xF000 ^ (unsigned __int16)(v213.Value >> 2)) & 0xFC0;
                }
                else
                {
                  WdLogSingleEntry1(2LL, DitheringCaps);
                  WdLogGlobalForLineNumber = 6206;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000LL,
                    0xFFFFFFFFLL,
                    L"MonitorGetDitheringCaps() failed 0x%I64x)",
                    (__int64)v15,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  a3[5] = 0;
                  LODWORD(v15) = -1073741823;
                }
              }
              goto LABEL_318;
            }
            if ( v7 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 6177;
              DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!i_bGetDeviceInfo", 6177LL, 0LL, 0LL, 0LL, 0LL);
            }
            if ( (v212[1] & 1) != 0 && !v227 )
            {
              v137 = MonitorSetHdrFlavor((__int64)v214, a3[5]);
              LODWORD(v15) = v137;
              if ( v137 >= 0 )
                goto LABEL_318;
              v111 = v137;
              v112 = LODWORD(SymbolicLinkList[0]);
              WdLogSingleEntry4(
                2LL,
                *(int *)(*(_QWORD *)a2 + 416LL),
                *(unsigned int *)(*(_QWORD *)a2 + 412LL),
                LODWORD(SymbolicLinkList[0]),
                v137);
              v113 = L"MonitorSetHdrFlavor() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
              WdLogGlobalForLineNumber = 6196;
              goto LABEL_171;
            }
          }
LABEL_187:
          LODWORD(v15) = -1073741637;
          goto LABEL_318;
        }
        if ( !v7 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6013;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_bGetDeviceInfo", 6013LL, 0LL, 0LL, 0LL, 0LL);
        }
        v124 = 1000;
        v218 = 1000;
        if ( v196 && (v212[1] & 1) != 0 )
        {
          SDRWhiteLevel = MonitorGetSDRWhiteLevel(v214, &v218);
          LODWORD(v15) = SDRWhiteLevel;
          if ( SDRWhiteLevel >= 0 )
          {
            v124 = v218;
          }
          else
          {
            WdLogSingleEntry4(
              3LL,
              *(int *)(*(_QWORD *)a2 + 416LL),
              *(unsigned int *)(*(_QWORD *)a2 + 412LL),
              LODWORD(SymbolicLinkList[0]),
              SDRWhiteLevel);
            v124 = 3000;
            WdLogGlobalForLineNumber = 6031;
          }
        }
LABEL_317:
        a3[5] = v124;
        goto LABEL_318;
      }
      if ( !v7 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5767;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_bGetDeviceInfo", 5767LL, 0LL, 0LL, 0LL, 0LL);
      }
      v139 = v214;
      v201 = 0;
      IsWcgEnabled = MonitorIsWcgEnabled(v214, &v201);
      LODWORD(v15) = IsWcgEnabled;
      if ( IsWcgEnabled < 0 )
      {
        v201 = 0;
        v111 = IsWcgEnabled;
        v112 = LODWORD(SymbolicLinkList[0]);
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          LODWORD(SymbolicLinkList[0]),
          IsWcgEnabled);
        WdLogGlobalForLineNumber = 5778;
LABEL_274:
        v113 = L"MonitorGetIsAutoColorManagementSupported() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        goto LABEL_171;
      }
      v200 = 0;
      IsHdrEnabled = MonitorIsHdrEnabled(v139, &v200);
      LODWORD(v15) = IsHdrEnabled;
      if ( IsHdrEnabled < 0 )
      {
        v200 = 0;
        v111 = IsHdrEnabled;
        v112 = LODWORD(SymbolicLinkList[0]);
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          LODWORD(SymbolicLinkList[0]),
          IsHdrEnabled);
        WdLogGlobalForLineNumber = 5792;
        goto LABEL_274;
      }
      v142 = v212[1];
      if ( v201 && !v200 )
      {
        v143 = v198;
      }
      else
      {
        v143 = v198;
        if ( !v198 && (!v197 || (v212[1] & 1) != 0) )
        {
          v48 = 0LL;
          v46 = 0LL;
          goto LABEL_285;
        }
      }
      v48 = 1LL;
      v46 = 1LL;
LABEL_285:
      if ( *a3 != 15 )
      {
        if ( *a3 != 9 )
          goto LABEL_318;
        v155 = ((v212[1] & 1) != 0 || v197) && !v227;
        if ( !v196 && !v143 )
          v8 = 0;
        a3[5] = (4 * v48) | v8 & 0xFFFFFFFB | v155 & 0xFFFFFFF9 | a3[5] & 0xFFFFFFF8;
        ColorDepthFromPickedWireFormat = GetColorDepthFromPickedWireFormat(v213);
        Value = v213.Value;
        a3[7] = ColorDepthFromPickedWireFormat;
        v158 = ConvertDmmToDisplayConfigColorEncoding(Value);
        v159 = (unsigned int)SymbolicLinkList[0];
        a3[6] = v158;
        v124 = (8 * ((unsigned __int8)DmmIsHdrAllowedOnTarget(*(struct DXGADAPTER **)a2, v159) ^ 1)) | a3[5] & 0xFFFFFFF7;
        goto LABEL_317;
      }
      if ( (v212[1] & 1) != 0 || v197 )
      {
        v144 = v227;
        if ( !v227 )
        {
          v145 = 1;
          goto LABEL_292;
        }
      }
      else
      {
        v144 = v227;
      }
      v145 = 0;
LABEL_292:
      if ( v196 || v143 )
        v146 = 2;
      else
        v146 = 0;
      a3[5] = (4 * v46) | v146 & 0xFFFFFFFB | v145 & 0xFFFFFFF9 | a3[5] & 0xFFFFFFF8;
      v147 = GetColorDepthFromPickedWireFormat(v213);
      v148 = v213.Value;
      a3[7] = v147;
      v149 = ConvertDmmToDisplayConfigColorEncoding(v148);
      v150 = (unsigned int)SymbolicLinkList[0];
      a3[6] = v149;
      IsHdrAllowedOnTarget = DmmIsHdrAllowedOnTarget(*(struct DXGADAPTER **)a2, v150);
      if ( (v142 & 1) == 0 || v144 )
        v152 = 0;
      else
        v152 = 16;
      v153 = (v201 ? 0x80 : 0) | v152 & 0xFFFFFF7F | (v200 ? 0x20 : 0) | (8 * ((unsigned __int8)IsHdrAllowedOnTarget ^ 1)) & 0x4F | a3[5] & 0x47;
      if ( !v197 || v144 )
        v154 = 0;
      else
        v154 = 64;
      a3[5] = v154 | v153 & 0xFFFFFFBF;
      if ( !v196 )
        v8 = v198 != 0;
      a3[8] = v8;
      goto LABEL_318;
    }
    goto LABEL_59;
  }
  if ( (_DWORD)v12 == -37 )
  {
    if ( (unsigned int)Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v7 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6356;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_bGetDeviceInfo", 6356LL, 0LL, 0LL, 0LL, 0LL);
      }
      v70 = a3[4];
      v71 = *(_QWORD **)a2;
      v226 = a3[4];
      v221 = 0LL;
      v72 = MonitorGetMonitorHandle(v71, (unsigned int)v70, 0LL, DxgkDisplayConfigDeviceInfo, &v221);
      LODWORD(v15) = v72;
      if ( v72 >= 0 )
      {
        v44 = v221;
        if ( !v221 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6382;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 6382LL, 0LL, 0LL, 0LL, 0LL);
        }
        v210 = 0;
        v211 = 0;
        ExternalBrightnessPolicy = MonitorGetExternalBrightnessPolicy(
                                     v44,
                                     &v210,
                                     &v211,
                                     (enum _DISPLAYCONFIG_HDR_BRIGHTNESS_MODE *)(a3 + 8),
                                     (enum _DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT *)(a3 + 7));
        LODWORD(v15) = ExternalBrightnessPolicy;
        if ( ExternalBrightnessPolicy >= 0 )
        {
          v13 = !v211;
          a3[5] = v210;
          a3[6] = !v13;
          a3[9] = (*(_DWORD *)(*(_QWORD *)a2 + 2448LL) >> 4) & 1;
          a3[10] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 216LL) + 64LL) + 3128LL) != 0LL;
          goto LABEL_338;
        }
        v73 = ExternalBrightnessPolicy;
        v70 = v226;
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          v226,
          ExternalBrightnessPolicy);
        v74 = L"MonitorGetExternalBrightnessPolicy() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 6397;
      }
      else
      {
        v73 = v72;
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)a2 + 416LL),
          *(unsigned int *)(*(_QWORD *)a2 + 412LL),
          (unsigned int)v70,
          v72);
        v74 = L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 6378;
      }
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        v74,
        *(int *)(*(_QWORD *)a2 + 416LL),
        *(unsigned int *)(*(_QWORD *)a2 + 412LL),
        v70,
        v73,
        0LL);
      goto LABEL_360;
    }
    goto LABEL_147;
  }
  if ( (_DWORD)v12 == -46 )
  {
    if ( !(unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_59;
    v66 = a3[4];
    v67 = *(_QWORD **)a2;
    *(_QWORD *)&DestinationString.Length = 0LL;
    v68 = MonitorGetMonitorHandle(
            v67,
            v66,
            0LL,
            DxgkDisplayConfigDeviceInfo,
            (struct HDXGMONITOR__ **)&DestinationString);
    v39 = v68;
    if ( v68 < 0 )
    {
      v40 = v68;
      WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), a3[4], v68);
      WdLogGlobalForLineNumber = 6566;
      goto LABEL_62;
    }
    v44 = *(struct HDXGMONITOR__ **)&DestinationString.Length;
    if ( !*(_QWORD *)&DestinationString.Length )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6571;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 6571LL, 0LL, 0LL, 0LL, 0LL);
    }
    ColorPipelineState2 = MonitorGetColorPipelineState2(v44, (struct _DISPLAYCONFIG_COLOR_PIPELINE_STATE_2 *)a3);
    v15 = (struct HDXGMONITOR__ *)ColorPipelineState2;
    if ( ColorPipelineState2 >= 0 )
      goto LABEL_338;
    WdLogSingleEntry1(2LL, ColorPipelineState2);
    v47 = L"Failed to call MonitorGetColorPipelineState2 with status 0x%I64x";
    WdLogGlobalForLineNumber = 6578;
    goto LABEL_67;
  }
  if ( (unsigned int)(v12 + 45) <= 2 )
    goto LABEL_57;
  if ( (_DWORD)v12 == -42 )
  {
    v62 = a3[4];
    v63 = *(_QWORD **)a2;
    *(_QWORD *)&DestinationString.Length = 0LL;
    v64 = MonitorGetMonitorHandle(
            v63,
            v62,
            0LL,
            DxgkDisplayConfigDeviceInfo,
            (struct HDXGMONITOR__ **)&DestinationString);
    v39 = v64;
    if ( v64 < 0 )
    {
      v40 = v64;
      WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), a3[4], v64);
      WdLogGlobalForLineNumber = 6597;
      goto LABEL_62;
    }
    v44 = *(struct HDXGMONITOR__ **)&DestinationString.Length;
    if ( !*(_QWORD *)&DestinationString.Length )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6601;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 6601LL, 0LL, 0LL, 0LL, 0LL);
    }
    ColorPipelineState = MonitorGetColorPipelineState(v44, (struct _DISPLAYCONFIG_COLOR_PIPELINE_STATE *)a3);
    v15 = (struct HDXGMONITOR__ *)ColorPipelineState;
    if ( ColorPipelineState >= 0 )
      goto LABEL_338;
    WdLogSingleEntry1(2LL, ColorPipelineState);
    v47 = L"Failed to call MonitorGetColorPipelineState with status 0x%I64x";
    WdLogGlobalForLineNumber = 6608;
    goto LABEL_67;
  }
  if ( (_DWORD)v12 != -41 )
  {
    if ( (_DWORD)v12 != -40 )
    {
      if ( (_DWORD)v12 != -38 )
        goto LABEL_59;
      if ( !(unsigned int)Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_147;
      v49 = a3[4];
      v50 = *(_QWORD **)a2;
      *(_QWORD *)&DestinationString.Length = 0LL;
      v51 = MonitorGetMonitorHandle(
              v50,
              v49,
              0LL,
              DxgkDisplayConfigDeviceInfo,
              (struct HDXGMONITOR__ **)&DestinationString);
      LODWORD(v15) = v51;
      if ( v51 >= 0 )
      {
        v44 = *(struct HDXGMONITOR__ **)&DestinationString.Length;
        if ( !*(_QWORD *)&DestinationString.Length )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6452;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 6452LL, 0LL, 0LL, 0LL, 0LL);
        }
        LODWORD(v15) = MonitorSetExternalBrightnessPolicy(v44, a3[6] != 0, a3[5] != 0);
        if ( (int)v15 >= 0 )
          TriggerExternalBrightnessPolicyChangedWnf();
        goto LABEL_338;
      }
      v52 = v51;
      WdLogSingleEntry4(
        2LL,
        *(int *)(*(_QWORD *)a2 + 416LL),
        *(unsigned int *)(*(_QWORD *)a2 + 412LL),
        (unsigned int)v49,
        v51);
      WdLogGlobalForLineNumber = 6448;
LABEL_80:
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
        *(int *)(*(_QWORD *)a2 + 416LL),
        *(unsigned int *)(*(_QWORD *)a2 + 412LL),
        v49,
        v52,
        0LL);
      goto LABEL_43;
    }
    if ( (unsigned int)Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline() )
    {
      v53 = a3[4];
      v54 = *(_QWORD **)a2;
      *(_QWORD *)&DestinationString.Length = 0LL;
      MonitorGetMonitorHandle(v54, v53, 0LL, DxgkDisplayConfigDeviceInfo, (struct HDXGMONITOR__ **)&DestinationString);
      v44 = *(struct HDXGMONITOR__ **)&DestinationString.Length;
      if ( !*(_QWORD *)&DestinationString.Length )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6491;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 6491LL, 0LL, 0LL, 0LL, 0LL);
      }
      LODWORD(v15) = MonitorSetHdrBrightnessPolicy((__int64)v44, a3[5]);
      if ( (int)v15 >= 0 )
        TriggerHdrSdrCompensationPolicyChangedWnf();
      goto LABEL_338;
    }
    goto LABEL_147;
  }
  if ( v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6509;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!i_bGetDeviceInfo", 6509LL, 0LL, 0LL, 0LL, 0LL);
  }
  v55 = a3[4];
  if ( a3[5] )
  {
    v58 = *(_QWORD **)a2;
    v220 = 0LL;
    v59 = MonitorGetMonitorHandle(v58, (unsigned int)v55, 0LL, DxgkDisplayConfigDeviceInfo, &v220);
    v15 = (struct HDXGMONITOR__ *)v59;
    if ( v59 < 0 )
    {
      WdLogSingleEntry4(2LL, *(int *)(*(_QWORD *)a2 + 416LL), *(unsigned int *)(*(_QWORD *)a2 + 412LL), v55, v59);
      v187 = *(unsigned int *)(*(_QWORD *)a2 + 412LL);
      v182 = *(int *)(*(_QWORD *)a2 + 416LL);
      WdLogGlobalForLineNumber = 6533;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
        v182,
        v187,
        v55,
        (__int64)v15,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v203);
      v60 = v205 == 0;
      goto LABEL_361;
    }
    v44 = v220;
    if ( !v220 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6537;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"MonitorHandle != NULL", 6537LL, 0LL, 0LL, 0LL, 0LL);
    }
    v61 = MonitorSetDefaultAdvancedColorParams(v44);
LABEL_332:
    LODWORD(v15) = v61;
    goto LABEL_338;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v203);
  if ( v205 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v56, (__int64)&EventProfilerExit, v57, v203);
  return 255LL;
}
