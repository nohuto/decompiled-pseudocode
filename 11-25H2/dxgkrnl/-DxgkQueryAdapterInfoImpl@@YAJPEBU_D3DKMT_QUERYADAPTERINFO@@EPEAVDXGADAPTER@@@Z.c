/*
 * XREFs of ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14038F660
 * Callers:
 *     DxgkQueryAdapterInfoInternal @ 0x1401ACE70 (DxgkQueryAdapterInfoInternal.c)
 *     DxgkQueryAdapterInfo @ 0x14038F640 (DxgkQueryAdapterInfo.c)
 *     ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140426EC0 (-VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001BD54 (-Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001BDFC (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x14001DD60 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14002BFD0 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x14002EF80 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400314B0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x140033438 (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1400369D4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEBVVIDMM_GLOBAL@@IPEA_K11111@Z @ 0x14004DDD4 (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEBVVIDMM_GLOBAL@@IPEA_K11111@Z.c)
 *     ?SupportGetMultiPlaneOverlayCaps@DXGADAPTER@@QEBAEXZ @ 0x140051B88 (-SupportGetMultiPlaneOverlayCaps@DXGADAPTER@@QEBAEXZ.c)
 *     ?SupportGetPostCompositionCaps@DXGADAPTER@@QEBAEXZ @ 0x140052708 (-SupportGetPostCompositionCaps@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkInvalidateDeviceState @ 0x140062D20 (DxgkInvalidateDeviceState.c)
 *     Feature_CursorScaledByHW__private_IsEnabledDeviceUsageNoInline @ 0x14006B7E8 (Feature_CursorScaledByHW__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_IddNoDFlipSupport__private_IsEnabledDeviceUsageNoInline @ 0x14006B890 (Feature_IddNoDFlipSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     memcmp @ 0x1400A01E0 (memcmp.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x140185F08 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x14018792C (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x140187F08 (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140189A90 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1402A064C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1403240C0 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x140370384 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x140370530 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1403707B8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiReadPnpRegistryValue @ 0x140384310 (DpiReadPnpRegistryValue.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x14039AC30 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z @ 0x14039B088 (-GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x14039B1E0 (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1403B2A08 (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403D0FD0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1403F22E0 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1403F2DE4 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1403F36E0 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x14040CF48 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x14040F2D4 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 */

