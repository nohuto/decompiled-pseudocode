/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140356E10
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x140304ED8 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1403530D4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140354F2C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140356384 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x140007CCC (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033C28 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1400375C0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1400391D4 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x140039E2C (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@XZ @ 0x14003B840 (--0DXGSYNCOBJECTMUTEX@@QEAA@XZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x140047A60 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x14005A138 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14006B8A4 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x14018A51C (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1401B1850 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1401BB658 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x140227FBC (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402AC210 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E5A50 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402F57E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1403231E0 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x140324850 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x14032DAA0 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x14032EE64 (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1403321F0 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1403356A0 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x14033A0C0 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x14033A348 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x14038B200 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1403C0104 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1403DF090 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1404012B0 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z @ 0x1404093E8 (-CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x14040B038 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x140410784 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocation(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        unsigned __int8 a3,
        char a4,
        struct _DXGSHAREDALLOCOBJECT *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        struct COREDEVICEACCESS *a7,
        UINT a8,
        struct _EPROCESS *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a13,
        void *a14,
        UINT a15)
{
  unsigned __int8 v16; // r15
  DXGDEVICE *v18; // r12
  __int64 v19; // rcx
  UINT v20; // ebx
  __int64 v21; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // edx
  struct _PAGED_LOOKASIDE_LIST *v24; // rcx
  __int64 NumAllocations; // rax
  char *v26; // r15
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  int v29; // edi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  void **v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int8 v35; // al
  unsigned __int64 v36; // rax
  void **v37; // rsi
  __int64 v38; // r8
  char *v39; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v40; // rdi
  UINT i; // ecx
  __int64 v42; // rsi
  size_t v43; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  UINT v45; // r14d
  __int64 v46; // r8
  UINT Value; // eax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r15
  __int64 v53; // r8
  UINT v54; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v55; // edx
  __int64 hSection; // r15
  SIZE_T v57; // rcx
  UINT v58; // r14d
  unsigned __int8 v59; // r11
  __int64 v60; // rdx
  unsigned __int64 PrivateDriverDataSize; // rcx
  _QWORD *v62; // r14
  void *v63; // r15
  char *v64; // rax
  char *v65; // r9
  size_t v66; // r8
  char *pPrivateDriverData; // rdx
  UINT v68; // eax
  void *v69; // r9
  size_t v70; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  struct DXGRESOURCE *v72; // r15
  D3DKMT_CREATEALLOCATIONFLAGS v73; // eax
  __int64 v74; // rax
  char v75; // cl
  struct _DXGK_ALLOCATIONINFO *v76; // r8
  D3DKMT_CREATEALLOCATIONFLAGS v77; // eax
  unsigned int v78; // edx
  UINT v79; // r14d
  struct COREDEVICEACCESS *v80; // r15
  unsigned __int64 *v81; // rdi
  __int64 v82; // rdx
  __int64 v83; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v85; // rax
  D3DKMT_HANDLE v86; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v87; // eax
  D3DKMT_HANDLE v88; // ecx
  __int64 v89; // rax
  __int64 v90; // r8
  char *v91; // rcx
  _QWORD *v92; // r9
  unsigned int v93; // edx
  __int64 v94; // rax
  __int64 v95; // rcx
  struct _D3DKMT_CREATEALLOCATION *v96; // rdx
  UINT v97; // eax
  unsigned int v98; // eax
  UINT PrivateRuntimeDataSize; // ecx
  unsigned __int8 v100; // si
  size_t v101; // r8
  char *pPrivateRuntimeData; // rdx
  void *v103; // r9
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rcx
  UINT v107; // eax
  const void *v108; // rdx
  struct COREDEVICEACCESS *v109; // rax
  _QWORD *v110; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v111; // rsi
  __int64 v112; // rax
  _QWORD *v113; // rdx
  void *v114; // rcx
  void *v115; // rdx
  unsigned int v116; // ecx
  __int64 v117; // rax
  int HostProcess; // esi
  char v119; // r11
  D3DKMT_CREATEALLOCATIONFLAGS v120; // ecx
  void *v121; // r10
  void *v122; // rdx
  void **v123; // rax
  int v124; // r9d
  int v125; // eax
  _DWORD *v126; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS v127; // ecx
  int v128; // eax
  struct _DXGSHAREDALLOCOBJECT *v129; // r8
  UINT v130; // eax
  int v131; // ecx
  __int64 v132; // r10
  _DWORD *v133; // r9
  D3DKMT_CREATEALLOCATIONFLAGS v134; // eax
  char v135; // r15
  __int64 v136; // rdi
  int v137; // esi
  __int64 v138; // r14
  HANDLE CurrentProcessId; // rax
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r15
  UINT v143; // esi
  struct _DXGSHAREDALLOCOBJECT *v144; // rcx
  unsigned int v145; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v146; // eax
  struct COREDEVICEACCESS *v147; // r9
  __int64 v148; // r8
  int v149; // edx
  struct _DXGK_ALLOCATIONINFO *v150; // rcx
  void *v151; // rcx
  NTSTATUS v152; // eax
  __int64 v153; // rdi
  __int64 *v154; // r15
  int v155; // eax
  __int64 v156; // rdx
  int v157; // ecx
  struct COREDEVICEACCESS *v158; // r8
  struct DXGTHREAD *DxgThread; // rax
  int Resident; // eax
  struct DXGTHREAD *v161; // rax
  struct DXGTHREAD *v162; // rax
  __int64 v163; // rdx
  struct _EPROCESS *v164; // r8
  size_t v165; // rcx
  size_t v166; // r8
  const void *v167; // rdx
  char *v168; // rcx
  const void *v169; // rdx
  _QWORD *v170; // r15
  UINT v171; // ecx
  __int64 v172; // rsi
  __int64 v173; // rdi
  HANDLE v174; // rax
  __int64 v175; // r8
  D3DKMT_CREATEALLOCATIONFLAGS v176; // eax
  int v177; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v178; // ecx
  UINT v179; // eax
  int v180; // ecx
  void *v181; // rcx
  NTSTATUS v182; // eax
  __int64 v183; // rdi
  struct COREDEVICEACCESS *v184; // rsi
  __int64 v185; // rcx
  const struct SYSMM_ADAPTER *v186; // rdi
  struct _D3DKM_CREATESTANDARDALLOCATION *v187; // rcx
  _QWORD *v188; // rdx
  __int64 v189; // rcx
  int v190; // edi
  int v191; // ecx
  __int64 v192; // rcx
  int v193; // eax
  __int64 v194; // rcx
  bool v195; // zf
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rax
  __int64 v197; // rcx
  DXGDEVICE *v198; // r12
  struct DXGPROCESS *v199; // rsi
  __int64 v200; // rdi
  DXGPUSHLOCK *v201; // rcx
  __int64 v202; // rax
  __int64 v203; // r9
  __int64 v204; // rcx
  unsigned int v205; // r8d
  unsigned int v206; // edx
  __int64 v207; // r10
  __int64 v208; // rcx
  __int64 v209; // r14
  struct DXGRESOURCE *v210; // rdi
  unsigned __int64 v211; // r12
  __int64 v212; // rax
  __int64 v213; // r8
  __int64 v214; // r12
  unsigned int v215; // eax
  UINT v216; // eax
  _QWORD *v217; // rdi
  __int64 v218; // rcx
  int v219; // ecx
  struct DXGRESOURCE *v220; // rdi
  struct DXGALLOCATION *v221; // rcx
  _QWORD *v222; // rax
  __int64 v223; // rdx
  __int64 v224; // r14
  __int64 v225; // rcx
  __int64 v226; // r8
  int v227; // r9d
  __int64 v228; // rcx
  __int64 v229; // rax
  __int64 v230; // r8
  _QWORD *v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // rcx
  char v234; // r14
  int v235; // eax
  __int64 v236; // rcx
  unsigned int Count; // r8d
  __int64 v238; // rax
  __int64 v239; // r9
  int v240; // edx
  void **v241; // rdi
  int Object; // [rsp+20h] [rbp-3D8h]
  int Src; // [rsp+40h] [rbp-3B8h]
  int v244; // [rsp+48h] [rbp-3B0h]
  int v245; // [rsp+50h] [rbp-3A8h]
  int v246; // [rsp+58h] [rbp-3A0h]
  int v247; // [rsp+60h] [rbp-398h]
  int v248; // [rsp+68h] [rbp-390h]
  int v249; // [rsp+70h] [rbp-388h]
  int v250; // [rsp+78h] [rbp-380h]
  int v251; // [rsp+88h] [rbp-370h]
  int v252; // [rsp+90h] [rbp-368h]
  int v253; // [rsp+98h] [rbp-360h]
  int v254; // [rsp+A0h] [rbp-358h]
  int v255; // [rsp+A8h] [rbp-350h]
  int v256; // [rsp+B0h] [rbp-348h]
  int v257; // [rsp+B8h] [rbp-340h]
  int v258; // [rsp+C0h] [rbp-338h]
  int v259; // [rsp+C8h] [rbp-330h]
  int v260; // [rsp+D0h] [rbp-328h]
  int v261; // [rsp+D8h] [rbp-320h]
  int v262; // [rsp+E0h] [rbp-318h]
  int v263; // [rsp+E8h] [rbp-310h]
  UINT v266; // [rsp+110h] [rbp-2E8h]
  int v267; // [rsp+110h] [rbp-2E8h]
  UINT v268; // [rsp+110h] [rbp-2E8h]
  int v269; // [rsp+110h] [rbp-2E8h]
  UINT v270; // [rsp+110h] [rbp-2E8h]
  int v271; // [rsp+118h] [rbp-2E0h]
  char *v272; // [rsp+120h] [rbp-2D8h]
  unsigned __int8 v273; // [rsp+128h] [rbp-2D0h] BYREF
  char v274; // [rsp+129h] [rbp-2CFh]
  char v275; // [rsp+12Ah] [rbp-2CEh]
  _QWORD *j; // [rsp+130h] [rbp-2C8h]
  struct DXGALLOCATION *v277; // [rsp+138h] [rbp-2C0h] BYREF
  size_t Size; // [rsp+140h] [rbp-2B8h]
  struct COREDEVICEACCESS *p_hSection; // [rsp+148h] [rbp-2B0h]
  unsigned __int64 *v280; // [rsp+150h] [rbp-2A8h]
  char v281; // [rsp+158h] [rbp-2A0h]
  unsigned __int8 v282; // [rsp+160h] [rbp-298h]
  void **v283; // [rsp+168h] [rbp-290h]
  UINT VidPnSourceId; // [rsp+170h] [rbp-288h]
  void **v285; // [rsp+178h] [rbp-280h]
  struct _DXGK_ALLOCATIONINFO *v286; // [rsp+180h] [rbp-278h]
  PVOID v287; // [rsp+188h] [rbp-270h]
  struct _DXGSHAREDALLOCOBJECT *v288; // [rsp+190h] [rbp-268h]
  struct DXGALLOCATION *v289; // [rsp+198h] [rbp-260h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v290; // [rsp+1A0h] [rbp-258h]
  __int64 v291; // [rsp+1A8h] [rbp-250h]
  struct _EPROCESS *v292; // [rsp+1B0h] [rbp-248h]
  unsigned __int64 *v293; // [rsp+1B8h] [rbp-240h]
  void *v294; // [rsp+1C0h] [rbp-238h]
  struct DXGPROCESS *Current; // [rsp+1C8h] [rbp-230h]
  DXGDEVICE *v296; // [rsp+1D0h] [rbp-228h]
  struct DXGRESOURCE *v297; // [rsp+1D8h] [rbp-220h] BYREF
  void *v298; // [rsp+1E0h] [rbp-218h]
  struct _DXGK_OPENALLOCATIONINFO *v299; // [rsp+1E8h] [rbp-210h]
  DXGDEVICE *v300; // [rsp+1F0h] [rbp-208h]
  struct _D3DKMT_CREATEALLOCATION *v301; // [rsp+200h] [rbp-1F8h]
  struct DXGRESOURCE *v302; // [rsp+210h] [rbp-1E8h]
  int v303; // [rsp+218h] [rbp-1E0h] BYREF
  int v304; // [rsp+21Ch] [rbp-1DCh] BYREF
  struct _D3DKMT_CREATEALLOCATION *v305; // [rsp+220h] [rbp-1D8h]
  unsigned int *p_hAllocation; // [rsp+228h] [rbp-1D0h]
  DXGDEVICE *v307; // [rsp+230h] [rbp-1C8h]
  struct _EX_RUNDOWN_REF *v308; // [rsp+238h] [rbp-1C0h] BYREF
  unsigned __int8 *v309; // [rsp+240h] [rbp-1B8h] BYREF
  struct DXGTHREAD *v310; // [rsp+248h] [rbp-1B0h] BYREF
  struct DXGTHREAD *v311; // [rsp+250h] [rbp-1A8h] BYREF
  struct DXGTHREAD *v312; // [rsp+258h] [rbp-1A0h] BYREF
  unsigned __int64 *v313; // [rsp+260h] [rbp-198h]
  struct DXGALLOCATION *v314; // [rsp+268h] [rbp-190h] BYREF
  PVOID v315; // [rsp+270h] [rbp-188h] BYREF
  PVOID v316; // [rsp+278h] [rbp-180h] BYREF
  PVOID Entry; // [rsp+280h] [rbp-178h]
  DXGFASTMUTEX *v318; // [rsp+288h] [rbp-170h] BYREF
  char v319; // [rsp+290h] [rbp-168h]
  char v320[8]; // [rsp+298h] [rbp-160h] BYREF
  __int64 v321; // [rsp+2A0h] [rbp-158h]
  int v322; // [rsp+2A8h] [rbp-150h]
  __int64 v323; // [rsp+2B0h] [rbp-148h] BYREF
  struct _EX_RUNDOWN_REF *v324; // [rsp+2B8h] [rbp-140h] BYREF
  struct _PAGED_LOOKASIDE_LIST *v325; // [rsp+2C0h] [rbp-138h]
  _BYTE v326[16]; // [rsp+2C8h] [rbp-130h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v327; // [rsp+2D8h] [rbp-120h] BYREF
  _BYTE v328[24]; // [rsp+308h] [rbp-F0h] BYREF
  _BYTE v329[32]; // [rsp+320h] [rbp-D8h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v330; // [rsp+340h] [rbp-B8h] BYREF

  v16 = a3;
  v18 = this;
  v296 = this;
  v300 = this;
  v307 = this;
  v301 = a2;
  v305 = a2;
  v282 = a3;
  v288 = a5;
  v290 = a6;
  p_hSection = a7;
  v292 = a9;
  p_hAllocation = a10;
  v280 = a11;
  v293 = a12;
  Size = (size_t)a13;
  v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v19 + 184)
    || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 168)) )
  {
    v20 = 0;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4819;
    v20 = 0;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      4819LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v16 && a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4824;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!(UserMode && OpenShared)", 4824LL, 0LL, 0LL, 0LL, 0LL);
  }
  v21 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
  v274 = *(_BYTE *)(v21 + 209);
  v281 = v274;
  Current = DXGPROCESS::GetCurrent(v21);
  Flags = a2->Flags;
  if ( (*(_WORD *)&Flags & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 2468LL) & 0x10) == 0 )
    {
      WdLogSingleEntry2(3LL, v18, -1073741811LL);
      WdLogGlobalForLineNumber = 4833;
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&Flags & 2) == 0 )
    {
      WdLogSingleEntry3(3LL, v18, -1073741811LL, 1LL);
      WdLogGlobalForLineNumber = 4838;
      return 3221225485LL;
    }
  }
  v283 = 0LL;
  v298 = 0LL;
  v24 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)v18 + 2);
  Entry = 0LL;
  v325 = v24;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations > 5 )
  {
    v26 = 0LL;
    v272 = 0LL;
    v294 = 0LL;
    v27 = (unsigned int)NumAllocations;
    v28 = 96 * NumAllocations;
    v289 = (struct DXGALLOCATION *)v28;
    v29 = 0;
    if ( v28 <= 0xFFFFFFFF )
    {
      v30 = 96 * v27;
      if ( !is_mul_ok(v27, 0x60uLL) )
        v30 = -1LL;
      v26 = (char *)operator new[](v30, 0x4B677844u, 256LL);
      v272 = v26;
      v294 = v26;
      v28 = (unsigned __int64)v289;
    }
    else
    {
      v29 = -1073741675;
    }
    v286 = 0LL;
    if ( v28 <= 0xFFFFFFFF )
    {
      v29 = 0;
      if ( 88 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
      {
        v31 = 88LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 0x58uLL) )
          v31 = -1LL;
        v286 = (struct _DXGK_ALLOCATIONINFO *)operator new[](v31, 0x4B677844u, 258LL);
      }
      else
      {
        v29 = -1073741675;
      }
    }
    v299 = 0LL;
    if ( v29 >= 0 )
    {
      v29 = 0;
      if ( 32 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
      {
        v32 = 32LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 0x20uLL) )
          v32 = -1LL;
        v299 = (struct _DXGK_OPENALLOCATIONINFO *)operator new[](v32, 0x4B677844u, 256LL);
      }
      else
      {
        v29 = -1073741675;
      }
    }
    v33 = 0LL;
    v285 = 0LL;
    if ( v29 >= 0 )
    {
      v29 = 0;
      if ( 8 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
      {
        v34 = 8LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
          v34 = -1LL;
        v33 = (void **)operator new[](v34, 0x4B677844u, 256LL);
        v285 = v33;
        v35 = a3;
        if ( a3 )
        {
          v36 = 8LL * a2->NumAllocations;
          if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
            v36 = -1LL;
          v37 = (void **)operator new[](v36, 0x4B677844u, 256LL);
          v283 = v37;
          v35 = a3;
          v33 = v285;
        }
        else
        {
          v37 = 0LL;
        }
        goto LABEL_42;
      }
      v29 = -1073741675;
    }
    v35 = a3;
    v37 = 0LL;
LABEL_42:
    if ( v29 < 0 || !v26 || !v286 || !v299 || !v33 || !v37 && v35 )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v26);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v286);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v299);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v285);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v37);
      v38 = a2->NumAllocations;
      if ( v29 >= 0 )
      {
        WdLogSingleEntry3(3LL, v18, v38, -1073741801LL);
        WdLogGlobalForLineNumber = 4943;
        return 3221225495LL;
      }
      else
      {
        WdLogSingleEntry3(3LL, v18, v38, v29);
        WdLogGlobalForLineNumber = 4936;
        return (unsigned int)v29;
      }
    }
    v16 = a3;
    v40 = (struct _D3DDDI_ALLOCATIONINFO2 *)v272;
    goto LABEL_56;
  }
  v39 = (char *)ExAllocateFromPagedLookasideList(v24 + 13);
  v40 = (struct _D3DDDI_ALLOCATIONINFO2 *)v39;
  v272 = v39;
  Entry = v39;
  if ( !v39 )
  {
    WdLogSingleEntry1(6LL, v18);
    WdLogGlobalForLineNumber = 4955;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Out of memory allocating scratch data",
      (__int64)v18,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741801LL;
  }
  v286 = (struct _DXGK_ALLOCATIONINFO *)(v39 + 720);
  v299 = (struct _DXGK_OPENALLOCATIONINFO *)(v39 + 480);
  v33 = (void **)(v39 + 640);
  v285 = (void **)(v39 + 640);
  v37 = (void **)(v39 + 680);
  v283 = (void **)(v39 + 680);
  v294 = v39;
