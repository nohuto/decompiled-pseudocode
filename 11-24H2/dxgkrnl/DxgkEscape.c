/*
 * XREFs of DxgkEscape @ 0x140419AB0
 * Callers:
 *     ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140222D90 (-VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x14000E170 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14000E400 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14000EE70 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F84C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1400241D0 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x14002F4F0 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x14002F5C0 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x140034510 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x14003A164 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1400415B0 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140047050 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x14004F168 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140054D34 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkGetAdapterMiracastInfo @ 0x140061C80 (DxgkGetAdapterMiracastInfo.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x14006371C (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x140063C44 (-IsCurrentConsoleSession@@YAEXZ.c)
 *     Feature_DisplayMux_PostGA_BugBundle_3__private_IsEnabledDeviceUsageNoInline @ 0x14006B45C (Feature_DisplayMux_PostGA_BugBundle_3__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidSchEscape@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_VIDSCH_ESCAPE@@@Z @ 0x14006FA90 (-VidSchEscape@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_VIDSCH_ESCAPE@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x140072248 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledDeviceUsageNoInline @ 0x140072B38 (Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x140187598 (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x140187C64 (-ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x140187EEC (-ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x140188638 (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x140188A38 (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1401894F8 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x14018A314 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x14018AD84 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkpIsDrtEnabled @ 0x14018AED8 (DxgkpIsDrtEnabled.c)
 *     ?InternalEscapeEnabled@@YAEXZ @ 0x14018B96C (-InternalEscapeEnabled@@YAEXZ.c)
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x14018B998 (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14018BCE0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x140199438 (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     ?DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer@@YAJXZ @ 0x1401C47B0 (-DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer@@YAJXZ.c)
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1401D0EB8 (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     OutputDuplGetDebugInfo @ 0x1401E67E8 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1401E68F8 (OutputDuplGetDiagnosticBuffer.c)
 *     ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1401EC4FC (-EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x14022AC64 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x14024CC08 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     DxgkHandleCcdDatabaseRequests @ 0x14026D3B4 (DxgkHandleCcdDatabaseRequests.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1402F95B0 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x140306840 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1403356A0 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1403C1B14 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x140400F4C (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 *     DxgkHandleMiracastEscape @ 0x1404028D8 (DxgkHandleMiracastEscape.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x140405F9C (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x140406900 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140406A48 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x140428678 (DxgkHandleIndirectEscape.c)
 */

__int64 __fastcall DxgkEscape(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_ESCAPE *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r14
  unsigned int *v8; // r15
  char CurrentThreadPreviousMode; // al
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // zf
  D3DKMT_ESCAPETYPE Type; // edx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  char IsDrtEnabled; // al
  int v20; // eax
  UINT PrivateDriverDataSize; // ecx
  UINT v22; // eax
  size_t v23; // rdi
  struct DXGADAPTER *v24; // r14
  __int64 v25; // rcx
  __int64 v26; // r8
  size_t v27; // r8
  void *pPrivateDriverData; // rdx
  char *v29; // rcx
  __int64 v30; // rcx
  D3DKMT_ESCAPETYPE v31; // edx
  unsigned int v32; // eax
  size_t v33; // r8
  void *v34; // rcx
  char *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  char *v42; // rax
  DXGADAPTER *v43; // r13
  struct DXGADAPTER *v44; // rdi
  DXGGLOBAL *v45; // rax
  unsigned int v46; // eax
  DXGPROCESS *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  struct DXGPROCESS *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  UINT v53; // eax
  __int64 v54; // rcx
  const wchar_t *v55; // r9
  __int64 CurrentProcess; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rbx
  DXGDIAGNOSTICS *v62; // rcx
  size_t v63; // r8
  __int64 v64; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGGLOBAL *v71; // rax
  DXGDIAGNOSTICS *v72; // rcx
  void *v73; // rcx
  DXGGLOBAL *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r8
  D3DKMT_HANDLE hAdapter; // eax
  __int64 v78; // r13
  __int64 v79; // rdi
  __int64 v80; // rdx
  unsigned int v81; // ecx
  __int64 v82; // r13
  unsigned int v83; // ecx
  int v84; // ecx
  DXG_GUEST_VIRTUALGPU_VMBUS *v85; // rax
  D3DKMT_HANDLE hDevice; // edx
  D3DKMT_HANDLE v87; // eax
  __int64 v88; // r9
  unsigned int v89; // ecx
  int v90; // ecx
  DXGDEVICE *v91; // rcx
  signed __int64 v92; // rbx
  D3DKMT_HANDLE hContext; // edx
  D3DKMT_HANDLE v94; // eax
  __int64 v95; // r12
  unsigned int v96; // ecx
  int v97; // ecx
  DXGADAPTER *v98; // r14
  unsigned __int64 v99; // rcx
  __int64 v100; // rdx
  size_t v101; // r8
  void *v102; // rcx
  char *v103; // rax
  bool v104; // zf
  struct DXGADAPTER *v105; // rax
  void *v106; // r9
  void *v107; // r9
  __int64 v108; // r8
  __int64 v109; // rcx
  D3DKMT_ESCAPETYPE v110; // edx
  unsigned int v111; // eax
  int v112; // eax
  bool v113; // cf
  DXGADAPTER *v114; // r9
  char v115; // al
  enum _D3DKMT_ESCAPETYPE v116; // edi
  int v117; // r13d
  int v118; // ebx
  int HostProcess; // eax
  int v120; // eax
  char v121; // r9
  unsigned int v122; // ecx
  int v123; // eax
  DXGPROCESS *v124; // rdi
  char IsVmProcessOrVmValidation; // al
  __int64 v126; // r8
  __int64 v127; // rbx
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  unsigned __int64 v129; // rdx
  const wchar_t *v130; // r9
  unsigned __int64 v131; // rdx
  _QWORD *v132; // rbx
  _QWORD *v133; // r8
  unsigned int v134; // eax
  char v135; // al
  char v136; // al
  __int64 v137; // rcx
  char v138; // al
  __int64 v139; // rcx
  char v140; // al
  char v141; // al
  DXGADAPTER *v142; // rbx
  __int64 v143; // r8
  int v144; // eax
  ADAPTER_DISPLAY *v145; // rcx
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  unsigned int v150; // eax
  unsigned __int64 v151; // rdx
  struct DXGADAPTER *v152; // rdx
  DXGGLOBAL *v153; // rcx
  char v154; // r11
  unsigned int v155; // r8d
  unsigned int v156; // eax
  int v157; // eax
  int v158; // eax
  unsigned __int64 v159; // rdx
  __int64 v160; // rax
  const wchar_t *v161; // r9
  unsigned __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  size_t v165; // r8
  void *v166; // rcx
  char *v167; // rax
  unsigned __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // rcx
  __int64 v172; // r8
  char v173; // [rsp+50h] [rbp-7D8h]
  int v174; // [rsp+58h] [rbp-7D0h] BYREF
  __int64 v175; // [rsp+60h] [rbp-7C8h]
  char v176; // [rsp+68h] [rbp-7C0h]
  unsigned __int8 v177[8]; // [rsp+70h] [rbp-7B8h] BYREF
  struct DXGADAPTER *v178[2]; // [rsp+78h] [rbp-7B0h]
  unsigned __int64 v179; // [rsp+88h] [rbp-7A0h] BYREF
  _QWORD v180[3]; // [rsp+90h] [rbp-798h] BYREF
  _D3DKMT_ESCAPE v181; // [rsp+A8h] [rbp-780h] BYREF
  unsigned int v182; // [rsp+C8h] [rbp-760h]
  unsigned __int32 v183; // [rsp+CCh] [rbp-75Ch]
  DXG_GUEST_VIRTUALGPU_VMBUS *v184; // [rsp+D0h] [rbp-758h]
  DXGDEVICE *v185; // [rsp+D8h] [rbp-750h]
  DXGPROCESS *v186; // [rsp+E0h] [rbp-748h] BYREF
  char v187[8]; // [rsp+E8h] [rbp-740h] BYREF
  DXGADAPTER *v188; // [rsp+F0h] [rbp-738h]
  char v189; // [rsp+F8h] [rbp-730h]
  DXGADAPTER *v190; // [rsp+100h] [rbp-728h] BYREF
  int v191; // [rsp+108h] [rbp-720h] BYREF
  int v192; // [rsp+10Ch] [rbp-71Ch] BYREF
  int v193; // [rsp+110h] [rbp-718h] BYREF
  int v194; // [rsp+114h] [rbp-714h] BYREF
  int v195; // [rsp+118h] [rbp-710h] BYREF
  DXGADAPTER *v196; // [rsp+120h] [rbp-708h]
  struct _D3DKMT_VIDSCH_ESCAPE *v197; // [rsp+128h] [rbp-700h] BYREF
  __int64 v198; // [rsp+130h] [rbp-6F8h]
  struct DXGADAPTER *v199; // [rsp+138h] [rbp-6F0h]
  union _LARGE_INTEGER Interval; // [rsp+140h] [rbp-6E8h] BYREF
  int v201; // [rsp+148h] [rbp-6E0h] BYREF
  int v202; // [rsp+14Ch] [rbp-6DCh] BYREF
  int v203; // [rsp+150h] [rbp-6D8h] BYREF
  int v204; // [rsp+154h] [rbp-6D4h] BYREF
  int v205; // [rsp+158h] [rbp-6D0h] BYREF
  unsigned __int8 v206[8]; // [rsp+160h] [rbp-6C8h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v207; // [rsp+168h] [rbp-6C0h] BYREF
  struct _DXGKARG_ESCAPE v208; // [rsp+170h] [rbp-6B8h] BYREF
  unsigned __int64 v209; // [rsp+1A0h] [rbp-688h] BYREF
  int v210; // [rsp+1A8h] [rbp-680h] BYREF
  _BYTE v211[24]; // [rsp+1B0h] [rbp-678h] BYREF
  struct _DXGKARG_ESCAPE v212; // [rsp+1C8h] [rbp-660h] BYREF
  struct _DXGKARG_ESCAPE v213; // [rsp+1F8h] [rbp-630h] BYREF
  _BYTE v214[24]; // [rsp+228h] [rbp-600h] BYREF
  __int64 v215; // [rsp+240h] [rbp-5E8h] BYREF
  int v216; // [rsp+248h] [rbp-5E0h]
  const wchar_t *v217; // [rsp+250h] [rbp-5D8h]
  int *v218; // [rsp+258h] [rbp-5D0h]
  int v219; // [rsp+260h] [rbp-5C8h]
  int *v220; // [rsp+268h] [rbp-5C0h]
  int v221; // [rsp+270h] [rbp-5B8h]
  __int64 v222; // [rsp+278h] [rbp-5B0h]
  int v223; // [rsp+280h] [rbp-5A8h]
  __int64 v224; // [rsp+288h] [rbp-5A0h]
  __int128 v225; // [rsp+290h] [rbp-598h]
  __int128 v226; // [rsp+2A0h] [rbp-588h]
  __int64 v227; // [rsp+2B0h] [rbp-578h] BYREF
  int v228; // [rsp+2B8h] [rbp-570h]
  const wchar_t *v229; // [rsp+2C0h] [rbp-568h]
  int *v230; // [rsp+2C8h] [rbp-560h]
  int v231; // [rsp+2D0h] [rbp-558h]
  int *v232; // [rsp+2D8h] [rbp-550h]
  int v233; // [rsp+2E0h] [rbp-548h]
  __int64 v234; // [rsp+2E8h] [rbp-540h]
  int v235; // [rsp+2F0h] [rbp-538h]
  __int64 v236; // [rsp+2F8h] [rbp-530h]
  __int128 v237; // [rsp+300h] [rbp-528h]
  __int128 v238; // [rsp+310h] [rbp-518h]
  __int64 v239; // [rsp+320h] [rbp-508h] BYREF
  int v240; // [rsp+328h] [rbp-500h]
  const wchar_t *v241; // [rsp+330h] [rbp-4F8h]
  int *v242; // [rsp+338h] [rbp-4F0h]
  int v243; // [rsp+340h] [rbp-4E8h]
  int *v244; // [rsp+348h] [rbp-4E0h]
  int v245; // [rsp+350h] [rbp-4D8h]
  __int64 v246; // [rsp+358h] [rbp-4D0h]
  int v247; // [rsp+360h] [rbp-4C8h]
  __int64 v248; // [rsp+368h] [rbp-4C0h]
  __int128 v249; // [rsp+370h] [rbp-4B8h]
  __int128 v250; // [rsp+380h] [rbp-4A8h]
  __int64 v251; // [rsp+390h] [rbp-498h] BYREF
  int v252; // [rsp+398h] [rbp-490h]
  const wchar_t *v253; // [rsp+3A0h] [rbp-488h]
  int *v254; // [rsp+3A8h] [rbp-480h]
  int v255; // [rsp+3B0h] [rbp-478h]
  int *v256; // [rsp+3B8h] [rbp-470h]
  int v257; // [rsp+3C0h] [rbp-468h]
  __int64 v258; // [rsp+3C8h] [rbp-460h]
  int v259; // [rsp+3D0h] [rbp-458h]
  __int64 v260; // [rsp+3D8h] [rbp-450h]
  __int128 v261; // [rsp+3E0h] [rbp-448h]
  __int128 v262; // [rsp+3F0h] [rbp-438h]
  __int64 v263; // [rsp+400h] [rbp-428h] BYREF
  int v264; // [rsp+408h] [rbp-420h]
  const wchar_t *v265; // [rsp+410h] [rbp-418h]
  int *v266; // [rsp+418h] [rbp-410h]
  int v267; // [rsp+420h] [rbp-408h]
  int *v268; // [rsp+428h] [rbp-400h]
  int v269; // [rsp+430h] [rbp-3F8h]
  __int64 v270; // [rsp+438h] [rbp-3F0h]
  int v271; // [rsp+440h] [rbp-3E8h]
  __int64 v272; // [rsp+448h] [rbp-3E0h]
  __int128 v273; // [rsp+450h] [rbp-3D8h]
  __int128 v274; // [rsp+460h] [rbp-3C8h]
  _BYTE v275[64]; // [rsp+470h] [rbp-3B8h] BYREF
  DXGADAPTER *v276[18]; // [rsp+4B0h] [rbp-378h] BYREF
  __int64 v277; // [rsp+540h] [rbp-2E8h] BYREF
  __int64 v278; // [rsp+548h] [rbp-2E0h]
  __int128 v279; // [rsp+550h] [rbp-2D8h]
  __int64 v280; // [rsp+560h] [rbp-2C8h]
  __int64 v281; // [rsp+568h] [rbp-2C0h]
  union _LARGE_INTEGER LocalTime; // [rsp+570h] [rbp-2B8h] BYREF
  union _LARGE_INTEGER SystemTime; // [rsp+578h] [rbp-2B0h] BYREF
  GUID ActivityId; // [rsp+580h] [rbp-2A8h] BYREF
  _DWORD v285[3]; // [rsp+590h] [rbp-298h] BYREF
  __int128 v286; // [rsp+59Ch] [rbp-28Ch]
  __int128 v287; // [rsp+5ACh] [rbp-27Ch]
  int v288; // [rsp+5BCh] [rbp-26Ch]
  _DWORD v289[2]; // [rsp+5C0h] [rbp-268h] BYREF
  __int128 v290; // [rsp+5C8h] [rbp-260h]
  __int128 v291; // [rsp+5D8h] [rbp-250h]
  __int64 v292; // [rsp+5E8h] [rbp-240h]
  struct _D3DKMT_VIDSCH_ESCAPE v293; // [rsp+5F0h] [rbp-238h] BYREF

  v3 = (_D3DKMT_ESCAPE *)a1;
  v174 = -1;
  v4 = 0LL;
  v175 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v176 = 1;
    v174 = 2016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2016);
  }
  else
  {
    v176 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v174, 2016);
  v185 = 0LL;
  v5 = 0LL;
  v198 = 0LL;
  Current = DXGPROCESS::GetCurrent(v6);
  v186 = Current;
  v8 = (unsigned int *)&v293;
  v197 = &v293;
  memset(&v181, 0, sizeof(v181));
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v173 = CurrentThreadPreviousMode;
  if ( !Current )
  {
    LODWORD(v10) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1478;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v174);
    v13 = v176 == 0;
