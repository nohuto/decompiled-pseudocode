/*
 * XREFs of DpiFdoStartAdapter @ 0x14023E8A8
 * Callers:
 *     DpiFdoStartNonLdaAdapter @ 0x140241228 (DpiFdoStartNonLdaAdapter.c)
 *     DpiLdaStartAdapterInChain @ 0x14024CB40 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140015210 (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     DxgkDiagCalcDuration1us @ 0x14004D4CC (DxgkDiagCalcDuration1us.c)
 *     DpiFdoIsPostDevice @ 0x14004DB50 (DpiFdoIsPostDevice.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140051C98 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400593B8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     ?LogAdapterStartTelemetry@@YAXPEAU_FDO_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADAPTER_FAILURE_REASON@@@Z @ 0x14005CD48 (-LogAdapterStartTelemetry@@YAXPEAU_FDO_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADA.c)
 *     DpiFdoInitializeMipiDsi @ 0x140061900 (DpiFdoInitializeMipiDsi.c)
 *     DpiRemoveAdapter @ 0x14007C36C (DpiRemoveAdapter.c)
 *     ?DpiFdoCleanupFeatureDatabase@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x14007C780 (-DpiFdoCleanupFeatureDatabase@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z @ 0x14007C7B0 (-DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z.c)
 *     NotifyUserMSBDAIfApplicable @ 0x14007CA24 (NotifyUserMSBDAIfApplicable.c)
 *     SendBDDDiagTelemetry @ 0x14007CC28 (SendBDDDiagTelemetry.c)
 *     DpiFdoCleanupDP @ 0x14007CE1C (DpiFdoCleanupDP.c)
 *     DpiFdoCleanupDisplayDiagnostics @ 0x14007CE58 (DpiFdoCleanupDisplayDiagnostics.c)
 *     DpiFdoCleanupMipiDsi @ 0x14007CEA0 (DpiFdoCleanupMipiDsi.c)
 *     DpiFdoInitializeDP @ 0x14007CEF0 (DpiFdoInitializeDP.c)
 *     DpiFdoInitializeDisplayDiagnostics @ 0x14007CFE8 (DpiFdoInitializeDisplayDiagnostics.c)
 *     Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_IsEnabledDeviceUsageNoInline @ 0x14007D570 (Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x14007D618 (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_LegacyHPDFiltering__private_IsEnabledPreCheck @ 0x14007D66C (Feature_LegacyHPDFiltering__private_IsEnabledPreCheck.c)
 *     Feature_SupportWaitWakeForPowerRuntimeD3__private_IsEnabledPreCheck @ 0x14007D728 (Feature_SupportWaitWakeForPowerRuntimeD3__private_IsEnabledPreCheck.c)
 *     DpiHybridInternalPanelOverride @ 0x14007DE24 (DpiHybridInternalPanelOverride.c)
 *     DpiMdmProcessAdapterBrightness @ 0x140088794 (DpiMdmProcessAdapterBrightness.c)
 *     DpiMdmProcessStartAdapter @ 0x140088D14 (DpiMdmProcessStartAdapter.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14009F020 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkAcquireAdapterFdoReference @ 0x140187C30 (DxgkAcquireAdapterFdoReference.c)
 *     DpiQueryMiniportInterface @ 0x140188CC4 (DpiQueryMiniportInterface.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1401939AC (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkReleaseAdapterFdoReference @ 0x14019E2DC (DxgkReleaseAdapterFdoReference.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1401A8714 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401A8800 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401A8A48 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DxgkAcquireGdiViewIds @ 0x1401F617C (DxgkAcquireGdiViewIds.c)
 *     DxgkCommitGdiViewIds @ 0x1401F6354 (DxgkCommitGdiViewIds.c)
 *     DxgkReleaseGdiViewId @ 0x1401F67DC (DxgkReleaseGdiViewId.c)
 *     DxgkRetrieveStringFromRegistry @ 0x140231260 (DxgkRetrieveStringFromRegistry.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1402362A4 (DpiFdoCleanupGpuVirtualization.c)
 *     DpiFdoDestroyRelatedObjects @ 0x140236C10 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x140236CB8 (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x14023D608 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiFdoOpenDeviceFileObjectIfNeeded @ 0x14023D7C4 (DpiFdoOpenDeviceFileObjectIfNeeded.c)
 *     DpiFdoRemoveChildDescriptors @ 0x14023E500 (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402419C8 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x140244730 (DpiMiracastDdiMiracastQueryCaps.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x140246CEC (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFeatureStartDevice @ 0x1402470C8 (DpiFeatureStartDevice.c)
 *     DpiKsrGetSavedAdapterState @ 0x14024A074 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrIsSoftBoot @ 0x14024A150 (DpiKsrIsSoftBoot.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x14024A310 (DpiKsrRestoreAdapterDriverState.c)
 *     DpiDxgkDdiStopDevice @ 0x14024DB58 (DpiDxgkDdiStopDevice.c)
 *     ?MonitorInitializeAdapterDone@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140267A74 (-MonitorInitializeAdapterDone@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkInvalidateQdcCache @ 0x14031B098 (DxgkInvalidateQdcCache.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x140375ABC (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiOpenPnpRegistryKey @ 0x1403844B0 (DpiOpenPnpRegistryKey.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403D0FD0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403DA520 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     DpiGetDevicePropertyString @ 0x1403F11AC (DpiGetDevicePropertyString.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADAPTER_FAILURE_REASON@@@Z @ 0x1403F15B4 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DpiFdoConnectInterrupt @ 0x140402840 (DpiFdoConnectInterrupt.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x140404394 (DpiFdoInitializeGpuVirtualization.c)
 *     DpiFdoEnumChildDevices @ 0x14040701C (DpiFdoEnumChildDevices.c)
 *     DpiFdoCreateRelatedObjects @ 0x14040B520 (DpiFdoCreateRelatedObjects.c)
 *     DpiDxgkDdiStartDevice @ 0x14040BCF4 (DpiDxgkDdiStartDevice.c)
 *     DxgkAddAdapter @ 0x14040C750 (DxgkAddAdapter.c)
 */