LABEL_56:
  for ( i = 0; i < a2->NumAllocations; ++i )
  {
    v33[i] = 0LL;
    if ( v16 )
      v37[i] = 0LL;
  }
  v287 = 0LL;
  v277 = 0LL;
  LODWORD(v42) = 0;
  v271 = 0;
  v273 = 0;
  v302 = 0LL;
  v275 = 0;
  v297 = 0LL;
  DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v318);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v320, 0LL, 0);
  if ( v16 )
  {
    v43 = 96LL * a2->NumAllocations;
    pAllocationInfo = a2->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v43) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v43 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v40, pAllocationInfo, v43);
  }
  else
  {
    memmove(v40, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  }
  VidPnSourceId = -1;
  if ( (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
  {
    v40->pPrivateDriverData = a14;
    v40->PrivateDriverDataSize = a15;
  }
  v45 = 0;
  v266 = 0;
  if ( a2->NumAllocations )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)&a2->Flags & 0x800) != 0 )
      {
        v46 = v45;
        Value = v40[v46].Flags.Value;
        if ( (Value & 1) != 0 )
        {
          VidPnSourceId = v40[v46].VidPnSourceId;
          if ( !*((_QWORD *)v18 + 237) )
          {
            Value &= ~1u;
            v40[v46].Flags.Value = Value;
          }
        }
        if ( (Value & 2) != 0 )
        {
          WdLogSingleEntry2(3LL, v18, -1073741811LL);
          WdLogGlobalForLineNumber = 5057;
          goto LABEL_110;
        }
      }
      if ( (v40[v45].Flags.Value & 1) != 0 && !v274 )
      {
        v48 = *((_QWORD *)v18 + 237);
        v291 = v48;
        if ( v48 )
        {
          v49 = *(_QWORD *)(v48 + 3120);
          if ( !v49 )
            goto LABEL_83;
          v50 = *(_QWORD *)(v49 + 16);
          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v50 + 184)
            || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v50 + 168)) )
          {
            v45 = v266;
          }
          else
          {
            v45 = v266;
LABEL_83:
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5084;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"pDisplayAdapter->IsDisplayAdapter() && pDisplayAdapter->GetDisplayCore()->IsCoreResourceSharedOwner()",
              5084LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v51 = v291;
          if ( *(_DWORD *)(*(_QWORD *)(v291 + 3120) + 96LL) != *((_DWORD *)v18 + 476) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5090;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"pDisplayAdapter->GetDisplayCore()->GetNumVidPnSources() == this->GetNumVidPnSources()",
              5090LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v51 = v291;
          }
          v52 = v45;
          v53 = v40[v52].VidPnSourceId;
          if ( (unsigned int)v53 >= *((_DWORD *)v18 + 476) )
          {
            WdLogSingleEntry3(3LL, v18, v53, -1073741811LL);
            WdLogGlobalForLineNumber = 5097;
            goto LABEL_110;
          }
          if ( !*((_DWORD *)v18 + 116)
            && !a4
            && (*((_DWORD *)Current + 102) & 0x100) == 0
            && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v51 + 3120), v18, v53) )
          {
            LODWORD(v42) = -1071775744;
            v271 = -1071775744;
            WdLogSingleEntry4(3LL, -1071775744LL, v18, v40[v52].VidPnSourceId, v45);
            WdLogGlobalForLineNumber = 5112;
            v62 = v277;
            v63 = v272;
            goto LABEL_423;
          }
          goto LABEL_91;
        }
        if ( (*(_DWORD *)(*((_QWORD *)v18 + 5) + 408LL) & 0x100) == 0 )
        {
          WdLogSingleEntry3(3LL, v18, v40[v45].VidPnSourceId, -1073741811LL);
          WdLogGlobalForLineNumber = 5076;
LABEL_110:
          LODWORD(v42) = -1073741811;
          v271 = -1073741811;
          v62 = v277;
          goto LABEL_111;
        }
      }