LABEL_120:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v174);
    return (unsigned int)v10;
  }
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_ESCAPE *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v181, v3, 0x20uLL);
  }
  else
  {
    v181 = *v3;
  }
  Type = v181.Type;
  if ( v181.Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 440LL))() )
      goto LABEL_681;
    Type = v181.Type;
  }
  else if ( v181.Type >= D3DKMT_ESCAPE_WIN32K_START )
  {
    v15 = (*(__int64 (__fastcall **)(_D3DKMT_ESCAPE *))(*((_QWORD *)Current + 11) + 432LL))(&v181);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v174);
    if ( v176 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v174);
    return v15;
  }
  if ( Type != D3DKMT_ESCAPE_VIDMM && Type != D3DKMT_ESCAPE_VIDSCH && (unsigned int)(Type - 28) >= 2
    || (g_OSTestSigningEnabled || (IsDrtEnabled = DxgkpIsDrtEnabled(), Type = v181.Type, IsDrtEnabled)
      ? (v20 = 1)
      : (v20 = 0),
        v20) )
  {
    PrivateDriverDataSize = v181.PrivateDriverDataSize;
    if ( Type == D3DKMT_ESCAPE_VIDMM && v181.PrivateDriverDataSize < 0x840 )
    {
LABEL_676:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v174);
      if ( v176 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v169, (__int64)&EventProfilerExit, v170, v174);
      return 3221225485LL;
    }
    *(_OWORD *)v178 = 0LL;
    v22 = v181.PrivateDriverDataSize;
    if ( Type == D3DKMT_ESCAPE_VIDSCH && v181.PrivateDriverDataSize <= 0x30 )
    {
      v22 = 48;
    }
    else if ( v181.PrivateDriverDataSize > 0x200 )
    {
      v23 = v181.PrivateDriverDataSize;
      v8 = (unsigned int *)operator new[](v181.PrivateDriverDataSize, 0x4B677844u, 258LL);
      v197 = (struct _D3DKMT_VIDSCH_ESCAPE *)v8;
      v24 = (struct DXGADAPTER *)v8;
      v178[0] = (struct DXGADAPTER *)v8;
      PrivateDriverDataSize = v181.PrivateDriverDataSize;
      Type = v181.Type;
LABEL_35:
      if ( !v8 )
      {
        WdLogSingleEntry2(6LL, v23, -1073741801LL);
        WdLogGlobalForLineNumber = 1589;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Out of memory allocating private driver data (size 0x%I64x), returning 0x%I64x",
          v23,
          -1073741801LL,
          0LL,
          0LL,
          0LL);
        if ( v24 )
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v174);
        if ( v176 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v174);
        return 3221225495LL;
      }
      if ( Type == D3DKMT_ESCAPE_VIDSCH )
      {
        memset(v8, 0, v23);
        PrivateDriverDataSize = v181.PrivateDriverDataSize;
      }
      if ( v173 == 1 )
      {
        v27 = PrivateDriverDataSize;
        pPrivateDriverData = v181.pPrivateDriverData;
        v29 = (char *)v181.pPrivateDriverData + PrivateDriverDataSize;
        if ( v29 < v181.pPrivateDriverData || (unsigned __int64)v29 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v8, pPrivateDriverData, v27);
      }
      else
      {
        memmove(v8, v181.pPrivateDriverData, PrivateDriverDataSize);
      }
      v31 = v181.Type;
      v182 = v181.Type;
      if ( (*(_BYTE *)&v181.Flags.0 & 0x40) != 0 && (v181.Type || !v181.hAdapter || (*(_BYTE *)&v181.Flags.0 & 1) != 0) )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1620;
        goto LABEL_57;
      }
      if ( v181.Type <= D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
      {
        if ( v181.Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
        {
          v15 = DxgkpProcessBddFallbackRequest();
          goto LABEL_73;
        }
        switch ( v181.Type )
        {
          case D3DKMT_ESCAPE_VIDMM:
            v46 = *v8;
            if ( *v8 == 5 )
            {
              v15 = DxgEscapeEvict((struct _D3DKMT_VIDMM_ESCAPE *)v8);
              goto LABEL_73;
            }
            if ( v46 == 6 )
            {
              v15 = DxgEscapeEvictByNtHandle((struct _D3DKMT_VIDMM_ESCAPE *)v8);
              goto LABEL_73;
            }
            if ( v46 != 13 )
              break;
            v47 = DXGPROCESS::GetCurrent(v30);
            if ( v47 )
            {
              LODWORD(v10) = DXGPROCESS::EvictAllResources(v47, (struct _D3DKMT_EVICTION_CRITERIA *)(v8 + 2));
            }
            else
            {
              LODWORD(v10) = -1073741811;
              WdLogSingleEntry1(2LL, -1073741811LL);
              WdLogGlobalForLineNumber = 429;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Invalid process context, returning 0x%I64x",
                -1073741811LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
LABEL_117:
            if ( v24 )
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
            goto LABEL_119;
          case D3DKMT_ESCAPE_DRT_TEST:
            if ( v181.PrivateDriverDataSize < 0xC || v181.PrivateDriverDataSize < v8[1] || *v8 != 1484026436 )
            {
              WdLogSingleEntry1(3LL, v181.Type);
              WdLogGlobalForLineNumber = 1676;
LABEL_57:
              if ( v24 )
                DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
              goto LABEL_676;
            }
            if ( !InternalEscapeEnabled() )
            {
              WdLogSingleEntry1(3LL, v181.Type);
              WdLogGlobalForLineNumber = 1681;
LABEL_83:
              if ( v24 )
                DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
              goto LABEL_681;
            }
            v38 = (int)v8[2];
            if ( !(_DWORD)v38 && !v181.hAdapter
              || (unsigned int)v38 <= 0x34 && (v39 = 0x14001093482000LL, _bittest64(&v39, v38))
              || (_DWORD)v38 == 54
              && (unsigned int)Feature_DisplayMux_PostGA_BugBundle_3__private_IsEnabledDeviceUsageNoInline() )
            {
              v15 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v8, 0LL);
              goto LABEL_73;
            }
            v40 = (int)v8[2];
            if ( (unsigned int)v40 <= 0x2F && (v41 = 0xA00800000000LL, _bittest64(&v41, v40))
              || (_DWORD)v40 == 53
              && (unsigned int)Feature_DisplayMux_PostGA_BugBundle_3__private_IsEnabledDeviceUsageNoInline() )
            {
              v15 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v8, 0LL);
              if ( (v15 & 0x80000000) == 0 )
              {
                if ( v173 == 1 )
                {
                  v33 = v181.PrivateDriverDataSize;
                  v34 = v181.pPrivateDriverData;
                  v42 = (char *)v181.pPrivateDriverData + v181.PrivateDriverDataSize;
                  if ( (unsigned __int64)v42 > MmUserProbeAddress || v42 <= v181.pPrivateDriverData )
                    *(_BYTE *)MmUserProbeAddress = 0;
LABEL_71:
                  memmove(v34, v8, v33);
                }
                else
                {
LABEL_72:
                  memmove(v181.pPrivateDriverData, v8, v181.PrivateDriverDataSize);
                }
              }
LABEL_73:
              if ( v24 )
                DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v174);
              if ( v176 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              {
                McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit, v37, v174);
                return v15;
              }
              return v15;
            }
            v31 = v181.Type;
            break;
          case D3DKMT_ESCAPE_DIAGNOSTICS:
          case D3DKMT_ESCAPE_GET_EXTERNAL_DIAGNOSTICS:
            LODWORD(v10) = -1073741811;
            v63 = v181.PrivateDriverDataSize;
            if ( v181.PrivateDriverDataSize < 4 )
              goto LABEL_174;
            v64 = *v8;
            if ( v181.PrivateDriverDataSize != v64 + 4 )
              goto LABEL_174;
            if ( v181.Type == D3DKMT_ESCAPE_DIAGNOSTICS && (_DWORD)v64 )
            {
              DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer();
              Global = DXGGLOBAL::GetGlobal();
              DXGGLOBAL::IterateAdaptersWithCallback(
                (__int64)Global,
                (__int64 (__fastcall *)(_QWORD *, __int64))LogActivePathPresentHistoryCallback,
                0LL,
                4);
              v277 = 0LL;
              v278 = 0LL;
              v279 = 0LL;
              v280 = 0LL;
              v281 = 0LL;
              LocalTime.QuadPart = 0LL;
              SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
              ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
              v277 = 0x400000000ALL;
              LODWORD(v281) = 0;
              v280 = 0LL;
              v278 = 0LL;
              v279 = 0LL;
              CurrentProcessSessionId = PsGetCurrentProcessSessionId(v67, v66, v68, v69);
              DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v277, CurrentProcessSessionId);
              v24 = v178[0];
            }
            v71 = DXGGLOBAL::GetGlobal();
            if ( !v71 )
              goto LABEL_117;
            if ( v182 == 9 )
              v72 = (DXGDIAGNOSTICS *)*((_QWORD *)v71 + 120);
            else
              v72 = (DXGDIAGNOSTICS *)*((_QWORD *)v71 + 121);
            if ( !v72 )
            {
              WdLogSingleEntry2(2LL, v8, 0LL);
              WdLogGlobalForLineNumber = 739;
              v55 = L"Unable to obtain DXGGLOBAL Diagnosibility buffer; pDiagnosticsBuffer = 0x%I64x, pDiagnostics = 0x%I64x";
              goto LABEL_155;
            }
            LODWORD(v10) = DXGDIAGNOSTICS::ReadDiagnostics(v72, (unsigned __int8 *)v8 + 4, v8, -1);
            v63 = v181.PrivateDriverDataSize;
LABEL_174:
            if ( (int)(v10 + 0x80000000) < 0 || (_DWORD)v10 == -2147483643 )
            {
              if ( v173 == 1 )
              {
                v73 = v181.pPrivateDriverData;
                if ( (char *)v181.pPrivateDriverData + v63 > (void *)MmUserProbeAddress
                  || (char *)v181.pPrivateDriverData + v63 <= v181.pPrivateDriverData )
                {
                  *(_BYTE *)MmUserProbeAddress = 0;
                }
                memmove(v73, v8, v63);
              }
              else
              {
                memmove(v181.pPrivateDriverData, v8, v63);
              }
            }
            goto LABEL_117;
          case D3DKMT_ESCAPE_MIRACAST_DISPLAY_REQUEST:
          case D3DKMT_ESCAPE_IDD_REQUEST:
            if ( v181.Type == D3DKMT_ESCAPE_IDD_REQUEST )
              v32 = DxgkHandleIndirectEscape(v181.PrivateDriverDataSize, v8);
            else
              v32 = DxgkHandleMiracastEscape(v181.PrivateDriverDataSize, v8);
            v15 = v32;
            if ( (int)(v32 + 0x80000000) >= 0 && v32 != -2147483643 )
              goto LABEL_73;
            if ( v173 != 1 )
              goto LABEL_72;
            v33 = v181.PrivateDriverDataSize;
            v34 = v181.pPrivateDriverData;
            v35 = (char *)v181.pPrivateDriverData + v181.PrivateDriverDataSize;
            if ( (unsigned __int64)v35 > MmUserProbeAddress || v35 <= v181.pPrivateDriverData )
              *(_BYTE *)MmUserProbeAddress = 0;
            goto LABEL_71;
          case D3DKMT_ESCAPE_FORCE_BDDFALLBACK_HEADLESS:
            if ( !g_OSTestSigningEnabled )
              goto LABEL_83;
            if ( v181.PrivateDriverDataSize != 1 )
              goto LABEL_57;
            byte_140160D1B = *(_BYTE *)v8;
LABEL_143:
            if ( v24 )
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v174);
            if ( v176 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v51, (__int64)&EventProfilerExit, v52, v174);
            return 0LL;
          case D3DKMT_ESCAPE_REQUEST_MACHINE_CRASH:
            if ( v181.PrivateDriverDataSize != 24 )
              goto LABEL_57;
            if ( v24 )
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v174);
            if ( v176 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v48, (__int64)&EventProfilerExit, v49, v174);
            return 3221225473LL;
          case D3DKMT_ESCAPE_SOFTGPU_ENABLE_DISABLE_HMD:
            if ( !g_OSTestSigningEnabled )
              goto LABEL_83;
            if ( v181.PrivateDriverDataSize != 200 )
              goto LABEL_57;
            v50 = DXGPROCESS::GetCurrent(v30);
            if ( !v50 )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 1818;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Invalid process context",
                1818LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_57;
            }
            DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v214, v50);
            DXGUSERCRIT::Acquire((DXGUSERCRIT *)v214, 1u);
            v206[0] = 0;
            ActivityId = 0LL;
            EtwActivityIdControl(3u, &ActivityId);
            DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x2Eu, 0, &v207, v206);
            v15 = DxgkEnableDisableTargetAsHMD(
                    (struct _D3DKMT_SOFTGPU_LUID_TARGET *)v8,
                    v8[48],
                    *((_BYTE *)v8 + 196),
                    v207);
            if ( v206[0] )
              DisplayScenarioContextDissociate(&v207);
            DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v214);
            goto LABEL_73;
          case D3DKMT_ESCAPE_LOG_CODEPOINT_PACKET:
            if ( v181.PrivateDriverDataSize != 16 )
              goto LABEL_57;
            v184 = 0LL;
            DxgkLogCodePointPacket(*v8, v8[1], v8[2], v8[3], 0LL);
            goto LABEL_143;
          case D3DKMT_ESCAPE_LOG_USERMODE_DAIG_PACKET:
            if ( v181.PrivateDriverDataSize < 0x30 )
              goto LABEL_57;
            v53 = v8[1];
            if ( v181.PrivateDriverDataSize < v53 )
              goto LABEL_57;
            if ( v53 < 0x400 )
            {
              v10 = (__int64)DXGGLOBAL::GetGlobal();
              if ( v10 )
              {
                CurrentProcess = PsGetCurrentProcess(v54);
                *((_OWORD *)v8 + 1) = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
                v8[9] &= ~0x80000000;
                v8[9] ^= (v8[9] ^ PsGetCurrentProcessSessionId(v58, v57, v59, v60)) & 0x7FFFFFFF;
                v8[8] = (unsigned int)PsGetCurrentThreadId();
                v61 = MEMORY[0xFFFFF78000000320];
                v180[1] = MEMORY[0xFFFFF78000000320];
                *((_QWORD *)v8 + 1) = v61 * KeQueryTimeIncrement();
                v62 = *(DXGDIAGNOSTICS **)(v10 + 968);
                if ( v62 )
                {
                  LODWORD(v10) = DXGDIAGNOSTICS::WriteDiagnosticEntry(v62, (struct _DXGK_DIAG_HEADER *)v8);
                }
                else
                {
                  WdLogSingleEntry2(2LL, v8, v10);
                  WdLogGlobalForLineNumber = 11986;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000LL,
                    0xFFFFFFFFLL,
                    L"Unable to obtain DXGGLOBAL Diagnosibility buffer; i_pHeader = 0x%I64x, DXGGLOBAL::m_pDxgGlobal = 0x%I64x",
                    (__int64)v8,
                    v10,
                    0LL,
                    0LL,
                    0LL);
                  LODWORD(v10) = -1073741436;
                }
                v24 = v178[0];
              }
              else
              {
                WdLogSingleEntry1(2LL, v8);
                WdLogGlobalForLineNumber = 11963;
                v55 = L"Unable to obtain DXGGLOBAL singleton; pKmHeader = 0x%I64x";
LABEL_155:
                DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v55, (__int64)v8, 0LL, 0LL, 0LL, 0LL);
                LODWORD(v10) = -1073741436;
              }
            }
            else
            {
              WdLogSingleEntry2(2LL, v53, 1024LL);
              WdLogGlobalForLineNumber = 11956;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"User mode packet size of 0x%I64x is bigger than max allowed (0x%I64x)",
                v8[1],
                1024LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v10) = -1073741811;
            }
            goto LABEL_117;
          case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS|D3DKMT_ESCAPE_TDRDBGCTRL:
            if ( v181.PrivateDriverDataSize < 4 )
              goto LABEL_57;
            v15 = DxgkHandleCcdDatabaseRequests(*v8, v181.PrivateDriverDataSize, (__int64)v8);
            goto LABEL_73;
          default:
            break;
        }
      }
      v43 = 0LL;
      v196 = 0LL;
      v190 = 0LL;
      v199 = 0LL;
      if ( v31 == D3DKMT_ESCAPE_BDD_FALLBACK )
      {
        v44 = 0LL;
        v199 = 0LL;
        if ( IsCurrentConsoleSession() || IsCurrentProcessAdmin() )
        {
          if ( (unsigned int)Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledDeviceUsageNoInline() )
          {
            v45 = DXGGLOBAL::GetGlobal();
            v44 = DXGGLOBAL::ReferenceBddFallbackAdapter(v45, &v179);
            v199 = v44;
          }
          else
          {
            v74 = DXGGLOBAL::GetGlobal();
            DXGGLOBAL::ReferenceBddFallbackAdapter(v74, &v179);
          }
          v24 = v178[0];
        }
        if ( !v44 )
        {
          if ( v24 )
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
          if ( v178[1] && _InterlockedExchangeAdd64((volatile signed __int64 *)v178[1] + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v178[1] + 2), v178[1]);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v174);
          if ( v176 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v75, (__int64)&EventProfilerExit, v76, v174);
          return 3221226021LL;
        }
        v178[1] = v44;
      }
      else
      {
        v44 = v178[1];
      }
      v184 = v44;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v211, v186);
      hAdapter = v181.hAdapter;
      v183 = v181.hAdapter;
      if ( !v181.hAdapter )
      {
LABEL_218:
        if ( !v43 )
        {
          LODWORD(v10) = -1073741811;
          WdLogSingleEntry2(3LL, hAdapter, -1073741811LL);
          WdLogGlobalForLineNumber = 1951;
          DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v211);
          if ( v24 )
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
          v85 = v184;
LABEL_288:
          if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v178[1] + 2), v178[1]);