__int64 __fastcall DpiFdoStartAdapter(
        struct _DEVICE_OBJECT *a1,
        char a2,
        void *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6,
        _QWORD *a7)
{
  char v8; // bl
  __int64 v9; // rsi
  int v10; // edi
  char *DeviceExtension; // r15
  __int64 v12; // r12
  int MiniportInterface; // r14d
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 (__fastcall *v19)(_QWORD, _QWORD); // rax
  int v20; // eax
  __int64 v21; // r14
  int v22; // eax
  char v23; // dl
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // eax
  bool v30; // cf
  bool v31; // zf
  NTSTATUS v32; // eax
  NTSTATUS LocallyUniqueId; // eax
  __int64 v34; // r9
  int v35; // eax
  int SavedAdapterState; // eax
  int v37; // eax
  int started; // eax
  _DWORD *Pool2; // rbx
  unsigned int v40; // ecx
  int v41; // eax
  int v42; // edx
  __int128 v43; // xmm0
  int DevicePropertyString; // eax
  unsigned int v45; // eax
  int v46; // eax
  _BYTE *v47; // rbx
  int v48; // eax
  struct _LUID *v49; // rdx
  __int64 v50; // r9
  unsigned int v51; // eax
  __int64 v52; // rax
  int v53; // eax
  char v54; // cl
  char v55; // dl
  char v56; // dl
  _BYTE *v57; // rcx
  char v58; // cl
  _QWORD *v59; // rcx
  __int64 v60; // rcx
  unsigned __int8 v61; // r8
  __int64 v62; // r8
  __int64 v63; // rdx
  int v64; // eax
  int RelatedObjects; // eax
  __int64 v66; // rdx
  __int64 v67; // rdx
  int Caps; // eax
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  int v75; // eax
  __int64 v76; // rax
  PIO_WORKITEM WorkItem; // rax
  NTSTATUS v78; // eax
  int v79; // eax
  char v80; // bl
  int v81; // eax
  int v82; // eax
  BOOLEAN v83; // dl
  NTSTATUS v84; // eax
  int v85; // eax
  BOOLEAN v86; // dl
  NTSTATUS v87; // eax
  int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // rbx
  __int64 v91; // r9
  bool IsPostDevice; // al
  __int64 v93; // rcx
  int v94; // edx
  unsigned int v95; // eax
  __int64 v96; // r8
  unsigned int v97; // ebx
  int v98; // r9d
  struct _DEVICE_OBJECT *v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // r8
  int v102; // eax
  int v103; // edi
  void (__fastcall *v104)(_QWORD); // rax
  __int64 v105; // rcx
  char v106; // al
  __int64 DiagnosticInfoArgs; // rax
  __int64 v108; // rdi
  __int64 v109; // rdi
  __int64 v110; // rcx
  __int64 (__fastcall *v111)(__int64, _QWORD); // rax
  int v112; // eax
  __int64 (__fastcall *v113)(__int64, __int128 *); // rax
  __int64 v114; // rcx
  int v115; // eax
  _DWORD *v116; // rax
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // r9
  _DWORD *v120; // r12
  __int64 v121; // rax
  int v122; // eax
  unsigned __int64 v123; // rdx
  __int64 v124; // rax
  _DWORD *v125; // rax
  _DWORD *v126; // rbx
  int v127; // eax
  unsigned __int64 v129; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v130; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v131; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v132; // [rsp+28h] [rbp-D8h]
  char v133; // [rsp+50h] [rbp-B0h]
  char v134; // [rsp+51h] [rbp-AFh]
  char v135; // [rsp+52h] [rbp-AEh]
  bool v136; // [rsp+52h] [rbp-AEh]
  char v137; // [rsp+53h] [rbp-ADh]
  char v138; // [rsp+54h] [rbp-ACh]
  char v139; // [rsp+55h] [rbp-ABh]
  unsigned int v142; // [rsp+58h] [rbp-A8h]
  int v143; // [rsp+58h] [rbp-A8h]
  PVOID v144; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  int v146; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v147[3]; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  __int64 v149; // [rsp+88h] [rbp-78h] BYREF
  int v150; // [rsp+90h] [rbp-70h] BYREF
  __int64 v151; // [rsp+98h] [rbp-68h]
  char v152; // [rsp+A0h] [rbp-60h]
  __int64 v153; // [rsp+A8h] [rbp-58h]
  __int64 v154; // [rsp+B0h] [rbp-50h] BYREF
  void *v155; // [rsp+B8h] [rbp-48h]
  _QWORD *v156; // [rsp+C0h] [rbp-40h]
  char *v157; // [rsp+C8h] [rbp-38h]
  __int64 v158; // [rsp+D0h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v160[10]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v161; // [rsp+140h] [rbp+40h] BYREF
  __int64 v162; // [rsp+150h] [rbp+50h]
  _OWORD v163[2]; // [rsp+158h] [rbp+58h] BYREF
  __int128 v164; // [rsp+178h] [rbp+78h] BYREF
  __int64 v165; // [rsp+188h] [rbp+88h]
  _OWORD v166[2]; // [rsp+190h] [rbp+90h] BYREF

  v153 = a6;
  v8 = a2;
  v156 = a7;
  v9 = 0LL;
  memset(v163, 0, 28);
  Handle = 0LL;
  DestinationString = 0LL;
  v10 = 0;
  v155 = a3;
  DeviceExtension = (char *)a1->DeviceExtension;
  v135 = 0;
  v137 = 0;
  v31 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  v12 = *((_QWORD *)DeviceExtension + 5);
  v158 = v12;
  v134 = 0;
  v133 = 0;
  v138 = 0;
  v139 = 0;
  v144 = 0LL;
  v149 = MEMORY[0xFFFFF78000000320];
  v157 = DeviceExtension;
  if ( v31 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v9 = (__int64)DeviceExtension;
    if ( *(_BYTE *)(v12 + 134) )
    {
      MiniportInterface = DpiQueryMiniportInterface(
                            *((_QWORD *)DeviceExtension + 3),
                            (__int64)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
                            112,
                            3,
                            v129,
                            (__int64)(DeviceExtension + 1000));
      if ( MiniportInterface >= 0 )
      {
        if ( v153 )
        {
          v19 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)DeviceExtension + 131);
          if ( v19 )
          {
            v20 = v19(*((_QWORD *)DeviceExtension + 126), a5);
            LODWORD(v21) = v20;
            if ( v20 < 0 )
            {
              WdLogSingleEntry2(2LL, *((_QWORD *)DeviceExtension + 131), v20);
              WdLogGlobalForLineNumber = 14719;
              v10 = 25;
              goto LABEL_239;
            }
            goto LABEL_7;
          }
        }
      }
      else
      {
        memset(DeviceExtension + 1000, 0, 0x70uLL);
      }
      if ( MiniportInterface >= 0 )
      {
LABEL_7:
        memset(v160, 0, sizeof(v160));
        if ( (int)DpiQueryMiniportInterface(
                    *((_QWORD *)DeviceExtension + 3),
                    (__int64)&GUID_DEVINTERFACE_DOD_EXTENDED,
                    80,
                    1,
                    v130,
                    (__int64)v160) >= 0
          && LODWORD(v160[0]) == 65616 )
        {
          if ( v160[4] )
          {
            v14 = v160[5];
            if ( v160[5] )
            {
              v15 = v160[6];
              if ( v160[6] )
              {
                v16 = v160[7];
                if ( v160[7] )
                {
                  v17 = v160[8];
                  if ( v160[8] )
                  {
                    v18 = v160[9];
                    if ( v160[9] )
                    {
                      *(_QWORD *)(v12 + 1008) = v160[4];
                      *(_QWORD *)(v12 + 1088) = v14;
                      *(_QWORD *)(v12 + 1128) = v15;
                      *(_QWORD *)(v12 + 1136) = v16;
                      *(_QWORD *)(v12 + 1312) = v17;
                      *(_QWORD *)(v12 + 1096) = v18;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      memset(DeviceExtension + 1000, 0, 0x70uLL);
    }
    *((_DWORD *)DeviceExtension + 1030) = 0;
    v8 = a2;
  }
  v22 = DpiFdoConnectInterrupt(a1);
  LODWORD(v21) = v22;
  if ( v22 == -1073741275 )
  {
    WdLogSingleEntry1(4LL, a1);
    WdLogGlobalForLineNumber = 14793;
  }
  else
  {
    if ( v22 < 0 )
    {
      WdLogSingleEntry1(2LL, v22);
      WdLogGlobalForLineNumber = 14806;
      v10 = 10;
      goto LABEL_239;
    }
    v135 = 1;
  }
  if ( DpiFdoIsPostDevice((__int64)a1) )
  {
    if ( DeviceExtension[1155] == v23 && v8 && byte_14015DD55 && !DpiFdoIsCompatibleWithHighResolutionBoot(v24) )
    {
      v150 = -1;
      v151 = 0LL;
      if ( (qword_14015B4C0 & 2) != 0 )
      {
        v152 = 1;
        v150 = 8006;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerEnter, v26, 8006);
      }
      else
      {
        v152 = 0;
      }
      DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v150, 8006);
      memset(v166, 0, sizeof(v166));
      LODWORD(v166[0]) = 18;
      x86BiosCall(16LL, v166);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v150);
      if ( v152 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v150);
    }
    if ( v9 )
    {
      v29 = *(_DWORD *)(v12 + 28);
      if ( byte_14015DD55 )
      {
        v30 = v29 < 0x300E;
        v31 = v29 == 12302;
      }
      else
      {
        v30 = v29 < 0x2005;
        v31 = v29 == 8197;
      }
      *(_BYTE *)(v9 + 4040) = *(_BYTE *)(v9 + 4040) & 0xFB | (4 * (!v30 && !v31));
    }
  }
  for ( *(_QWORD *)&v147[1] = 0LL; ; *(_QWORD *)&v147[1] = 0LL )
  {
    v32 = ExUuidCreate((UUID *)(DeviceExtension + 2680));
    LODWORD(v21) = v32;
    if ( v32 >= 0 )
      break;
    if ( v32 != -1073741267 )
    {
      WdLogSingleEntry1(2LL, v32);
      WdLogGlobalForLineNumber = 14880;
      v10 = 8;
      goto LABEL_239;
    }
    *(_QWORD *)&v147[1] = -10000LL;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&v147[1]);
  }
  LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)DeviceExtension + 337);
  LODWORD(v21) = LocallyUniqueId;
  if ( LocallyUniqueId < 0 )
  {
    WdLogSingleEntry1(2LL, LocallyUniqueId);
    WdLogGlobalForLineNumber = 14906;
    v10 = 7;
    goto LABEL_239;
  }
  if ( v9 )
  {
    if ( (unsigned __int8)DpiKsrIsSoftBoot() )
    {
      v35 = DpiKsrRestoreAdapterDriverState((struct _FDO_CONTEXT *)v9);
      if ( v35 >= 0 )
      {
        v146 = 0;
        v154 = 0LL;
        SavedAdapterState = DpiKsrGetSavedAdapterState(a1, &v146, &v154);
        if ( SavedAdapterState < 0 )
        {
          WdLogSingleEntry1(2LL, SavedAdapterState);
          WdLogGlobalForLineNumber = 14941;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v35);
        WdLogGlobalForLineNumber = 14927;
      }
    }
    v37 = DpiFdoSetAdapterLuid((struct _FDO_CONTEXT *)v9);
    if ( v37 < 0 )
    {
      WdLogSingleEntry1(2LL, v37);
      WdLogGlobalForLineNumber = 14955;
    }
    started = DpiFeatureStartDevice(a1);
    LODWORD(v21) = started;
    if ( started < 0 )
    {
      WdLogSingleEntry1(2LL, started);
      WdLogGlobalForLineNumber = 14967;
      v10 = 12;
      goto LABEL_239;
    }
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 576LL, 1953656900LL, v34);
  if ( !Pool2 )
  {
    LODWORD(v21) = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogGlobalForLineNumber = 14984;
    v10 = 9;
    goto LABEL_239;
  }
  v40 = *(_DWORD *)(v12 + 28);
  Pool2[1] = 0;
  if ( v40 >= 0xD001 )
  {
    *Pool2 = 576;
LABEL_67:
    v41 = *((_DWORD *)DeviceExtension + 687);
    goto LABEL_86;
  }
  v41 = 40971;
  if ( v40 > 0xA00B )
  {
    *Pool2 = 480;
    goto LABEL_67;
  }
  v42 = 36870;
  if ( v40 > 0x9006 )
  {
    *Pool2 = 464;
    goto LABEL_86;
  }
  v41 = 32769;
  if ( v40 > 0x8001 )
  {
    *Pool2 = 456;
LABEL_84:
    v41 = v42;
    goto LABEL_86;
  }
  v42 = 28682;
  if ( v40 > 0x700A )
  {
    *Pool2 = 368;
    goto LABEL_86;
  }
  v41 = 24579;
  if ( v40 > 0x6003 )
  {
    *Pool2 = 360;
    goto LABEL_84;
  }
  v42 = 20515;
  if ( v40 > 0x5023 )
  {
    *Pool2 = 328;
    goto LABEL_86;
  }
  v41 = 16387;
  if ( v40 > 0x4003 )
  {
    *Pool2 = 312;
    goto LABEL_84;
  }
  v42 = 12302;
  if ( v40 > 0x300E )
  {
    *Pool2 = 264;
    goto LABEL_86;
  }
  v41 = 8197;
  if ( v40 > 0x2005 )
  {
    *Pool2 = 256;
    goto LABEL_84;
  }
  *Pool2 = 184;
LABEL_86:
  Pool2[1] = v41;
  *((_QWORD *)Pool2 + 2) = DpEvalAcpiMethod;
  *((_QWORD *)Pool2 + 3) = &DpGetDeviceInformation;
  *((_QWORD *)Pool2 + 4) = DpIndicateChildStatus;
  *((_QWORD *)Pool2 + 5) = &DpMapMemory;
  *((_QWORD *)Pool2 + 6) = DpQueueDpc;
  *((_QWORD *)Pool2 + 7) = DpQueryServices;
  *((_QWORD *)Pool2 + 8) = DpReadDeviceSpace;
  *((_QWORD *)Pool2 + 9) = DpSynchronizeExecution;
  *((_QWORD *)Pool2 + 10) = DpUnmapMemory;
  *((_QWORD *)Pool2 + 11) = DpWriteDeviceSpace;
  *((_QWORD *)Pool2 + 12) = DpIsDevicePresent;
  *((_QWORD *)Pool2 + 13) = DxgGetHandleDataCB;
  *((_QWORD *)Pool2 + 14) = DxgGetHandleParentCB;
  *((_QWORD *)Pool2 + 15) = DxgEnumHandleChildrenCB;
  *((_QWORD *)Pool2 + 16) = DxgNotifyInterruptCB;
  *((_QWORD *)Pool2 + 17) = DxgNotifyDpcCB;
  *((_QWORD *)Pool2 + 18) = DxgMiniportQueryVidPnInterfaceCB;
  *((_QWORD *)Pool2 + 19) = DxgMiniportQueryMonitorInterfaceCB;
  *((_QWORD *)Pool2 + 20) = DxgGetCaptureAddressCB;
  *((_QWORD *)Pool2 + 21) = DxgLogEtwEventCb;
  *((_QWORD *)Pool2 + 22) = DpExcludeAdapterAccess;
  *((_QWORD *)Pool2 + 23) = DxgCreateContextAllocationCB;
  *((_QWORD *)Pool2 + 24) = DxgDestroyContextAllocationCB;
  *((_QWORD *)Pool2 + 25) = &DxgSetPowerComponentActiveCB;
  *((_QWORD *)Pool2 + 26) = DxgSetPowerComponentIdleCB;
  *((_QWORD *)Pool2 + 28) = DxgkPowerRuntimeControlRequestCB;
  *((_QWORD *)Pool2 + 29) = DxgkSetPowerComponentLatencyCB;
  *((_QWORD *)Pool2 + 30) = DxgkSetPowerComponentResidencyCB;
  *((_QWORD *)Pool2 + 31) = DxgkCompleteFStateTransitionCB;
  *((_QWORD *)Pool2 + 32) = DxgkCompletePStateTransitionCB;
  *((_QWORD *)Pool2 + 27) = DpAcquirePostDisplayOwnership;
  *((_QWORD *)Pool2 + 33) = DxgkMapContextAllocationCB;
  *((_QWORD *)Pool2 + 34) = DxgkUpdateContextAllocationCB;
  *((_QWORD *)Pool2 + 35) = DxgkReserveGpuVirtualAddressRangeCB;
  *((_QWORD *)Pool2 + 36) = DxgkAcquireHandleDataCB;
  *((_QWORD *)Pool2 + 37) = DxgkReleaseHandleDataCB;
  *((_QWORD *)Pool2 + 38) = DxgkHardwareContentProtectionTeardownCB;
  *((_QWORD *)Pool2 + 39) = DxgkMultiPlaneOverlayDisabledCB;
  *((_QWORD *)Pool2 + 40) = DxgkMitigatedRangeUpdateCB;
  *((_QWORD *)Pool2 + 1) = a1;
  *((_QWORD *)Pool2 + 42) = DpIndicateConnectorChange;
  LODWORD(v163[0]) = 32;
  v43 = *(_OWORD *)(DeviceExtension + 2680);
  *((_QWORD *)Pool2 + 43) = DxgkUnblockUEFIFrameBufferRangesCB;
  *((_QWORD *)Pool2 + 44) = DpAcquirePostDisplayOwnership2;
  *((_QWORD *)Pool2 + 45) = DxgkSetProtectedSessionStatusCB;
  *((_QWORD *)Pool2 + 56) = DxgkCbReportDiagnostic;
  *((_QWORD *)Pool2 + 41) = DxgkInvalidateHwContextCB;
  *((_QWORD *)Pool2 + 57) = DxgkSignalEventCB;
  *((_QWORD *)Pool2 + 58) = DpIsFeatureEnabled;
  *((_QWORD *)Pool2 + 59) = DpSaveMemoryForHotUpdateCB;
  *((_QWORD *)Pool2 + 60) = DxgkNotifyCursorSupportChangeCB;
  *((_QWORD *)Pool2 + 61) = DpQueryFeatureSupport;
  *((_QWORD *)Pool2 + 50) = DxgkPinFrameBufferForSaveCB;
  *((_QWORD *)Pool2 + 51) = DxgkUnpinFrameBufferForSaveCB;
  *((_QWORD *)Pool2 + 52) = DxgkMapFrameBufferPointerCB;
  *((_QWORD *)Pool2 + 53) = DxgkUnmapFrameBufferPointerCB;
  *((_QWORD *)Pool2 + 46) = DxgkAllocateContiguousMemoryCB;
  *((_QWORD *)Pool2 + 47) = DxgkFreePagesFromMdlCB;
  *((_QWORD *)Pool2 + 48) = DxgkAllocatePagesForMdlCB;
  *((_QWORD *)Pool2 + 49) = DxgkFreePagesFromMdlCB;
  *((_QWORD *)Pool2 + 54) = DxgkMapMdlToIoMmuCB;
  *((_QWORD *)Pool2 + 55) = DxgkUnmapMdlFromIoMmuCB;
  *((_QWORD *)Pool2 + 62) = DxgkCreatePhysicalMemoryObjectCB;
  *((_QWORD *)Pool2 + 63) = DxgkDestroyPhysicalMemoryObjectCB;
  *((_QWORD *)Pool2 + 64) = DxgkMapPhysicalMemoryCB;
  *((_QWORD *)Pool2 + 65) = DxgkUnmapPhysicalMemoryCB;
  *((_QWORD *)Pool2 + 66) = DxgkAllocateAdlCB;
  *((_QWORD *)Pool2 + 67) = DxgkFreeAdlCB;
  *((_QWORD *)Pool2 + 68) = DxgkOpenPhysicalMemoryObjectCB;
  *((_QWORD *)Pool2 + 69) = DxgkClosePhysicalMemoryObjectCB;
  *((_QWORD *)Pool2 + 70) = DxgkPinFrameBufferForSave2CB;
  *((_QWORD *)Pool2 + 71) = DxgkDisconnectDoorbellCB;
  *(_OWORD *)((char *)v163 + 4) = v43;
  *(_QWORD *)((char *)&v163[1] + 4) = *((_QWORD *)DeviceExtension + 337);
  qword_14015E158 = (__int64)KeGetCurrentThread();
  qword_14015E160 = (__int64)a1;
  v21 = (int)DpiDxgkDdiStartDevice(
               v12,
               *((_QWORD *)DeviceExtension + 6),
               (unsigned int)v163,
               (_DWORD)Pool2,
               (__int64)(DeviceExtension + 2708),
               (__int64)(DeviceExtension + 2704));
  ExFreePoolWithTag(Pool2, 0x74727044u);
  qword_14015E160 = 0LL;
  qword_14015E158 = 0LL;
  if ( (int)v21 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v12 + 152), v21);
    WdLogGlobalForLineNumber = 15239;
    if ( (_DWORD)v21 == -1071775735 )
    {
      v147[0] = 0;
      P = 0LL;
      if ( !DpiFdoIsPostDevice((__int64)a1) )
      {
        v10 = 14;
        goto LABEL_239;
      }
      DevicePropertyString = DpiGetDevicePropertyString(
                               *((PDEVICE_OBJECT *)DeviceExtension + 19),
                               DevicePropertyHardwareID,
                               (__int64)v147);
      if ( DevicePropertyString < 0 )
      {
        WdLogSingleEntry1(2LL, DevicePropertyString);
        WdLogGlobalForLineNumber = 15280;
        v10 = 13;
        goto LABEL_239;
      }
      WdDiagNotifyUser(8LL, 5LL, 1LL, &P);
      if ( P )
      {
        ExFreePoolWithTag(P, 0);
        P = 0LL;
      }
    }
    else if ( (_DWORD)v21 == -1071774944 && DpiFdoIsPostDevice((__int64)a1) )
    {
      WdLogSingleEntry5(0LL, 275LL, 26LL, v12, (unsigned __int8)byte_14015DD55, 0LL);
      WdLogGlobalForLineNumber = 15304;
    }
    v10 = 1;
    goto LABEL_239;
  }
  if ( DpiFdoIsMsBddAnchoredDevice((__int64)a1) )
  {
    xmmword_14015E0C0 = 0LL;
    DWORD2(xmmword_14015E0C0) = -1;
    xmmword_14015E0B0 = 0LL;
    memset(&xmmword_14015E0D0, 0, 0x80uLL);
    dword_14015E150 = 3;
  }
  if ( !*((_DWORD *)DeviceExtension + 678) )
  {
    v45 = *((_DWORD *)DeviceExtension + 677);
    if ( v45 > 1 )
    {
      WdLogSingleEntry1(3LL, v45);
      WdLogGlobalForLineNumber = 15332;
      *((_DWORD *)DeviceExtension + 677) = 1;
    }
  }
  v137 = 1;
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 2704) )
    {
      v46 = DpiFdoEnumChildDevices(a1);
      LODWORD(v21) = v46;
      if ( v46 < 0 )
      {
        WdLogSingleEntry1(2LL, v46);
        WdLogGlobalForLineNumber = 15362;
        v10 = 15;
        goto LABEL_239;
      }
    }
    v47 = (_BYTE *)(v9 + 4040);
    v48 = DxgkAddAdapter(a1, v155, (struct _DXGK_ADAPTER_CAPS *)(v9 + 4040));
    LODWORD(v21) = v48;
    if ( v48 < 0 )
    {
      WdLogSingleEntry1(2LL, v48);
      WdLogGlobalForLineNumber = 15384;
      v10 = 3;
      goto LABEL_239;
    }
    DxgkAcquireAdapterFdoReference(*(_QWORD *)(v9 + 4032));
    v134 = 1;
    *(_BYTE *)(v9 + 2847) = DXGADAPTER::IsAdapterSessionized(
                              *(DXGADAPTER **)(v9 + 4032),
                              v49,
                              0LL,
                              (unsigned __int64 *)(v9 + 5888));
    v51 = *(_DWORD *)(v9 + 2708);
    if ( v51 )
    {
      v52 = ExAllocatePool2(256LL, 4LL * v51, 1953656900LL, v50);
      v144 = (PVOID)v52;
      if ( !v52 )
      {
        LODWORD(v21) = -1073741670;
        WdLogSingleEntry1(6LL, -1073741670LL);
        WdLogGlobalForLineNumber = 15424;
        v10 = 16;
        goto LABEL_239;
      }
      v53 = DxgkAcquireGdiViewIds(*(_BYTE *)(v9 + 2847), *(_QWORD *)(v9 + 5888), (_DWORD *)(v9 + 2708), v52);
      LODWORD(v21) = v53;
      if ( v53 < 0 )
      {
        WdLogSingleEntry1(2LL, v53);
        WdLogGlobalForLineNumber = 15438;
        v10 = 17;
        ExFreePoolWithTag(v144, 0);
        v144 = 0LL;
        goto LABEL_239;
      }
    }
    v54 = *(_BYTE *)(v9 + 4041) ^ (*(_BYTE *)(v9 + 4041) ^ (2 * *(_BYTE *)(v9 + 4041))) & 8;
    *(_BYTE *)(v9 + 4041) = v54;
    if ( (v54 & 4) != 0 && (!*(_QWORD *)(v12 + 1128) || !*(_QWORD *)(v12 + 1136)) )
    {
      WdLogSingleEntry1(2LL, (unsigned int)v21);
      *(_BYTE *)(v9 + 4041) &= ~8u;
      v54 = *(_BYTE *)(v9 + 4041);
      WdLogGlobalForLineNumber = 15460;
    }
    v55 = v54;
    if ( (*v47 & 1) != 0 && *(int *)(v9 + 4048) >= 0x2000 && !*(_BYTE *)(v9 + 1158) && (v54 & 8) == 0 )
    {
      Feature_LegacyHPDFiltering__private_IsEnabledPreCheck();
      v55 = *(_BYTE *)(v9 + 4041) | 0x10;
      *(_BYTE *)(v9 + 4041) = v55;
    }
    if ( (v55 & 8) == 0 && !*(_QWORD *)(v12 + 208) )
    {
      LODWORD(v21) = -1073741735;
      WdLogSingleEntry1(2LL, -1073741735LL);
      WdLogGlobalForLineNumber = 15493;
      v10 = 18;
      goto LABEL_239;
    }
    if ( *(_BYTE *)(v9 + 2721) && (v55 & 0x20) == 0 )
    {
      LODWORD(v21) = -1073741735;
      WdLogSingleEntry1(2LL, -1073741735LL);
      WdLogGlobalForLineNumber = 15510;
      v10 = 26;
      goto LABEL_239;
    }
    if ( *(int *)(v9 + 4048) >= 12800 && (*v47 & 1) != 0 && !*(_QWORD *)(v12 + 1008) )
    {
      LODWORD(v21) = -1073741735;
      WdLogSingleEntry1(2LL, -1073741735LL);
      WdLogGlobalForLineNumber = 15528;
      v10 = 19;
      goto LABEL_239;
    }
    if ( qword_14015DD70 )
    {
      v57 = (_BYTE *)(v9 + 2716);
      if ( *(_BYTE *)(v9 + 2716) && (v55 & 1) != 0 && !(_BYTE)word_14015DD5C )
        qword_14015DD70 = (__int64)a1;
    }
    else
    {
      if ( (v55 & 1) != 0
        || DpiHybridInternalPanelOverride()
        && (*v47 & 0x20) != 0
        && DpiFdoIsPostDevice((__int64)a1)
        && (v56 & 0x40) == 0 )
      {
        qword_14015DD70 = (__int64)a1;
      }
      v57 = (_BYTE *)(v9 + 2716);
    }
    if ( (*v47 & 0x40) != 0 )
    {
      if ( qword_14015DD68 && (struct _DEVICE_OBJECT *)qword_14015DD68 != a1 )
      {
        if ( !*v57 || (_BYTE)word_14015DD5C )
        {
          *v47 &= ~0x40u;
          goto LABEL_153;
        }
        *(_BYTE *)(*(_QWORD *)(qword_14015DD68 + 64) + 4040LL) &= ~0x40u;
      }
      qword_14015DD68 = (__int64)a1;
      HIBYTE(word_14015DD5C) = (*(_BYTE *)(v9 + 4041) & 2) != 0;
    }