__int64 __fastcall DxgkQueryAdapterInfoImpl(const struct _D3DKMT_QUERYADAPTERINFO *a1, char a2, struct DXGADAPTER *a3)
{
  size_t *p_hAdapter; // rbx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r9
  DXGPROCESS *Current; // r15
  unsigned int v10; // ebx
  const wchar_t *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r8
  size_t v26; // r8
  const void *v27; // rdx
  struct DXGADAPTER **v28; // r9
  struct DXGADAPTER *v29; // r15
  unsigned int v30; // edi
  int PairingAdapters; // r13d
  unsigned __int64 v32; // rcx
  ADAPTER_DISPLAY **v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGADAPTER *v36; // rdi
  unsigned int v37; // r13d
  unsigned int v38; // r15d
  int v39; // eax
  bool v40; // dl
  __int64 v41; // rdx
  struct DXGADAPTER *v42; // rbx
  unsigned int v43; // r9d
  int v44; // eax
  __int64 v45; // rcx
  struct DXGADAPTER *v46; // rbx
  __int64 v47; // rdx
  __int64 HostSilo; // rax
  struct DXGADAPTER *v49; // rdi
  ADAPTER_RENDER *v50; // rcx
  enum _KMTUMDVERSION v51; // edx
  int v52; // ebx
  int UMDFileName; // eax
  __int64 v54; // rdx
  struct DXGADAPTER *v55; // r10
  __int64 v56; // r8
  int v57; // ebx
  size_t v58; // rbx
  __int64 v59; // rdi
  struct DXGADAPTER *v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // rdx
  char *v63; // r8
  unsigned __int16 v64; // ax
  int v65; // eax
  __int64 v66; // r8
  unsigned __int64 v67; // r9
  char *v68; // r8
  int v69; // eax
  unsigned int v70; // eax
  __int64 v71; // rcx
  unsigned int v72; // r8d
  __int64 v73; // rdx
  __int64 v74; // rcx
  DXGPROCESS *v75; // rdi
  int v76; // ecx
  __int64 v77; // rbx
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  __int64 v79; // r8
  struct DXGADAPTER *v80; // rax
  DXGADAPTER *v81; // rbx
  __int64 v82; // rcx
  const void **v83; // rdx
  size_t v84; // r8
  struct DXGADAPTER *v85; // rax
  __int64 v86; // rcx
  struct DXGADAPTER *v87; // rax
  __int64 v88; // rbx
  int PnpRegistryValue; // ecx
  bool v90; // r15
  int v91; // eax
  int v92; // eax
  struct DXGADAPTER *v93; // rcx
  char v94; // dl
  int v95; // eax
  __int64 v96; // rax
  bool v97; // r15
  struct _DEVICE_OBJECT *v98; // rcx
  NTSTATUS DevicePropertyData; // eax
  int v100; // ebx
  char v101; // al
  bool v102; // sf
  int v103; // ebx
  int v104; // eax
  struct _DEVICE_OBJECT *v105; // rcx
  NTSTATUS v106; // eax
  char v107; // al
  void *v108; // rbx
  struct DXGADAPTER *v109; // rax
  int v110; // ecx
  struct DXGADAPTER *v111; // rdi
  struct DXGADAPTER *v112; // rbx
  int *AdapterType; // rax
  unsigned int v114; // ecx
  struct DXGADAPTER *v115; // r8
  int v116; // ecx
  int v117; // eax
  int v118; // ecx
  int v119; // edx
  int v120; // eax
  int v121; // ecx
  int v122; // edx
  int v123; // r9d
  unsigned int v124; // edx
  union _LARGE_INTEGER *v125; // rdi
  __int64 v126; // r13
  int FullDriverPath; // eax
  const wchar_t *v128; // r9
  int FileVersion; // eax
  struct DXGADAPTER *v130; // rbx
  DXGADAPTER *v131; // rcx
  DXGADAPTER *v132; // r10
  DXGADAPTER *v133; // r11
  struct DXGADAPTER *v134; // r8
  BOOL v135; // ecx
  int v136; // edx
  int v137; // edx
  int v138; // ecx
  int v139; // ecx
  unsigned int v140; // r14d
  int v141; // ecx
  struct DXGADAPTER *v142; // r8
  unsigned int v143; // edx
  struct DXGADAPTER *v144; // r8
  unsigned int v145; // eax
  int v146; // edx
  struct DXGADAPTER *v147; // r8
  int v148; // ecx
  int v149; // edx
  unsigned int v150; // r8d
  __int64 v151; // rax
  int v152; // r9d
  unsigned int v153; // ecx
  unsigned __int16 *v154; // rcx
  __int64 v155; // r9
  __int64 v156; // rcx
  __int64 v157; // r8
  int v158; // eax
  __int64 v159; // r10
  __int64 v160; // r8
  int v161; // eax
  __int64 v162; // r10
  __int64 v163; // rdx
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v165; // rdx
  _DWORD *v166; // rcx
  int v167; // eax
  unsigned int v168; // eax
  __int64 v169; // rdx
  __int64 v170; // rbx
  __int64 v171; // rdi
  __int64 v172; // rcx
  _DWORD *v173; // rdx
  int v174; // eax
  int v175; // ecx
  struct DXGADAPTER *v176; // rbx
  struct DXGADAPTER *v177; // rbx
  DXGADAPTER *v178; // rcx
  __int64 v179; // rax
  ADAPTER_RENDER *v180; // rdi
  __int64 v181; // rbx
  __int64 v182; // rax
  unsigned int v183; // ecx
  unsigned int v184; // r9d
  unsigned int v185; // ebx
  const void *v186; // rdx
  DXGADAPTER *v187; // rcx
  struct DXGADAPTER *v188; // rax
  __int64 v189; // rdi
  __int64 v190; // rbx
  int v191; // ebx
  __int64 v192; // rcx
  __int64 v193; // rdx
  __int64 v194; // rbx
  const void **v195; // rbx
  unsigned __int64 v196; // rdi
  unsigned int v197; // r11d
  __int64 v198; // rax
  unsigned __int16 *v199; // r9
  __int64 v200; // rax
  unsigned int v201; // r10d
  unsigned int v202; // r8d
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // rdi
  int v206; // ecx
  __int64 v207; // r8
  int v208; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  size_t v210; // r8
  void *v211; // rcx
  int UmdFileVersion; // [rsp+50h] [rbp-318h] BYREF
  struct DXGADAPTER *v213; // [rsp+58h] [rbp-310h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-308h] BYREF
  size_t Size; // [rsp+70h] [rbp-2F8h]
  char Data; // [rsp+78h] [rbp-2F0h] BYREF
  char v217; // [rsp+79h] [rbp-2EFh] BYREF
  bool v218; // [rsp+7Ah] [rbp-2EEh]
  char v219; // [rsp+7Bh] [rbp-2EDh]
  bool v220; // [rsp+7Ch] [rbp-2ECh]
  char v221; // [rsp+7Dh] [rbp-2EBh]
  DXGADAPTER *v222; // [rsp+80h] [rbp-2E8h] BYREF
  int v223; // [rsp+88h] [rbp-2E0h] BYREF
  __int64 v224; // [rsp+90h] [rbp-2D8h]
  char v225; // [rsp+98h] [rbp-2D0h]
  DXGADAPTER *v226; // [rsp+A0h] [rbp-2C8h]
  DXGPROCESS *v227; // [rsp+A8h] [rbp-2C0h]
  struct DXGADAPTER *v228; // [rsp+B0h] [rbp-2B8h]
  struct DXGADAPTER *v229; // [rsp+B8h] [rbp-2B0h]
  struct DXGADAPTER *v230; // [rsp+C0h] [rbp-2A8h] BYREF
  void *v231; // [rsp+C8h] [rbp-2A0h]
  unsigned int v232; // [rsp+D0h] [rbp-298h]
  ULONG Type; // [rsp+D4h] [rbp-294h] BYREF
  ULONG v234; // [rsp+D8h] [rbp-290h] BYREF
  _D3DKMT_WDDM_1_3_CAPS v235; // [rsp+DCh] [rbp-28Ch] BYREF
  unsigned int v236; // [rsp+E0h] [rbp-288h] BYREF
  struct DXGADAPTER *v237; // [rsp+E8h] [rbp-280h] BYREF
  ULONG RequiredSize; // [rsp+F8h] [rbp-270h] BYREF
  ULONG v239; // [rsp+FCh] [rbp-26Ch] BYREF
  unsigned int v240; // [rsp+100h] [rbp-268h] BYREF
  __int64 v241; // [rsp+108h] [rbp-260h] BYREF
  unsigned __int64 v242; // [rsp+110h] [rbp-258h] BYREF
  struct DXGDEVICE *v243; // [rsp+118h] [rbp-250h] BYREF
  struct DXGDEVICE *v244; // [rsp+120h] [rbp-248h] BYREF
  struct _UNICODE_STRING v245; // [rsp+128h] [rbp-240h] BYREF
  PVOID P[2]; // [rsp+140h] [rbp-228h] BYREF
  unsigned __int64 v247; // [rsp+150h] [rbp-218h] BYREF
  __int64 v248; // [rsp+158h] [rbp-210h]
  int v249; // [rsp+160h] [rbp-208h] BYREF
  _QWORD v250[2]; // [rsp+168h] [rbp-200h] BYREF
  char v251; // [rsp+178h] [rbp-1F0h]
  struct _DXGKARG_QUERYADAPTERINFO v252; // [rsp+180h] [rbp-1E8h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v253; // [rsp+1B0h] [rbp-1B8h] BYREF
  __int128 v254; // [rsp+1E0h] [rbp-188h] BYREF
  int v255; // [rsp+1F0h] [rbp-178h]
  int *v256; // [rsp+1F8h] [rbp-170h]
  DXGADAPTER *v257; // [rsp+200h] [rbp-168h]
  struct DXGADAPTER *v258; // [rsp+208h] [rbp-160h]
  DXGPROCESS *v259; // [rsp+210h] [rbp-158h]
  int v260; // [rsp+218h] [rbp-150h]
  bool v261; // [rsp+21Ch] [rbp-14Ch]
  char v262; // [rsp+21Dh] [rbp-14Bh]
  struct _D3DKMT_QUERYADAPTERINFO v263; // [rsp+220h] [rbp-148h] BYREF
  _BYTE v264[56]; // [rsp+238h] [rbp-130h] BYREF
  __int128 v265; // [rsp+270h] [rbp-F8h]
  _BYTE v266[144]; // [rsp+280h] [rbp-E8h] BYREF
  wchar_t Str2[20]; // [rsp+310h] [rbp-58h] BYREF

  v221 = a2;
  p_hAdapter = (size_t *)&a1->hAdapter;
  v223 = -1;
  v6 = 0LL;
  v224 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v225 = 1;
    v223 = 2015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 2015);
  }
  else
  {
    v225 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v223, 2015);
  Current = DXGPROCESS::GetCurrent(v7);
  v227 = Current;
  UmdFileVersion = 0;
  v260 = -1;
  v256 = &UmdFileVersion;
  v262 = a2;
  v259 = Current;
  if ( !Current )
  {
    v10 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3268;
    v11 = L"Invalid process context, returning 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v11, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    UmdFileVersion = -1073741811;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v223);
    v14 = v225 == 0;
LABEL_61:
    if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v223);
    return v10;
  }
  if ( a3 && a2 )
  {
    v10 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3277;
    v11 = L"Not valid to provide pAdapter when calling from usermode, return 0x%I64x";
    goto LABEL_7;
  }
  *(_OWORD *)Src = 0LL;
  Size = 0LL;
  v231 = 0LL;
  v232 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)p_hAdapter >= MmUserProbeAddress )
      p_hAdapter = (size_t *)MmUserProbeAddress;
    RtlCopyVolatileMemory(Src, p_hAdapter, 0x18uLL);
  }
  else
  {
    *(_OWORD *)Src = *(_OWORD *)p_hAdapter;
    Size = p_hAdapter[2];
  }
  v260 = HIDWORD(Src[0]);
  if ( !Src[1] )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3302;
    UmdFileVersion = -1073741811;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v223);
    if ( v225 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v223);
    return 3221225485LL;
  }
  if ( !(_DWORD)Size )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3311;
    UmdFileVersion = -1073741811;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v223);
    if ( v225 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v223);
    return 3221225485LL;
  }
  v20 = (Size + 7) & 0xFFFFFFF8;
  v232 = v20;
  if ( v20 < (unsigned int)Size )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3325;
    UmdFileVersion = -1073741811;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v223);
    if ( v225 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v223);
    return 3221225485LL;
  }
  v23 = (unsigned int *)operator new[](v20, 0x4B677844u, 64LL, v8);
  v231 = v23;
  if ( !v23 )
  {
    WdLogSingleEntry1(3LL, -1073741801LL);
    WdLogGlobalForLineNumber = 3335;
    UmdFileVersion = -1073741801;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v223);
    if ( v225 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v223);
    return 3221225495LL;
  }
  switch ( HIDWORD(Src[0]) )
  {
    case 1:
    case 7:
    case 9:
    case 0x10:
    case 0x17:
    case 0x19:
    case 0x1F:
    case 0x22:
    case 0x29:
    case 0x2A:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x32:
    case 0x33:
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x43:
    case 0x47:
    case 0x48:
      v26 = (unsigned int)Size;
      v27 = Src[1];
      if ( a2 )
      {
        if ( (char *)Src[1] + (unsigned int)Size < Src[1]
          || (char *)Src[1] + (unsigned int)Size > (void *)MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v23, v27, v26);
      }
      else
      {
        memmove(v23, Src[1], (unsigned int)Size);
      }
      break;
    default:
      memset(v23, 0, (unsigned int)Size);
      break;
  }
  v222 = a3;
  v28 = &v222;
  if ( a3 )
    v28 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v237, (unsigned int)Src[0], Current, v28, 1);
  v29 = v222;
  v226 = v222;
  if ( !v222 )
  {
    v10 = -1073741811;
    WdLogSingleEntry2(3LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 3402;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v23);
    UmdFileVersion = -1073741811;
    if ( v237 && _InterlockedExchangeAdd64((volatile signed __int64 *)v237 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v237 + 2), v237);
LABEL_60:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v223);
    v14 = v225 == 0;
    goto LABEL_61;
  }
  v257 = v222;
  v30 = 0;
  if ( HIDWORD(Src[0]) == 9 )
  {
    if ( (_DWORD)Size != 48 )
    {
      v10 = -1073741811;
      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
      WdLogGlobalForLineNumber = 3423;
LABEL_57:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v23);
      UmdFileVersion = -1073741811;
      if ( v237 && _InterlockedExchangeAdd64((volatile signed __int64 *)v237 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v237 + 2), v237);
      goto LABEL_60;
    }
LABEL_65:
    v30 = *v23;
    goto LABEL_66;
  }
  if ( HIDWORD(Src[0]) == 67 )
  {
    if ( (_DWORD)Size != 8 )
    {
      v10 = -1073741811;
      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
      WdLogGlobalForLineNumber = 3444;
      goto LABEL_57;
    }
    goto LABEL_65;
  }