LABEL_119:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v174);
          v13 = v176 == 0;
          goto LABEL_120;
        }
        hDevice = v181.hDevice;
        if ( !v181.hDevice )
        {
          v91 = v185;
          goto LABEL_240;
        }
        v87 = (v181.hDevice >> 6) & 0xFFFFFF;
        if ( v87 < *((_DWORD *)v186 + 74) )
        {
          v88 = 16LL * v87 + *((_QWORD *)v186 + 35);
          v89 = *(_DWORD *)(v88 + 8);
          if ( v181.hDevice >> 30 == ((v89 >> 5) & 3) && (v89 & 0x2000) == 0 )
          {
            v90 = v89 & 0x1F;
            if ( v90 )
            {
              if ( v90 == 3 )
              {
                v91 = *(DXGDEVICE **)v88;
                goto LABEL_230;
              }
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 318;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Handle type mismatch",
                318LL,
                0LL,
                0LL,
                0LL,
                0LL);
              hDevice = v181.hDevice;
            }
          }
        }
        v91 = 0LL;
LABEL_230:
        v185 = v91;
        if ( !v91 || v43 != *(DXGADAPTER **)(*((_QWORD *)v91 + 2) + 16LL) && v43 != *((DXGADAPTER **)v91 + 237) )
        {
          WdLogSingleEntry2(3LL, v43, hDevice);
          WdLogGlobalForLineNumber = 1968;
LABEL_234:
          DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v211);
          if ( v24 )
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
          if ( !v44 )
            goto LABEL_676;
          v92 = _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 3, 0xFFFFFFFFFFFFFFFFuLL);
          goto LABEL_674;
        }