LABEL_153:
    if ( !qword_14015DD70 || !qword_14015DD68 || (_BYTE)word_14015DD5C )
      goto LABEL_159;
    v58 = *(_BYTE *)(*(_QWORD *)(qword_14015DD70 + 64) + 2716LL);
    if ( *(_BYTE *)(*(_QWORD *)(qword_14015DD68 + 64) + 2716LL) )
    {
      if ( !v58 )
        goto LABEL_158;
    }
    else if ( v58 )
    {
LABEL_158:
      LOBYTE(word_14015DD5C) = 0;
LABEL_159:
      v59 = v156;
      if ( v156 )
      {
        *v156 = *(_QWORD *)v47;
        *((_DWORD *)v59 + 2) = *(_DWORD *)(v9 + 4048);
      }
      if ( DpiFdoIsPostDevice((__int64)a1) && (v61 & *v47) == 0 && !DeviceExtension[2719] )
      {
        LODWORD(v21) = -1071775740;
        WdLogSingleEntry1(2LL, -1071775740LL);
        WdLogGlobalForLineNumber = 15664;
        v10 = 20;
        goto LABEL_239;
      }
      DpiMdmProcessStartAdapter(v60);
      if ( *(_DWORD *)(v9 + 3616) )
      {
        v62 = *(_QWORD *)(v9 + 48);
        v63 = *(_QWORD *)(v9 + 40);
        v164 = 0LL;
        LODWORD(v164) = 67108861;
        v165 = 0LL;
        v64 = DpiDxgkDdiDisplayDetectControl(v9, v63, v62, &v164, v131, v132);
        LODWORD(v21) = v64;
        if ( v64 < 0 )
        {
          WdLogSingleEntry2(2LL, *(_QWORD *)(v12 + 1128), v64);
          WdLogGlobalForLineNumber = 15697;
          v10 = 4;
          goto LABEL_239;
        }
      }
      DpiFdoInitializeMipiDsi((__int64)a1);
      RelatedObjects = DpiFdoCreateRelatedObjects(a1, *(unsigned int *)(v9 + 2708), v144, a4);
      LODWORD(v21) = RelatedObjects;
      if ( RelatedObjects < 0 )
      {
        WdLogSingleEntry1(2LL, RelatedObjects);
        WdLogGlobalForLineNumber = 15723;
        v10 = 11;
        goto LABEL_239;
      }
      if ( (*v47 & 1) != 0 )
      {
        LOBYTE(v66) = 1;
        if ( (int)DpiAcquireCoreSyncAccessSafe(a1, v66) >= 0 )
        {
          MonitorInitializeAdapterDone(*(DXGADAPTER **)(v9 + 4032), a4);
          LOBYTE(v67) = 1;
          DpiReleaseCoreSyncAccessSafe(a1, v67);
        }
      }
      v133 = 1;
      if ( *(_DWORD *)(v9 + 3360) != -1 )
      {
        Caps = DpiMiracastDdiMiracastQueryCaps(v9, v66, v9 + 3352);
        if ( Caps < 0 )
        {
          WdLogSingleEntry1(4LL, Caps);
          *(_DWORD *)(v9 + 3360) = -1;
          WdLogGlobalForLineNumber = 15763;
          memset((void *)(v9 + 3288), 0, 0x40uLL);
        }
      }
      v69 = DpiOpenPnpRegistryKey(a1, 2LL, 131097LL, &Handle);
      if ( v69 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MiracastDriverName");
        if ( DxgkRetrieveStringFromRegistry(Handle, &DestinationString, v9 + 4992) < 0 )
        {
          WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
          WdLogGlobalForLineNumber = 15809;
        }
        ZwClose(Handle);
      }
      else
      {
        WdLogSingleEntry1(4LL, v69);
        WdLogGlobalForLineNumber = 15784;
      }
      v72 = *(_QWORD *)(v9 + 5008);
      if ( v72 )
      {
        if ( *(_QWORD *)(v72 + 48) && *(_BYTE *)v72 )
        {
          v31 = bTracingEnabled == 0;
          *(_BYTE *)v72 = 0;
          if ( !v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
          {
            LODWORD(v131) = *(unsigned __int8 *)(*(_QWORD *)(v9 + 5008) + 2LL);
            McTemplateK0pt_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventDpiFdoThermalActiveCooling,
              v71,
              a1);
          }
          v73 = *(_QWORD *)(v9 + 5008);
          LOBYTE(v70) = *(_BYTE *)(v73 + 2);
          (*(void (__fastcall **)(_QWORD, __int64))(v73 + 48))(*(_QWORD *)(v73 + 16), v70);
        }
        v74 = *(_QWORD *)(v9 + 5008);
        if ( *(_QWORD *)(v74 + 56) && *(_BYTE *)(v74 + 1) )
        {
          v31 = bTracingEnabled == 0;
          *(_BYTE *)(v74 + 1) = 0;
          if ( !v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
          {
            LODWORD(v131) = *(_DWORD *)(*(_QWORD *)(v9 + 5008) + 4LL);
            McTemplateK0pt_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventDpiFdoThermalPassiveCooling,
              v71,
              a1);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v9 + 5008) + 56LL))(
            *(_QWORD *)(*(_QWORD *)(v9 + 5008) + 16LL),
            *(unsigned int *)(*(_QWORD *)(v9 + 5008) + 4LL));
        }
      }
      v75 = DpiFdoInitializeGpuVirtualization(a1);
      LODWORD(v21) = v75;
      if ( v75 < 0 )
      {
        WdLogSingleEntry1(2LL, v75);
        WdLogGlobalForLineNumber = 15864;
        v10 = 5;
        goto LABEL_239;
      }
      if ( *(_BYTE *)(v9 + 482) )
      {
        Feature_SupportWaitWakeForPowerRuntimeD3__private_IsEnabledPreCheck();
        if ( *(_DWORD *)(*(_QWORD *)(v9 + 40) + 28LL) >= 0x11007u
          && (*(_DWORD *)(v9 + 1324) & 0x2000) != 0
          && *(int *)(v9 + 1368) >= 4
          && (int)DpiQueryMiniportInterface((__int64)a1, (__int64)&GUID_WDDM_INTERFACE_WAITWAKE, 48, 1, v131, v9 + 2784) >= 0
          && *(_WORD *)(v9 + 2784) == 48
          && *(_WORD *)(v9 + 2786) == 1
          && *(_QWORD *)(v9 + 2816)
          && *(_QWORD *)(v9 + 2824) )
        {
          v76 = *(_QWORD *)(v9 + 2768);
          *(_DWORD *)(v9 + 2776) = 0;
          if ( v76 || (WorkItem = IoAllocateWorkItem(a1), (*(_QWORD *)(v9 + 2768) = WorkItem) != 0LL) )
          {
            *(_BYTE *)(v9 + 2726) = 1;
          }
          else
          {
            WdLogSingleEntry1(6LL, -1073741670LL);
            WdLogGlobalForLineNumber = 15926;
          }
        }
        DXGADAPTER::StartRuntimePowerManagement(*(DXGADAPTER **)(v9 + 4032));
        if ( *(_BYTE *)(v9 + 5816) )
        {
          v78 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 5800), 1u);
          LODWORD(v21) = v78;
          if ( v78 < 0 )
          {
            WdLogSingleEntry1(2LL, v78);
            WdLogGlobalForLineNumber = 15948;
            v10 = 22;
            goto LABEL_239;
          }
        }
      }
      DpiBrightnessStartDevice(a1);
      DpiMdmProcessAdapterBrightness((__int64)a1);
      DpiFdoInitializeDP((__int64)a1);
      DpiFdoInitializeDisplayDiagnostics((__int64)a1);
      goto LABEL_215;
    }
    LOBYTE(word_14015DD5C) = 1;
    *((_BYTE *)DXGGLOBAL::GetGlobal() + 889) = 1;
    goto LABEL_159;
  }