LABEL_91:
      v54 = v40[v45].Flags.Value;
      if ( (v54 & 2) != 0 && (v54 & 1) == 0 )
      {
        WdLogSingleEntry2(3LL, -1073741811LL, v18);
        WdLogGlobalForLineNumber = 5130;
        goto LABEL_110;
      }
      v55 = a2->Flags;
      if ( (*(_DWORD *)&v55 & 0x10000) != 0 )
      {
        if ( (*(_BYTE *)&v55 & 0x20) != 0 && !v40[v45].hSection
          || (*(_DWORD *)&v55 & 0x20000) != 0 && !v40[v45].hSection )
        {
          WdLogSingleEntry2(2LL, v18, -1073741811LL);
          WdLogGlobalForLineNumber = 5144;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Device 0x%I64x: ExistingSysMem pointer or Section Handle not specified, returning 0x%I64x",
            (__int64)v18,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_110;
        }
        hSection = (__int64)v40[v45].hSection;
        v57 = a2->pStandardAllocation->ExistingHeapData.Size;
        v289 = (struct DXGALLOCATION *)v57;
        if ( (*(_BYTE *)&v55 & 0x20) != 0 && hSection != (hSection & 0xFFFFFFFFFFFFF000uLL)
          || v57 != (v57 & 0xFFFFFFFFFFFFF000uLL) )
        {
          WdLogSingleEntry2(2LL, hSection, v57);
          WdLogGlobalForLineNumber = 5157;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Existing sysmem must be paged aligned and a multiple of page in size.                    pSysMem:0x%I64x, Size:0x%I64x",
            hSection,
            (__int64)v289,
            0LL,
            0LL,
            0LL);
          goto LABEL_110;
        }
      }
      v266 = ++v45;
      if ( v45 >= a2->NumAllocations )
      {
        v287 = v277;
        break;
      }
    }
  }
  v58 = 0;
  v59 = a3;
  while ( v58 < a2->NumAllocations )
  {
    v60 = v58;
    PrivateDriverDataSize = v40[v60].PrivateDriverDataSize;
    if ( (unsigned int)PrivateDriverDataSize > 0x7FFFFFFF )
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5175;
      goto LABEL_107;
    }
    if ( v40[v60].pPrivateDriverData && (_DWORD)PrivateDriverDataSize )
    {
      if ( v59 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
        PrivateDriverDataSize = (unsigned int)(2 * PrivateDriverDataSize);
      v64 = (char *)operator new[](PrivateDriverDataSize, 0x4B677844u, 258LL);
      v285[v58] = v64;
      if ( !v64 )
      {
        LODWORD(v42) = -1073741801;
        v271 = -1073741801;
        WdLogSingleEntry3(3LL, v18, a2->NumAllocations, -1073741801LL);
        WdLogGlobalForLineNumber = 5217;
        v62 = v287;
        v63 = v272;
        goto LABEL_423;
      }
      if ( !a3 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
      {
        v59 = a3;
      }
      else
      {
        v65 = &v64[v40[v58].PrivateDriverDataSize];
        v283[v58] = v65;
        v66 = v40[v58].PrivateDriverDataSize;
        pPrivateDriverData = (char *)v40[v58].pPrivateDriverData;
        if ( &pPrivateDriverData[v66] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[v66] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v65, pPrivateDriverData, v66);
        v59 = a3;
      }
LABEL_133:
      ++v58;
    }
    else
    {
      v285[v58] = 0LL;
      if ( !v59 )
        goto LABEL_133;
      v283[v58++] = 0LL;
    }
  }
  if ( a3 )
  {
    if ( a2->pStandardAllocation )
    {
      v68 = a2->PrivateDriverDataSize;
      if ( v68 )
      {
        v69 = (void *)operator new[](v68, 0x4B677844u, 258LL);
        v298 = v69;
        if ( !v69 )
        {
          LODWORD(v42) = -1073741801;
          v271 = -1073741801;
          WdLogSingleEntry3(3LL, v18, a2->PrivateDriverDataSize, -1073741801LL);
          WdLogGlobalForLineNumber = 5262;
          v62 = v287;
          v63 = v272;
          goto LABEL_423;
        }
        v70 = a2->PrivateDriverDataSize;
        pStandardAllocation = a2->pStandardAllocation;
        if ( (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v70) < pStandardAllocation
          || (unsigned __int64)pStandardAllocation + v70 > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v69, pStandardAllocation, v70);
      }
    }
  }
  LODWORD(v42) = DXGDEVICE::OpenResourceObject(
                   v18,
                   a2,
                   v40,
                   a4,
                   v292,
                   v288,
                   (struct DXGRESOURCEREFERENCE *)&v297,
                   &v273,
                   v290,
                   (struct DXGAUTOMUTEX *)&v318,
                   (struct DXGAUTOPUSHLOCK *)v320);
  v271 = v42;
  if ( (int)v42 < 0 )
    goto LABEL_107;
  v72 = v297;
  v302 = v297;
  if ( v297 && (*((_DWORD *)v297 + 1) & 1) == 0 && (*(_DWORD *)&a2->Flags & 2) != 0 )
  {
    WdLogSingleEntry3(2LL, v18, v297, -1073741811LL);
    WdLogGlobalForLineNumber = 5315;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Driver asked to create a shared resource, but resource 0x%p already exists, and is non-shared, returning 0x%I64x",
      (__int64)v18,
      (__int64)v72,
      -1073741811LL,
      0LL,
      0LL);
    LODWORD(v42) = -1073741811;
    v271 = -1073741811;
    v62 = v287;
    v63 = v272;
    goto LABEL_423;
  }
  LODWORD(v42) = DXGDEVICE::CreateDestructionBuffers(v18, a2->NumAllocations, v297, v273);
  v271 = v42;
  if ( (int)v42 < 0 )
  {
LABEL_107:
    v62 = v287;
    v63 = v272;
    goto LABEL_423;
  }
  v314 = 0LL;
  LODWORD(v42) = DXGDEVICE::CreateAllocationObjects(v18, a2->NumAllocations, &v277, v72, &v314);
  v271 = v42;
  v62 = v277;
  if ( (int)v42 < 0 )
    goto LABEL_111;
  v287 = v277;
  if ( v314 )
  {
    DXGDEVICE::AppendAllocationListToResourceOrDevice(v18, v72, v277, v314);
    v275 = 1;
  }
  v73 = a2->Flags;
  if ( (*(_WORD *)&v73 & 0x800) != 0 )
  {
    if ( VidPnSourceId != -1 )
    {
      *(_DWORD *)(*((_QWORD *)v72 + 7) + 12LL) |= 0x40u;
      *((_DWORD *)v72 + 1) |= 8u;
      *(_DWORD *)(*((_QWORD *)v72 + 7) + 12LL) ^= ((unsigned __int8)*(_DWORD *)(*((_QWORD *)v72 + 7) + 12LL) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 0x80;
    }
    goto LABEL_165;
  }
  if ( (*(_WORD *)&v73 & 0x1000) == 0 )
  {
    if ( !v72 )
      goto LABEL_165;
    v74 = *((_QWORD *)v72 + 7);
    if ( !v74 || (*(_BYTE *)(v74 + 12) & 0x60) != 0x60 )
      goto LABEL_165;
LABEL_164:
    *((_DWORD *)v72 + 1) |= 8u;
    goto LABEL_165;
  }
  if ( v290 )
  {
    if ( (*(_DWORD *)v290 & 0x80u) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5381;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pCreateStandardAllocation->Flags.Primary == 0",
        5381LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)v290 & 0x100) != 0 )
      goto LABEL_164;
  }