LABEL_240:
        hContext = v181.hContext;
        if ( !v181.hContext )
          goto LABEL_253;
        v94 = (v181.hContext >> 6) & 0xFFFFFF;
        if ( v94 < *((_DWORD *)v186 + 74) )
        {
          v95 = *((_QWORD *)v186 + 35) + 16LL * v94;
          v96 = *(_DWORD *)(v95 + 8);
          if ( v181.hContext >> 30 == ((v96 >> 5) & 3) && (v96 & 0x2000) == 0 )
          {
            v97 = v96 & 0x1F;
            if ( v97 )
            {
              if ( v97 == 7 )
              {
                v5 = *(_QWORD *)v95;
                goto LABEL_248;
              }
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 318;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Handle type mismatch",
                318LL,
                0LL,
                0LL,
                0LL,
                0LL);
              hContext = v181.hContext;
            }
          }
        }
        v5 = 0LL;
LABEL_248:
        v198 = v5;
        v91 = v185;
        if ( !v5 || !v185 || v185 != *(DXGDEVICE **)(v5 + 16) )
        {
          WdLogSingleEntry3(3LL, v43, v185, hContext);
          WdLogGlobalForLineNumber = 1991;
          goto LABEL_234;
        }
LABEL_253:
        if ( v91 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v91 + 8);
          v43 = *(DXGADAPTER **)(*((_QWORD *)v91 + 2) + 16LL);
          v196 = v43;
        }
        if ( v5 )
          _InterlockedIncrement64((volatile signed __int64 *)(v5 + 32));
        v184 = (DXGADAPTER *)((char *)v43 + 24);
        _InterlockedIncrement64((volatile signed __int64 *)v43 + 3);
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v211);
        if ( *((_DWORD *)v43 + 570) >= 0x5023u )
        {
          if ( (*(_BYTE *)&v181.Flags.0 & 0x10) != 0 || (v181.Flags.Value & 0xFFFFFF00) != 0 )
          {
            WdLogSingleEntry1(3LL, v43);
            WdLogGlobalForLineNumber = 2016;
            goto LABEL_670;
          }
          if ( (*(_BYTE *)&v181.Flags.0 & 0x20) != 0 )
          {
            WdLogSingleEntry1(3LL, v43);
            WdLogGlobalForLineNumber = 2021;
LABEL_670:
            if ( v178[0] )
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v178[0]);
            if ( !v178[1] )
              goto LABEL_676;
            v92 = _InterlockedExchangeAdd64((volatile signed __int64 *)v178[1] + 3, 0xFFFFFFFFFFFFFFFFuLL);
LABEL_674:
            if ( v92 == 1 )
              DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v178[1] + 2), v178[1]);
            goto LABEL_676;
          }
        }
        v98 = v43;
        v180[2] = v43;
        v180[0] = v185;
        v209 = 0LL;
        LODWORD(v10) = DxgkpGetPairingAdapters(v43, 0, &v190, &v209, 0LL, 0LL, 0);
        if ( (int)v10 >= 0 )
          DXGADAPTER::ReleaseReference(v190);
        if ( v181.Type != D3DKMT_ESCAPE_VIDMM )
        {
          if ( v181.Type == D3DKMT_ESCAPE_DRT_TEST )
          {
            v99 = (int)v8[2];
            if ( (unsigned int)v99 <= 0x2E )
            {
              v100 = 0x512744204000LL;
              if ( _bittest64(&v100, v99) )
              {
                if ( (_DWORD)v99 == 33 )
                {
                  LODWORD(v10) = -1073741823;
                }
                else if ( (_DWORD)v99 == 32 )
                {
                  LODWORD(v10) = -1073741823;
                }
                else
                {
                  LODWORD(v10) = DxgkDrtTestEscape(v43, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v8, 0LL);
                  if ( (int)v10 >= 0 )
                  {
                    if ( v173 == 1 )
                    {
                      v101 = v181.PrivateDriverDataSize;
                      v102 = v181.pPrivateDriverData;
                      v103 = (char *)v181.pPrivateDriverData + v181.PrivateDriverDataSize;
                      if ( (unsigned __int64)v103 > MmUserProbeAddress || v103 <= v181.pPrivateDriverData )
                        *(_BYTE *)MmUserProbeAddress = 0;
                      memmove(v102, v8, v101);
                    }
                    else
                    {
                      memmove(v181.pPrivateDriverData, v8, v181.PrivateDriverDataSize);
                    }
                  }
                }
                if ( v5 )
                  DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
                ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v180);
                v104 = _InterlockedExchangeAdd64((volatile signed __int64 *)v184, 0xFFFFFFFFFFFFFFFFuLL) == 1;
                goto LABEL_283;
              }
            }
          }