LABEL_215:
  v79 = DpiFdoOpenDeviceFileObjectIfNeeded((__int64)DeviceExtension);
  v21 = v79;
  if ( v79 < 0 )
  {
    WdLogSingleEntry1(2LL, v79);
    v80 = v134;
    v10 = 6;
    WdLogGlobalForLineNumber = 15988;
LABEL_238:
    v133 = v80;
    goto LABEL_239;
  }
  DxgkMiracastQueryMiracastSupportInternal(0LL);
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v81 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  *((_DWORD *)DeviceExtension + 60) = v81;
  *((_DWORD *)DeviceExtension + 59) = 2;
  if ( v9 && v144 && (int)DxgkCommitGdiViewIds(*(_BYTE *)(v9 + 2847), *(_QWORD *)(v9 + 5888)) < 0 )
  {
    v82 = *((_DWORD *)DeviceExtension + 60);
    --*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 59) = v82;
    *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
    WdLogSingleEntry1(2LL, v21);
    v10 = 21;
    v133 = v134;
    WdLogGlobalForLineNumber = 16027;
    goto LABEL_239;
  }
  if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline() )
    DxgkInvalidateQdcCache();
  v80 = v134;
  v133 = v134;
  if ( v9 )
  {
    v83 = !*(_BYTE *)(v9 + 1153) || !*(_BYTE *)(v9 + 480);
    v84 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2848), v83);
    v21 = v84;
    if ( v84 >= 0 )
    {
      v138 = 1;
      v133 = v134;
      if ( (*(_BYTE *)(v9 + 4041) & 0x20) != 0 )
        goto LABEL_239;
      v133 = v134;
      if ( !*(_QWORD *)(v9 + 2872) )
        goto LABEL_239;
      if ( !*(_BYTE *)(v9 + 1153) || (v86 = 0, !*(_BYTE *)(v9 + 480)) )
        v86 = 1;
      v87 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2864), v86);
      v21 = v87;
      if ( v87 >= 0 )
      {
        v139 = 1;
      }
      else
      {
        *((_DWORD *)DeviceExtension + 59) = *((_DWORD *)DeviceExtension + 60);
        v88 = *((_DWORD *)DeviceExtension + 69) - 1;
        *((_DWORD *)DeviceExtension + 69) = v88;
        *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (v88 & 7) + 244];
        WdLogSingleEntry1(2LL, v21);
        WdLogGlobalForLineNumber = 16077;
        v10 = 24;
      }
    }
    else
    {
      *((_DWORD *)DeviceExtension + 59) = *((_DWORD *)DeviceExtension + 60);
      v85 = *((_DWORD *)DeviceExtension + 69) - 1;
      *((_DWORD *)DeviceExtension + 69) = v85;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (v85 & 7) + 244];
      WdLogSingleEntry1(2LL, v21);
      WdLogGlobalForLineNumber = 16060;
      v10 = 23;
    }
    goto LABEL_238;
  }