LABEL_165:
  if ( !v274 )
  {
    memset(v286, 0, 88LL * a2->NumAllocations);
    v75 = a4;
    if ( !a4 )
    {
      LODWORD(v42) = DXGDEVICE::CreateDriverAllocations(
                       v18,
                       a2,
                       v40,
                       v286,
                       (struct DXGALLOCATION *)v62,
                       v72,
                       v285,
                       v283,
                       v298,
                       v290,
                       a3,
                       (struct _D3DKMT_CREATESTANDARDALLOCATION *)Size);
      v271 = v42;
      v75 = 0;
    }
    if ( (int)v42 >= 0 )
    {
      LODWORD(v42) = DXGDEVICE::OpenAllocations(
                       v18,
                       a2,
                       v40,
                       (struct DXGALLOCATION *)v62,
                       v299,
                       v285,
                       v283,
                       v298,
                       a3,
                       v75,
                       a8,
                       p_hAllocation,
                       v280);
      v271 = v42;
      if ( (int)v42 >= 0 )
      {
        v76 = v286;
        if ( (*(_DWORD *)&a2->Flags & 8) != 0 )
          v286->Flags.Value |= 0x4000008u;
        v77 = a2->Flags;
        if ( (*(_WORD *)&v77 & 0x100) != 0 )
        {
          v76->Flags.Value = v76->Flags.Value & 0xFEFFFFFB | 0x1000000;
        }
        else if ( (*(_WORD *)&v77 & 0x200) != 0 )
        {
          v76->Flags.Value |= 0x800004u;
        }
        v78 = v76->Flags.Value | 0x800;
        if ( (*(_DWORD *)&a2->Flags & 0x8000) == 0 )
          v78 = v76->Flags.Value & 0xFFFFF7FF;
        v76->Flags.Value = v78;
        if ( (*(_DWORD *)&a2->Flags & 0x80000) != 0 )
          v76->Flags.Value = v78 | 0x1000;
        LODWORD(v42) = DXGDEVICE::CreateVidMmAllocations(
                         v18,
                         a2,
                         v40,
                         v76,
                         (struct DXGALLOCATION *)v62,
                         v290,
                         a4,
                         p_hSection);
        v271 = v42;
        if ( (int)v42 >= 0 )
        {
          if ( v293 )
          {
            p_hSection = (struct COREDEVICEACCESS *)v62;
            LODWORD(Size) = 0;
            if ( a2->NumAllocations )
            {
              v79 = 0;
              v80 = p_hSection;
              v81 = v293;
              do
              {
                v82 = *(_DWORD *)&a2->Flags >> 5;
                LOBYTE(v82) = (*(_DWORD *)&a2->Flags & 0x20) != 0;
                v81[v79] = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2)
                                                                                              + 760LL)
                                                                                  + 8LL)
                                                                      + 584LL))(
                             *((_QWORD *)v80 + 3),
                             v82);
                v80 = (struct COREDEVICEACCESS *)*((_QWORD *)v80 + 8);
                ++v79;
              }
              while ( v79 < a2->NumAllocations );
              v62 = v287;
              v40 = (struct _D3DDDI_ALLOCATIONINFO2 *)v272;
              v72 = v302;
            }
          }
          goto LABEL_186;
        }
      }
    }
LABEL_111:
    v63 = v272;
    goto LABEL_423;
  }
