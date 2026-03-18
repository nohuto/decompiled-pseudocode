/*
 * XREFs of DpiFdoStartAdapter @ 0x140245688
 * Callers:
 *     DpiFdoStartNonLdaAdapter @ 0x14024802C (DpiFdoStartNonLdaAdapter.c)
 *     DpiLdaStartAdapterInChain @ 0x140253970 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     DxgkDiagCalcDuration1us @ 0x14004CE4C (DxgkDiagCalcDuration1us.c)
 *     DpiFdoIsPostDevice @ 0x14004D4F0 (DpiFdoIsPostDevice.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1400516E8 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140051AB8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x140058E78 (DpiFdoIsMsBddAnchoredDevice.c)
 *     ?LogAdapterStartTelemetry@@YAXPEAU_FDO_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADAPTER_FAILURE_REASON@@@Z @ 0x14005C7A8 (-LogAdapterStartTelemetry@@YAXPEAU_FDO_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADA.c)
 *     DpiFdoInitializeMipiDsi @ 0x1400621BC (DpiFdoInitializeMipiDsi.c)
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x14006DF3C (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline @ 0x14006E0E0 (Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline.c)
 *     DpiRemoveAdapter @ 0x14007C860 (DpiRemoveAdapter.c)
 *     ?DpiFdoCleanupFeatureDatabase@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x14007CC70 (-DpiFdoCleanupFeatureDatabase@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiFdoInitializePanelBufferControl@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14007CCA0 (-DpiFdoInitializePanelBufferControl@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z @ 0x14007CEE0 (-DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z.c)
 *     NotifyUserMSBDAIfApplicable @ 0x14007D154 (NotifyUserMSBDAIfApplicable.c)
 *     SendBDDDiagTelemetry @ 0x14007D358 (SendBDDDiagTelemetry.c)
 *     DpiFdoCleanupDP @ 0x14007D54C (DpiFdoCleanupDP.c)
 *     DpiFdoCleanupDisplayDiagnostics @ 0x14007D588 (DpiFdoCleanupDisplayDiagnostics.c)
 *     DpiFdoCleanupMipiDsi @ 0x14007D5D0 (DpiFdoCleanupMipiDsi.c)
 *     DpiFdoInitializeDP @ 0x14007D620 (DpiFdoInitializeDP.c)
 *     DpiFdoInitializeDisplayDiagnostics @ 0x14007D718 (DpiFdoInitializeDisplayDiagnostics.c)
 *     Feature_LegacyHPDFiltering__private_IsEnabledPreCheck @ 0x14007DCF4 (Feature_LegacyHPDFiltering__private_IsEnabledPreCheck.c)
 *     Feature_SupportWaitWakeForPowerRuntimeD3__private_IsEnabledPreCheck @ 0x14007DDB0 (Feature_SupportWaitWakeForPowerRuntimeD3__private_IsEnabledPreCheck.c)
 *     DpiHybridInternalPanelOverride @ 0x14007E4A4 (DpiHybridInternalPanelOverride.c)
 *     DpiMdmProcessAdapterBrightness @ 0x140088E5C (DpiMdmProcessAdapterBrightness.c)
 *     DpiMdmProcessStartAdapter @ 0x1400893FC (DpiMdmProcessStartAdapter.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1400A1380 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkAcquireAdapterFdoReference @ 0x140189E98 (DxgkAcquireAdapterFdoReference.c)
 *     DpiQueryMiniportInterface @ 0x14018AFAC (DpiQueryMiniportInterface.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x140195D1C (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1401A0808 (DxgkReleaseAdapterFdoReference.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1401AAC34 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401AAD20 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401AAF68 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DxgkAcquireGdiViewIds @ 0x1401FCA8C (DxgkAcquireGdiViewIds.c)
 *     DxgkCommitGdiViewIds @ 0x1401FCC64 (DxgkCommitGdiViewIds.c)
 *     DxgkReleaseGdiViewId @ 0x1401FD0EC (DxgkReleaseGdiViewId.c)
 *     DxgkRetrieveStringFromRegistry @ 0x140237C40 (DxgkRetrieveStringFromRegistry.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x14023CDA8 (DpiFdoCleanupGpuVirtualization.c)
 *     DpiFdoDestroyRelatedObjects @ 0x14023D714 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x14023D7BC (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1402441F8 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiFdoOpenDeviceFileObjectIfNeeded @ 0x1402443B4 (DpiFdoOpenDeviceFileObjectIfNeeded.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1402451C0 (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402487C8 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x14024B540 (DpiMiracastDdiMiracastQueryCaps.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024DB1C (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFeatureStartDevice @ 0x14024DEF8 (DpiFeatureStartDevice.c)
 *     DpiKsrGetSavedAdapterState @ 0x140250EA4 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrIsSoftBoot @ 0x140250F80 (DpiKsrIsSoftBoot.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x140251140 (DpiKsrRestoreAdapterDriverState.c)
 *     DpiDxgkDdiStopDevice @ 0x140254988 (DpiDxgkDdiStopDevice.c)
 *     ?MonitorInitializeAdapterDone@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E9D4 (-MonitorInitializeAdapterDone@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x14031E19C (DpiDxgkDdiDisplayDetectControl.c)
 *     DxgkInvalidateQdcCache @ 0x140349C08 (DxgkInvalidateQdcCache.c)
 *     DpiOpenPnpRegistryKey @ 0x14036B8A0 (DpiOpenPnpRegistryKey.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403C4B50 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403D3630 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     DpiGetDevicePropertyString @ 0x1403EB254 (DpiGetDevicePropertyString.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADAPTER_FAILURE_REASON@@@Z @ 0x1403EB654 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DpiFdoConnectInterrupt @ 0x1403FC6C0 (DpiFdoConnectInterrupt.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1403FDFB4 (DpiFdoInitializeGpuVirtualization.c)
 *     DpiFdoEnumChildDevices @ 0x1403FF92C (DpiFdoEnumChildDevices.c)
 *     DpiFdoCreateRelatedObjects @ 0x140404094 (DpiFdoCreateRelatedObjects.c)
 *     DpiDxgkDdiStartDevice @ 0x140404868 (DpiDxgkDdiStartDevice.c)
 *     DxgkAddAdapter @ 0x1404055E4 (DxgkAddAdapter.c)
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
  int v34; // eax
  int SavedAdapterState; // eax
  int v36; // eax
  int started; // eax
  _DWORD *Pool2; // rbx
  unsigned int v39; // ecx
  int v40; // eax
  int v41; // edx
  __int128 v42; // xmm0
  int DevicePropertyString; // eax
  unsigned int v44; // eax
  int v45; // eax
  _BYTE *v46; // rbx
  int v47; // eax
  struct _LUID *v48; // rdx
  unsigned int v49; // eax
  __int64 v50; // rax
  int v51; // eax
  char v52; // cl
  char v53; // dl
  char v54; // dl
  _BYTE *v55; // rcx
  char v56; // cl
  _QWORD *v57; // rcx
  __int64 v58; // rcx
  unsigned __int8 v59; // r8
  __int64 v60; // r8
  __int64 v61; // rdx
  int v62; // eax
  int v63; // eax
  int RelatedObjects; // eax
  __int64 v65; // rdx
  __int64 v66; // rdx
  int Caps; // eax
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rax
  PIO_WORKITEM WorkItem; // rax
  NTSTATUS v77; // eax
  int v78; // eax
  char v79; // bl
  int v80; // eax
  int v81; // eax
  BOOLEAN v82; // dl
  NTSTATUS v83; // eax
  int v84; // eax
  BOOLEAN v85; // dl
  NTSTATUS v86; // eax
  int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // rbx
  bool IsPostDevice; // al
  __int64 v91; // rcx
  int v92; // edx
  unsigned int v93; // eax
  __int64 v94; // r8
  unsigned int v95; // ebx
  int v96; // r9d
  struct _DEVICE_OBJECT *v97; // rcx
  int v98; // eax
  int v99; // edi
  void (__fastcall *v100)(_QWORD); // rax
  __int64 v101; // rcx
  char v102; // al
  __int64 DiagnosticInfoArgs; // rax
  __int64 v104; // rdi
  __int64 v105; // rdi
  __int64 v106; // rcx
  __int64 (__fastcall *v107)(__int64, _QWORD); // rax
  int v108; // eax
  __int64 (__fastcall *v109)(__int64, __int128 *); // rax
  __int64 v110; // rcx
  int v111; // eax
  _DWORD *v112; // rax
  _DWORD *v113; // r12
  __int64 v114; // rax
  int v115; // eax
  unsigned __int64 v116; // rdx
  __int64 v117; // rax
  _DWORD *v118; // rax
  _DWORD *v119; // rbx
  int v120; // eax
  unsigned __int64 v122; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v123; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v124; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v125; // [rsp+28h] [rbp-D8h]
  char v126; // [rsp+50h] [rbp-B0h]
  char v127; // [rsp+51h] [rbp-AFh]
  char v128; // [rsp+52h] [rbp-AEh]
  bool v129; // [rsp+52h] [rbp-AEh]
  char v130; // [rsp+53h] [rbp-ADh]
  char v131; // [rsp+54h] [rbp-ACh]
  char v132; // [rsp+55h] [rbp-ABh]
  unsigned int v135; // [rsp+58h] [rbp-A8h]
  int v136; // [rsp+58h] [rbp-A8h]
  PVOID v137; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  int v139; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v140[3]; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  __int64 v142; // [rsp+88h] [rbp-78h] BYREF
  int v143; // [rsp+90h] [rbp-70h] BYREF
  __int64 v144; // [rsp+98h] [rbp-68h]
  char v145; // [rsp+A0h] [rbp-60h]
  __int64 v146; // [rsp+A8h] [rbp-58h]
  __int64 v147; // [rsp+B0h] [rbp-50h] BYREF
  void *v148; // [rsp+B8h] [rbp-48h]
  _QWORD *v149; // [rsp+C0h] [rbp-40h]
  char *v150; // [rsp+C8h] [rbp-38h]
  __int64 v151; // [rsp+D0h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v153[10]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v154; // [rsp+140h] [rbp+40h] BYREF
  __int64 v155; // [rsp+150h] [rbp+50h]
  _OWORD v156[2]; // [rsp+158h] [rbp+58h] BYREF
  __int128 v157; // [rsp+178h] [rbp+78h] BYREF
  __int64 v158; // [rsp+188h] [rbp+88h]
  _OWORD v159[2]; // [rsp+190h] [rbp+90h] BYREF

  v146 = a6;
  v8 = a2;
  v149 = a7;
  v9 = 0LL;
  memset(v156, 0, 28);
  Handle = 0LL;
  DestinationString = 0LL;
  v10 = 0;
  v148 = a3;
  DeviceExtension = (char *)a1->DeviceExtension;
  v128 = 0;
  v132 = 0;
  v31 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  v12 = *((_QWORD *)DeviceExtension + 5);
  v151 = v12;
  v127 = 0;
  v126 = 0;
  v130 = 0;
  v131 = 0;
  v137 = 0LL;
  v142 = MEMORY[0xFFFFF78000000320];
  v150 = DeviceExtension;
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
                            v122,
                            (__int64)(DeviceExtension + 1000));
      if ( MiniportInterface >= 0 )
      {
        if ( v146 )
        {
          v19 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)DeviceExtension + 131);
          if ( v19 )
          {
            v20 = v19(*((_QWORD *)DeviceExtension + 126), a5);
            LODWORD(v21) = v20;
            if ( v20 < 0 )
            {
              WdLogSingleEntry2(2LL, *((_QWORD *)DeviceExtension + 131), v20);
              WdLogGlobalForLineNumber = 14959;
              v10 = 25;
              goto LABEL_242;
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
        memset(v153, 0, sizeof(v153));
        if ( (int)DpiQueryMiniportInterface(
                    *((_QWORD *)DeviceExtension + 3),
                    (__int64)&GUID_DEVINTERFACE_DOD_EXTENDED,
                    80,
                    1,
                    v123,
                    (__int64)v153) >= 0
          && LODWORD(v153[0]) == 65616 )
        {
          if ( v153[4] )
          {
            v14 = v153[5];
            if ( v153[5] )
            {
              v15 = v153[6];
              if ( v153[6] )
              {
                v16 = v153[7];
                if ( v153[7] )
                {
                  v17 = v153[8];
                  if ( v153[8] )
                  {
                    v18 = v153[9];
                    if ( v153[9] )
                    {
                      *(_QWORD *)(v12 + 1008) = v153[4];
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
    WdLogGlobalForLineNumber = 15033;
  }
  else
  {
    if ( v22 < 0 )
    {
      WdLogSingleEntry1(2LL, v22);
      WdLogGlobalForLineNumber = 15046;
      v10 = 10;
      goto LABEL_242;
    }
    v128 = 1;
  }
  if ( DpiFdoIsPostDevice((__int64)a1) )
  {
    if ( DeviceExtension[1155] == v23 && v8 && byte_140160D15 && !DpiFdoIsCompatibleWithHighResolutionBoot(v24) )
    {
      v143 = -1;
      v144 = 0LL;
      if ( (qword_14015E4B0 & 2) != 0 )
      {
        v145 = 1;
        v143 = 8006;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerEnter, v26, 8006);
      }
      else
      {
        v145 = 0;
      }
      DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v143, 8006);
      memset(v159, 0, sizeof(v159));
      LODWORD(v159[0]) = 18;
      x86BiosCall(16LL, v159);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v143);
      if ( v145 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v143);
    }
    if ( v9 )
    {
      v29 = *(_DWORD *)(v12 + 28);
      if ( byte_140160D15 )
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
  for ( *(_QWORD *)&v140[1] = 0LL; ; *(_QWORD *)&v140[1] = 0LL )
  {
    v32 = ExUuidCreate((UUID *)(DeviceExtension + 2680));
    LODWORD(v21) = v32;
    if ( v32 >= 0 )
      break;
    if ( v32 != -1073741267 )
    {
      WdLogSingleEntry1(2LL, v32);
      WdLogGlobalForLineNumber = 15120;
      v10 = 8;
      goto LABEL_242;
    }
    *(_QWORD *)&v140[1] = -10000LL;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&v140[1]);
  }
  LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)DeviceExtension + 337);
  LODWORD(v21) = LocallyUniqueId;
  if ( LocallyUniqueId < 0 )
  {
    WdLogSingleEntry1(2LL, LocallyUniqueId);
    WdLogGlobalForLineNumber = 15146;
    v10 = 7;
    goto LABEL_242;
  }
  if ( v9 )
  {
    if ( (unsigned __int8)DpiKsrIsSoftBoot() )
    {
      v34 = DpiKsrRestoreAdapterDriverState((struct _FDO_CONTEXT *)v9);
      if ( v34 >= 0 )
      {
        v139 = 0;
        v147 = 0LL;
        SavedAdapterState = DpiKsrGetSavedAdapterState(a1, &v139, &v147);
        if ( SavedAdapterState < 0 )
        {
          WdLogSingleEntry1(2LL, SavedAdapterState);
          WdLogGlobalForLineNumber = 15181;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v34);
        WdLogGlobalForLineNumber = 15167;
      }
    }
    v36 = DpiFdoSetAdapterLuid((struct _FDO_CONTEXT *)v9);
    if ( v36 < 0 )
    {
      WdLogSingleEntry1(2LL, v36);
      WdLogGlobalForLineNumber = 15195;
    }
    started = DpiFeatureStartDevice(a1);
    LODWORD(v21) = started;
    if ( started < 0 )
    {
      WdLogSingleEntry1(2LL, started);
      WdLogGlobalForLineNumber = 15207;
      v10 = 12;
      goto LABEL_242;
    }
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 576LL, 1953656900LL);
  if ( !Pool2 )
  {
    LODWORD(v21) = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogGlobalForLineNumber = 15224;
    v10 = 9;
    goto LABEL_242;
  }
  v39 = *(_DWORD *)(v12 + 28);
  Pool2[1] = 0;
  if ( v39 >= 0xD001 )
  {
    *Pool2 = 576;
LABEL_67:
    v40 = *((_DWORD *)DeviceExtension + 687);
    goto LABEL_86;
  }
  v40 = 40971;
  if ( v39 > 0xA00B )
  {
    *Pool2 = 480;
    goto LABEL_67;
  }
  v41 = 36870;
  if ( v39 > 0x9006 )
  {
    *Pool2 = 464;
    goto LABEL_86;
  }
  v40 = 32769;
  if ( v39 > 0x8001 )
  {
    *Pool2 = 456;
LABEL_84:
    v40 = v41;
    goto LABEL_86;
  }
  v41 = 28682;
  if ( v39 > 0x700A )
  {
    *Pool2 = 368;
    goto LABEL_86;
  }
  v40 = 24579;
  if ( v39 > 0x6003 )
  {
    *Pool2 = 360;
    goto LABEL_84;
  }
  v41 = 20515;
  if ( v39 > 0x5023 )
  {
    *Pool2 = 328;
    goto LABEL_86;
  }
  v40 = 16387;
  if ( v39 > 0x4003 )
  {
    *Pool2 = 312;
    goto LABEL_84;
  }
  v41 = 12302;
  if ( v39 > 0x300E )
  {
    *Pool2 = 264;
    goto LABEL_86;
  }
  v40 = 8197;
  if ( v39 > 0x2005 )
  {
    *Pool2 = 256;
    goto LABEL_84;
  }
  *Pool2 = 184;
LABEL_86:
  Pool2[1] = v40;
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
  LODWORD(v156[0]) = 32;
  v42 = *(_OWORD *)(DeviceExtension + 2680);
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
  *(_OWORD *)((char *)v156 + 4) = v42;
  *(_QWORD *)((char *)&v156[1] + 4) = *((_QWORD *)DeviceExtension + 337);
  qword_140161118 = (__int64)KeGetCurrentThread();
  qword_140161120 = (__int64)a1;
  v21 = (int)DpiDxgkDdiStartDevice(
               v12,
               *((_QWORD *)DeviceExtension + 6),
               (unsigned int)v156,
               (_DWORD)Pool2,
               (__int64)(DeviceExtension + 2708),
               (__int64)(DeviceExtension + 2704));
  ExFreePoolWithTag(Pool2, 0x74727044u);
  qword_140161120 = 0LL;
  qword_140161118 = 0LL;
  if ( (int)v21 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v12 + 152), v21);
    WdLogGlobalForLineNumber = 15479;
    if ( (_DWORD)v21 == -1071775735 )
    {
      v140[0] = 0;
      P = 0LL;
      if ( !DpiFdoIsPostDevice((__int64)a1) )
      {
        v10 = 14;
        goto LABEL_242;
      }
      DevicePropertyString = DpiGetDevicePropertyString(
                               *((PDEVICE_OBJECT *)DeviceExtension + 19),
                               DevicePropertyHardwareID,
                               (__int64)v140);
      if ( DevicePropertyString < 0 )
      {
        WdLogSingleEntry1(2LL, DevicePropertyString);
        WdLogGlobalForLineNumber = 15520;
        v10 = 13;
        goto LABEL_242;
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
      WdLogSingleEntry5(0LL, 275LL, 26LL, v12, (unsigned __int8)byte_140160D15, 0LL);
      WdLogGlobalForLineNumber = 15544;
    }
    v10 = 1;
    goto LABEL_242;
  }
  if ( DpiFdoIsMsBddAnchoredDevice((__int64)a1) )
  {
    xmmword_140161080 = 0LL;
    DWORD2(xmmword_140161080) = -1;
    xmmword_140161070 = 0LL;
    memset(&xmmword_140161090, 0, 0x80uLL);
    dword_140161110 = 3;
  }
  if ( !*((_DWORD *)DeviceExtension + 678) )
  {
    v44 = *((_DWORD *)DeviceExtension + 677);
    if ( v44 > 1 )
    {
      WdLogSingleEntry1(3LL, v44);
      WdLogGlobalForLineNumber = 15572;
      *((_DWORD *)DeviceExtension + 677) = 1;
    }
  }
  v132 = 1;
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 2704) )
    {
      v45 = DpiFdoEnumChildDevices(a1);
      LODWORD(v21) = v45;
      if ( v45 < 0 )
      {
        WdLogSingleEntry1(2LL, v45);
        WdLogGlobalForLineNumber = 15602;
        v10 = 15;
        goto LABEL_242;
      }
    }
    v46 = (_BYTE *)(v9 + 4040);
    v47 = DxgkAddAdapter(a1, v148, (struct _DXGK_ADAPTER_CAPS *)(v9 + 4040));
    LODWORD(v21) = v47;
    if ( v47 < 0 )
    {
      WdLogSingleEntry1(2LL, v47);
      WdLogGlobalForLineNumber = 15624;
      v10 = 3;
      goto LABEL_242;
    }
    DxgkAcquireAdapterFdoReference(*(_QWORD *)(v9 + 4032));
    v127 = 1;
    *(_BYTE *)(v9 + 2847) = DXGADAPTER::IsAdapterSessionized(
                              *(DXGADAPTER **)(v9 + 4032),
                              v48,
                              0LL,
                              (unsigned __int64 *)(v9 + 5888));
    v49 = *(_DWORD *)(v9 + 2708);
    if ( v49 )
    {
      v50 = ExAllocatePool2(256LL, 4LL * v49, 1953656900LL);
      v137 = (PVOID)v50;
      if ( !v50 )
      {
        LODWORD(v21) = -1073741670;
        WdLogSingleEntry1(6LL, -1073741670LL);
        WdLogGlobalForLineNumber = 15664;
        v10 = 16;
        goto LABEL_242;
      }
      v51 = DxgkAcquireGdiViewIds(*(_BYTE *)(v9 + 2847), *(_QWORD *)(v9 + 5888), (_DWORD *)(v9 + 2708), v50);
      LODWORD(v21) = v51;
      if ( v51 < 0 )
      {
        WdLogSingleEntry1(2LL, v51);
        WdLogGlobalForLineNumber = 15678;
        v10 = 17;
        ExFreePoolWithTag(v137, 0);
        v137 = 0LL;
        goto LABEL_242;
      }
    }
    v52 = *(_BYTE *)(v9 + 4041) ^ (*(_BYTE *)(v9 + 4041) ^ (2 * *(_BYTE *)(v9 + 4041))) & 8;
    *(_BYTE *)(v9 + 4041) = v52;
    if ( (v52 & 4) != 0 && (!*(_QWORD *)(v12 + 1128) || !*(_QWORD *)(v12 + 1136)) )
    {
      WdLogSingleEntry1(2LL, (unsigned int)v21);
      *(_BYTE *)(v9 + 4041) &= ~8u;
      v52 = *(_BYTE *)(v9 + 4041);
      WdLogGlobalForLineNumber = 15700;
    }
    v53 = v52;
    if ( (*v46 & 1) != 0 && *(int *)(v9 + 4048) >= 0x2000 && !*(_BYTE *)(v9 + 1158) && (v52 & 8) == 0 )
    {
      Feature_LegacyHPDFiltering__private_IsEnabledPreCheck();
      v53 = *(_BYTE *)(v9 + 4041) | 0x10;
      *(_BYTE *)(v9 + 4041) = v53;
    }
    if ( (v53 & 8) == 0 && !*(_QWORD *)(v12 + 208) )
    {
      LODWORD(v21) = -1073741735;
      WdLogSingleEntry1(2LL, -1073741735LL);
      WdLogGlobalForLineNumber = 15733;
      v10 = 18;
      goto LABEL_242;
    }
    if ( *(_BYTE *)(v9 + 2721) && (v53 & 0x20) == 0 )
    {
      LODWORD(v21) = -1073741735;
      WdLogSingleEntry1(2LL, -1073741735LL);
      WdLogGlobalForLineNumber = 15750;
      v10 = 26;
      goto LABEL_242;
    }
    if ( *(int *)(v9 + 4048) >= 12800 && (*v46 & 1) != 0 && !*(_QWORD *)(v12 + 1008) )
    {
      LODWORD(v21) = -1073741735;
      WdLogSingleEntry1(2LL, -1073741735LL);
      WdLogGlobalForLineNumber = 15768;
      v10 = 19;
      goto LABEL_242;
    }
    if ( qword_140160D30 )
    {
      v55 = (_BYTE *)(v9 + 2716);
      if ( *(_BYTE *)(v9 + 2716) && (v53 & 1) != 0 && !(_BYTE)word_140160D1C )
        qword_140160D30 = (__int64)a1;
    }
    else
    {
      if ( (v53 & 1) != 0
        || DpiHybridInternalPanelOverride()
        && (*v46 & 0x20) != 0
        && DpiFdoIsPostDevice((__int64)a1)
        && (v54 & 0x40) == 0 )
      {
        qword_140160D30 = (__int64)a1;
      }
      v55 = (_BYTE *)(v9 + 2716);
    }
    if ( (*v46 & 0x40) != 0 )
    {
      if ( qword_140160D28 && (struct _DEVICE_OBJECT *)qword_140160D28 != a1 )
      {
        if ( !*v55 || (_BYTE)word_140160D1C )
        {
          *v46 &= ~0x40u;
          goto LABEL_153;
        }
        *(_BYTE *)(*(_QWORD *)(qword_140160D28 + 64) + 4040LL) &= ~0x40u;
      }
      qword_140160D28 = (__int64)a1;
      HIBYTE(word_140160D1C) = (*(_BYTE *)(v9 + 4041) & 2) != 0;
    }
LABEL_153:
    if ( !qword_140160D30 || !qword_140160D28 || (_BYTE)word_140160D1C )
      goto LABEL_159;
    v56 = *(_BYTE *)(*(_QWORD *)(qword_140160D30 + 64) + 2716LL);
    if ( *(_BYTE *)(*(_QWORD *)(qword_140160D28 + 64) + 2716LL) )
    {
      if ( !v56 )
        goto LABEL_158;
    }
    else if ( v56 )
    {
LABEL_158:
      LOBYTE(word_140160D1C) = 0;
LABEL_159:
      v57 = v149;
      if ( v149 )
      {
        *v149 = *(_QWORD *)v46;
        *((_DWORD *)v57 + 2) = *(_DWORD *)(v9 + 4048);
      }
      if ( DpiFdoIsPostDevice((__int64)a1) && (v59 & *v46) == 0 && !DeviceExtension[2719] )
      {
        LODWORD(v21) = -1071775740;
        WdLogSingleEntry1(2LL, -1071775740LL);
        WdLogGlobalForLineNumber = 15904;
        v10 = 20;
        goto LABEL_242;
      }
      DpiMdmProcessStartAdapter(v58);
      if ( *(_DWORD *)(v9 + 3616) )
      {
        v60 = *(_QWORD *)(v9 + 48);
        v61 = *(_QWORD *)(v9 + 40);
        v157 = 0LL;
        LODWORD(v157) = 67108861;
        v158 = 0LL;
        v62 = DpiDxgkDdiDisplayDetectControl(v9, v61, v60, &v157, v124, v125);
        LODWORD(v21) = v62;
        if ( v62 < 0 )
        {
          WdLogSingleEntry2(2LL, *(_QWORD *)(v12 + 1128), v62);
          WdLogGlobalForLineNumber = 15937;
          v10 = 4;
          goto LABEL_242;
        }
      }
      if ( (unsigned int)Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline() )
      {
        v63 = DpiFdoInitializePanelBufferControl(a1);
        LODWORD(v21) = v63;
        if ( v63 < 0 )
        {
          WdLogSingleEntry1(2LL, v63);
          WdLogGlobalForLineNumber = 15955;
          v10 = 27;
          goto LABEL_242;
        }
      }
      DpiFdoInitializeMipiDsi((__int64)a1);
      RelatedObjects = DpiFdoCreateRelatedObjects(a1, *(unsigned int *)(v9 + 2708), v137, a4);
      LODWORD(v21) = RelatedObjects;
      if ( RelatedObjects < 0 )
      {
        WdLogSingleEntry1(2LL, RelatedObjects);
        WdLogGlobalForLineNumber = 15982;
        v10 = 11;
        goto LABEL_242;
      }
      if ( (*v46 & 1) != 0 )
      {
        LOBYTE(v65) = 1;
        if ( (int)DpiAcquireCoreSyncAccessSafe(a1, v65) >= 0 )
        {
          MonitorInitializeAdapterDone(*(DXGADAPTER **)(v9 + 4032), a4);
          LOBYTE(v66) = 1;
          DpiReleaseCoreSyncAccessSafe(a1, v66);
        }
      }
      v126 = 1;
      if ( *(_DWORD *)(v9 + 3360) != -1 )
      {
        Caps = DpiMiracastDdiMiracastQueryCaps(v9, v65, v9 + 3352);
        if ( Caps < 0 )
        {
          WdLogSingleEntry1(4LL, Caps);
          *(_DWORD *)(v9 + 3360) = -1;
          WdLogGlobalForLineNumber = 16022;
          memset((void *)(v9 + 3288), 0, 0x40uLL);
        }
      }
      v68 = DpiOpenPnpRegistryKey(a1, 2LL, 131097LL, &Handle);
      if ( v68 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MiracastDriverName");
        if ( DxgkRetrieveStringFromRegistry(Handle, &DestinationString, v9 + 4992) < 0 )
        {
          WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
          WdLogGlobalForLineNumber = 16068;
        }
        ZwClose(Handle);
      }
      else
      {
        WdLogSingleEntry1(4LL, v68);
        WdLogGlobalForLineNumber = 16043;
      }
      v71 = *(_QWORD *)(v9 + 5008);
      if ( v71 )
      {
        if ( *(_QWORD *)(v71 + 48) && *(_BYTE *)v71 )
        {
          v31 = bTracingEnabled == 0;
          *(_BYTE *)v71 = 0;
          if ( !v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
          {
            LODWORD(v124) = *(unsigned __int8 *)(*(_QWORD *)(v9 + 5008) + 2LL);
            McTemplateK0pt_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventDpiFdoThermalActiveCooling,
              v70,
              a1);
          }
          v72 = *(_QWORD *)(v9 + 5008);
          LOBYTE(v69) = *(_BYTE *)(v72 + 2);
          (*(void (__fastcall **)(_QWORD, __int64))(v72 + 48))(*(_QWORD *)(v72 + 16), v69);
        }
        v73 = *(_QWORD *)(v9 + 5008);
        if ( *(_QWORD *)(v73 + 56) && *(_BYTE *)(v73 + 1) )
        {
          v31 = bTracingEnabled == 0;
          *(_BYTE *)(v73 + 1) = 0;
          if ( !v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
          {
            LODWORD(v124) = *(_DWORD *)(*(_QWORD *)(v9 + 5008) + 4LL);
            McTemplateK0pt_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventDpiFdoThermalPassiveCooling,
              v70,
              a1);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v9 + 5008) + 56LL))(
            *(_QWORD *)(*(_QWORD *)(v9 + 5008) + 16LL),
            *(unsigned int *)(*(_QWORD *)(v9 + 5008) + 4LL));
        }
      }
      v74 = DpiFdoInitializeGpuVirtualization(a1);
      LODWORD(v21) = v74;
      if ( v74 < 0 )
      {
        WdLogSingleEntry1(2LL, v74);
        WdLogGlobalForLineNumber = 16123;
        v10 = 5;
        goto LABEL_242;
      }
      if ( *(_BYTE *)(v9 + 482) )
      {
        Feature_SupportWaitWakeForPowerRuntimeD3__private_IsEnabledPreCheck();
        if ( *(_DWORD *)(*(_QWORD *)(v9 + 40) + 28LL) >= 0x11007u
          && (*(_DWORD *)(v9 + 1324) & 0x2000) != 0
          && *(int *)(v9 + 1368) >= 4
          && (int)DpiQueryMiniportInterface((__int64)a1, (__int64)&GUID_WDDM_INTERFACE_WAITWAKE, 48, 1, v124, v9 + 2784) >= 0
          && *(_WORD *)(v9 + 2784) == 48
          && *(_WORD *)(v9 + 2786) == 1
          && *(_QWORD *)(v9 + 2816)
          && *(_QWORD *)(v9 + 2824) )
        {
          v75 = *(_QWORD *)(v9 + 2768);
          *(_DWORD *)(v9 + 2776) = 0;
          if ( v75 || (WorkItem = IoAllocateWorkItem(a1), (*(_QWORD *)(v9 + 2768) = WorkItem) != 0LL) )
          {
            *(_BYTE *)(v9 + 2726) = 1;
          }
          else
          {
            WdLogSingleEntry1(6LL, -1073741670LL);
            WdLogGlobalForLineNumber = 16185;
          }
        }
        DXGADAPTER::StartRuntimePowerManagement(*(DXGADAPTER **)(v9 + 4032));
        if ( *(_BYTE *)(v9 + 5816) )
        {
          v77 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 5800), 1u);
          LODWORD(v21) = v77;
          if ( v77 < 0 )
          {
            WdLogSingleEntry1(2LL, v77);
            WdLogGlobalForLineNumber = 16207;
            v10 = 22;
            goto LABEL_242;
          }
        }
      }
      DpiBrightnessStartDevice(a1);
      DpiMdmProcessAdapterBrightness((__int64)a1);
      DpiFdoInitializeDP((__int64)a1);
      DpiFdoInitializeDisplayDiagnostics((__int64)a1);
      goto LABEL_218;
    }
    LOBYTE(word_140160D1C) = 1;
    *((_BYTE *)DXGGLOBAL::GetGlobal() + 921) = 1;
    goto LABEL_159;
  }
LABEL_218:
  v78 = DpiFdoOpenDeviceFileObjectIfNeeded((__int64)DeviceExtension);
  v21 = v78;
  if ( v78 < 0 )
  {
    WdLogSingleEntry1(2LL, v78);
    v79 = v127;
    v10 = 6;
    WdLogGlobalForLineNumber = 16247;
LABEL_241:
    v126 = v79;
    goto LABEL_242;
  }
  DxgkMiracastQueryMiracastSupportInternal(0LL);
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v80 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  *((_DWORD *)DeviceExtension + 60) = v80;
  *((_DWORD *)DeviceExtension + 59) = 2;
  if ( v9 && v137 && (int)DxgkCommitGdiViewIds(*(_BYTE *)(v9 + 2847), *(_QWORD *)(v9 + 5888)) < 0 )
  {
    v81 = *((_DWORD *)DeviceExtension + 60);
    --*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 59) = v81;
    *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
    WdLogSingleEntry1(2LL, v21);
    v10 = 21;
    v126 = v127;
    WdLogGlobalForLineNumber = 16286;
    goto LABEL_242;
  }
  if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline() )
    DxgkInvalidateQdcCache();
  v79 = v127;
  v126 = v127;
  if ( v9 )
  {
    v82 = !*(_BYTE *)(v9 + 1153) || !*(_BYTE *)(v9 + 480);
    v83 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2848), v82);
    v21 = v83;
    if ( v83 >= 0 )
    {
      v130 = 1;
      v126 = v127;
      if ( (*(_BYTE *)(v9 + 4041) & 0x20) != 0 )
        goto LABEL_242;
      v126 = v127;
      if ( !*(_QWORD *)(v9 + 2872) )
        goto LABEL_242;
      if ( !*(_BYTE *)(v9 + 1153) || (v85 = 0, !*(_BYTE *)(v9 + 480)) )
        v85 = 1;
      v86 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2864), v85);
      v21 = v86;
      if ( v86 >= 0 )
      {
        v131 = 1;
      }
      else
      {
        *((_DWORD *)DeviceExtension + 59) = *((_DWORD *)DeviceExtension + 60);
        v87 = *((_DWORD *)DeviceExtension + 69) - 1;
        *((_DWORD *)DeviceExtension + 69) = v87;
        *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (v87 & 7) + 244];
        WdLogSingleEntry1(2LL, v21);
        WdLogGlobalForLineNumber = 16336;
        v10 = 24;
      }
    }
    else
    {
      *((_DWORD *)DeviceExtension + 59) = *((_DWORD *)DeviceExtension + 60);
      v84 = *((_DWORD *)DeviceExtension + 69) - 1;
      *((_DWORD *)DeviceExtension + 69) = v84;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (v84 & 7) + 244];
      WdLogSingleEntry1(2LL, v21);
      WdLogGlobalForLineNumber = 16319;
      v10 = 23;
    }
    goto LABEL_241;
  }
LABEL_242:
  if ( v9 )
    v88 = *(_QWORD *)(v9 + 4032);
  else
    v88 = 0LL;
  v89 = v9 + 4032;
  if ( !v9 )
    v89 = 4032LL;
  DxgkLogInternalTriageEvent(
    v88,
    131076LL,
    0xFFFFFFFFLL,
    L"Adapter StartDevice has completed with status %1",
    (int)v21,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( v9 )
  {
    if ( !*(_QWORD *)v89 || v10 )
      LogAdapterStartTelemetry(v9, (GUID *)a4, v21, v10);
    else
      DXGADAPTER::AdapterTelemetry(*(_QWORD *)v89, 2LL, a4, (unsigned int)v21, 0);
    IsPostDevice = DpiFdoIsPostDevice((__int64)a1);
    v91 = *(_DWORD *)(v9 + 504) != 0 ? 4 : 0;
    v92 = IsPostDevice;
    v93 = *(unsigned __int8 *)(v9 + 4040);
    v94 = (v93 >> 1) & 0x21;
    v95 = v94 | (2
               * (v93 & 1 | (2
                           * (*(_BYTE *)(v9 + 480) & 1 | (2
                                                        * (v92 | (2
                                                                * (*(_BYTE *)(v9 + 2716) & 1 | (4
                                                                                              * (v93 & 0x84 | *(_BYTE *)(v9 + 4041) & 1 | (2 * (*(_BYTE *)(v9 + 4040) & 0x38 | v91 | *(_BYTE *)(v9 + 1158) & 1))))))))))));
    if ( (int)v21 >= 0 )
      goto LABEL_307;
  }
  else
  {
    if ( (int)v21 >= 0 )
    {
      v95 = 0;
      goto LABEL_307;
    }
    MicrosoftTelemetryAssertTriggeredMsgKM((__int64)"DpiFdoStartAdapter failed and FdoContext is null");
    v95 = 0;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
  {
    if ( v9 )
      v96 = *(_DWORD *)(v9 + 1124);
    else
      v96 = 0;
    McTemplateK0qqq_EtwWriteTransfer(v91, &DpiFdoStartAdapterFailed, v94, v96, v21, v10);
  }
  v97 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
  DeviceExtension[232] = 1;
  IoInvalidateDeviceState(v97);
  if ( *((_DWORD *)DeviceExtension + 59) == 2 )
  {
    v98 = *((_DWORD *)DeviceExtension + 60);
    --*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 59) = v98;
    *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
  }
  if ( v9 )
  {
    if ( v130 == 1 )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2848), 0);
    if ( v131 == 1 )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2864), 0);
    DpiFdoCleanupFeatureDatabase((struct _FDO_CONTEXT *)v9);
    DpiFdoCleanupGpuVirtualization(v9);
    DpiFdoCleanupMipiDsi(v9);
    DpiFdoCleanupDP((_QWORD *)v9);
    DpiFdoCleanupDisplayDiagnostics(v9);
    if ( v126 == 1 )
      DpiFdoDestroyRelatedObjects((__int64)a1, (__int64)a4);
    if ( v137 )
    {
      v99 = *(_DWORD *)(v9 + 2708);
      if ( v99 )
      {
        do
          DxgkReleaseGdiViewId(
            *(_BYTE *)(v9 + 2847),
            *(_QWORD *)(v9 + 5888),
            *((_DWORD *)v137 + (unsigned int)--v99),
            1);
        while ( v99 );
        DeviceExtension = v150;
        v12 = v151;
      }
    }
    if ( (struct _DEVICE_OBJECT *)qword_140160D28 == a1 )
    {
      word_140160D1C = 0;
      qword_140160D28 = 0LL;
    }
    if ( (struct _DEVICE_OBJECT *)qword_140160D30 == a1 )
    {
      LOBYTE(word_140160D1C) = 0;
      qword_140160D30 = 0LL;
    }
    if ( v127 == 1 )
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
    v100 = *(void (__fastcall **)(_QWORD))(v9 + 2808);
    if ( v100 )
    {
      v100(*(_QWORD *)(v9 + 2792));
      *(_OWORD *)(v9 + 2784) = 0LL;
      *(_OWORD *)(v9 + 2800) = 0LL;
      *(_OWORD *)(v9 + 2816) = 0LL;
    }
  }
  if ( v132 == 1 && v12 )
  {
    if ( !DpiFdoIsMsBddAnchoredDevice((__int64)a1) && !DpiFdoIsPostDevice(v101)
      || (int)DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1, 1LL) < 0 )
    {
      DpiDxgkDdiStopDevice(v12, *((_QWORD *)DeviceExtension + 6));
    }
    if ( v9 )
      *(_BYTE *)(v9 + 4040) &= ~4u;
  }
  if ( v128 == 1 )
    DpiFdoDisconnectInterrupt((__int64)a1);
  v102 = DeviceExtension[1162];
  if ( (_DWORD)v21 != -1071774208 )
  {
    v129 = v102 == 0;
    if ( (_DWORD)v21 != -1071774207 && !v102 )
    {
      if ( v132 )
        goto LABEL_305;
      if ( !*(_QWORD *)(v12 + 1344) )
        goto LABEL_305;
      DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(2);
      v104 = DiagnosticInfoArgs;
      if ( !DiagnosticInfoArgs )
        goto LABEL_305;
      *(_QWORD *)DiagnosticInfoArgs = *((_QWORD *)DeviceExtension + 6);
      v135 = *(_DWORD *)(DiagnosticInfoArgs + 216);
      if ( (*(int (__fastcall **)(_QWORD, __int64))(v12 + 1344))(*((_QWORD *)DeviceExtension + 19), DiagnosticInfoArgs) >= 0 )
      {
        if ( *(_DWORD *)(v104 + 220) > v135 )
          *(_DWORD *)(v104 + 220) = 0;
        DxgCreateLiveDumpWithDriverBlob(
          *((struct _DEVICE_OBJECT **)DeviceExtension + 19),
          0x1B0u,
          *(int *)(v104 + 8),
          (int)v21,
          v95,
          *(_QWORD *)(v12 + 152),
          (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v104);
        v129 = 0;
      }
      DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v104);
      if ( v129 )
LABEL_305:
        DxgCreateLiveDumpWithWdLogs(403LL, 2052LL);
    }
  }
LABEL_307:
  if ( v137 )
    ExFreePoolWithTag(v137, 0);
  if ( DeviceExtension[1153] && DpiFdoIsPostDevice((__int64)a1) )
    NotifyUserMSBDAIfApplicable();
  v105 = 0LL;
  v136 = 0;
  if ( v9 )
  {
    if ( DeviceExtension[1158] )
    {
      v106 = *(_QWORD *)(v9 + 1008);
      if ( v106 )
      {
        v107 = *(__int64 (__fastcall **)(__int64, _QWORD))(v9 + 1064);
        if ( v107 )
        {
          v108 = v107(v106, (unsigned int)v21);
          if ( v108 < 0 )
          {
            WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 1064), v108);
            WdLogGlobalForLineNumber = 16658;
          }
        }
        v109 = *(__int64 (__fastcall **)(__int64, __int128 *))(v9 + 1080);
        if ( v109 )
        {
          v155 = 0LL;
          v110 = *(_QWORD *)(v9 + 1008);
          v154 = 0LL;
          v111 = v109(v110, &v154);
          if ( v111 < 0 )
          {
            WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 1080), v111);
            WdLogGlobalForLineNumber = 16678;
          }
          else
          {
            v105 = *((_QWORD *)&v154 + 1);
            *(_DWORD *)(v9 + 1164) = DWORD1(v154);
            v136 = v155;
          }
        }
      }
    }
    v112 = (_DWORD *)ExAllocatePool2(256LL, 96LL, 1953656900LL);
    v113 = v112;
    if ( v112 )
    {
      memset(v112, 0, 0x60uLL);
      v114 = *((_QWORD *)DeviceExtension + 337);
      *v113 = 41;
      v113[13] = (unsigned int)a1 & 0xFFFF00;
      v113[1] = 96;
      v113[12] = v21;
      *((_QWORD *)v113 + 7) = v114;
      v115 = DxgkDiagCalcDuration1us(&v142);
      v116 = *(_QWORD *)(v9 + 5888);
      v113[16] = v115;
      v113[17] = *(_DWORD *)(v9 + 4048);
      v113[22] = v136;
      v113[18] = v95;
      *((_QWORD *)v113 + 10) = v105;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v113, v116);
      ExFreePoolWithTag(v113, 0x74727044u);
    }
    if ( (struct _DEVICE_OBJECT *)qword_140160FB8 == a1 )
    {
      v117 = *(_QWORD *)(v9 + 40);
      if ( v117 )
      {
        if ( *(_QWORD *)(v117 + 408) )
          SendBDDDiagTelemetry(v9);
      }
    }
  }
  else
  {
    v118 = (_DWORD *)ExAllocatePool2(256LL, 64LL, 1953656900LL);
    v119 = v118;
    if ( v118 )
    {
      memset(v118, 0, 0x40uLL);
      v120 = DxgkDiagCalcDuration1us(&v142);
      v119[10] = 0;
      *((_QWORD *)v119 + 4) = 0LL;
      *v119 = 6;
      v119[1] = 64;
      *((_QWORD *)v119 + 1) = 0LL;
      *((_OWORD *)v119 + 1) = 0LL;
      v119[12] = 35;
      v119[13] = (unsigned int)a1 & 0xFFFF00;
      v119[14] = v120;
      v119[15] = v21;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v119, 0x200000000uLL);
      ExFreePoolWithTag(v119, 0x74727044u);
    }
  }
  return (unsigned int)v21;
}