LABEL_239:
  if ( v9 )
    v89 = *(_QWORD *)(v9 + 4032);
  else
    v89 = 0LL;
  v90 = v9 + 4032;
  if ( !v9 )
    v90 = 4032LL;
  DxgkLogInternalTriageEvent(
    v89,
    131076,
    0xFFFFFFFFLL,
    L"Adapter StartDevice has completed with status %1",
    (int)v21,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( v9 )
  {
    if ( !*(_QWORD *)v90 || v10 )
      LogAdapterStartTelemetry(v9, (GUID *)a4, v21, v10);
    else
      DXGADAPTER::AdapterTelemetry(*(_QWORD *)v90, 2LL, a4, (unsigned int)v21, 0);
    IsPostDevice = DpiFdoIsPostDevice((__int64)a1);
    v91 = 1LL;
    v93 = *(_DWORD *)(v9 + 504) != 0 ? 4 : 0;
    v94 = IsPostDevice;
    v95 = *(unsigned __int8 *)(v9 + 4040);
    v96 = (v95 >> 1) & 0x21;
    v97 = v96 | (2
               * (v95 & 1 | (2
                           * (*(_BYTE *)(v9 + 480) & 1 | (2
                                                        * (v94 | (2
                                                                * (*(_BYTE *)(v9 + 2716) & 1 | (4
                                                                                              * (v95 & 0x84 | *(_BYTE *)(v9 + 4041) & 1 | (2 * (*(_BYTE *)(v9 + 4040) & 0x38 | v93 | *(_BYTE *)(v9 + 1158) & 1))))))))))));
    if ( (int)v21 >= 0 )
      goto LABEL_308;
  }
  else
  {
    if ( (int)v21 >= 0 )
    {
      v97 = 0;
      goto LABEL_308;
    }
    MicrosoftTelemetryAssertTriggeredMsgKM((__int64)"DpiFdoStartAdapter failed and FdoContext is null");
    v97 = 0;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
  {
    if ( v9 )
      v98 = *(_DWORD *)(v9 + 1124);
    else
      v98 = 0;
    McTemplateK0qqq_EtwWriteTransfer(v93, &DpiFdoStartAdapterFailed, v96, v98, v21, v10);
  }
  v99 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
  DeviceExtension[232] = 1;
  IoInvalidateDeviceState(v99);
  if ( *((_DWORD *)DeviceExtension + 59) == 2 )
  {
    v102 = *((_DWORD *)DeviceExtension + 60);
    --*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 59) = v102;
    *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
  }
  if ( v9 )
  {
    if ( v138 == 1 )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2848), 0);
    if ( v139 == 1 )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2864), 0);
    DpiFdoCleanupFeatureDatabase((struct _FDO_CONTEXT *)v9);
    DpiFdoCleanupGpuVirtualization(v9);
    DpiFdoCleanupMipiDsi(v9);
    DpiFdoCleanupDP((_QWORD *)v9);
    DpiFdoCleanupDisplayDiagnostics(v9);
    if ( v133 == 1 )
      DpiFdoDestroyRelatedObjects((__int64)a1, (__int64)a4);
    if ( v144 )
    {
      v103 = *(_DWORD *)(v9 + 2708);
      if ( v103 )
      {
        do
          DxgkReleaseGdiViewId(
            *(_BYTE *)(v9 + 2847),
            *(_QWORD *)(v9 + 5888),
            *((_DWORD *)v144 + (unsigned int)--v103),
            1);
        while ( v103 );
        DeviceExtension = v157;
        v12 = v158;
      }
    }
    if ( (struct _DEVICE_OBJECT *)qword_14015DD68 == a1 )
    {
      word_14015DD5C = 0;
      qword_14015DD68 = 0LL;
    }
    if ( (struct _DEVICE_OBJECT *)qword_14015DD70 == a1 )
    {
      LOBYTE(word_14015DD5C) = 0;
      qword_14015DD70 = 0LL;
    }
    if ( v134 == 1 )
    {
      if ( *((_QWORD *)DeviceExtension + 61) )
      {
        PoFxUnregisterDevice();
        *(_QWORD *)(*(_QWORD *)(v9 + 4032) + 3232LL) = 0LL;
        *((_QWORD *)DeviceExtension + 61) = 0LL;
      }
      DpiRemoveAdapter(v9, 0, 0, 0);
      DxgkReleaseAdapterFdoReference(*(DXGADAPTER **)(v9 + 4032));
      *(_QWORD *)(v9 + 4032) = 0LL;
    }
    DpiFdoRemoveChildDescriptors((__int64)a1);
    v104 = *(void (__fastcall **)(_QWORD))(v9 + 2808);
    if ( v104 )
    {
      v104(*(_QWORD *)(v9 + 2792));
      *(_OWORD *)(v9 + 2784) = 0LL;
      *(_OWORD *)(v9 + 2800) = 0LL;
      *(_OWORD *)(v9 + 2816) = 0LL;
    }
  }
  if ( v137 == 1 && v12 )
  {
    if ( !(unsigned int)Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_IsEnabledDeviceUsageNoInline() && v9 )
      *(_BYTE *)(v9 + 4040) &= ~4u;
    if ( !DpiFdoIsMsBddAnchoredDevice((__int64)a1) && !DpiFdoIsPostDevice(v105)
      || (int)DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1, 1LL) < 0 )
    {
      DpiDxgkDdiStopDevice(v12, *((_QWORD *)DeviceExtension + 6));
    }
    if ( (unsigned int)Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_IsEnabledDeviceUsageNoInline() && v9 )
      *(_BYTE *)(v9 + 4040) &= ~4u;
  }
  if ( v135 == 1 )
    DpiFdoDisconnectInterrupt((__int64)a1);
  v106 = DeviceExtension[1162];
  if ( (_DWORD)v21 != -1071774208 )
  {
    v136 = v106 == 0;
    if ( (_DWORD)v21 != -1071774207 && !v106 )
    {
      if ( v137 )
        goto LABEL_306;
      if ( !*(_QWORD *)(v12 + 1344) )
        goto LABEL_306;
      DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(2, v100, v101, v91);
      v108 = DiagnosticInfoArgs;
      if ( !DiagnosticInfoArgs )
        goto LABEL_306;
      *(_QWORD *)DiagnosticInfoArgs = *((_QWORD *)DeviceExtension + 6);
      v142 = *(_DWORD *)(DiagnosticInfoArgs + 216);
      if ( (*(int (__fastcall **)(_QWORD, __int64))(v12 + 1344))(*((_QWORD *)DeviceExtension + 19), DiagnosticInfoArgs) >= 0 )
      {
        if ( *(_DWORD *)(v108 + 220) > v142 )
          *(_DWORD *)(v108 + 220) = 0;
        DxgCreateLiveDumpWithDriverBlob(
          *((struct _DEVICE_OBJECT **)DeviceExtension + 19),
          0x1B0u,
          *(int *)(v108 + 8),
          (int)v21,
          v97,
          *(_QWORD *)(v12 + 152),
          (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v108);
        v136 = 0;
      }
      DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v108);
      if ( v136 )
LABEL_306:
        DxgCreateLiveDumpWithWdLogs(403LL, 2052LL);
    }
  }