LABEL_186:
  if ( v273 )
  {
    if ( v72 )
    {
      if ( (*((_DWORD *)v72 + 1) & 1) != 0 )
      {
        v83 = *((_QWORD *)v72 + 7);
        if ( !*(_DWORD *)(v83 + 24) && (*(_DWORD *)(v83 + 12) & 8) == 0 )
        {
          DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v326);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v326);
          if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5519;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"0 != (pCreateAllocation->Flags.CreateShared)",
              5519LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (*((_DWORD *)Current + 102) & 0x100) != 0 )
          {
            *(_DWORD *)(*((_QWORD *)v72 + 7) + 24LL) = DXGPROCESS::AllocHandleSafe(
                                                         *((_QWORD *)Current + 74),
                                                         *((_QWORD *)v72 + 7),
                                                         2u);
            *(_DWORD *)(*((_QWORD *)v72 + 7) + 12LL) |= 0x2000u;
          }
          else
          {
            Global = DXGGLOBAL::GetGlobal();
            *(_DWORD *)(*((_QWORD *)v72 + 7) + 24LL) = DXGGLOBAL::AllocHandle((__int64)Global, *((_QWORD *)v72 + 7), 2u);
          }
          if ( !*(_DWORD *)(*((_QWORD *)v72 + 7) + 24LL) )
          {
            WdLogSingleEntry2(3LL, v18, -1073741801LL);
            WdLogGlobalForLineNumber = 5543;
            LODWORD(v42) = -1073741801;
            v271 = -1073741801;
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v326);
            v63 = v272;
            goto LABEL_423;
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v326);
        }
      }
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v328, (struct _KTHREAD **)v18 + 30);
    v85 = *((_QWORD *)v18 + 7);
    if ( v85 )
      *(_QWORD *)(v85 + 32) = v72;
    *((_QWORD *)v72 + 5) = *((_QWORD *)v18 + 7);
    *((_QWORD *)v18 + 7) = v72;
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v328);
  }
  v86 = 0;
  if ( v72 )
    v86 = *((_DWORD *)v72 + 4);
  a2->hResource = v86;
  v87 = a2->Flags;
  if ( ((*(_BYTE *)&v87 & 2) != 0 || a4) && (*(_BYTE *)&v87 & 0x40) == 0 )
    v88 = *(_DWORD *)(*((_QWORD *)v72 + 7) + 24LL);
  else
    v88 = 0;
  a2->hGlobalShare = v88;
  if ( a3 )
  {
    v89 = 0LL;
    v267 = 0;
    v90 = (__int64)v62;
    j = v62;
    while ( (unsigned int)v89 < a2->NumAllocations )
    {
      v91 = (char *)a2->pAllocationInfo + 96 * v89;
      if ( (unsigned __int64)v91 >= MmUserProbeAddress )
        v91 = (char *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v91, (const void *)(v90 + 16), 4uLL);
      v89 = (unsigned int)++v267;
      v90 = j[8];
      j = (_QWORD *)v90;
    }
  }
  else
  {
    v90 = 0LL;
    v92 = v62;
    j = v62;
    if ( a2->NumAllocations )
    {
      do
      {
        *(&a2->pAllocationInfo->hAllocation + 24 * (unsigned int)v90) = *((_DWORD *)v92 + 4);
        v90 = (unsigned int)(v90 + 1);
        v92 = (_QWORD *)v92[8];
      }
      while ( (unsigned int)v90 < a2->NumAllocations );
      j = v92;
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)v18 + 5) + 408LL) & 0x100) == 0 || *((_DWORD *)v18 + 476) )
  {
    v268 = 0;
    v42 = (__int64)v62;
    for ( j = v62; v268 < a2->NumAllocations; j = (_QWORD *)v42 )
    {
      v93 = *(_DWORD *)(*(_QWORD *)(v42 + 48) + 4LL);
      if ( (v93 & 1) != 0 )
      {
        LODWORD(v42) = DXGDEVICE::AddPrimaryAllocation(v18, (const struct DXGALLOCATION *)v42);
        v271 = v42;
        if ( (int)v42 < 0 )
          goto LABEL_111;
        v42 = (__int64)j;
      }
      else if ( (v93 & 2) != 0 )
      {
        DXGDEVICE::SetDisplayedPrimary(
          (struct _KTHREAD **)v18,
          (v93 >> 6) & 0xF,
          (const struct DXGALLOCATION *)v42,
          0,
          1u);
      }
      ++v268;
      v42 = *(_QWORD *)(v42 + 64);
    }
  }
  if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
  {
    if ( !a2->pPrivateRuntimeData )
      goto LABEL_244;
    v94 = *((_QWORD *)v72 + 7);
    if ( *(_QWORD *)(v94 + 104) )
    {
      v98 = *(_DWORD *)(v94 + 112);
      v96 = v305;
      PrivateRuntimeDataSize = v305->PrivateRuntimeDataSize;
      if ( v98 != PrivateRuntimeDataSize )
      {
        LODWORD(v42) = -1073741811;
        v271 = -1073741811;
        WdLogSingleEntry3(3LL, v18, PrivateRuntimeDataSize, v98);
        WdLogGlobalForLineNumber = 5705;
        v63 = v272;
        goto LABEL_423;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v72 + 7) + 104LL) = operator new[](v305->PrivateRuntimeDataSize, 0x4B677844u, 258LL);
      v95 = *((_QWORD *)v72 + 7);
      v96 = v305;
      v97 = v305->PrivateRuntimeDataSize;
      if ( !*(_QWORD *)(v95 + 104) )
      {
        LODWORD(v42) = -1073741801;
        v271 = -1073741801;
        WdLogSingleEntry3(3LL, v18, v97, -1073741801LL);
        WdLogGlobalForLineNumber = 5692;
        v63 = v272;
        goto LABEL_423;
      }
      *(_DWORD *)(v95 + 112) = v97;
    }
    v100 = a3;
    if ( a3 )
    {
      v101 = v96->PrivateRuntimeDataSize;
      pPrivateRuntimeData = (char *)a2->pPrivateRuntimeData;
      v103 = *(void **)(*((_QWORD *)v72 + 7) + 104LL);
      if ( &pPrivateRuntimeData[v101] < pPrivateRuntimeData
        || (unsigned __int64)&pPrivateRuntimeData[v101] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v103, pPrivateRuntimeData, v101);
    }
    else
    {
      memmove(*(void **)(*((_QWORD *)v72 + 7) + 104LL), a2->pPrivateRuntimeData, v96->PrivateRuntimeDataSize);
    }
    if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
    {
      LODWORD(v42) = CheckNoKmdAccessPrivateData(
                       a2->PrivateRuntimeDataSize,
                       *(_DWORD **)(*((_QWORD *)v72 + 7) + 104LL),
                       0xFF000004);
      v271 = v42;
      if ( (int)v42 < 0 )
        goto LABEL_111;
LABEL_244:
      v100 = a3;
    }
    if ( a2->pStandardAllocation )
    {
      v104 = a2->PrivateDriverDataSize;
      if ( (_DWORD)v104 )
      {
        v105 = *((_QWORD *)v72 + 7);
        if ( *(_QWORD *)(v105 + 120) )
        {
          v116 = *(_DWORD *)(v105 + 128);
          if ( v116 != (_DWORD)v104 )
          {
            LODWORD(v42) = -1073741811;
            v271 = -1073741811;
            WdLogSingleEntry3(3LL, v18, v104, v116);
            WdLogGlobalForLineNumber = 5771;
            v63 = v272;
            goto LABEL_423;
          }
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)v72 + 7) + 120LL) = operator new[]((unsigned int)v104, 0x4B677844u, 258LL);
          v106 = *((_QWORD *)v72 + 7);
          v107 = a2->PrivateDriverDataSize;
          if ( !*(_QWORD *)(v106 + 120) )
          {
            LODWORD(v42) = -1073741801;
            v271 = -1073741801;
            WdLogSingleEntry3(3LL, v18, v107, -1073741801LL);
            WdLogGlobalForLineNumber = 5758;
            v63 = v272;
            goto LABEL_423;
          }
          *(_DWORD *)(v106 + 128) = v107;
        }
        v108 = v298;
        if ( !v100 )
          v108 = a2->pStandardAllocation;
        memmove(*(void **)(*((_QWORD *)v72 + 7) + 120LL), v108, a2->PrivateDriverDataSize);
        if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
        {
          LODWORD(v42) = CheckNoKmdAccessPrivateData(
                           a2->PrivateDriverDataSize,
                           *(_DWORD **)(*((_QWORD *)v72 + 7) + 120LL),
                           0xFF000001);
          v271 = v42;
          if ( (int)v42 < 0 )
            goto LABEL_111;
        }
      }
    }
    v109 = 0LL;
    v269 = 0;
    v110 = v62;
    for ( j = v62; (unsigned int)v109 < a2->NumAllocations; j = v110 )
    {
      p_hSection = v109;
      v111 = &v40[(_QWORD)v109];
      p_hAllocation = &v111->hAllocation;
      if ( v111->pPrivateDriverData )
      {
        v112 = operator new[](v111->PrivateDriverDataSize, 0x4B677844u, 258LL);
        v113 = j;
        *(_QWORD *)(j[6] + 32LL) = v112;
        v114 = *(void **)(v113[6] + 32LL);
        if ( !v114 )
        {
          LODWORD(v42) = -1073741801;
          v271 = -1073741801;
          WdLogSingleEntry4(3LL, v18, (unsigned int)(v269 + 1), p_hAllocation[6], -1073741801LL);
          WdLogGlobalForLineNumber = 5815;
          v63 = v272;
          goto LABEL_423;
        }
        if ( !a3 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
          v115 = v111->pPrivateDriverData;
        else
          v115 = v283[(_QWORD)p_hSection];
        memmove(v114, v115, v111->PrivateDriverDataSize);
        *(_DWORD *)(j[6] + 40LL) = v111->PrivateDriverDataSize;
        v110 = j;
      }
      v109 = (struct COREDEVICEACCESS *)(unsigned int)(v269 + 1);
      v269 = (int)v109;
      v110 = (_QWORD *)v110[8];
    }
  }
  v117 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
  v291 = v117;
  p_hAllocation = (unsigned int *)v117;
  if ( !*(_BYTE *)(v117 + 209) )
    goto LABEL_394;
  if ( a4 )
    goto LABEL_378;
  HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)v18 + 5));
  if ( !HostProcess )
  {
    WdLogSingleEntry1(2LL, -1073741823LL);
    WdLogGlobalForLineNumber = 5850;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to get host adapter process, returning 0x%I64x",
      -1073741823LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v42) = -1073741823;
    v271 = -1073741823;
    v63 = v272;
    goto LABEL_423;
  }
  v309 = 0LL;
  v119 = (*((_BYTE *)v18 + 1919)
       || *((_DWORD *)v18 + 116) == 2 && *(int *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 3004LL) >= 2000)
      && v290
      && (unsigned int)(*((_DWORD *)v290 + 4) - 1) <= 2;
  v120 = a2->Flags;
  if ( (*(_BYTE *)&v120 & 2) != 0 )
    v121 = *(void **)(*((_QWORD *)v72 + 7) + 104LL);
  else
    v121 = 0LL;
  v122 = v298;
  if ( !a3 )
  {
    v122 = a2->pStandardAllocation;
    goto LABEL_284;
  }
  v123 = v283;
  if ( (*(_DWORD *)&v120 & 0x10000) != 0 )