LABEL_311:
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v276, v43, 0LL);
          COREACCESS::COREACCESS((COREACCESS *)v275, v199);
          v182 = 0;
          v188 = v43;
          v189 = v108;
          v109 = (unsigned int)v181.Type;
          v183 = v181.Type;
          if ( v181.Type == D3DKMT_ESCAPE_BDD_FALLBACK )
          {
            COREACCESS::AcquireShared((COREACCESS *)v275, 0LL);
            v110 = v181.Type;
            v183 = v181.Type;
            goto LABEL_341;
          }
          if ( (*(_BYTE *)&v181.Flags.0 & 1) != 0 )
          {
            LOBYTE(v111) = 0;
            if ( v181.Type == D3DKMT_ESCAPE_DRIVERPRIVATE || v181.Type == D3DKMT_ESCAPE_VIDSCH && *v8 == 3 )
              LOBYTE(v111) = 1;
            v111 = (unsigned __int8)v111;
            if ( *((_QWORD *)v43 + 391) != v108 )
              v111 = 1;
            v182 = v111;
            LODWORD(v10) = COREADAPTERACCESS::AcquireExclusive(
                             (__int64)v276,
                             (unsigned int)(unsigned __int8)v111 + 2,
                             2u);
            if ( (int)v10 < 0 )
              goto LABEL_657;
            if ( !(_BYTE)v182 )
            {
              v109 = *((_QWORD *)v43 + 391);
              if ( v109 )
                ADAPTER_RENDER::FlushScheduler(v109, 2, 0xFFFFFFFFLL, 0);
            }
            v182 = 1;
            goto LABEL_325;
          }
          if ( v181.Type != D3DKMT_ESCAPE_DRT_TEST
            || v8[2] != 23
            || (v112 = v8[3] - 2, v113 = v8[3] == 2, v177[0] = 1, !v113 && v112 != 1) )
          {
            v177[0] = v108;
          }
          if ( v181.Type == D3DKMT_ESCAPE_DRIVERPRIVATE )
          {
            v109 = (unsigned int)*DXGADAPTER::GetAdapterType(v43, &v210);
            if ( (v109 & 0x10) != 0
              || *(_BYTE *)&v181.Flags.0 < 0
              || *((_DWORD *)v43 + 570) >= 0x5023u && (*(_BYTE *)&v181.Flags.0 & 8) != 0 )
            {
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v187);
              if ( *((_DWORD *)v43 + 50) == 1 )
              {
LABEL_325:
                v110 = v181.Type;
                v183 = v181.Type;
                goto LABEL_341;
              }
              LODWORD(v10) = -1073741130;
LABEL_657:
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v187);
              COREACCESS::~COREACCESS((COREACCESS *)v275, v168);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v276);
              if ( v5 )
                DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v180);
              if ( v98 )
                DXGADAPTER::ReleaseReference(v98);
              if ( v178[0] )
                DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v178[0]);
              if ( v178[1] )
                DXGADAPTER::ReleaseReference(v178[1]);
              goto LABEL_119;
            }
          }
          if ( v177[0] )
          {
            v110 = v183;
          }
          else
          {
            LODWORD(v10) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v276, 0LL);
            if ( (int)v10 < 0 )
              goto LABEL_657;
            v110 = v181.Type;
            v183 = v181.Type;
          }
LABEL_341:
          if ( v181.hDevice )
          {
            if ( *((_DWORD *)v185 + 152) != 1 )
            {
              LODWORD(v10) = -1073741130;
              goto LABEL_657;
            }
            v110 = v181.Type;
            v183 = v181.Type;
          }
          LOBYTE(v108) = 1;
          v177[0] = 1;
          if ( v110 == D3DKMT_ESCAPE_DRIVERPRIVATE && (*(_BYTE *)&v181.Flags.0 & 0x40) != 0 )
          {
            if ( !v190 )
            {
LABEL_348:
              LODWORD(v10) = -1073741811;
              goto LABEL_657;
            }
            LODWORD(v10) = DxgkpDriverKnownEscape(v186, v190, v8, v181.PrivateDriverDataSize, v177);
            if ( (int)v10 < 0 )
              goto LABEL_649;
            v110 = v181.Type;
            v183 = v181.Type;
            v108 = v177[0];
          }
          v114 = v190;
          if ( v190 && *((_BYTE *)v190 + 209) )
          {
            v43 = v190;
            v196 = v190;
            v115 = 0;
            if ( v110 == D3DKMT_ESCAPE_DRIVERPRIVATE && (_BYTE)v108
              || (unsigned int)v110 <= D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION
              && (v109 = 805306378LL, _bittest((const int *)&v109, v110)) )
            {
              v115 = 1;
            }
            if ( v110 == D3DKMT_ESCAPE_DRT_TEST && v8[2] == 49 )
            {
              LODWORD(v10) = DxgkDrtTestEscape(v190, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v8, v276);
              if ( (int)v10 >= 0 )
              {
                v116 = v181.Type;
                v114 = v190;
                goto LABEL_364;
              }
LABEL_649:
              v121 = v173;
LABEL_650:
              if ( (int)v10 >= 0 )
              {
LABEL_651:
                if ( v121 == 1 )
                {
                  v165 = v181.PrivateDriverDataSize;
                  v166 = v181.pPrivateDriverData;
                  v167 = (char *)v181.pPrivateDriverData + v181.PrivateDriverDataSize;
                  if ( (unsigned __int64)v167 > MmUserProbeAddress || v167 <= v181.pPrivateDriverData )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  memmove(v166, v8, v165);
                }
                else
                {
                  memmove(v181.pPrivateDriverData, v8, v181.PrivateDriverDataSize);
                }
              }
              goto LABEL_657;
            }
            if ( v115 )
            {
              v116 = v183;
LABEL_364:
              v184 = (DXGADAPTER *)((char *)v114 + 4664);
              if ( v5 )
                v182 = *(_DWORD *)(v5 + 28);
              else
                v182 = 0;
              if ( v185 )
                v117 = *((_DWORD *)v185 + 118);
              else
                v117 = 0;
              v118 = *((_DWORD *)v114 + 1188);
              HostProcess = DXGPROCESS::GetHostProcess(v186);
              v120 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                       v184,
                       HostProcess,
                       v118,
                       v117,
                       v182,
                       v116,
                       v181.Flags,
                       v181.PrivateDriverDataSize,
                       (unsigned __int8 *)v8);
              v10 = v120;
              if ( v120 < 0 )
              {
                WdLogSingleEntry1(2LL, v120);
                WdLogGlobalForLineNumber = 2393;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Paravirtualized escape failed: 0x%I64x",
                  v10,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              goto LABEL_649;
            }
          }
          switch ( v110 )
          {
            case D3DKMT_ESCAPE_DRIVERPRIVATE:
              memset(&v208, 0, sizeof(v208));
              if ( !(_BYTE)v108 )
              {
                LODWORD(v10) = 0;
                v121 = v173;
                goto LABEL_651;
              }
              if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_ESCAPE *))v43 + 74) == DXGADAPTER::DefaultDdiEscape )
              {
                WdLogSingleEntry2(3LL, v43, -1073741637LL);
                WdLogGlobalForLineNumber = 2470;
                LODWORD(v10) = -1073741637;
                goto LABEL_657;
              }
              if ( !v181.PrivateDriverDataSize || !v181.pPrivateDriverData )
              {
                LODWORD(v10) = -1073741811;
                WdLogSingleEntry3(3LL, v181.PrivateDriverDataSize, v181.pPrivateDriverData, -1073741811LL);
                WdLogGlobalForLineNumber = 2461;
                goto LABEL_657;
              }
              if ( v185 )
                v208.hDevice = (HANDLE)*((_QWORD *)v185 + 77);
              if ( v5 )
                v208.hContext = *(HANDLE *)(v5 + 184);
              else
                v208.hContext = 0LL;
              v208.Flags.Value = v181.Flags.Value;
              if ( (*((_DWORD *)v43 + 111) & 8) != 0 || *((_DWORD *)v43 + 105) != 4098 )
                goto LABEL_394;
              if ( v181.PrivateDriverDataSize < 0xC )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 687;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Driver private driver escape called with a buffer that is too small, failing the escape request.",
                  687LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              else
              {
                v122 = v8[2] & 0xFFFFFF00;
                if ( ((v122 - 16778752) & 0xFFFFFCFF) != 0 || v122 == 16779520 )
                {
                  v123 = 1;
                  goto LABEL_392;
                }
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 674;
              }
              v123 = 0;
LABEL_392:
              if ( !v123 )
              {
                LODWORD(v10) = -1073741637;
                goto LABEL_657;
              }