LABEL_308:
  if ( v144 )
    ExFreePoolWithTag(v144, 0);
  if ( DeviceExtension[1153] && DpiFdoIsPostDevice((__int64)a1) )
    NotifyUserMSBDAIfApplicable();
  v109 = 0LL;
  v143 = 0;
  if ( v9 )
  {
    if ( DeviceExtension[1158] )
    {
      v110 = *(_QWORD *)(v9 + 1008);
      if ( v110 )
      {
        v111 = *(__int64 (__fastcall **)(__int64, _QWORD))(v9 + 1064);
        if ( v111 )
        {
          v112 = v111(v110, (unsigned int)v21);
          if ( v112 < 0 )
          {
            WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 1064), v112);
            WdLogGlobalForLineNumber = 16414;
          }
        }
        v113 = *(__int64 (__fastcall **)(__int64, __int128 *))(v9 + 1080);
        if ( v113 )
        {
          v162 = 0LL;
          v114 = *(_QWORD *)(v9 + 1008);
          v161 = 0LL;
          v115 = v113(v114, &v161);
          if ( v115 < 0 )
          {
            WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 1080), v115);
            WdLogGlobalForLineNumber = 16434;
          }
          else
          {
            v109 = *((_QWORD *)&v161 + 1);
            *(_DWORD *)(v9 + 1164) = DWORD1(v161);
            v143 = v162;
          }
        }
      }
    }
    v116 = (_DWORD *)ExAllocatePool2(256LL, 96LL, 1953656900LL, v91);
    v120 = v116;
    if ( v116 )
    {
      memset(v116, 0, 0x60uLL);
      v121 = *((_QWORD *)DeviceExtension + 337);
      *v120 = 41;
      v120[13] = (unsigned int)a1 & 0xFFFF00;
      v120[1] = 96;
      v120[12] = v21;
      *((_QWORD *)v120 + 7) = v121;
      v122 = DxgkDiagCalcDuration1us(&v149);
      v123 = *(_QWORD *)(v9 + 5888);
      v120[16] = v122;
      v120[17] = *(_DWORD *)(v9 + 4048);
      v120[22] = v143;
      v120[18] = v97;
      *((_QWORD *)v120 + 10) = v109;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v120, v123);
      ExFreePoolWithTag(v120, 0x74727044u);
    }
    if ( (struct _DEVICE_OBJECT *)qword_14015DFF8 == a1 )
    {
      v124 = *(_QWORD *)(v9 + 40);
      if ( v124 )
      {
        if ( *(_QWORD *)(v124 + 408) )
          SendBDDDiagTelemetry(v9, v117, v118, v119);
      }
    }
  }
  else
  {
    v125 = (_DWORD *)ExAllocatePool2(256LL, 64LL, 1953656900LL, v91);
    v126 = v125;
    if ( v125 )
    {
      memset(v125, 0, 0x40uLL);
      v127 = DxgkDiagCalcDuration1us(&v149);
      v126[10] = 0;
      *((_QWORD *)v126 + 4) = 0LL;
      *v126 = 6;
      v126[1] = 64;
      *((_QWORD *)v126 + 1) = 0LL;
      *((_OWORD *)v126 + 1) = 0LL;
      v126[12] = 35;
      v126[13] = (unsigned int)a1 & 0xFFFF00;
      v126[14] = v127;
      v126[15] = v21;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v126, 0x200000000uLL);
      ExFreePoolWithTag(v126, 0x74727044u);
    }
  }
  return (unsigned int)v21;
}