LABEL_284:
    v123 = v285;
  if ( (*(_BYTE *)&v120 & 2) != 0 )
    v124 = *((_DWORD *)v72 + 5);
  else
    v124 = 0;
  v125 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
           (DXG_GUEST_VIRTUALGPU_VMBUS *)(v291 + 4664),
           HostProcess,
           *((_DWORD *)v18 + 118),
           v124,
           a2,
           v40,
           v123,
           v122,
           v121,
           a3,
           v119,
           &v309);
  v42 = v125;
  LODWORD(Size) = v125;
  if ( !v309 )
  {
    WdLogSingleEntry1(2LL, v125);
    WdLogGlobalForLineNumber = 5880;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VmBusSendCreateAllocation failed: 0x%I64x",
      v42,
      0LL,
      0LL,
      0LL,
      0LL);
    v271 = v42;
    v63 = v272;
    goto LABEL_423;
  }
  v126 = v309;
  v292 = (struct _EPROCESS *)v309;
  if ( v72 )
  {
    *((_DWORD *)v72 + 5) = *((_DWORD *)v309 + 1);
    v127 = a2->Flags;
    if ( (*(_BYTE *)&v127 & 2) != 0 )
    {
      v128 = v126[2];
      if ( (*(_BYTE *)&v127 & 0x40) != 0 )
      {
        if ( v128 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5895;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"NULL == pOutput->hGlobalSharedResource",
            5895LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_297;
        }
      }
      else if ( !v128 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5899;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pOutput->hGlobalSharedResource",
          5899LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_297:
        v126 = v292;
      }
      *(_DWORD *)(*((_QWORD *)v72 + 7) + 28LL) = v126[2];
    }
  }
  v293 = 0LL;
  v313 = 0LL;
  if ( (*(_DWORD *)&a2->Flags & 2) != 0 && v72 )
  {
    v293 = *(unsigned __int64 **)(*((_QWORD *)v72 + 7) + 136LL);
    v313 = v293;
  }
  v129 = (struct _DXGSHAREDALLOCOBJECT *)v62;
  v288 = (struct _DXGSHAREDALLOCOBJECT *)v62;
  v130 = 0;
  LODWORD(v280) = 0;
  if ( a2->NumAllocations )
  {
    do
    {
      v131 = v126[3];
      *((_DWORD *)v129 + 32) = v131;
      v132 = v130;
      v133 = &v126[18 * v130];
      *((_DWORD *)v129 + 5) = v133[4];
      *((_BYTE *)v129 + 128) = v131 | 4;
      v134 = a2->Flags;
      if ( (*(_BYTE *)&v134 & 2) != 0 && (*(_DWORD *)&v134 & 0x20020) != 0 )
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v129 + 5) + 56LL) + 200LL) = v133[7];
      else
        *((_DWORD *)v129 + 31) = v133[7];
      if ( v126[3] & 1 | ((v126[3] & 2) != 0) )
      {
        *((_QWORD *)v129 + 13) = v40[v132].hSection;
        *((_BYTE *)v129 + 128) ^= (*((_BYTE *)v129 + 128) ^ (8 * (v133[6] >> 21))) & 8;
      }
      *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v133[6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL)) & 1;
      *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v133[6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL)) & 2;
      *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v133[6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL)) & 4;
      *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v133[6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL)) & 8;
      *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v133[6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL)) & 0x20;
      *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v133[6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL)) & 0x800;
      *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v133[6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL)) & 0x1000;
      *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v133[6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL)) & 0x2000;
      *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v133[6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL)) & 0x4000;
      *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v133[6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL)) & 0x40000;
      *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v133[6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL)) & 0x80000;
      *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v133[6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL)) & 0x100000;
      *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) |= 0x20000u;
      if ( (v40[v132].Flags.Value & 1) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= ((unsigned __int16)*(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^ (unsigned __int16)((unsigned __int16)v40[v132].VidPnSourceId << 6)) & 0x3C0;
        if ( *((_QWORD *)v18 + 237) != *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) )
          *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) |= 4u;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
      {
        v135 = (*((_DWORD *)v129 + 18) >> 12) & 0x3F;
        v136 = *((_QWORD *)v129 + 6);
        v137 = *((_DWORD *)v129 + 30);
        v138 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
        CurrentProcessId = PsGetCurrentProcessId();
        McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
          v140,
          &EventCreateAdapterAllocation,
          v141,
          (__int64)CurrentProcessId,
          (char)v18,
          v138,
          0,
          v137,
          Src,
          v244,
          v245,
          v246,
          v247,
          v248,
          v249,
          v250,
          v136,
          v251,
          v252,
          v253,
          v254,
          v255,
          v256,
          v257,
          v258,
          v259,
          v260,
          v261,
          v262,
          v263,
          v135,
          0);
        v129 = v288;
        v40 = (struct _D3DDDI_ALLOCATIONINFO2 *)v272;
      }
      v130 = (_DWORD)v280 + 1;
      LODWORD(v280) = v130;
      v129 = (struct _DXGSHAREDALLOCOBJECT *)*((_QWORD *)v129 + 8);
      v288 = v129;
      v126 = v292;
    }
    while ( v130 < a2->NumAllocations );
    v62 = v287;
    LODWORD(v42) = Size;
  }
  if ( (int)v42 < 0 )
  {
    v271 = v42;
    v63 = v272;
    goto LABEL_423;
  }
  v142 = (__int64)v62;
  v289 = (struct DXGALLOCATION *)v62;
  v143 = 0;
  while ( 2 )
  {
    LODWORD(v280) = v143;
    if ( v143 >= a2->NumAllocations )
    {
      LODWORD(v42) = v271;
      goto LABEL_376;
    }
    v144 = (struct _DXGSHAREDALLOCOBJECT *)v143;
    v288 = (struct _DXGSHAREDALLOCOBJECT *)v143;
    v145 = v126[18 * v143 + 8];
    v146 = a2->Flags;
    if ( (*(_DWORD *)&v146 & 0x10000) != 0 )
    {
      if ( (*(_BYTE *)&v146 & 0x20) != 0 )
      {
        v147 = (struct COREDEVICEACCESS *)v40[v143].hSection;
        p_hSection = v147;
        if ( (*((_BYTE *)v18 + 1917) & 1) == 0 )
        {
          LODWORD(v42) = ProcessSysMemAttributes(v147, v145, &v286[v143]);
          v271 = v42;
          if ( (int)v42 < 0 )
            goto LABEL_111;
          v143 = (unsigned int)v280;
          v144 = v288;
          v147 = p_hSection;
        }
        if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
        {
          v148 = *(_QWORD *)(*(_QWORD *)(v142 + 40) + 56LL);
          v149 = *(_DWORD *)(v148 + 12) | 0x200;
          *(_DWORD *)(v148 + 12) = v149;
          *(_QWORD *)(v148 + 192) = v147;
          v150 = &v286[(_QWORD)v144];
          *(_DWORD *)(v148 + 204) = v150->Alignment;
          *(_DWORD *)(v148 + 12) = v149 ^ ((unsigned __int16)v149 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v150->Flags.0 << 9)) & 0x800;
        }
      }
      else if ( (*(_DWORD *)&v146 & 0x20000) != 0 )
      {
        p_hSection = (struct COREDEVICEACCESS *)&v40[v143].hSection;
        v151 = *(void **)p_hSection;
        v315 = 0LL;
        v152 = ObReferenceObjectByHandle(v151, 0x20000u, MmSectionObjectType, a3, &v315, 0LL);
        v287 = v315;
        LODWORD(v42) = v152;
        v271 = v152;
        if ( v152 < 0 )
        {
          v153 = v152;
          v154 = (__int64 *)p_hSection;
          WdLogSingleEntry2(2LL, *(_QWORD *)p_hSection, v152);
          WdLogGlobalForLineNumber = 6064;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x",
            *v154,
            v153,
            0LL,
            0LL,
            0LL);
          v63 = v272;
          goto LABEL_423;
        }
        p_hSection = (struct COREDEVICEACCESS *)&v286[(_QWORD)v288];
        v155 = ProcessSectionAttributes(v315, (struct _DXGK_ALLOCATIONINFO *)p_hSection);
        v42 = v155;
        v271 = v155;
        if ( v155 < 0 )
        {
          WdLogSingleEntry2(2LL, v18, v155);
          WdLogGlobalForLineNumber = 6074;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to query section attributes. Device=0x%I64x, Status=%I64X",
            (__int64)v18,
            v42,
            0LL,
            0LL,
            0LL);
          ObfDereferenceObject(v287);
          v63 = v272;
          goto LABEL_423;
        }
        v156 = *(_QWORD *)(*(_QWORD *)(v142 + 40) + 56LL);
        v157 = *(_DWORD *)(v156 + 12) | 0x400;
        *(_DWORD *)(v156 + 12) = v157;
        *(_QWORD *)(v156 + 192) = v287;
        v158 = p_hSection;
        *(_DWORD *)(v156 + 204) = *((_DWORD *)p_hSection + 3);
        *(_DWORD *)(v156 + 12) = v157 ^ ((unsigned __int16)v157 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v158 + 16) << 9)) & 0x800;
        v143 = (unsigned int)v280;
      }
      else if ( (*(_BYTE *)&v146 & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v142 + 40) + 56LL) + 12LL) ^= ((unsigned __int16)*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v142 + 40) + 56LL) + 12LL) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v286[v143].Flags.0 << 9)) & 0x800;
      }
    }
    if ( (v40[v143].Flags.Value & 1) == 0 )
    {
LABEL_362:
      *(_QWORD *)(*(_QWORD *)(v142 + 48) + 16LL) = *(_QWORD *)(v142 + 48);
      v163 = *(_QWORD *)(v142 + 48);
      v164 = v292;
      *(_DWORD *)(v142 + 120) = *((_DWORD *)v292 + 18 * v143 + 8);
      *(_QWORD *)(v163 + 112) = *((unsigned int *)v164 + 18 * v143 + 8);
      *(_OWORD *)(v163 + 64) = *(_OWORD *)((char *)v164 + 72 * v143 + 40);
      *(_OWORD *)(v163 + 80) = *(_OWORD *)((char *)v164 + 72 * v143 + 56);
      *(_OWORD *)(v163 + 96) = *(_OWORD *)((char *)v164 + 72 * v143 + 72);
      v165 = v40[v143].PrivateDriverDataSize;
      LODWORD(Size) = v40[v143].PrivateDriverDataSize;
      if ( !a3 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
      {
        v288 = (struct _DXGSHAREDALLOCOBJECT *)(8LL * v143);
        v166 = v165;
        v167 = *(void **)((char *)v285 + (_QWORD)v288);
        v168 = (char *)v40[v143].pPrivateDriverData;
      }
      else
      {
        v166 = (unsigned int)v165;
        v288 = (struct _DXGSHAREDALLOCOBJECT *)(8LL * v143);
        v167 = *(void **)((char *)v283 + (_QWORD)v288);
        v168 = (char *)v40[v143].pPrivateDriverData;
        if ( (unsigned __int64)&v168[v166] > MmUserProbeAddress || &v168[v166] <= v168 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v168, v167, v166);
      if ( v293 )
      {
        if ( !a3 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
          v169 = *(void **)((char *)v285 + (_QWORD)v288);
        else
          v169 = v283[v143];
        memmove((void *)*(v293 - 2), v169, (unsigned int)Size);
        v293 = (unsigned __int64 *)*v293;
        v313 = v293;
      }
      v126 = v292;
      ++v143;
      v142 = *(_QWORD *)(v142 + 64);
      v289 = (struct DXGALLOCATION *)v142;
      continue;
    }
    break;
  }
  if ( v142 )
    DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v142);
  v323 = v142;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    v310 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v310) >= 0 )
    {
      DxgThread = v310;
      if ( v310 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v310 = DxgThread) != 0LL) )
      {
        if ( *((_DWORD *)DxgThread + 12) )
        {
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
          WdLogGlobalForLineNumber = 73;
        }
      }
    }
  }
  Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 4664LL),
               *((_DWORD *)Current + 122),
               *((_DWORD *)v18 + 118),
               0,
               (struct D3DDDI_MAKERESIDENT_FLAGS)3,
               1u,
               (const struct DXGALLOCATIONREFERENCE *)&v323,
               0LL,
               0LL);
  v42 = Resident;
  v271 = Resident;
  if ( Resident >= 0 )
  {
    if ( v142 )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v142 + 88));
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
    {
      v312 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v312) >= 0 )
      {
        v162 = v312;
        if ( v312 || (v162 = DxgkThreadObjectCreateDxgThread(1), (v312 = v162) != 0LL) )
        {
          if ( *((_DWORD *)v162 + 12) )
          {
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v162 + 12), 0LL, 0LL);
            WdLogGlobalForLineNumber = 73;
          }
        }
      }
    }
    v143 = (unsigned int)v280;
    goto LABEL_362;
  }
  WdLogSingleEntry1(2LL, Resident);
  WdLogGlobalForLineNumber = 6117;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"VmBusSendMakeResident failed: 0x%I64x",
    v42,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( v142 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v142 + 88));
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    v311 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v311) >= 0 )
    {
      v161 = v311;
      if ( v311 || (v161 = DxgkThreadObjectCreateDxgThread(1), (v311 = v161) != 0LL) )
      {
        if ( *((_DWORD *)v161 + 12) )
        {
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v161 + 12), 0LL, 0LL);
          WdLogGlobalForLineNumber = 73;
        }
      }
    }
  }