LABEL_394:
              if ( *(_BYTE *)&v181.Flags.0 < 0 )
              {
                LODWORD(v10) = -1073741637;
                WdLogSingleEntry1(2LL, -1073741637LL);
                WdLogGlobalForLineNumber = 2431;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Driver Common Escape is block for (0x%I64x)",
                  -1073741637LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              else
              {
                v124 = v186;
                IsVmProcessOrVmValidation = DXGPROCESS::IsVmProcessOrVmValidation(v186, v43);
                v208.Flags.Value = v208.Flags.Value & 0xFFFFFFDF | (32 * (IsVmProcessOrVmValidation & 1));
                v208.PrivateDriverDataSize = v181.PrivateDriverDataSize;
                v208.pPrivateDriverData = v8;
                v127 = *((_QWORD *)v43 + 391);
                if ( v127 )
                {
                  KeEnterCriticalRegion();
                  ExAcquirePushLockSharedEx(v127 + 72, 0LL);
                  _InterlockedIncrement((volatile signed __int32 *)(v127 + 88));
                  RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(v124, *((_DWORD *)v43 + 60));
                  if ( RenderAdapterInfo )
                    v208.hKmdProcessHandle = (HANDLE)*((_QWORD *)RenderAdapterInfo + 6);
                  _InterlockedDecrement((volatile signed __int32 *)(v127 + 88));
                  ExReleasePushLockSharedEx(v127 + 72, 0LL);
                  KeLeaveCriticalRegion();
                }
                LODWORD(v10) = DXGADAPTER::DdiEscape(v43, &v208, v126);
              }
              goto LABEL_649;
            case D3DKMT_ESCAPE_VIDMM:
              if ( !v190 )
              {
                WdLogSingleEntry2(2LL, v43, -1073741637LL);
                WdLogGlobalForLineNumber = 2514;
                v130 = L"Try to call D3DKMT_ESCAPE_VIDMM on a display only adapter 0x%I64x (Status = 0x%I64x)!";
                goto LABEL_410;
              }
              if ( v185 )
                v4 = *((_QWORD *)v185 + 99);
              if ( *v8 != 16 )
              {
                LODWORD(v10) = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v190 + 391) + 760LL) + 8LL)
                                                                                                  + 24LL))(
                                 *(_QWORD *)(*((_QWORD *)v190 + 391) + 768LL),
                                 v4,
                                 v8,
                                 (unsigned __int8)v182);
                goto LABEL_649;
              }
              v132 = v8 + 6;
              LODWORD(v10) = DxgkpEscapeVidMmDelayExecution(v185, v8[3], v8[2], v8[4], (unsigned __int64 *)v8 + 3);
              v121 = v173;
              if ( (int)v10 >= 0 )
              {
                v184 = (DXG_GUEST_VIRTUALGPU_VMBUS *)v181.pPrivateDriverData;
                if ( v173 == 1 )
                {
                  v133 = (char *)v181.pPrivateDriverData + 24;
                  if ( (char *)v181.pPrivateDriverData + 24 >= (void *)MmUserProbeAddress )
                    v133 = (_QWORD *)MmUserProbeAddress;
                  *v133 = *v132;
                }
                else
                {
                  *((_QWORD *)v181.pPrivateDriverData + 3) = *v132;
                }
              }
              goto LABEL_650;
            case D3DKMT_ESCAPE_TDRDBGCTRL:
              if ( !v181.pPrivateDriverData )
              {
LABEL_445:
                LODWORD(v10) = TdrDbgCtrl(0);
                goto LABEL_649;
              }
              if ( v181.PrivateDriverDataSize < 4 )
                goto LABEL_348;
              break;
            case D3DKMT_ESCAPE_VIDSCH:
              if ( !v190 )
              {
                WdLogSingleEntry2(2LL, v43, -1073741637LL);
                WdLogGlobalForLineNumber = 2576;
                v130 = L"Try to call D3DKMT_ESCAPE_VIDSCH on a display only adapter 0x%I64x (Status = 0x%I64x)!";
                goto LABEL_410;
              }
              if ( *((_BYTE *)v190 + 209) )
                goto LABEL_411;
              if ( *v8 == 2 )
              {
                LODWORD(v10) = -1073741811;
                goto LABEL_657;
              }
              if ( *v8 != 3 )
              {
                LODWORD(v10) = VIDSCH_EXPORT::VidSchEscape(
                                 *(VIDSCH_EXPORT **)(*((_QWORD *)v190 + 391) + 736LL),
                                 *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)v190 + 391) + 744LL),
                                 (struct _D3DKMT_VIDSCH_ESCAPE *)v8);
                goto LABEL_649;
              }
              if ( !v182 )
                goto LABEL_348;
              v134 = 5000000;
              if ( v8[1] < 0x4C4B40 )
                v134 = v8[1];
              Interval.QuadPart = -(__int64)v134;
              KeDelayExecutionThread(0, 0, &Interval);
              LODWORD(v10) = 0;
              v121 = v173;
              goto LABEL_651;
            case D3DKMT_ESCAPE_DEVICE:
              if ( v181.PrivateDriverDataSize < 0xC || !v185 )
                goto LABEL_348;
              LODWORD(v10) = DXGDEVICE::Escape((ADAPTER_RENDER **)v185, (struct _D3DKMT_DEVICE_ESCAPE *)v8);
              goto LABEL_649;
            case D3DKMT_ESCAPE_DMM:
              if ( !*((_QWORD *)v43 + 390) )
              {
                WdLogSingleEntry2(2LL, v43, -1073741637LL);
                WdLogGlobalForLineNumber = 2486;
                v130 = L"Try to call D3DKMT_ESCAPE_DMM on a render only adapter 0x%I64x (Status = 0x%I64x)!";
                goto LABEL_410;
              }
              if ( v181.PrivateDriverDataSize >= 0x80 )
              {
                v129 = *((_QWORD *)v8 + 1);
                if ( v129 <= 0x19000 && (v181.PrivateDriverDataSize == v129 + 127 || !v129) )
                {
                  LODWORD(v10) = DmmEscape(v43, (struct _D3DKMT_DMM_ESCAPE_INTERNAL *const)v8);
                  goto LABEL_649;
                }
              }
              goto LABEL_348;
            case D3DKMT_ESCAPE_DEBUG_SNAPSHOT:
              if ( v181.PrivateDriverDataSize < 8 )
              {
                LODWORD(v10) = -1073741811;
                goto LABEL_657;
              }
              LODWORD(v10) = DxgDbgTakeSnapshot(v8 + 1, v181.PrivateDriverDataSize - 4, v8);
              goto LABEL_649;
            case D3DKMT_ESCAPE_DRT_TEST:
              LODWORD(v10) = DxgkDrtTestEscape(v43, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v8, v276);
              goto LABEL_649;
            case D3DKMT_ESCAPE_OUTPUTDUPL_SNAPSHOT:
              if ( !*((_QWORD *)v43 + 390) )
              {
                WdLogSingleEntry2(2LL, v43, -1073741637LL);
                WdLogGlobalForLineNumber = 2794;
                v130 = L"Try to call D3DKMT_ESCAPE_OUTPUTDUPL_SNAPSHOT on a render only adapter 0x%I64x (Status = 0x%I64x)!";
                goto LABEL_410;
              }
              if ( v181.PrivateDriverDataSize < 0x18 )
              {
                LODWORD(v10) = -1073741811;
                goto LABEL_657;
              }
              if ( v181.PrivateDriverDataSize != *v8 )
              {
                LODWORD(v10) = -1073741811;
                goto LABEL_657;
              }
              LODWORD(v10) = OutputDuplGetDebugInfo(v43, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)v8);
              goto LABEL_649;
            case D3DKMT_ESCAPE_OUTPUTDUPL_DIAGNOSTICS:
              if ( !*((_QWORD *)v43 + 390) )
              {
                WdLogSingleEntry2(2LL, v43, -1073741637LL);
                WdLogGlobalForLineNumber = 2827;
                v130 = L"Try to call D3DKMT_ESCAPE_OUTPUTDUPL_DIAGNOSTICS on a render only adapter 0x%I64x (Status = 0x%I64x)!";
                goto LABEL_410;
              }
              if ( v181.PrivateDriverDataSize < 8 )
              {
                LODWORD(v10) = -1073741811;
                goto LABEL_657;
              }
              if ( v181.PrivateDriverDataSize != v8[1] + 8LL )
              {
                LODWORD(v10) = -1073741811;
                goto LABEL_657;
              }
              LODWORD(v10) = OutputDuplGetDiagnosticBuffer(v43, (__int64)v8);
              goto LABEL_649;
            case D3DKMT_ESCAPE_BDD_PNP:
              v144 = *((_DWORD *)v43 + 111);
              if ( (v144 & 0x20) != 0 && (v144 & 4) == 0 )
              {
                *((_DWORD *)&v213.Flags + 1) = 0;
                memset(&v213.PrivateDriverDataSize + 1, 0, 20);
                v213.hDevice = 0LL;
                v213.Flags.Value = v181.Flags.Value;
                v213.PrivateDriverDataSize = v181.PrivateDriverDataSize;
                v213.pPrivateDriverData = v8;
                LODWORD(v10) = DXGADAPTER::DdiEscape(v43, &v213, v108);
                goto LABEL_649;
              }
              LODWORD(v10) = -1071775742;
              goto LABEL_657;
            case D3DKMT_ESCAPE_BDD_FALLBACK:
              v142 = v199;
              if ( !DXGADAPTER::IsBddFallbackDriver(v199) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2856;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"pBddAdapter->IsBddFallbackDriver()",
                  2856LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              *((_DWORD *)&v212.Flags + 1) = 0;
              memset(&v212.PrivateDriverDataSize + 1, 0, 20);
              v212.hDevice = 0LL;
              v212.Flags.Value = v181.Flags.Value;
              v212.PrivateDriverDataSize = v181.PrivateDriverDataSize;
              v212.pPrivateDriverData = v8;
              LODWORD(v10) = DXGADAPTER::DdiEscape(v142, &v212, v143);
              goto LABEL_649;
            case D3DKMT_ESCAPE_ACTIVATE_SPECIFIC_DIAG:
              if ( v181.PrivateDriverDataSize != 8 )
              {
                LODWORD(v10) = -1073741811;
                goto LABEL_657;
              }
              if ( !*v8 )
              {
                *((_BYTE *)DXGGLOBAL::GetGlobal() + 1344) = v8[1] != 0;
                LODWORD(v10) = 0;
                v121 = v173;
                goto LABEL_651;
              }
              if ( *v8 != 15 )
              {
                WdLogSingleEntry1(1LL, (int)*v8);
                WdLogGlobalForLineNumber = 2923;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"%I64d is not an escape type that needs (de)activation",
                  (int)*v8,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                LODWORD(v10) = -1073741811;
                goto LABEL_649;
              }
              v145 = (ADAPTER_DISPLAY *)*((_QWORD *)v43 + 390);
              if ( v145 )
              {
                LODWORD(v10) = ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(v145, v8[1]);
                goto LABEL_649;
              }
              WdLogSingleEntry2(2LL, v43, -1073741637LL);
              WdLogGlobalForLineNumber = 2907;
              v130 = L"Try to activate D3DKMT_ESCAPE_MODES_PRUNED_OUT on a render only adapter 0x%I64x (Status = 0x%I64x)!";
              goto LABEL_410;
            case D3DKMT_ESCAPE_MODES_PRUNED_OUT:
              if ( !*((_QWORD *)v43 + 390) )
              {
                WdLogSingleEntry2(2LL, v43, -1073741637LL);
                WdLogGlobalForLineNumber = 2936;
                v130 = L"Try to call D3DKMT_ESCAPE_MODES_PRUNED_OUT on a render only adapter 0x%I64x (Status = 0x%I64x)!";
LABEL_410:
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  v130,
                  (__int64)v43,
                  -1073741637LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_411;
              }
              if ( v181.PrivateDriverDataSize < 8 )
              {
                LODWORD(v10) = -1073741811;
                goto LABEL_657;
              }
              if ( v181.PrivateDriverDataSize < 44 * (unsigned __int64)v8[1] + 8 )
              {
                LODWORD(v10) = -1073741811;
                goto LABEL_657;
              }
              LODWORD(v10) = ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
                               *((ADAPTER_DISPLAY **)v43 + 390),
                               (struct _D3DKMT_DISPLAYMODELIST *)v8);
              goto LABEL_649;
            case D3DKMT_ESCAPE_WHQL_INFO:
              if ( v181.PrivateDriverDataSize < 4 )
              {
                LODWORD(v10) = -1073741811;
                goto LABEL_657;
              }
              *v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 27) + 64LL) + 2744LL);
              LODWORD(v10) = 0;
              v121 = v173;
              goto LABEL_651;
            case D3DKMT_ESCAPE_BRIGHTNESS:
              if ( (*(_BYTE *)&v181.Flags.0 & 1) == 0 )
              {
                LODWORD(v10) = -1073741811;
                goto LABEL_657;
              }
              if ( v181.PrivateDriverDataSize < 0x60C )
              {
                LODWORD(v10) = -1073741811;
                goto LABEL_657;
              }
              if ( DXGPROCESS::IsRemoteConnection(v186) )
              {
                LODWORD(v10) = -1073741790;
                WdLogSingleEntry2(3LL, v43, -1073741790LL);
                WdLogGlobalForLineNumber = 2994;
              }
              else
              {
                LODWORD(v10) = DpiBrightnessEscape(
                                 *((struct _DEVICE_OBJECT **)v43 + 27),
                                 (struct _D3DKMT_BRIGHTNESS_INFO *)v8);
              }
              goto LABEL_649;
            case D3DKMT_ESCAPE_EDID_CACHE:
              if ( v181.PrivateDriverDataSize < 4 || v181.PrivateDriverDataSize != *v8 + 4LL )
                goto LABEL_348;
              if ( IsCurrentConsoleSession() || IsCurrentProcessAdmin() )
                LODWORD(v10) = (*(__int64 (__fastcall **)(DxgMonitor::EDIDCACHE *, unsigned int *))(*(_QWORD *)DxgMonitor::EDIDCACHE::s_pEdidCache
                                                                                                  + 16LL))(
                                 DxgMonitor::EDIDCACHE::s_pEdidCache,
                                 v8);
              else
                memset(v8, 0, v181.PrivateDriverDataSize);
              goto LABEL_649;
            case D3DKMT_ESCAPE_HISTORY_BUFFER_STATUS:
              if ( v181.PrivateDriverDataSize < 8 || !v190 || !v185 )
                goto LABEL_566;
              v154 = 0;
              if ( (qword_14015E4B0 & 0x461C8ED7) == 0
                || (qword_14015E4B8 & 0xFFFFFFFFB9E37128uLL) != 0
                || (qword_14015E4B0 & 0x4000) == 0 )
              {
                goto LABEL_584;
              }
              v155 = 0;
              while ( 2 )
              {
                if ( *((int *)v190 + 684) < 0x2000 )
                  v156 = 1;
                else
                  v156 = *((_DWORD *)v190 + 74);
                if ( v155 < v156 )
                {
                  if ( !*(_QWORD *)(344LL * v155 + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v190 + 391) + 16LL) + 2992LL) + 40) )
                  {
                    ++v155;
                    continue;
                  }
                  v154 = 1;
                }
                break;
              }