LABEL_66:
  v213 = 0LL;
  v230 = 0LL;
  v242 = 0LL;
  v247 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v222, v30, &v213, &v242, &v230, &v247, 0);
  v32 = HIDWORD(Src[0]);
  if ( PairingAdapters >= 0 || HIDWORD(Src[0]) == 9 || HIDWORD(Src[0]) == 67 )
  {
    v33 = (ADAPTER_DISPLAY **)v230;
  }
  else
  {
    v33 = 0LL;
    v230 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v29, v30, &v213, &v242, 0LL, 0LL, 0);
    v32 = HIDWORD(Src[0]);
  }
  if ( PairingAdapters >= 0 )
  {
    v36 = v213;
    if ( v213 == v29 || v33 == (ADAPTER_DISPLAY **)v29 )
    {
      v38 = -1;
      v37 = 1;
    }
    else
    {
      v37 = 1;
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3501;
      v38 = -1;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(pRenderAdapter == pAdapterIn) || (pDisplayAdapter == pAdapterIn)",
        3501LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v32 = HIDWORD(Src[0]);
    }
    if ( v33 && !v33[390] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3503;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
        3503LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v32 = HIDWORD(Src[0]);
    }
    if ( !v36 || !*((_QWORD *)v36 + 391) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3505;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(pRenderAdapter != NULL) && (pRenderAdapter->IsRenderAdapter())",
        3505LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v32 = HIDWORD(Src[0]);
    }
    v40 = 0;
    if ( (unsigned int)v32 <= 0x1B )
    {
      v39 = 138619200;
      if ( _bittest(&v39, v32) )
        v40 = 1;
    }
    v258 = v36;
    v261 = v40;
    if ( v226 == v36 && *((_BYTE *)v226 + 209) || v36 && *((_BYTE *)v36 + 209) && !v40 )
    {
      if ( (unsigned int)v32 > 0x39 || (v41 = 0x210F85840908010LL, !_bittest64(&v41, v32)) )
      {
        if ( (_DWORD)v32 != 68 )
        {
          v250[1] = v36;
          _InterlockedIncrement64((volatile signed __int64 *)v36 + 3);
          v250[0] = -1LL;
          v42 = v213;
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx((char *)v42 + 136, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)v42 + 38);
          v251 = 1;
          if ( *((_DWORD *)v213 + 50) == 1 )
          {
            *(void **)&v263.hAdapter = Src[0];
            *(_QWORD *)&v263.PrivateDriverDataSize = Size;
            v263.pPrivateDriverData = v23;
            v44 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
                    (struct DXGADAPTER *)((char *)v213 + 4664),
                    v227,
                    &v263,
                    v43);
            UmdFileVersion = v44;
            if ( v44 >= 0 )
            {
              UmdFileVersion = PostProcessUMDFileName(SHIDWORD(Src[0]), (char *)v23, v232);
            }
            else
            {
              WdLogSingleEntry2(3LL, LODWORD(Src[0]), v44);
              WdLogGlobalForLineNumber = 3557;
            }
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v250);
          }
          else
          {
            UmdFileVersion = -1073741130;
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v250);
          }
          goto LABEL_623;
        }
      }
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v266, v36, (struct DXGADAPTER *const)v33);
    DXGADAPTER::ReleaseReference(v36);
    if ( v33 )
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v33);
    if ( HIDWORD(Src[0]) == 9 || HIDWORD(Src[0]) == 67 )
    {
      UmdFileVersion = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v266, 0LL);
      if ( UmdFileVersion >= 0 )
      {
        if ( !v33 || !v33[390] )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3590;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
            3590LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( HIDWORD(Src[0]) == 9 )
        {
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v33[390], *v23);
          if ( *(_DWORD *)DisplayModeInfo )
          {
            *(_OWORD *)(v23 + 1) = *(_OWORD *)DisplayModeInfo;
            *(_OWORD *)(v23 + 5) = *((_OWORD *)DisplayModeInfo + 1);
            *(_QWORD *)(v23 + 9) = *((_QWORD *)DisplayModeInfo + 4);
            v23[11] = *((_DWORD *)DisplayModeInfo + 10);
          }
          else
          {
            UmdFileVersion = -1071774919;
            WdLogSingleEntry2(3LL, *v23, v33);
            WdLogGlobalForLineNumber = 3608;
          }
        }
        else if ( HIDWORD(Src[0]) == 67 )
        {
          v240 = *v23;
          v236 = 0;
          *(_QWORD *)&v253.Type = 33LL;
          *(_QWORD *)&v253.InputDataSize = 4LL;
          *(_QWORD *)&v253.Flags.0 = 0LL;
          HIDWORD(v253.hKmdProcessHandle) = 0;
          v253.pOutputData = &v236;
          v253.OutputDataSize = 4;
          v253.pInputData = &v240;
          v208 = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v33, &v253, v207);
          UmdFileVersion = v208;
          if ( v208 < 0 )
          {
            WdLogSingleEntry2(3LL, *v23, v208);
            WdLogGlobalForLineNumber = 3643;
          }
          else
          {
            v23[1] = v236;
          }
        }
        goto LABEL_619;
      }
    }
    else
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264,
        v36,
        (struct DXGADAPTER *)v33);
      if ( *((_DWORD *)v226 + 50) == 1 )
      {
        v45 = *((unsigned int *)v213 + 50);
        if ( (_DWORD)v45 == 1 )
        {
          v46 = v230;
          if ( !v230 )
          {
LABEL_116:
            v47 = SHIDWORD(Src[0]);
            switch ( HIDWORD(Src[0]) )
            {
              case 0:
                *(_QWORD *)&v252.Flags.0 = 0LL;
                HIDWORD(v252.hKmdProcessHandle) = 0;
                memset(&v252, 0, 24);
                v252.pOutputData = v23;
                v252.OutputDataSize = Size;
                v75 = v227;
                v76 = *((_DWORD *)v227 + 102);
                if ( (v76 & 0x100) != 0 )
                  v252.Flags.Value = ((unsigned __int8)(2
                                                      * *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v227 + 74) + 592LL) + 336LL)) ^ 1) & 2 ^ 1;
                v77 = *((_QWORD *)v213 + 391);
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx(v77 + 72, 0LL);
                _InterlockedIncrement((volatile signed __int32 *)(v77 + 88));
                RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(v75, *((_DWORD *)v213 + 60));
                if ( RenderAdapterInfo )
                  v252.hKmdProcessHandle = (HANDLE)*((_QWORD *)RenderAdapterInfo + 6);
                _InterlockedDecrement((volatile signed __int32 *)(v77 + 88));
                ExReleasePushLockSharedEx(v77 + 72, 0LL);
                KeLeaveCriticalRegion();
                UmdFileVersion = DXGADAPTER::DdiQueryAdapterInfo(v213, &v252, v79);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 1:
                if ( (_DWORD)Size != 524 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 3693;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v49 = v213;
                v50 = (ADAPTER_RENDER *)*((_QWORD *)v213 + 391);
                v51 = *v23;
                if ( *v23 >= 6 )
                {
                  v52 = -1073741811;
                  goto LABEL_134;
                }
                v245 = 0LL;
                UMDFileName = ADAPTER_RENDER::GetUMDFileName(v50, v51, &v245);
                if ( UMDFileName < 0 )
                  goto LABEL_133;
                if ( !v245.Length || v245.Length == 4 && (v54 = 4063292LL, *(_DWORD *)v245.Buffer == 4063292) )
                  LODWORD(v6) = 1;
                if ( (_DWORD)v6 )
                {
                  v52 = -1073741811;
                }
                else
                {
                  UMDFileName = RtlStringCbCopyNW((char *)v23 + 4, v54, (char *)v245.Buffer, v245.Length);
LABEL_133:
                  v52 = UMDFileName;
                }
LABEL_134:
                UmdFileVersion = v52;
                if ( v52 >= 0 )
                  goto LABEL_605;
                WdLogSingleEntry3(4LL, v23, v49, v52);
                WdLogGlobalForLineNumber = 3702;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 2:
                if ( (_DWORD)Size == 528 )
                {
                  v66 = *((_QWORD *)v213 + 391);
                  if ( (*((_DWORD *)v227 + 102) & 8) != 0 )
                  {
                    v23[130] = *(_DWORD *)(v66 + 712);
                    v23[131] = *(_DWORD *)(v66 + 716);
                    v67 = *(unsigned __int16 *)(v66 + 696);
                    v68 = *(char **)(v66 + 704);
                  }
                  else
                  {
                    v23[130] = *(_DWORD *)(v66 + 688);
                    v23[131] = *(_DWORD *)(v66 + 692);
                    v67 = *(unsigned __int16 *)(v66 + 672);
                    v68 = *(char **)(v66 + 680);
                  }
                  v69 = RtlStringCbCopyNW((char *)v23, v47, v68, v67);
                  UmdFileVersion = v69;
                  if ( v69 >= 0 )
                    goto LABEL_605;
                  WdLogSingleEntry1(2LL, v69);
                  WdLogGlobalForLineNumber = 3876;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    0xFFFFFFFFLL,
                    L"CopyIcdFileName failed with 0x%I64x",
                    UmdFileVersion,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 3853;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                goto LABEL_619;
              case 3:
                if ( (_DWORD)Size == 24 )
                {
                  v241 = 0LL;
                  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *, __int64 *, unsigned int *, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v213 + 391) + 760LL) + 8LL) + 56LL))(
                    *(_QWORD *)(*((_QWORD *)v213 + 391) + 768LL),
                    0LL,
                    &v241,
                    &v241,
                    &v241,
                    v23,
                    v23 + 2,
                    v23 + 4);
                  UmdFileVersion = 0;
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 3892;
                }
                goto LABEL_605;
              case 4:
              case 0x34:
                if ( (_DWORD)Size != 16 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4009;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v80 = v213;
                if ( HIDWORD(Src[0]) == 4 )
                  v80 = v222;
                if ( !v80 )
                  goto LABEL_203;
                *(_OWORD *)v23 = *(_OWORD *)((char *)v80 + 300);
                UmdFileVersion = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 5:
                if ( (_DWORD)Size == 12 )
                {
                  UmdFileVersion = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v213 + 391) + 736LL)
                                                                                                 + 8LL)
                                                                                     + 512LL))(
                                     *(_QWORD *)(*((_QWORD *)v213 + 391) + 744LL),
                                     v23);
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4076;
                }
                goto LABEL_605;
              case 6:
              case 0x35:
                if ( (_DWORD)Size != 12 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4097;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                UmdFileVersion = -1073741823;
                v85 = v213;
                if ( HIDWORD(Src[0]) == 6 )
                  v85 = v222;
                if ( !v85 )
                  goto LABEL_605;
                v86 = *(_QWORD *)(*((_QWORD *)v85 + 27) + 64LL);
                *v23 = *(_DWORD *)(v86 + 1144);
                v23[1] = *(unsigned __int16 *)(v86 + 1150);
                v23[2] = (unsigned __int16)*(_DWORD *)(v86 + 1148);
                UmdFileVersion = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 7:
                if ( (_DWORD)Size == 12 )
                {
                  v73 = *(_QWORD *)(*((_QWORD *)v213 + 391) + 760LL);
                  v74 = *((_QWORD *)v227 + 8);
                  if ( v74 )
                    v6 = *(_QWORD *)(v74 + 8LL * (unsigned int)(*(_DWORD *)v73 - 1));
                  UmdFileVersion = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v73 + 8) + 352LL))(
                                     v6,
                                     v23);
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 3962;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                goto LABEL_619;
              case 8:
              case 0x36:
                if ( (_DWORD)Size != 2080 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4122;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                UmdFileVersion = -1073741823;
                v87 = v213;
                if ( HIDWORD(Src[0]) == 8 )
                  v87 = v222;
                if ( !v87 )
                  goto LABEL_605;
                v88 = *((_QWORD *)v87 + 27);
                memset(v23, 0, 0x820uLL);
                PnpRegistryValue = DpiReadPnpRegistryValue(
                                     v88,
                                     L"HardwareInformation.AdapterString",
                                     (char *)v23,
                                     0x206u,
                                     2u);
                if ( (int)(PnpRegistryValue + 0x80000000) >= 0 && PnpRegistryValue != -1073741772 )
                  goto LABEL_239;
                v90 = PnpRegistryValue >= 0;
                v91 = DpiReadPnpRegistryValue(v88, L"HardwareInformation.BiosString", (char *)v23 + 520, 0x206u, 2u);
                PnpRegistryValue = v91;
                if ( v91 < 0 )
                {
                  if ( v91 != -1073741772 )
                    goto LABEL_239;
                }
                else
                {
                  v90 = 1;
                }
                v92 = DpiReadPnpRegistryValue(v88, L"HardwareInformation.DacType", (char *)v23 + 1040, 0x206u, 2u);
                PnpRegistryValue = v92;
                if ( v92 < 0 )
                {
                  if ( v92 != -1073741772 )
                    goto LABEL_239;
                }
                else
                {
                  v90 = 1;
                }
                PnpRegistryValue = DpiReadPnpRegistryValue(
                                     v88,
                                     L"HardwareInformation.ChipType",
                                     (char *)v23 + 1560,
                                     0x206u,
                                     2u);
                if ( PnpRegistryValue == -1073741772 && v90 )
                  PnpRegistryValue = 0;
LABEL_239:
                UmdFileVersion = PnpRegistryValue;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 0xB:
              case 0x37:
                if ( (_DWORD)Size != 4 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4147;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                UmdFileVersion = -1073741823;
                v93 = v213;
                if ( HIDWORD(Src[0]) == 11 )
                  v93 = v222;
                v229 = v93;
                if ( !v93 )
                  goto LABEL_605;
                v94 = 0;
                v95 = *((_DWORD *)v93 + 111);
                if ( (v95 & 0x20) == 0 && (v95 & 4) == 0 )
                {
                  v96 = *((_QWORD *)v93 + 27);
                  v97 = 0;
                  v219 = 0;
                  v218 = 0;
                  v220 = 0;
                  v248 = *(_QWORD *)(v96 + 64);
                  v228 = *(struct DXGADAPTER **)(v248 + 40);
                  v98 = *(struct _DEVICE_OBJECT **)(v248 + 152);
                  Data = 0;
                  RequiredSize = 0;
                  Type = 0;
                  if ( !v98 )
                  {
                    v103 = -1073741811;
                    v104 = -1073741811;
                    goto LABEL_259;
                  }
                  DevicePropertyData = IoGetDevicePropertyData(
                                         v98,
                                         &DEVPKEY_Device_InstallInProgress,
                                         0,
                                         0,
                                         1u,
                                         &Data,
                                         &RequiredSize,
                                         &Type);
                  v100 = DevicePropertyData;
                  LODWORD(v226) = DevicePropertyData;
                  if ( DevicePropertyData == -1073741772 )
                  {
                    v101 = 0;
                    Data = 0;
                    v100 = 0;
                    LODWORD(v226) = 0;
LABEL_255:
                    v97 = v101 == -1;
                    v219 = v97;
                    goto LABEL_256;
                  }
                  if ( DevicePropertyData >= 0 )
                  {
                    if ( Type == 17 )
                    {
                      v101 = Data;
                      goto LABEL_255;
                    }
                    v100 = -1073741788;
                    LODWORD(v226) = -1073741788;
                    WdLogSingleEntry1(2LL, -1073741788LL);
                    WdLogGlobalForLineNumber = 1416;
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL, DevicePropertyData);
                    WdLogGlobalForLineNumber = 1406;
                  }
LABEL_256:
                  v102 = v100 < 0;
                  v103 = -1073741811;
                  if ( !v102 )
                  {
LABEL_260:
                    if ( v97 || *((_DWORD *)v228 + 7) >= 0x6000u )
                    {
LABEL_275:
                      v94 = 0;
                      v93 = v229;
                      goto LABEL_277;
                    }
                    v105 = *(struct _DEVICE_OBJECT **)(v248 + 152);
                    v217 = 0;
                    v239 = 0;
                    v234 = 0;
                    if ( !v105 )
                    {
LABEL_272:
                      WdLogSingleEntry1(2LL, v103);
                      WdLogGlobalForLineNumber = 2019;
LABEL_273:
                      if ( v218 )
                      {
                        v94 = 1;
                        v97 = 1;
                        v219 = 1;
                        v93 = v229;
                        goto LABEL_277;
                      }
                      goto LABEL_275;
                    }
                    v106 = IoGetDevicePropertyData(
                             v105,
                             &DEVPKEY_Device_IsRebootRequired,
                             0,
                             0,
                             1u,
                             &v217,
                             &v239,
                             &v234);
                    v103 = v106;
                    if ( v106 == -1073741772 )
                    {
                      v107 = 0;
                      v217 = 0;
                      v103 = 0;
                    }
                    else
                    {
                      if ( v106 < 0 )
                      {
                        WdLogSingleEntry1(2LL, v106);
                        WdLogGlobalForLineNumber = 1406;
                        goto LABEL_271;
                      }
                      if ( v234 != 17 )
                      {
                        v103 = -1073741788;
                        WdLogSingleEntry1(2LL, -1073741788LL);
                        WdLogGlobalForLineNumber = 1416;
                        goto LABEL_271;
                      }
                      v107 = v217;
                    }
                    v218 = v107 == -1;
                    v220 = v218;
LABEL_271:
                    if ( v103 >= 0 )
                      goto LABEL_273;
                    goto LABEL_272;
                  }
                  v104 = (int)v226;
LABEL_259:
                  WdLogSingleEntry1(2LL, v104);
                  WdLogGlobalForLineNumber = 2004;
                  goto LABEL_260;
                }
                v97 = 0;
LABEL_277:
                *v23 = v97;
                if ( v94 )
                {
                  v108 = (void *)*((_QWORD *)v93 + 27);
                  ObfReferenceObject(v108);
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  DxgkInvalidateDeviceState((__int64)v108);
                  ObfDereferenceObject(v108);
                  UmdFileVersion = 0;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                else
                {
LABEL_585:
                  UmdFileVersion = 0;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                goto LABEL_619;
              case 0xC:
                if ( (_DWORD)Size == 4 )
                {
                  *v23 = 0;
                  *v23 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v213 + 391) + 16LL) + 2468LL) >> 5) & 1;
                  UmdFileVersion = 0;
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4189;
                }
                goto LABEL_605;
              case 0xD:
              case 0x38:
                if ( (_DWORD)Size != 4 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4211;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                UmdFileVersion = -1073741823;
                v109 = v213;
                if ( HIDWORD(Src[0]) == 13 )
                  v109 = v222;
                if ( !v109 )
                  goto LABEL_605;
                v110 = *((_DWORD *)v109 + 751);
                *v23 = v110;
                if ( (*((_DWORD *)v227 + 102) & 0x100) != 0
                  && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v227 + 74) + 592LL) + 392LL) <= 0x10u
                  && v110 > 2600 )
                {
                  *v23 = 2600;
                }
                goto LABEL_585;
              case 0xF:
              case 0x39:
                if ( (_DWORD)Size != 4 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4246;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                UmdFileVersion = -1073741823;
                v111 = v213;
                v112 = v213;
                if ( HIDWORD(Src[0]) == 15 )
                  v112 = v222;
                if ( !v112 )
                  goto LABEL_605;
                AdapterType = DXGADAPTER::GetAdapterType(v112, &v249);
                v114 = *AdapterType;
                *v23 = *AdapterType;
                if ( v111 )
                {
                  v114 ^= (v114 ^ (*((unsigned __int8 *)v111 + 212) << 8)) & 0x100;
                  *v23 = v114;
                }
                if ( *((_DWORD *)v112 + 842) )
                  *v23 = v114 | 0x2000;
                goto LABEL_585;
              case 0x10:
                if ( (_DWORD)Size != 8 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4279;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v45) + 102) & 4) != 0 )
                {
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  UmdFileVersion = OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
                                     v222,
                                     (__int64)lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_);
                }
                else
                {
                  UmdFileVersion = -1073741790;
                  WdLogSingleEntry1(3LL, -1073741790LL);
                  WdLogGlobalForLineNumber = 4288;
                }
                goto LABEL_605;
              case 0x11:
              case 0x3A:
                if ( (_DWORD)Size != 12 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4310;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                UmdFileVersion = -1073741823;
                v115 = v213;
                if ( HIDWORD(Src[0]) == 17 )
                  v115 = v222;
                if ( !v115 )
                  goto LABEL_605;
                *v23 = *((_DWORD *)v115 + 732);
                v23[1] = *((_DWORD *)v115 + 733);
                v116 = v23[2] ^ ((unsigned __int8)v23[2] ^ *((_BYTE *)v115 + 2936)) & 1;
                v23[2] = v116;
                v117 = v116 ^ ((unsigned __int8)v116 ^ (unsigned __int8)(2 * *((_BYTE *)v115 + 2937))) & 2;
                v23[2] = v117;
                v118 = v117 ^ ((unsigned __int8)v117 ^ (unsigned __int8)(4 * *((_BYTE *)v115 + 2938))) & 4;
                v23[2] = v118;
                v119 = v118 ^ ((unsigned __int8)v118 ^ (unsigned __int8)(2 * *((_DWORD *)v115 + 613))) & 8 | 0x10;
                v23[2] = v119;
                v120 = v119 ^ ((unsigned __int8)v119 ^ (unsigned __int8)(*((_DWORD *)v115 + 613) >> 23)) & 0x20;
                v23[2] = v120;
                v121 = v120 ^ ((unsigned __int8)v120 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v115 + 612) << 6)) & 0x40;
                v23[2] = v121;
                v122 = v121 ^ ((unsigned __int8)v121 ^ (unsigned __int8)(32 * *((_DWORD *)v115 + 608))) & 0x80;
                v23[2] = v122;
                if ( !*((_QWORD *)v115 + 390) || (v123 = 256, !*((_QWORD *)v115 + 87)) )
                  v123 = 0;
                v124 = v123 | v122 & 0xFFFFFEFF;
                v23[2] = v124;
                v23[2] = v124 ^ ((unsigned __int16)v124 ^ (unsigned __int16)(*((unsigned __int8 *)v115 + 2942) << 9)) & 0x200;
                UmdFileVersion = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 0x12:
                if ( (_DWORD)Size == 8 )
                {
                  UmdFileVersion = ADAPTER_RENDER::GetUmdFileVersion(
                                     *((ADAPTER_RENDER **)v213 + 391),
                                     (union _LARGE_INTEGER *)v23);
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4334;
                }
                goto LABEL_605;
              case 0x13:
                if ( (_DWORD)Size != 4 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4370;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                if ( (unsigned int)Feature_IddNoDFlipSupport__private_IsEnabledDeviceUsageNoInline() )
                {
                  if ( (!v46 || !_bittest((const signed __int32 *)v46 + 111, 8u))
                    && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v213 + 391) + 16LL) + 2939LL) )
                  {
LABEL_339:
                    *v23 = 1;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
LABEL_619:
                    if ( UmdFileVersion >= 0 && (*((_DWORD *)v227 + 102) & 0x200) != 0 )
                      UmdFileVersion = PostProcessUMDFileName(SHIDWORD(Src[0]), (char *)v231, Size);
                    goto LABEL_622;
                  }
                }
                else
                {
                  LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v213 + 391) + 16LL) + 2939LL) != 0;
                }
                *v23 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 0x14:
                if ( (_DWORD)Size == 4 )
                {
                  LOBYTE(v6) = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v213 + 391)) != 0;
                  *v23 = v6;
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4416;
                }
                goto LABEL_605;
              case 0x15:
                if ( (_DWORD)Size != 520 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 3762;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v60 = v213;
                if ( !(_BYTE)word_14015DD5C || !*((_BYTE *)v213 + 2943) || (*((_DWORD *)v213 + 744) & 0x20) != 0 )
                {
                  UmdFileVersion = -1073741637;
                  WdLogSingleEntry3(4LL, v23, v213, -1073741637LL);
                  WdLogGlobalForLineNumber = 3789;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v61 = *((_QWORD *)v213 + 391);
                if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v45) + 102) & 8) != 0 )
                {
                  v63 = *(char **)(v61 + 632);
                  v64 = *(_WORD *)(v61 + 624);
                }
                else
                {
                  v63 = *(char **)(v61 + 616);
                  v64 = *(_WORD *)(v61 + 608);
                }
                *(_WORD *)v23 = 0;
                v65 = RtlStringCbCopyNW((char *)v23, v62, v63, v64);
                UmdFileVersion = v65;
                if ( v65 < 0 )
                {
                  WdLogSingleEntry3(4LL, v23, v60, v65);
                  WdLogGlobalForLineNumber = 3779;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                goto LABEL_605;
              case 0x16:
              case 0x3B:
                if ( (_DWORD)Size != 4 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4470;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                UmdFileVersion = -1073741823;
                v131 = v213;
                if ( HIDWORD(Src[0]) == 22 )
                  v131 = v222;
                if ( !v131 )
                  goto LABEL_605;
                DXGADAPTER::QueryWDDM1_3Caps(v131, (struct _D3DKMT_WDDM_1_3_CAPS *)v23);
                if ( v132 && v133 != v132 )
                {
                  v235.0 = 0;
                  DXGADAPTER::QueryWDDM1_3Caps(v132, &v235);
                  *v23 = *(_BYTE *)&v235.0 & 0x20 | *v23 & 0xFFFFFFDF;
                }
                goto LABEL_585;
              case 0x17:
                if ( (_DWORD)Size != 16 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4441;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                if ( !v23[1] )
                  goto LABEL_352;
                if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v45) + 102) & 4) != 0 )
                {
                  if ( v23[1] )
                  {
                    *(_DWORD *)(*((_QWORD *)v213 + 391) + 1240LL) = v23[3];
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  }
                  else
                  {
LABEL_352:
                    v130 = v213;
                    v23[2] = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v213 + 391));
                    v23[3] = *(_DWORD *)(*((_QWORD *)v130 + 391) + 1240LL);
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  }
                }
                else
                {
                  UmdFileVersion = -1073741790;
                  WdLogSingleEntry1(3LL, -1073741790LL);
                  WdLogGlobalForLineNumber = 4446;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                goto LABEL_619;
              case 0x18:
                if ( (_DWORD)Size == 4 )
                {
                  *v23 = 0;
                  v134 = v213;
                  v135 = (*((_DWORD *)v213 + 616) & 0x20) == 0;
                  *v23 = v135;
                  v136 = 0;
                  if ( (*((_BYTE *)v134 + 2468) & 0x60) == 0x60 )
                    v136 = 2;
                  v137 = v135 | v136;
                  *v23 = v137;
                  v138 = 0;
                  if ( (*((_BYTE *)v134 + 2468) & 0xA0) == 0xA0 )
                    v138 = 4;
                  v139 = v137 | v138;
                  *v23 = v139;
                  if ( *((_DWORD *)v134 + 743) > 1u )
                    LODWORD(v6) = 8;
                  v140 = v139 | v6;
                  *v23 = v140;
                  v141 = v140 | (16 * (*((_DWORD *)v134 + 744) & 1));
                  *v23 = v141;
                  *v23 = v141 | (32 * (*((_BYTE *)v134 + 2968) & 1));
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4500;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                goto LABEL_619;
              case 0x19:
                if ( (_DWORD)Size != 78 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4590;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v150 = *v23;
                v151 = HIWORD(*v23);
                v152 = *((_DWORD *)v213 + 684);
                if ( v152 < 0x2000 )
                  v153 = 1;
                else
                  v153 = *((_DWORD *)v213 + 74);
                if ( (unsigned int)v151 >= v153 )
                {
                  if ( v152 >= 0x2000 )
                    v37 = *((_DWORD *)v213 + 74);
                  WdLogSingleEntry3(3LL, v213, (unsigned int)v151, v37);
                  WdLogGlobalForLineNumber = 10856;
                  UmdFileVersion = -1073741811;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v154 = (unsigned __int16 *)(*((_QWORD *)v213 + 374) + 344 * v151);
                if ( (unsigned __int16)v150 >= *v154 )
                {
                  WdLogSingleEntry3(3LL, v213, (unsigned __int16)v150, *v154);
                  WdLogGlobalForLineNumber = 10866;
                  UmdFileVersion = -1073741811;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v155 = *((_QWORD *)v154 + 4);
                if ( v155 )
                {
                  v156 = 74LL * (unsigned __int16)v150;
                  *(_OWORD *)(v23 + 1) = *(_OWORD *)(v156 + v155);
                  *(_OWORD *)(v23 + 5) = *(_OWORD *)(v156 + v155 + 16);
                  *(_OWORD *)(v23 + 9) = *(_OWORD *)(v156 + v155 + 32);
                  *(_OWORD *)(v23 + 13) = *(_OWORD *)(v156 + v155 + 48);
                  *(_QWORD *)(v23 + 17) = *(_QWORD *)(v156 + v155 + 64);
                  *((_WORD *)v23 + 38) = *(_WORD *)(v156 + v155 + 72);
                  UmdFileVersion = 0;
                }
                else
                {
                  WdLogSingleEntry1(3LL, v213);
                  WdLogGlobalForLineNumber = 10872;
                  UmdFileVersion = -1073741637;
                }
                goto LABEL_605;
              case 0x1A:
                if ( (_DWORD)Size != 520 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4607;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v157 = *((_QWORD *)v213 + 391);
                *(_WORD *)v23 = 0;
                v158 = RtlStringCbCopyNW((char *)v23, v47, *(char **)(v157 + 648), *(unsigned __int16 *)(v157 + 640));
                UmdFileVersion = v158;
                if ( v158 >= 0 )
                  goto LABEL_605;
                WdLogSingleEntry3(4LL, v23, v159, v158);
                WdLogGlobalForLineNumber = 4619;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 0x1B:
                if ( (_DWORD)Size == 4 )
                {
                  *v23 = (*((_DWORD *)v222 + 111) >> 9) & 1;
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4660;
                }
                goto LABEL_605;
              case 0x1C:
                if ( (_DWORD)Size == 4 )
                {
                  *v23 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v213 + 391) + 16LL) + 2460LL) >> 4) & 1;
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4678;
                }
                goto LABEL_605;
              case 0x1D:
                if ( (_DWORD)Size != 520 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4633;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v160 = *((_QWORD *)v213 + 391);
                *(_WORD *)v23 = 0;
                v161 = RtlStringCbCopyNW((char *)v23, v47, *(char **)(v160 + 664), *(unsigned __int16 *)(v160 + 656));
                UmdFileVersion = v161;
                if ( v161 >= 0 )
                  goto LABEL_605;
                WdLogSingleEntry3(4LL, v23, v162, v161);
                WdLogGlobalForLineNumber = 4645;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 0x1E:
                if ( (_DWORD)Size != 4 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4704;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                *v23 = DXGADAPTER::GetNumDifferentPhysicalAdapters(v213);
                if ( (*((_DWORD *)v227 + 102) & 0x100) != 0
                  && (**(_DWORD **)(v163 + 3008) & 0x1000000) == 0
                  && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v163 + 216) + 64LL) + 40LL) + 28LL) >= 0xF003u )
                {
                  *v23 = 1;
                }
                goto LABEL_585;
              case 0x1F:
                if ( (_DWORD)Size != 28 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4734;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v213);
                if ( (unsigned int)v165 >= NumDifferentPhysicalAdapters )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, v165, -1073741811LL);
                  WdLogGlobalForLineNumber = 4758;
                }
                else
                {
                  _mm_lfence();
                  v166 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)v213 + 374) + 344LL * (unsigned int)v165 + 8) + 64LL);
                  v23[1] = v166[281];
                  v23[2] = v166[282];
                  v23[3] = v166[283];
                  v23[4] = v166[284];
                  v23[5] = v166[285];
                  v23[6] = v166[280];
                  UmdFileVersion = 0;
                }
                goto LABEL_605;
              case 0x20:
                if ( (_DWORD)Size == 4 )
                {
                  QueryDriverCapsExt(v46, (struct _D3DKMT_DRIVERCAPS_EXT *)v23);
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4792;
                }
                goto LABEL_605;
              case 0x21:
                if ( (_DWORD)Size != 4 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4810;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v254 = 0LL;
                v255 = 0;
                v167 = DxgkMiracastQueryMiracastSupportInternal(&v254);
                if ( v167 == -1073741637 )
                  goto LABEL_439;
                if ( v167 >= 0 )
                {
                  *v23 = 2 - (BYTE8(v254) != 0);
                }
                else
                {
                  UmdFileVersion = v167;
                  WdLogSingleEntry1(3LL, v167);
                  WdLogGlobalForLineNumber = 4824;
                }
                goto LABEL_605;
              case 0x22:
                if ( (_DWORD)Size == 12 )
                {
                  v168 = DXGADAPTER::GetNumDifferentPhysicalAdapters(v213);
                  if ( (*(_DWORD *)(v169 + 2468) & 0x40) != 0 )
                  {
                    v170 = *v23;
                    if ( (unsigned int)v170 < v168 )
                    {
                      v171 = *(_QWORD *)(v169 + 3128);
                      if ( (*(_DWORD *)(*(_QWORD *)(v171 + 16) + 2468LL) & 0x40) == 0 )
                      {
                        WdLogSingleEntry0(1LL);
                        WdLogGlobalForLineNumber = 4464;
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          0xFFFFFFFFLL,
                          L"GetAdapter()->IsGpuMmuSupported()",
                          4464LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      v172 = *(_QWORD *)(v171 + 1264);
                      if ( v172 )
                        v173 = (_DWORD *)(v172 + 144 * v170);
                      else
                        v173 = 0LL;
                      v23[1] = 0;
                      v174 = *v173 & 1;
                      v23[1] = v174;
                      v175 = v174 | *v173 & 2;
                      v23[1] = v175;
                      v23[1] = v175 | (*v173 >> 2) & 4;
                      v23[2] = v173[2];
                      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                    }
                    else
                    {
                      UmdFileVersion = -1073741811;
                      WdLogSingleEntry2(3LL, *v23, -1073741811LL);
                      WdLogGlobalForLineNumber = 4868;
                      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                    }
                  }
                  else
                  {
                    UmdFileVersion = -1073741811;
                    WdLogSingleEntry1(3LL, -1073741811LL);
                    WdLogGlobalForLineNumber = 4858;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  }
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4847;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                goto LABEL_619;
              case 0x23:
                if ( (_DWORD)Size == 4 )
                {
                  LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v213 + 391) + 16LL) + 3044LL) != 0;
                  *v23 = v6;
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4887;
                }
                goto LABEL_605;
              case 0x24:
                if ( (_DWORD)Size == 4 )
                {
                  *v23 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 356);
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4912;
                }
                goto LABEL_605;
              case 0x25:
                if ( (_DWORD)Size == 4 )
                {
                  LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v213 + 391) + 16LL) + 3045LL) != 0;
                  *v23 = v6;
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4930;
                }
                goto LABEL_605;
              case 0x26:
                if ( (_DWORD)Size == 4 )
                {
                  LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v213 + 391) + 16LL) + 3046LL) != 0;
                  *v23 = v6;
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4955;
                }
                goto LABEL_605;
              case 0x27:
                if ( (_DWORD)Size == 4 )
                {
                  LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v213 + 391) + 16LL) + 3047LL) != 0;
                  *v23 = v6;
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4980;
                }
                goto LABEL_605;
              case 0x28:
                if ( (_DWORD)Size == 4 )
                {
                  LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v213 + 391) + 16LL) + 3048LL) != 0;
                  *v23 = v6;
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5005;
                }
                goto LABEL_605;
              case 0x29:
                if ( (_DWORD)Size == 24 )
                {
                  UmdFileVersion = DxgkReadPnPRegistryPath(
                                     v213,
                                     *v23,
                                     v23[1],
                                     *((void **)v23 + 1),
                                     *((_QWORD *)v23 + 2));
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4774;
                }
                goto LABEL_605;
              case 0x2A:
                if ( (_DWORD)Size != 56 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 3921;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v70 = DXGADAPTER::GetNumDifferentPhysicalAdapters(v213);
                if ( v72 < v70 )
                {
                  VIDMM_EXPORT::VidMmGetTotalSegmentSize(
                    *(VIDMM_EXPORT **)(*(_QWORD *)(v71 + 3128) + 760LL),
                    *(const struct VIDMM_GLOBAL **)(*(_QWORD *)(v71 + 3128) + 768LL),
                    v72,
                    (unsigned __int64 *)v23 + 4,
                    (unsigned __int64 *)v23 + 5,
                    (unsigned __int64 *)v23 + 6,
                    (unsigned __int64 *)v23 + 1,
                    (unsigned __int64 *)v23 + 2,
                    (unsigned __int64 *)v23 + 3);
                  UmdFileVersion = 0;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                UmdFileVersion = -1073741811;
                WdLogSingleEntry2(3LL, *v23, -1073741811LL);
                WdLogGlobalForLineNumber = 3945;
                goto LABEL_585;
              case 0x2B:
                if ( (_DWORD)Size == 4 )
                {
                  LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v213 + 391) + 16LL) + 3049LL) != 0;
                  *v23 = v6;
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5030;
                }
                goto LABEL_605;
              case 0x2C:
                if ( (_DWORD)Size != 1 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5055;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                *(_BYTE *)v23 = 1;
                v176 = v213;
                if ( *((_DWORD *)v213 + 105) != 1297040209 )
                  goto LABEL_605;
                wcscpy(Str2, L"Qualcomm Adreno 530");
                if ( wcsncmp(*((const wchar_t **)v213 + 240), Str2, 0x14uLL)
                  || (*(_DWORD *)(*((_QWORD *)v176 + 374) + 16LL) & 0x10) != 0 )
                {
                  goto LABEL_605;
                }
                *(_BYTE *)v23 = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 0x2D:
                if ( (_DWORD)Size != 4 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5102;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v177 = v213;
                if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v213 + 391))
                  && !DXGADAPTER::SupportGetMultiPlaneOverlayCaps(*(DXGADAPTER **)(*((_QWORD *)v177 + 391) + 16LL))
                  && !DXGADAPTER::SupportGetPostCompositionCaps(v178) )
                {
LABEL_439:
                  *v23 = 0;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                goto LABEL_339;
              case 0x2E:
                if ( (_DWORD)Size != 12 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5130;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                if ( v23[1] )
                {
                  v179 = *v23;
                  if ( (unsigned int)v179 >= 0x10 )
                    goto LABEL_605;
                  *(_BYTE *)(v179 + *((_QWORD *)v213 + 391) + 1224) = v23[2] != 0;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                else
                {
                  v180 = (ADAPTER_RENDER *)*((_QWORD *)v213 + 391);
                  v181 = *v23;
                  if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v180) && (unsigned int)v181 < 0x10 )
                  {
                    LOBYTE(v6) = *((_BYTE *)v180 + v181 + 1224) != 0;
                    v23[2] = v6;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  }
                  else
                  {
                    LOBYTE(v6) = 0;
                    v23[2] = v6;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  }
                }
                goto LABEL_619;
              case 0x2F:
                if ( (_DWORD)Size != 8 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5152;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v243 = 0LL;
                DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v244, *v23, v227, &v243);
                if ( v243 )
                {
                  *((_BYTE *)v23 + 4) = *((_BYTE *)v243 + 1938);
                }
                else
                {
                  WdLogSingleEntry1(2LL, *v23);
                  WdLogGlobalForLineNumber = 5167;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    0xFFFFFFFFLL,
                    L"Invalid hDevice (0x%I64x) specified",
                    *v23,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  LODWORD(v6) = -1073741811;
                }
                UmdFileVersion = v6;
                if ( !v244 || _InterlockedExchangeAdd64((volatile signed __int64 *)v244 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  goto LABEL_605;
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v244 + 2), v244);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 0x30:
                if ( (*((_DWORD *)v227 + 102) & 0x200) != 0 )
                {
                  HostSilo = PsGetHostSilo();
                  v6 = PsAttachSiloToCurrentThread(HostSilo);
                }
                UmdFileVersion = DxgkpQueryRegistry(v213, v23, Size);
                if ( !v6 )
                  goto LABEL_605;
                PsAttachSiloToCurrentThread(v6);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 0x31:
                if ( (_DWORD)Size != 8 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4352;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v125 = (union _LARGE_INTEGER *)*((_QWORD *)v213 + 391);
                *(_OWORD *)P = 0LL;
                if ( v125[91].QuadPart != -1 )
                {
                  LODWORD(v126) = 0;
                  goto LABEL_329;
                }
                FullDriverPath = IoQueryFullDriverPath(
                                   *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v125[2].QuadPart + 216) + 64LL) + 40LL)
                                             + 32LL),
                                   P);
                v126 = FullDriverPath;
                if ( FullDriverPath >= 0 )
                {
                  FileVersion = DxgkpGetFileVersion((struct _UNICODE_STRING *)P, v125 + 91, 0LL);
                  v126 = FileVersion;
                  if ( FileVersion >= 0 )
                    goto LABEL_328;
                  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogSingleEntry2)(
                    2LL,
                    (union _LARGE_INTEGER)v125[2].QuadPart,
                    FileVersion);
                  WdLogGlobalForLineNumber = 4175;
                  v128 = L"Failed to get kernel mode driver DLL version on adapter %I64d (ntStatus = %I64d).";
                }
                else
                {
                  v265 = 0LL;
                  *(_OWORD *)P = 0LL;
                  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogSingleEntry2)(
                    2LL,
                    (union _LARGE_INTEGER)v125[2].QuadPart,
                    FullDriverPath);
                  WdLogGlobalForLineNumber = 4164;
                  v128 = L"DpiGetDriverFullPath failed on adapter %I64d (ntStatus = %I64d).";
                }
                DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v128, v125[2].QuadPart, v126, 0LL, 0LL, 0LL);