LABEL_376:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v309);
  if ( (int)v42 < 0 )
    goto LABEL_111;
  v117 = v291;
LABEL_378:
  if ( *(_BYTE *)(v117 + 209) )
  {
    if ( !a4 )
    {
      if ( bTracingEnabled )
      {
        v170 = v62;
        v171 = 0;
        for ( LODWORD(Size) = 0; v171 < a2->NumAllocations; v170 = (_QWORD *)v170[8] )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
          {
            LODWORD(v280) = *((_DWORD *)v170 + 5);
            v172 = v170[5];
            if ( v172 )
              v289 = *(struct DXGALLOCATION **)(v172 + 48);
            else
              v289 = 0LL;
            if ( v172 )
              v288 = (struct _DXGSHAREDALLOCOBJECT *)*(unsigned int *)(v172 + 16);
            else
              v288 = 0LL;
            p_hSection = (struct COREDEVICEACCESS *)*((unsigned int *)v170 + 4);
            if ( v172 )
              v291 = *(_QWORD *)(v172 + 56);
            else
              v291 = 0LL;
            v173 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
            v174 = PsGetCurrentProcessId();
            McTemplateK0ppppppppppppq_EtwWriteTransfer(v291, &EventCreateDeviceAllocation, v175, v174, v18, v173, v170);
            v171 = Size;
          }
          LODWORD(Size) = ++v171;
        }
      }
    }
  }
LABEL_394:
  v176 = a2->Flags;
  if ( (*(_WORD *)&v176 & 0x800) == 0 )
  {
    if ( (*(_WORD *)&v176 & 0x1000) != 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 760LL) + 8LL)
                                                     + 712LL))(
        *(_QWORD *)(*((_QWORD *)v18 + 2) + 768LL),
        v62[3],
        *((_QWORD *)v290 + 43));
    v63 = v272;
    goto LABEL_416;
  }
  memset(&v327.Width, 0, 40);
  v327.hAllocation = *(HANDLE *)(v62[6] + 16LL);
  v177 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)v18 + 2), &v327, v90);
  LODWORD(v42) = v177;
  v271 = v177;
  if ( v177 < 0 )
  {
    WdLogSingleEntry4(3LL, v177, v18, *((unsigned int *)v62 + 4), v62);
    WdLogGlobalForLineNumber = 6222;
    v63 = v272;
    goto LABEL_423;
  }
  if ( v327.Format == D3DDDIFMT_UNKNOWN && v327.Height != 1 )
  {
    WdLogSingleEntry3(3LL, -1073741811LL, v18, v327.Height);
    WdLogGlobalForLineNumber = 6230;
    LODWORD(v42) = -1073741811;
    v271 = -1073741811;
    v63 = v272;
    goto LABEL_423;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v62[5] + 56LL) + 12LL) & 0x20) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6237;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pAllocationObjectList->m_pOwningResource->m_pSharedResource->m_CrossAdapter",
      6237LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v42 = *(_QWORD *)(v62[5] + 56LL);
  p_hSection = (struct COREDEVICEACCESS *)v42;
  *(_DWORD *)(v42 + 208) = v327.Width;
  *(_DWORD *)(v42 + 212) = v327.Height;
  *(_DWORD *)(v42 + 216) = v327.Format;
  v178 = v305->Flags;
  if ( (*((_BYTE *)v18 + 1917) & 1) != 0 )
  {
    if ( (*(_DWORD *)&v178 & 0x20000) == 0 )
      goto LABEL_406;
    v63 = v272;
    v181 = (void *)*((_QWORD *)v272 + 1);
    v316 = 0LL;
    v182 = ObReferenceObjectByHandle(v181, 0x20000u, MmSectionObjectType, a3, &v316, 0LL);
    *(_QWORD *)(v42 + 192) = v316;
    LODWORD(v42) = v182;
    v271 = v182;
    if ( v182 >= 0 )
    {
      v42 = (__int64)p_hSection;
      *((_DWORD *)p_hSection + 3) |= 0x400u;
      goto LABEL_407;
    }
    v183 = v182;
    WdLogSingleEntry2(2LL, *((_QWORD *)v272 + 1), v182);
    WdLogGlobalForLineNumber = 6274;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x",
      *((_QWORD *)v272 + 1),
      v183,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    if ( (*(_BYTE *)&v178 & 0x20) == 0 )
    {
      *(_QWORD *)(v42 + 192) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 760LL)
                                                                             + 8LL)
                                                                 + 632LL))(v62[3]);
      *(_DWORD *)(v42 + 12) |= 0x400u;
    }
    *(_QWORD *)(v42 + 224) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2)
                                                                                               + 760LL)
                                                                                   + 8LL)
                                                                       + 704LL))(
                               *(_QWORD *)(*((_QWORD *)v18 + 2) + 768LL),
                               v62[3]);
LABEL_406:
    v63 = v272;
LABEL_407:
    v179 = VidPnSourceId;
    *(_DWORD *)(v42 + 232) = VidPnSourceId;
    if ( v179 != -1 )
    {
      v180 = *(_DWORD *)(v42 + 12) | 0x40;
      *(_DWORD *)(v42 + 12) = v180;
      *(_DWORD *)(v42 + 12) = v180 ^ ((unsigned __int8)v180 ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 0x80;
    }
LABEL_416:
    v184 = (struct COREDEVICEACCESS *)*((_QWORD *)v18 + 2);
    p_hSection = v184;
    v185 = *((_QWORD *)v184 + 2);
    if ( (*(_DWORD *)(v185 + 2468) & 0x40) == 0 )
    {
      v303 = 0;
      v186 = *(const struct SYSMM_ADAPTER **)(v185 + 224);
      SysMmQueryIommuState(v186, (union SYSMM_IOMMU_STATE *)&v303);
      if ( (v303 & 4) == 0 )
      {
        v304 = 0;
        SysMmQueryIommuState(v186, (union SYSMM_IOMMU_STATE *)&v304);
        if ( (v304 & 8) == 0 )
          goto LABEL_422;
      }
    }
    v187 = v290;
    if ( v290
      && (*(_DWORD *)v290 & 0x200) == 0
      && (memset(&v330, 0, 56),
          memset(&v330.DriverProtection, 0, 40),
          v330.Protection.Value = 1LL,
          v270 = 0,
          v188 = v62,
          j = v62,
          a2->NumAllocations) )
    {
      while ( 1 )
      {
        v190 = (*((_DWORD *)v188 + 18) >> 12) & 0x3F;
        if ( *((_DWORD *)v187 + 4) == 4 )
        {
          v191 = *(_DWORD *)(*((_QWORD *)v187 + 3) + 12LL);
          if ( ((v191 - 1) & 0xFFFFFFFC) != 0 || v191 == 2 )
          {
            v192 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
            if ( *(_BYTE *)(v192 + 3022) )
            {
              if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v192) + 102) & 0x180) == 0 )
                v190 = -1;
              v188 = j;
            }
          }
        }
        if ( v274 )
        {
          v193 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 4664LL),
                   *((_DWORD *)Current + 122),
                   v18,
                   0,
                   *((_DWORD *)v188 + 5),
                   &v330);
        }
        else
        {
          LOBYTE(Object) = 0;
          v193 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(*((_QWORD *)v184 + 95) + 8LL) + 744LL))(
                   *((_QWORD *)v184 + 96),
                   0LL,
                   v188[3],
                   &v330,
                   Object,
                   v190);
        }
        LODWORD(v42) = v193;
        v271 = v193;
        if ( v193 < 0 )
          break;
        v194 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
        if ( *(_BYTE *)(v194 + 3022) )
        {
          v195 = (*((_DWORD *)DXGPROCESS::GetCurrent(v194) + 102) & 0x180) == 0;
          BaseAddress = v330.BaseAddress;
          if ( v195 )
            BaseAddress = v330.VirtualAddress;
          v330.BaseAddress = BaseAddress;
        }
        v330.VirtualAddress = 0LL;
        ++v270;
        v188 = (_QWORD *)j[8];
        j = v188;
        v187 = v290;
        if ( v270 >= a2->NumAllocations )
          goto LABEL_423;
        v184 = p_hSection;
      }
      WdLogSingleEntry1(3LL, v193);
      WdLogGlobalForLineNumber = 6375;
    }
    else
    {
LABEL_422:
      LODWORD(v42) = v271;
    }
  }