LABEL_584:
              *((_BYTE *)v185 + 1912) = v154;
              *(_BYTE *)v8 = v154;
              v8[1] = 0;
              LODWORD(v10) = 0;
              v121 = v173;
              goto LABEL_651;
            case D3DKMT_ESCAPE_MIRACAST_ADAPTER_DIAG_INFO:
              if ( v181.PrivateDriverDataSize != 32 )
              {
                LODWORD(v10) = -1073741811;
                goto LABEL_657;
              }
              if ( DXGADAPTER::IsDiagnosticAllowed(v43) )
              {
                DxgkGetAdapterMiracastInfo(*((_QWORD *)v43 + 27), (__int64)v8);
                LODWORD(v10) = 0;
                v121 = v173;
                goto LABEL_651;
              }
              v150 = PsGetCurrentProcessSessionId(v147, v146, v148, v149);
              WdLogSingleEntry2(3LL, v43, v150);
              WdLogGlobalForLineNumber = 3053;
              LODWORD(v10) = -1073741790;
              goto LABEL_657;
            case D3DKMT_ESCAPE_PROCESS_VERIFIER_OPTION:
              if ( v181.PrivateDriverDataSize < 0x20 )
                goto LABEL_566;
              v157 = v8[3];
              if ( v157 > 1 || *(_QWORD *)v8 )
                goto LABEL_566;
              if ( !v157 )
                *((_OWORD *)v8 + 1) = 0LL;
              if ( v8[2] != 1000 && v8[2] != 1001 )
                goto LABEL_566;
              if ( !v114 )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 3146;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"D3DKMT_ESCAPE_PROCESS_VERIFIER_OPTION for VidMm option must supply a render adapter",
                  3146LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_411;
              }
              LODWORD(v10) = (*(__int64 (__fastcall **)(_QWORD, DXGPROCESS *, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v114 + 391) + 760LL) + 8LL) + 1048LL))(
                               *(_QWORD *)(*((_QWORD *)v114 + 391) + 768LL),
                               v186,
                               v8[3],
                               v8[2],
                               v8 + 4);
              goto LABEL_649;
            case D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION:
              if ( v181.PrivateDriverDataSize < 0x20 )
                goto LABEL_566;
              v158 = v8[1];
              if ( v158 > 1 )
                goto LABEL_566;
              if ( !v158 )
              {
                *(_OWORD *)(v8 + 2) = 0LL;
                *((_QWORD *)v8 + 3) = 0LL;
              }
              if ( *v8 != 1000 && *v8 != 1001 )
                goto LABEL_566;
              if ( v114 )
              {
                if ( !*((_BYTE *)v114 + 209) )
                {
                  LODWORD(v10) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v114 + 391) + 760LL) + 8LL) + 1056LL))(
                                   *(_QWORD *)(*((_QWORD *)v114 + 391) + 768LL),
                                   v8[1],
                                   *v8,
                                   v8 + 2);
                  goto LABEL_649;
                }
              }
              else
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 3196;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION for VidMm option must supply a render adapter",
                  3196LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
LABEL_411:
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v187);
              COREACCESS::~COREACCESS((COREACCESS *)v275, v131);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v276);
              if ( v5 )
                DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v180);
              if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v98 + 2), v98);
              if ( v178[0] )
                DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v178[0]);
              if ( v178[1]
                && _InterlockedExchangeAdd64((volatile signed __int64 *)v178[1] + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              {
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v178[1] + 2), v178[1]);
              }
              goto LABEL_643;
            case D3DKMT_ESCAPE_DOD_SET_DIRTYRECT_MODE:
              if ( v181.PrivateDriverDataSize != 4 )
              {
                WdLogSingleEntry1(2LL, v181.PrivateDriverDataSize);
                WdLogGlobalForLineNumber = 3224;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Supplied Buffer size for D3DKMT_ESCAPE_DOD_SET_DIRTYRECT_MODE (0x%I64x) was not the correct size",
                  v181.PrivateDriverDataSize,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
LABEL_566:
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v187);
                COREACCESS::~COREACCESS((COREACCESS *)v275, v151);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v276);
                if ( v5 )
                  DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
                ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v180);
                if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                {
                  v152 = v98;
                  v153 = (DXGGLOBAL *)*((_QWORD *)v98 + 2);
                  goto LABEL_669;
                }
                goto LABEL_670;
              }
              if ( *((_QWORD *)v43 + 391) )
              {
                WdLogSingleEntry1(3LL, v43);
                WdLogGlobalForLineNumber = 3231;
                goto LABEL_609;
              }
              v160 = *((_QWORD *)v43 + 390);
              if ( !*(_QWORD *)(v160 + 464) )
              {
                LODWORD(v10) = -1073741811;
                goto LABEL_657;
              }
              *(_DWORD *)(v160 + 472) = *v8;
              LODWORD(v10) = 0;
              v121 = v173;
              goto LABEL_651;
            case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS:
              if ( !DXGADAPTER::IsFullWDDMAdapter(v43) )
              {
                WdLogSingleEntry1(3LL, v43);
                WdLogGlobalForLineNumber = 3245;
                goto LABEL_609;
              }
              LODWORD(v10) = ADAPTER_DISPLAY::ReportDisplayState(
                               *((ADAPTER_DISPLAY **)v43 + 390),
                               (struct _D3DKMT_DXGK_DIAGNOSTICS *)v8,
                               v181.PrivateDriverDataSize);
              goto LABEL_649;
            case D3DKMT_ESCAPE_QUERY_IOMMU_STATUS:
              if ( !v181.PrivateDriverDataSize )
              {
                WdLogSingleEntry1(2LL, 0LL);
                WdLogGlobalForLineNumber = 3261;
                v161 = L"Supplied Buffer size for D3DKMT_ESCAPE_QUERY_IOMMU_STATUS (0x%I64x) was to small";
                goto LABEL_625;
              }
              if ( !v190 )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 3267;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"D3DKMT_ESCAPE_QUERY_IOMMU_STATUS must supply a render adapter",
                  3267LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_635;
              }
              if ( *((_BYTE *)v190 + 209) )
                goto LABEL_635;
              LODWORD(v197) = 0;
              SysMmQueryIommuState(*((const struct SYSMM_ADAPTER **)v190 + 28), (union SYSMM_IOMMU_STATE *)&v197);
              *(_BYTE *)v8 = (unsigned __int8)v197 & 1;
              LODWORD(v10) = 0;
              v121 = v173;
              goto LABEL_651;
            case D3DKMT_ESCAPE_QUERY_IOMMU_STATUS|D3DKMT_ESCAPE_TDRDBGCTRL:
              if ( !v181.PrivateDriverDataSize )
              {
                WdLogSingleEntry1(2LL, 0LL);
                WdLogGlobalForLineNumber = 3292;
                v161 = L"Supplied Buffer size for D3DKMT_ESCAPE_QUERY_DMA_REMAPPING_STATUS (0x%I64x) was to small";
LABEL_625:
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  v161,
                  v181.PrivateDriverDataSize,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
LABEL_609:
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v187);
                COREACCESS::~COREACCESS((COREACCESS *)v275, v159);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v276);
                if ( v5 )
                  DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
                ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v180);
                if ( v98 )
                  DXGADAPTER::ReleaseReference(v98);
                if ( v178[0] )
                  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v178[0]);
                if ( v178[1] )
                  DXGADAPTER::ReleaseReference(v178[1]);
                goto LABEL_676;
              }
              if ( v190 )
              {
                if ( !*((_BYTE *)v190 + 209) )
                {
                  LODWORD(v186) = 0;
                  SysMmQueryIommuState(*((const struct SYSMM_ADAPTER **)v190 + 28), (union SYSMM_IOMMU_STATE *)&v186);
                  *(_BYTE *)v8 = ((unsigned __int8)v186 & 2) != 0;
                  LODWORD(v10) = 0;
                  v121 = v173;
                  goto LABEL_651;
                }
              }
              else
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 3298;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"D3DKMT_ESCAPE_QUERY_DMA_REMAPPING_STATUS must supply a render adapter",
                  3298LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
LABEL_635:
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v187);
              COREACCESS::~COREACCESS((COREACCESS *)v275, v162);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v276);
              if ( v5 )
                DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v180);
              if ( v98 )
                DXGADAPTER::ReleaseReference(v98);
              if ( v178[0] )
                DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v178[0]);
              if ( v178[1] )
                DXGADAPTER::ReleaseReference(v178[1]);