LABEL_328:
                if ( (int)v126 < 0 )
                  goto LABEL_330;
LABEL_329:
                *(union _LARGE_INTEGER *)v23 = v125[91];
LABEL_330:
                if ( P[1] )
                  ExFreePoolWithTag(P[1], 0);
                UmdFileVersion = v126;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 0x32:
              case 0x33:
                if ( (unsigned int)Size < 8 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5184;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v182 = *(_QWORD *)(*((_QWORD *)v213 + 27) + 64LL);
                if ( !v182 || *(_DWORD *)(v182 + 16) != 1953656900 || *(_DWORD *)(v182 + 20) != 2 )
                {
                  UmdFileVersion = -1073741811;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                if ( HIDWORD(Src[0]) == 50 )
                {
                  if ( !*(_BYTE *)(v182 + 5868) )
                  {
LABEL_515:
                    v183 = *v23;
                    v184 = *v23 + 4;
                    if ( v184 >= *v23 )
                      v38 = *v23 + 4;
                    if ( (unsigned int)Size < v38 || v184 < v183 )
                    {
                      WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741789LL);
                      WdLogGlobalForLineNumber = 1000;
                      *v23 = 0;
                      UmdFileVersion = -1073741789;
                      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                      goto LABEL_619;
                    }
                    if ( HIDWORD(Src[0]) == 50 )
                    {
                      v185 = *(_DWORD *)(v182 + 5864);
                      v186 = *(const void **)(v182 + 5856);
                    }
                    else
                    {
                      v185 = *(_DWORD *)(v182 + 5880);
                      v186 = *(const void **)(v182 + 5872);
                    }
                    if ( v183 )
                    {
                      if ( v185 > v183 )
                      {
                        WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                        WdLogGlobalForLineNumber = 1030;
                        *v23 = 0;
                        UmdFileVersion = -1073741789;
                        DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                        goto LABEL_619;
                      }
                      if ( v185 )
                        memmove(v23 + 1, v186, v185);
                    }
                    *v23 = v185;
                    UmdFileVersion = 0;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                    goto LABEL_619;
                  }
                }
                else if ( !*(_BYTE *)(v182 + 5884) )
                {
                  goto LABEL_515;
                }
                WdLogSingleEntry1(3LL, -1073741637LL);
                WdLogGlobalForLineNumber = 987;
                *v23 = 0;
                UmdFileVersion = -1073741637;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 0x3C:
                if ( (_DWORD)Size == 80 )
                {
                  v81 = v222;
                  if ( !*((_QWORD *)v222 + 27) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 4046;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      0xFFFFFFFFLL,
                      L"pAdapterIn->GetFdo() != NULL",
                      4046LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  v82 = *(_QWORD *)(*((_QWORD *)v81 + 27) + 64LL);
                  v83 = (const void **)(v82 + 4896);
                  if ( !*(_QWORD *)(v82 + 4904) )
                    v83 = 0LL;
                  if ( v83 )
                  {
                    *(_OWORD *)v23 = 0LL;
                    *((_OWORD *)v23 + 1) = 0LL;
                    *((_OWORD *)v23 + 2) = 0LL;
                    *((_OWORD *)v23 + 3) = 0LL;
                    *((_OWORD *)v23 + 4) = 0LL;
                    v84 = *(unsigned __int16 *)v83;
                    if ( *(unsigned __int16 *)v83 >= 0x4Eu )
                      v84 = 78LL;
                    memmove(v23, v83[1], v84);
                    UmdFileVersion = 0;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  }
                  else
                  {
LABEL_203:
                    UmdFileVersion = -1073741823;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  }
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4038;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                goto LABEL_619;
              case 0x3D:
                if ( (_DWORD)Size == 56 )
                {
                  UmdFileVersion = DXGADAPTER::GetNodePerfData(v213, (struct _D3DKMT_NODE_PERFDATA *)v23);
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5205;
                }
                goto LABEL_605;
              case 0x3E:
                if ( (_DWORD)Size == 64 )
                {
                  UmdFileVersion = DXGADAPTER::GetAdapterPerfData(v213, (struct _D3DKMT_ADAPTER_PERFDATA *)v23);
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5222;
                }
                goto LABEL_605;
              case 0x3F:
                if ( (_DWORD)Size == 40 )
                {
                  UmdFileVersion = DXGADAPTER::GetAdapterPerfDataCaps(v213, (struct _D3DKMT_ADAPTER_PERFDATACAPS *)v23);
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5239;
                }
                goto LABEL_605;
              case 0x40:
                if ( (_DWORD)Size == 132 )
                {
                  UmdFileVersion = DXGADAPTER::GetGpuVersion(v213, (struct _D3DKMT_GPUVERSION *)v23);
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5256;
                }
                goto LABEL_605;
              case 0x41:
              case 0x42:
                if ( (_DWORD)Size != 0x2000 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5275;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                UmdFileVersion = -1073741823;
                v187 = v213;
                if ( HIDWORD(Src[0]) == 65 )
                  v187 = v222;
                if ( !v187 )
                  goto LABEL_605;
                DXGADAPTER::GetDeviceDescriptor(v187, 0x2000u, (unsigned __int16 *)v23);
                UmdFileVersion = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 0x44:
                if ( (_DWORD)Size == 1 )
                {
                  if ( HIDWORD(Src[0]) == 68 && v213 )
                  {
                    *(_BYTE *)v23 = *((_BYTE *)v213 + 210);
                    UmdFileVersion = 0;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  }
                  else
                  {
                    *(_BYTE *)v23 = 0;
                    UmdFileVersion = 0;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  }
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5323;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                goto LABEL_619;
              case 0x46:
                if ( (_DWORD)Size != 4 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4518;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                *v23 = 0;
                v142 = v213;
                if ( !*((_QWORD *)v213 + 391) )
                  goto LABEL_605;
                LOBYTE(v6) = (**((_DWORD **)v213 + 376) & 0x18000) != 0;
                *v23 = v6;
                v143 = v6 | (*(_BYTE *)(*((_QWORD *)v142 + 391) + 1880LL) != 0 ? 2 : 0);
                *v23 = v143;
                *v23 = v143 | (*((_DWORD *)v142 + 744) >> 1) & 8;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 0x47:
                if ( (_DWORD)Size != 524 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5298;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v188 = v213;
                v228 = v213;
                v189 = *((_QWORD *)v213 + 391);
                v190 = *v23;
                if ( (_DWORD)v190 )
                {
                  v191 = -1073741811;
                }
                else
                {
                  if ( !DXGPROCESS::GetCurrent(v45) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 3646;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      0xFFFFFFFFLL,
                      L"DXGPROCESS::GetCurrent() != NULL",
                      3646LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v192) + 102) & 8) != 0 )
                    v194 = v190 + 33;
                  else
                    v194 = v190 + 32;
                  v195 = (const void **)(v189 + 16 * v194);
                  v196 = *(unsigned __int16 *)v195;
                  if ( !(_WORD)v196 || (_DWORD)v196 == 4 && !memcmp(L"<>", v195[1], 4uLL) )
                    LODWORD(v6) = 1;
                  if ( (_DWORD)v6 )
                    v191 = -1073741811;
                  else
                    v191 = RtlStringCbCopyNW((char *)v23 + 4, v193, (char *)v195[1], v196);
                  v188 = v228;
                }
                UmdFileVersion = v191;
                if ( v191 >= 0 )
                  goto LABEL_605;
                WdLogSingleEntry3(4LL, v23, v188, v191);
                WdLogGlobalForLineNumber = 5307;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 0x48:
                if ( (_DWORD)Size != 12 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5343;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v197 = v23[1];
                v198 = *v23;
                v23[2] = 0;
                if ( *((int *)v213 + 684) >= 0x2000 )
                  v37 = *((_DWORD *)v213 + 74);
                if ( (unsigned int)v198 >= v37 )
                  goto LABEL_585;
                v199 = (unsigned __int16 *)(*((_QWORD *)v213 + 374) + 344 * v198);
                v200 = *((_QWORD *)v199 + 4);
                if ( !v200 )
                  goto LABEL_585;
                v201 = *v199;
                v202 = 0;
                if ( !*v199 )
                  goto LABEL_585;
                v203 = 0LL;
                do
                {
                  v204 = v203 + v200;
                  if ( *(_DWORD *)(v203 + v200) == v197 )
                  {
                    v23[2] = (*(_DWORD *)(v204 + 68) >> 2) & 1;
                    if ( (*(_BYTE *)(v204 + 68) & 4) == 0 )
                      goto LABEL_585;
                    v200 = *((_QWORD *)v199 + 4);
                  }
                  ++v202;
                  v203 += 74LL;
                }
                while ( v202 < v201 );
                goto LABEL_585;
              case 0x49:
                if ( (_DWORD)Size == 4 )
                {
                  if ( (_BYTE)word_14015DD5C && *((_BYTE *)v213 + 2943) )
                  {
                    *v23 = (*((_DWORD *)v213 + 744) & 0x20) == 0;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  }
                  else
                  {
                    UmdFileVersion = -1073741637;
                    WdLogSingleEntry3(4LL, v23, v213, -1073741637LL);
                    WdLogGlobalForLineNumber = 3814;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  }
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 3800;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                goto LABEL_619;
              case 0x4A:
                if ( (_DWORD)Size != 8 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5361;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                if ( !v46 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry1(3LL, -1073741811LL);
                  WdLogGlobalForLineNumber = 5367;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                *(_QWORD *)v23 = 0LL;
                if ( !*((_QWORD *)v46 + 391) )
                {
                  v205 = *((_QWORD *)v46 + 390);
                  if ( *(_QWORD *)(*(_QWORD *)(v205 + 16) + 3128LL) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 7031;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      0xFFFFFFFFLL,
                      L"GetAdapter()->IsDisplayOnlyAdapter()",
                      7031LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  *(_QWORD *)v23 = *(int *)(v205 + 448) ^ (*(_QWORD *)v23 ^ *(int *)(v205 + 448)) & 0xFFFFFFFFFFFFFFFEuLL;
                }
                if ( !(unsigned int)Feature_CursorScaledByHW__private_IsEnabledDeviceUsageNoInline()
                  || !*((_BYTE *)v46 + 2970) )
                {
                  goto LABEL_605;
                }
                *(_QWORD *)v23 |= 2uLL;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 0x4B:
                if ( (_DWORD)Size == 4 )
                {
                  *v23 = 0;
                  v144 = v213;
                  v145 = 0;
                  if ( *((_QWORD *)v213 + 391) )
                  {
                    v146 = (**((_DWORD **)v213 + 376) >> 15) & 3;
                    *v23 = v146;
                    v145 = v146 & 0xFFFFFFFB | (*(_BYTE *)(*((_QWORD *)v144 + 391) + 1880LL) != 0 ? 4 : 0);
                    *v23 = v145;
                  }
                  if ( *((_DWORD *)v144 + 844) != -1 )
                    LODWORD(v6) = 8;
                  *v23 = v145 | v6;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4536;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                goto LABEL_619;
              case 0x4C:
                if ( (_DWORD)Size != 4 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 5394;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v206 = *((_DWORD *)v213 + 617);
                if ( (v206 & 0x10000) != 0 )
                {
                  *v23 = 3;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                if ( (v206 & 0x8000) != 0 )
                  *v23 = 2;
                else
                  *v23 = ((unsigned __int8)v206 >> 4) & 1;
                goto LABEL_605;
              case 0x4D:
                if ( (_DWORD)Size != 4 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4554;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                *v23 = 0;
                v147 = v213;
                if ( !*((_QWORD *)v213 + 391) )
                  goto LABEL_605;
                v148 = (**((_DWORD **)v213 + 376) >> 18) & 3;
                *v23 = v148;
                v149 = v148 | (**((_DWORD **)v147 + 376) >> 18) & 4;
                *v23 = v149;
                *v23 = v149 | (*((_DWORD *)v147 + 744) >> 3) & 8;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 0x4E:
                if ( (unsigned int)Size < 0x208 )
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 3715;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  goto LABEL_619;
                }
                v55 = v213;
                v56 = *((_QWORD *)v213 + 391);
                if ( *(_WORD *)(v56 + 592) )
                  v57 = RtlStringCbCopyNW(
                          (char *)v23,
                          SHIDWORD(Src[0]),
                          *(char **)(v56 + 600),
                          *(unsigned __int16 *)(v56 + 592));
                else
                  v57 = -1073741811;
                UmdFileVersion = v57;
                if ( v57 >= 0 )
                  goto LABEL_605;
                WdLogSingleEntry3(4LL, v23, v55, v57);
                WdLogGlobalForLineNumber = 3724;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                goto LABEL_619;
              case 0x4F:
                v58 = 520LL;
                if ( (unsigned int)Size >= 0x208 )
                {
                  v59 = *(_QWORD *)(*((_QWORD *)v213 + 27) + 64LL);
                  memset(v23, 0, 0x208uLL);
                  if ( *(_WORD *)(v59 + 2896) <= 0x208u )
                    v58 = *(unsigned __int16 *)(v59 + 2896);
                  memmove(v23, *(const void **)(v59 + 2904), v58);
                  *((_WORD *)v23 + 1) = 92;
                  UmdFileVersion = 0;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 3738;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                goto LABEL_619;
              case 0x50:
                if ( (_DWORD)Size == 4 )
                {
                  *v23 = 0;
                  if ( *((_QWORD *)v213 + 391) )
                  {
                    *v23 = (*((_DWORD *)v213 + 616) >> 11) & 1;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  }
                  else
                  {
LABEL_605:
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  }
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 4572;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                goto LABEL_619;
              case 0x51:
                if ( (_DWORD)Size == 4 )
                {
                  if ( (_BYTE)word_14015DD5C && *((_BYTE *)v213 + 2943) )
                  {
                    *v23 = (*((_DWORD *)v213 + 744) & 0x80) == 0;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  }
                  else
                  {
                    UmdFileVersion = -1073741637;
                    WdLogSingleEntry3(4LL, v23, v213, -1073741637LL);
                    WdLogGlobalForLineNumber = 3839;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                  }
                }
                else
                {
                  UmdFileVersion = -1073741811;
                  WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                  WdLogGlobalForLineNumber = 3825;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
                }
                goto LABEL_619;
              default:
                UmdFileVersion = -1073741811;
                WdLogSingleEntry2(3LL, SHIDWORD(Src[0]), -1073741811LL);
                WdLogGlobalForLineNumber = 5426;
                goto LABEL_605;
            }
          }
          if ( *((_DWORD *)v230 + 50) == 1 )
          {
            v46 = v230;
            goto LABEL_116;
          }
        }
      }
      UmdFileVersion = -1073741130;
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v264);
    }
LABEL_622:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v266);
LABEL_623:
    if ( UmdFileVersion >= 0 )
    {
      v210 = (unsigned int)Size;
      v211 = Src[1];
      if ( v221
        && ((char *)Src[1] + (unsigned int)Size > (void *)MmUserProbeAddress
         || (char *)Src[1] + (unsigned int)Size <= Src[1]) )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v211, v231, v210);
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v231);
    v10 = UmdFileVersion;
    if ( v237 && _InterlockedExchangeAdd64((volatile signed __int64 *)v237 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v237 + 2), v237);
    goto LABEL_60;
  }
  WdLogSingleEntry2(2LL, v29, v30);
  WdLogGlobalForLineNumber = 3492;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x!",
    (__int64)v29,
    v30,
    0LL,
    0LL,
    0LL);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v23);
  UmdFileVersion = PairingAdapters;
  if ( v237 && _InterlockedExchangeAdd64((volatile signed __int64 *)v237 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v237 + 2), v237);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v223);
  if ( v225 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v223);
  return (unsigned int)PairingAdapters;
}