LABEL_423:
  if ( v319 )
  {
    v319 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v318);
  }
  if ( v322 == 1 )
  {
    v322 = 0;
    v189 = v321;
    _InterlockedDecrement((volatile signed __int32 *)(v321 + 16));
    ExReleasePushLockSharedEx(v189, 0LL);
    KeLeaveCriticalRegion();
    v62 = v277;
  }
  else if ( v322 == 2 )
  {
    v322 = 0;
    v197 = v321;
    *(_QWORD *)(v321 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v197, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (int)v42 < 0 )
  {
    if ( v62 )
    {
      v216 = 0;
      LODWORD(Size) = 0;
      v217 = v62;
      j = v62;
      if ( a2->NumAllocations )
      {
        do
        {
          v218 = v217[6];
          if ( *(_QWORD *)(v218 + 8) && !a4 )
          {
            if ( (v219 = *(_DWORD *)(v218 + 4), (v219 & 1) != 0) && !*((_DWORD *)v18 + 116) || (v219 & 2) != 0 )
            {
              if ( (v219 & 0x10) != 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 6447;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"!pAllocation->m_pAllocation->m_Invalidated",
                  6447LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 760LL) + 8LL)
                                                     + 168LL))(
                *(_QWORD *)(*((_QWORD *)v18 + 2) + 768LL),
                *(_QWORD *)(v217[6] + 8LL));
              *(_DWORD *)(v217[6] + 4LL) |= 0x10u;
              v216 = Size;
            }
          }
          LODWORD(Size) = ++v216;
          v217 = (_QWORD *)v217[8];
          j = v217;
        }
        while ( v216 < a2->NumAllocations );
        LODWORD(v42) = v271;
        v63 = v272;
      }
    }
    if ( v273 )
    {
      if ( v297 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v297 + 9);
      v297 = 0LL;
      v308 = 0LL;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v308);
      DXGDEVICE::RemoveResourceFromDeviceList(v18, v302);
      DXGDEVICE::DestroyResource(
        (ADAPTER_RENDER **)v18,
        (struct DXGALLOCATION **)v302,
        0LL,
        (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
    }
    else if ( v62 )
    {
      v220 = v302;
      if ( v275 )
        DXGDEVICE::RemoveAllocationsWithoutDestroy(
          (struct _KTHREAD **)v18,
          v302,
          (struct DXGALLOCATION *)v62,
          a2->NumAllocations);
      if ( !v220 || *((_QWORD *)v220 + 7) )
      {
        do
        {
          v221 = (struct DXGALLOCATION *)v62;
          v289 = (struct DXGALLOCATION *)v62;
          v222 = v62 + 8;
          v62 = (_QWORD *)v62[8];
          j = v62;
          *((_QWORD *)v289 + 7) = 0LL;
          *v222 = 0LL;
          if ( v220 )
          {
            v223 = *((_QWORD *)v220 + 7);
            if ( v223 )
            {
              if ( *(_QWORD *)(*((_QWORD *)v221 + 6) + 48LL) )
              {
                v224 = v223 + 32;
                KeEnterCriticalRegion();
                if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v224, 0LL) )
                {
                  if ( bTracingEnabled )
                  {
                    v227 = *(_DWORD *)(v224 + 24);
                    if ( v227 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                      McTemplateK0q_EtwWriteTransfer(v225, (__int64)&EventBlockThread, v226, v227);
                  }
                  ExAcquirePushLockExclusiveEx(v224, 0LL);
                }
                *(_QWORD *)(v224 + 8) = KeGetCurrentThread();
                --*(_DWORD *)(*((_QWORD *)v220 + 7) + 132LL);
                v228 = (__int64)v289;
                v229 = *((_QWORD *)v289 + 6) + 48LL;
                v230 = *(_QWORD *)v229;
                v231 = *(_QWORD **)(*((_QWORD *)v289 + 6) + 56LL);
                if ( *(_QWORD *)(*(_QWORD *)v229 + 8LL) != v229 || *v231 != v229 )
                  __fastfail(3u);
                *v231 = v230;
                *(_QWORD *)(v230 + 8) = v231;
                *(_QWORD *)(*(_QWORD *)(v228 + 48) + 48LL) = 0LL;
                v232 = *((_QWORD *)v220 + 7);
                *(_QWORD *)(v232 + 40) = 0LL;
                ExReleasePushLockExclusiveEx(v232 + 32, 0LL);
                KeLeaveCriticalRegion();
                v62 = j;
                v221 = v289;
              }
            }
          }
          DXGDEVICE::DestroyAllocations(v18, 0LL, 0, v221, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
        }
        while ( v62 );
        v62 = v277;
      }
      if ( v220 )
      {
        v233 = *((_QWORD *)v220 + 7);
        if ( v233 )
        {
          v234 = 0;
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v233 + 32));
          v235 = *((_DWORD *)v220 + 1);
          if ( (v235 & 0x10) == 0 )
          {
            *((_DWORD *)v220 + 1) = v235 | 0x10;
            v234 = 1;
          }
          v236 = *((_QWORD *)v220 + 7);
          *(_QWORD *)(v236 + 40) = 0LL;
          ExReleasePushLockExclusiveEx(v236 + 32, 0LL);
          KeLeaveCriticalRegion();
          if ( v234 )
          {
            DXGDEVICE::RemoveResourceFromDeviceList(v18, v220);
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v329, Current);
            DXGPROCESS::GetResourceUnsafe((__int64)Current, (DXGRESOURCEREFERENCE *)&v308, *((_DWORD *)v220 + 4));
            if ( v308 )
            {
              Count = v308[2].Count;
              v238 = (Count >> 6) & 0xFFFFFF;
              if ( (unsigned int)v238 < *((_DWORD *)Current + 74) )
              {
                v239 = *((_QWORD *)Current + 35);
                v240 = *(_DWORD *)(v239 + 16 * v238 + 8);
                if ( ((Count >> 25) & 0x60) == (*(_BYTE *)(v239 + 16 * v238 + 8) & 0x60)
                  && (v240 & 0x2000) == 0
                  && (v240 & 0x1F) != 0 )
                {
                  *(_DWORD *)(v239 + 16LL * ((Count >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                }
              }
              if ( v297 )
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)v297 + 9);
              v297 = 0LL;
              v324 = 0LL;
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v324);
            }
            else
            {
              v234 = 0;
            }
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v308);
            DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v329);
            if ( v234 )
              DXGDEVICE::DestroyResource(
                (ADAPTER_RENDER **)v18,
                (struct DXGALLOCATION **)v220,
                0LL,
                (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
          }
        }
        else
        {
          DXGDEVICE::DestroyAllocations(
            v18,
            v220,
            0,
            (struct DXGALLOCATION *)v62,
            0LL,
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
        }
      }
    }
  }
  else
  {
    if ( v62 )
    {
      VidPnSourceId = 0;
      j = v62;
      if ( a2->NumAllocations )
      {
        v198 = v307;
        v199 = Current;
        do
        {
          v200 = *((_QWORD *)v198 + 5);
          LODWORD(Size) = *((_DWORD *)v62 + 4);
          v201 = (DXGPUSHLOCK *)(v200 + 248);
          if ( (*((_DWORD *)v199 + 102) & 0x100) != 0 )
          {
            DXGPUSHLOCK::AcquireExclusive(v201);
            v202 = ((unsigned int)Size >> 6) & 0xFFFFFF;
            if ( (unsigned int)v202 < *(_DWORD *)(v200 + 296) )
            {
              v203 = *(_QWORD *)(v200 + 280);
              if ( (((unsigned int)Size >> 25) & 0x60) == (*(_BYTE *)(v203 + 16 * v202 + 8) & 0x60)
                && (*(_DWORD *)(v203 + 16 * v202 + 8) & 0x1F) != 0 )
              {
                v204 = 16LL * (((unsigned int)Size >> 6) & 0xFFFFFF);
                v307 = (DXGDEVICE *)v204;
                if ( (*(_DWORD *)(v203 + v204 + 8) & 0x2000) == 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 224;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                    224LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v204 = (__int64)v307;
                }
                *(_DWORD *)(v204 + *(_QWORD *)(v200 + 280) + 8) &= ~0x2000u;
              }
            }
          }
          else
          {
            DXGPUSHLOCK::AcquireExclusive(v201);
            v205 = Size;
            v206 = ((unsigned int)Size >> 6) & 0xFFFFFF;
            LODWORD(Size) = v206;
            if ( v206 < *(_DWORD *)(v200 + 296) )
            {
              v207 = *(_QWORD *)(v200 + 280);
              if ( ((v205 >> 25) & 0x60) == (*(_BYTE *)(v207 + 16LL * v206 + 8) & 0x60)
                && (*(_DWORD *)(v207 + 16LL * v206 + 8) & 0x1F) != 0 )
              {
                v208 = 16LL * ((v205 >> 6) & 0xFFFFFF);
                v307 = (DXGDEVICE *)v208;
                if ( (*(_DWORD *)(v207 + v208 + 8) & 0x2000) == 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 224;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                    224LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v208 = (__int64)v307;
                  v206 = Size;
                }
                *(_DWORD *)(v208 + *(_QWORD *)(v200 + 280) + 8) &= ~0x2000u;
              }
              if ( v206 < *(_DWORD *)(v200 + 296) )
                *(_DWORD *)(*(_QWORD *)(v200 + 280) + 16LL * v206 + 8) &= ~0x4000u;
            }
          }
          *(_QWORD *)(v200 + 256) = 0LL;
          ExReleasePushLockExclusiveEx(v200 + 248, 0LL);
          KeLeaveCriticalRegion();
          ++VidPnSourceId;
          v62 = (_QWORD *)v62[8];
          j = v62;
        }
        while ( VidPnSourceId < a2->NumAllocations );
        v18 = v296;
        LODWORD(v42) = v271;
        v63 = v272;
      }
    }
    if ( v273 )
    {
      v209 = *((_QWORD *)v18 + 5);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v209 + 248));
      v210 = v302;
      v211 = *((unsigned int *)v302 + 4);
      v212 = (*((_DWORD *)v302 + 4) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v212 < *(_DWORD *)(v209 + 296) )
      {
        v213 = *(_QWORD *)(v209 + 280);
        if ( (((unsigned int)v211 >> 25) & 0x60) == (*(_BYTE *)(v213 + 16 * v212 + 8) & 0x60)
          && (*(_DWORD *)(v213 + 16 * v212 + 8) & 0x1F) != 0 )
        {
          v214 = 2 * ((v211 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v213 + 8 * v214 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 224;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              224LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*(_QWORD *)(v209 + 280) + 8 * v214 + 8) &= ~0x2000u;
        }
      }
      v215 = (*((_DWORD *)v210 + 4) >> 6) & 0xFFFFFF;
      if ( v215 < *(_DWORD *)(v209 + 296) )
        *(_DWORD *)(*(_QWORD *)(v209 + 280) + 16LL * v215 + 8) &= ~0x4000u;
      *(_QWORD *)(v209 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v209 + 248, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v241 = v285;
  if ( a2->NumAllocations )
  {
    do
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v241[v20++]);
    while ( v20 < a2->NumAllocations );
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v298);
  if ( a2->NumAllocations > 5 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v63);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v286);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v299);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v241);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v283);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v320);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v318);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v297);
  if ( Entry )
    ExFreeToPagedLookasideList(v325 + 13, Entry);
  return (unsigned int)v42;
}