LABEL_643:
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v174);
              if ( v176 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v163, (__int64)&EventProfilerExit, v164, v174);
              return 3221225659LL;
            default:
              LODWORD(v10) = -1073741811;
              WdLogSingleEntry1(3LL, v110);
              WdLogGlobalForLineNumber = 3321;
              goto LABEL_649;
          }
          switch ( *v8 )
          {
            case 0u:
              goto LABEL_445;
            case 1u:
              LODWORD(v10) = TdrDbgCtrl(2);
              goto LABEL_649;
            case 2u:
              LODWORD(v10) = TdrDbgCtrl(1);
              goto LABEL_649;
            case 3u:
              v201 = 0;
              v191 = 0;
              v215 = 0LL;
              v216 = 288;
              v217 = L"TdrTestMode";
              v218 = &v191;
              v219 = 67108868;
              v220 = &v201;
              v221 = 4;
              v222 = 0LL;
              v223 = 0;
              v224 = 0LL;
              v225 = 0LL;
              v226 = 0LL;
              if ( (int)RtlQueryRegistryValuesEx(
                          0LL,
                          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
                          &v215,
                          0LL,
                          0LL) >= 0 )
              {
                if ( v191 )
                {
                  v135 = 1;
LABEL_453:
                  if ( !v135 )
                  {
                    LODWORD(v10) = -1073741637;
                    goto LABEL_657;
                  }
                  _InterlockedExchange(&g_TdrDebugMode, 3);
                  LODWORD(v10) = 0;
                  goto LABEL_649;
                }
              }
              else
              {
                v191 = 0;
              }
              v135 = 0;
              goto LABEL_453;
            case 4u:
            case 5u:
              if ( !v190 )
              {
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v109, v181.PrivateDriverDataSize, v108, 0LL) + 24) = 0LL;
                WdLogGlobalForLineNumber = 2679;
                LODWORD(v10) = -1073741637;
                goto LABEL_657;
              }
              if ( *((_BYTE *)v190 + 209) )
              {
                LODWORD(v10) = -1073741637;
                goto LABEL_657;
              }
              v202 = 0;
              v192 = 0;
              v227 = 0LL;
              v228 = 288;
              v229 = L"TdrTestMode";
              v230 = &v192;
              v231 = 67108868;
              v232 = &v202;
              v233 = 4;
              v234 = 0LL;
              v235 = 0;
              v236 = 0LL;
              v237 = 0LL;
              v238 = 0LL;
              if ( (int)RtlQueryRegistryValuesEx(
                          0LL,
                          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
                          &v227,
                          0LL,
                          0LL) >= 0 )
              {
                if ( v192 )
                {
                  v136 = 1;
LABEL_464:
                  if ( !v136 )
                  {
                    LODWORD(v10) = -1073741637;
                    goto LABEL_657;
                  }
                  v137 = *(_QWORD *)(*((_QWORD *)v190 + 391) + 744LL);
                  v290 = 0LL;
                  v291 = 0LL;
                  v292 = 0LL;
                  v289[0] = 2;
                  v289[1] = *v8;
                  LODWORD(v10) = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v190 + 391) + 736LL)
                                                                                          + 8LL)
                                                                              + 64LL))(
                                   v137,
                                   v289);
                  goto LABEL_649;
                }
              }
              else
              {
                v192 = 0;
              }
              v136 = 0;
              goto LABEL_464;
            case 6u:
              v204 = 0;
              v193 = 0;
              v251 = 0LL;
              v252 = 288;
              v253 = L"TdrTestMode";
              v254 = &v193;
              v255 = 67108868;
              v256 = &v204;
              v257 = 4;
              v258 = 0LL;
              v259 = 0;
              v260 = 0LL;
              v261 = 0LL;
              v262 = 0LL;
              if ( (int)RtlQueryRegistryValuesEx(
                          0LL,
                          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
                          &v251,
                          0LL,
                          0LL) >= 0 )
              {
                if ( v193 )
                {
                  v140 = 1;
LABEL_487:
                  if ( !v140 )
                  {
                    LODWORD(v10) = -1073741637;
                    goto LABEL_657;
                  }
                  _InterlockedExchange(&g_TdrForceDodPresentTimeout, 1);
                  LODWORD(v10) = 0;
                  goto LABEL_649;
                }
              }
              else
              {
                v193 = 0;
              }
              v140 = 0;
              goto LABEL_487;
            case 7u:
              v205 = 0;
              v194 = 0;
              v263 = 0LL;
              v264 = 288;
              v265 = L"TdrTestMode";
              v266 = &v194;
              v267 = 67108868;
              v268 = &v205;
              v269 = 4;
              v270 = 0LL;
              v271 = 0;
              v272 = 0LL;
              v273 = 0LL;
              v274 = 0LL;
              if ( (int)RtlQueryRegistryValuesEx(
                          0LL,
                          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
                          &v263,
                          0LL,
                          0LL) >= 0 )
              {
                if ( v194 )
                {
                  v141 = 1;
LABEL_495:
                  if ( !v141 )
                  {
                    LODWORD(v10) = -1073741637;
                    goto LABEL_657;
                  }
                  _InterlockedExchange(&g_TdrForceDodVSyncTimeout, 1);
                  LODWORD(v10) = 0;
                  goto LABEL_649;
                }
              }
              else
              {
                v194 = 0;
              }
              v141 = 0;
              goto LABEL_495;
            case 8u:
              if ( v181.PrivateDriverDataSize < 8 )
              {
                LODWORD(v10) = -1073741811;
                goto LABEL_657;
              }
              if ( !v190 )
              {
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v109, v181.PrivateDriverDataSize, v108, 0LL) + 24) = v43;
                WdLogGlobalForLineNumber = 2717;
                LODWORD(v10) = -1073741637;
                goto LABEL_657;
              }
              if ( *((_BYTE *)v190 + 209) )
              {
                LODWORD(v10) = -1073741637;
                goto LABEL_657;
              }
              v203 = 0;
              v195 = 0;
              v239 = 0LL;
              v240 = 288;
              v241 = L"TdrTestMode";
              v242 = &v195;
              v243 = 67108868;
              v244 = &v203;
              v245 = 4;
              v246 = 0LL;
              v247 = 0;
              v248 = 0LL;
              v249 = 0LL;
              v250 = 0LL;
              if ( (int)RtlQueryRegistryValuesEx(
                          0LL,
                          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
                          &v239,
                          0LL,
                          0LL) >= 0 )
              {
                if ( v195 )
                {
                  v138 = 1;
LABEL_478:
                  if ( !v138 )
                  {
                    LODWORD(v10) = -1073741637;
                    goto LABEL_657;
                  }
                  v139 = *(_QWORD *)(*((_QWORD *)v190 + 391) + 744LL);
                  v286 = 0LL;
                  v287 = 0LL;
                  v288 = 0;
                  v285[0] = 2;
                  v285[1] = *v8;
                  v285[2] = v8[1];
                  LODWORD(v10) = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v190 + 391) + 736LL)
                                                                                          + 8LL)
                                                                              + 64LL))(
                                   v139,
                                   v285);
                  goto LABEL_649;
                }
              }
              else
              {
                v195 = 0;
              }
              v138 = 0;
              goto LABEL_478;
            default:
              goto LABEL_348;
          }
        }
        v105 = v190;
        if ( !v190 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 2187;
          if ( v5 )
            DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v180);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          {
            v152 = v43;
            v153 = (DXGGLOBAL *)*((_QWORD *)v43 + 2);
LABEL_669:
            DXGGLOBAL::DestroyAdapter(v153, v152);
          }
          goto LABEL_670;
        }
        if ( *v8 == 9 )
        {
          if ( !v8[4] && !DxgkpIsDrtEnabled() )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 2167;
            if ( v5 )
              DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v180);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v184, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v43 + 2), v43);
            if ( v178[0] )
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v178[0]);
            if ( v178[1]
              && _InterlockedExchangeAdd64((volatile signed __int64 *)v178[1] + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            {
              DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v178[1] + 2), v178[1]);
            }
            goto LABEL_681;
          }
          v106 = (void *)*((_QWORD *)v8 + 1);
          *((_QWORD *)v8 + 1) = 0LL;
          LODWORD(v10) = DxgEscapeSuspendResumeProcess(&v181, (unsigned __int8 *)v8, v190, v106, 1, v8[4] != 0);
          if ( v5 )
            DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
        }
        else
        {
          if ( *v8 != 10 )
            goto LABEL_311;
          v107 = (void *)*((_QWORD *)v8 + 1);
          *((_QWORD *)v8 + 1) = 0LL;
          LODWORD(v10) = DxgEscapeSuspendResumeProcess(&v181, (unsigned __int8 *)v8, v105, v107, 0, 0);
          if ( v5 )
            DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
        }
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v180);
        v104 = _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_283:
        if ( v104 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v43 + 2), v43);
        if ( v178[0] )
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v178[0]);
        v85 = v178[1];
        goto LABEL_288;
      }
      v78 = (v181.hAdapter >> 6) & 0xFFFFFF;
      v182 = v181.hAdapter >> 30;
      if ( (*((_DWORD *)v186 + 102) & 0x100) == 0 )
      {
        if ( (unsigned int)v78 < *((_DWORD *)v186 + 74)
          && (v82 = *((_QWORD *)v186 + 35) + 16 * v78,
              v83 = *(_DWORD *)(v82 + 8),
              v181.hAdapter >> 30 == ((v83 >> 5) & 3))
          && (v83 & 0x2000) == 0
          && (v84 = v83 & 0x1F) != 0 )
        {
          if ( v84 == 1 )
          {
            v43 = *(DXGADAPTER **)v82;
            hAdapter = v183;
            goto LABEL_217;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          hAdapter = v181.hAdapter;
        }
        else
        {
          hAdapter = v183;
        }
        v43 = 0LL;
        goto LABEL_217;
      }
      v79 = *((_QWORD *)v186 + 74);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v79 + 248));
      if ( (unsigned int)v78 < *(_DWORD *)(v79 + 296) )
      {
        v80 = *(_QWORD *)(v79 + 280);
        v81 = *(_DWORD *)(v80 + 16LL * (unsigned int)v78 + 8);
        if ( v182 == ((v81 >> 5) & 3) && (v81 & 0x2000) == 0 && (v81 & 0x1F) != 0 )
        {
          if ( (*(_BYTE *)(v80 + 16LL * ((v183 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 1 )
          {
            v43 = *(DXGADAPTER **)(v80 + 16LL * ((v183 >> 6) & 0xFFFFFF));
            goto LABEL_206;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v43 = 0LL;
LABEL_206:
      _InterlockedDecrement((volatile signed __int32 *)(v79 + 264));
      ExReleasePushLockSharedEx(v79 + 248, 0LL);
      KeLeaveCriticalRegion();
      hAdapter = v181.hAdapter;
      v44 = v178[1];
      v184 = v178[1];
      v24 = v178[0];
LABEL_217:
      v196 = v43;
      goto LABEL_218;
    }
    v23 = v22;
    v24 = v178[0];
    goto LABEL_35;
  }
  WdLogSingleEntry1(3LL, Type);
  WdLogGlobalForLineNumber = 1521;
LABEL_681:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v174);
  if ( v176 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v171, (__int64)&EventProfilerExit, v172, v174);
  return 3221225506LL;
}
