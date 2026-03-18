/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140361FE0
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1402E3F98 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x14035DD88 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403600FC (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140361554 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1400172A0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033D08 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x140037374 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x14003959C (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14003B86C (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@XZ @ 0x14003BE80 (--0DXGSYNCOBJECTMUTEX@@QEAA@XZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1400485D8 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x14005A738 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_1276945721__private_IsEnabledDeviceUsageNoInline @ 0x14006BAE0 (Feature_1276945721__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14006BB88 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x14018820C (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1401AF2A0 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1401B8ED0 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1402218CC (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402A2AD0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402A5DC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E1770 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1402F8FE8 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1403313C0 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x140338CB0 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x14033E700 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x14033FAC4 (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x140344070 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1403477B0 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140350030 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1403502AC (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x14037A260 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x140394FFC (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1403CCE14 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x140408DB8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x14040FD98 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
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
  __int64 v19; // rcx
  UINT v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // r9
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // edx
  struct _PAGED_LOOKASIDE_LIST *v25; // rcx
  __int64 NumAllocations; // rax
  char *v27; // rsi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r15
  int v30; // edi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  void **v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // r9
  unsigned __int64 v37; // rax
  void **v38; // r8
  __int64 v39; // r8
  char *v40; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v41; // rdi
  UINT i; // ecx
  unsigned __int64 v43; // rsi
  struct DXGRESOURCE *v44; // r15
  size_t v45; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  __int64 VidPnSourceId; // r9
  UINT v48; // r14d
  __int64 v49; // r8
  UINT Value; // eax
  __int64 v51; // rax
  _QWORD *v52; // r14
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r8
  UINT v57; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v58; // edx
  int v59; // r8d
  __int64 hSection; // rcx
  SIZE_T v61; // rdx
  UINT j; // r14d
  __int64 v63; // rdx
  unsigned __int64 PrivateDriverDataSize; // rcx
  char *v65; // rax
  char *v66; // r9
  size_t v67; // r8
  char *pPrivateDriverData; // rdx
  UINT v69; // eax
  void *v70; // r9
  size_t v71; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  __int64 v73; // r9
  UINT v74; // edx
  __int64 v75; // rcx
  __int64 k; // rcx
  unsigned __int64 v77; // rax
  __int64 v78; // r14
  void *v79; // rcx
  struct DXGALLOCATION *v80; // r9
  D3DKMT_CREATEALLOCATIONFLAGS v81; // eax
  __int64 v82; // rax
  char v83; // cl
  struct _DXGK_ALLOCATIONINFO *v84; // r8
  D3DKMT_CREATEALLOCATIONFLAGS v85; // eax
  unsigned int v86; // edx
  UINT v87; // r14d
  struct COREDEVICEACCESS *v88; // r15
  unsigned __int64 *v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v93; // rax
  D3DKMT_HANDLE v94; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v95; // eax
  D3DKMT_HANDLE v96; // ecx
  __int64 v97; // rax
  __int64 v98; // r8
  char *v99; // rcx
  unsigned int v100; // edx
  __int64 v101; // rax
  __int64 v102; // rcx
  struct _D3DKMT_CREATEALLOCATION *v103; // rdx
  UINT v104; // eax
  unsigned int v105; // eax
  UINT PrivateRuntimeDataSize; // ecx
  unsigned __int8 v107; // si
  size_t v108; // r8
  char *pPrivateRuntimeData; // rdx
  void *v110; // r9
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rcx
  UINT v114; // eax
  const void *v115; // rdx
  struct COREDEVICEACCESS *v116; // rax
  _QWORD *v117; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v118; // rsi
  __int64 v119; // rax
  _QWORD *v120; // rdx
  void *v121; // rcx
  void *v122; // rdx
  unsigned int v123; // ecx
  __int64 v124; // rax
  int HostProcess; // esi
  unsigned __int8 v126; // r11
  D3DKMT_CREATEALLOCATIONFLAGS v127; // ecx
  void *v128; // r10
  void *v129; // rdx
  void **v130; // rax
  int v131; // r9d
  int v132; // eax
  _DWORD *v133; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS v134; // ecx
  int v135; // eax
  __int64 v136; // r8
  UINT v137; // eax
  int v138; // ecx
  __int64 v139; // r10
  _DWORD *v140; // r9
  D3DKMT_CREATEALLOCATIONFLAGS v141; // eax
  char v142; // r15
  __int64 v143; // rdi
  int v144; // esi
  __int64 v145; // r14
  HANDLE CurrentProcessId; // rax
  __int64 v147; // rcx
  __int64 v148; // r8
  _QWORD *v149; // r15
  UINT v150; // esi
  __int64 v151; // rcx
  unsigned int v152; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v153; // eax
  struct COREDEVICEACCESS *v154; // r9
  __int64 v155; // r8
  int v156; // edx
  struct _DXGK_ALLOCATIONINFO *v157; // rcx
  void *v158; // rcx
  NTSTATUS v159; // eax
  __int64 v160; // rdi
  __int64 *v161; // r15
  int v162; // eax
  __int64 v163; // rdx
  int v164; // ecx
  struct COREDEVICEACCESS *v165; // r8
  struct DXGTHREAD *DxgThread; // rax
  int Resident; // eax
  struct DXGTHREAD *v168; // rax
  struct DXGTHREAD *v169; // rax
  __int64 v170; // rdx
  struct _DXGSHAREDALLOCOBJECT *v171; // r8
  size_t v172; // rcx
  size_t v173; // r8
  const void *v174; // rdx
  char *v175; // rcx
  const void *v176; // rdx
  __int64 v177; // rcx
  UINT v178; // edx
  __int64 v179; // rsi
  __int64 v180; // rdi
  HANDLE v181; // rax
  __int64 v182; // r8
  D3DKMT_CREATEALLOCATIONFLAGS v183; // eax
  int v184; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v185; // ecx
  void *v186; // rcx
  NTSTATUS v187; // eax
  __int64 v188; // rdi
  int v189; // eax
  int v190; // ecx
  struct COREDEVICEACCESS *v191; // rsi
  __int64 v192; // rcx
  const struct SYSMM_ADAPTER *v193; // rdi
  struct _D3DKM_CREATESTANDARDALLOCATION *v194; // rcx
  _QWORD *v195; // rdx
  __int64 v196; // rcx
  int v197; // edi
  int v198; // ecx
  __int64 v199; // rcx
  int v200; // eax
  __int64 v201; // rcx
  bool v202; // zf
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rax
  __int64 v204; // rdi
  UINT v205; // r15d
  _QWORD *v206; // rdi
  unsigned int v207; // r8d
  unsigned int v208; // edx
  __int64 v209; // r10
  __int64 v210; // rdi
  __int64 v211; // r14
  unsigned __int64 v212; // rdi
  __int64 v213; // rax
  __int64 v214; // r8
  __int64 v215; // rdi
  unsigned int v216; // eax
  UINT v217; // eax
  _QWORD *v218; // rdi
  __int64 v219; // rcx
  int v220; // ecx
  struct DXGALLOCATION *v221; // rcx
  _QWORD *v222; // rax
  __int64 v223; // rdi
  __int64 v224; // rcx
  __int64 v225; // r8
  int v226; // r9d
  _QWORD *v227; // rcx
  __int64 v228; // rax
  __int64 v229; // r8
  _QWORD *v230; // rdx
  __int64 v231; // rdi
  __int64 v232; // rcx
  char v233; // r14
  int v234; // eax
  __int64 v235; // rdi
  struct DXGPROCESS *v236; // rdi
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
  unsigned __int8 v272; // [rsp+120h] [rbp-2D8h] BYREF
  char v273; // [rsp+121h] [rbp-2D7h]
  UINT v274; // [rsp+124h] [rbp-2D4h]
  char v275; // [rsp+128h] [rbp-2D0h]
  _QWORD *m; // [rsp+130h] [rbp-2C8h]
  struct DXGALLOCATION *v277; // [rsp+138h] [rbp-2C0h] BYREF
  size_t Size; // [rsp+140h] [rbp-2B8h]
  struct DXGRESOURCE *v279; // [rsp+148h] [rbp-2B0h]
  struct COREDEVICEACCESS *p_hSection; // [rsp+150h] [rbp-2A8h]
  char v281; // [rsp+158h] [rbp-2A0h]
  unsigned __int8 v282; // [rsp+160h] [rbp-298h]
  void *v283; // [rsp+168h] [rbp-290h]
  _QWORD *p_VidPnSourceId; // [rsp+170h] [rbp-288h]
  void **v285; // [rsp+178h] [rbp-280h]
  void **v286; // [rsp+180h] [rbp-278h]
  struct _DXGK_ALLOCATIONINFO *v287; // [rsp+188h] [rbp-270h]
  PVOID v288; // [rsp+190h] [rbp-268h]
  __int64 v289; // [rsp+198h] [rbp-260h]
  unsigned __int64 *v290; // [rsp+1A0h] [rbp-258h]
  _QWORD *v291; // [rsp+1A8h] [rbp-250h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v292; // [rsp+1B0h] [rbp-248h]
  struct _DXGSHAREDALLOCOBJECT *v293; // [rsp+1B8h] [rbp-240h]
  char *v294; // [rsp+1C0h] [rbp-238h]
  int v295; // [rsp+1C8h] [rbp-230h]
  struct DXGRESOURCE *v296; // [rsp+1D0h] [rbp-228h] BYREF
  struct _DXGK_OPENALLOCATIONINFO *v297; // [rsp+1D8h] [rbp-220h]
  DXGDEVICE *v298; // [rsp+1E0h] [rbp-218h]
  struct _D3DKMT_CREATEALLOCATION *v299; // [rsp+1F0h] [rbp-208h]
  void *v300; // [rsp+200h] [rbp-1F8h]
  int v301; // [rsp+208h] [rbp-1F0h] BYREF
  int v302; // [rsp+20Ch] [rbp-1ECh] BYREF
  struct _D3DKMT_CREATEALLOCATION *v303; // [rsp+210h] [rbp-1E8h]
  unsigned int *p_hAllocation; // [rsp+218h] [rbp-1E0h]
  struct DXGPROCESS *Current; // [rsp+220h] [rbp-1D8h]
  unsigned __int8 *v306; // [rsp+228h] [rbp-1D0h] BYREF
  struct _EX_RUNDOWN_REF *v307; // [rsp+230h] [rbp-1C8h] BYREF
  struct DXGTHREAD *v308; // [rsp+238h] [rbp-1C0h] BYREF
  struct DXGTHREAD *v309; // [rsp+240h] [rbp-1B8h] BYREF
  struct DXGTHREAD *v310; // [rsp+248h] [rbp-1B0h] BYREF
  unsigned __int64 *v311; // [rsp+250h] [rbp-1A8h]
  struct DXGALLOCATION *v312; // [rsp+258h] [rbp-1A0h] BYREF
  PVOID v313; // [rsp+260h] [rbp-198h] BYREF
  PVOID v314; // [rsp+268h] [rbp-190h] BYREF
  PVOID Entry; // [rsp+270h] [rbp-188h]
  DXGFASTMUTEX *v316; // [rsp+278h] [rbp-180h] BYREF
  char v317; // [rsp+280h] [rbp-178h]
  char v318[8]; // [rsp+288h] [rbp-170h] BYREF
  __int64 v319; // [rsp+290h] [rbp-168h]
  int v320; // [rsp+298h] [rbp-160h]
  struct _D3DKMT_CREATESTANDARDALLOCATION *v321; // [rsp+2A0h] [rbp-158h]
  unsigned __int64 *v322; // [rsp+2A8h] [rbp-150h]
  _QWORD *v323; // [rsp+2B0h] [rbp-148h] BYREF
  struct _EX_RUNDOWN_REF *v324; // [rsp+2B8h] [rbp-140h] BYREF
  struct _PAGED_LOOKASIDE_LIST *v325; // [rsp+2C0h] [rbp-138h]
  _BYTE v326[16]; // [rsp+2C8h] [rbp-130h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v327; // [rsp+2D8h] [rbp-120h] BYREF
  _BYTE v328[24]; // [rsp+308h] [rbp-F0h] BYREF
  _BYTE v329[32]; // [rsp+320h] [rbp-D8h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v330; // [rsp+340h] [rbp-B8h] BYREF

  v16 = a3;
  v298 = this;
  v299 = a2;
  v303 = a2;
  v282 = a3;
  v293 = a5;
  v292 = a6;
  p_hSection = a7;
  Size = (size_t)a9;
  p_hAllocation = a10;
  v322 = a11;
  v290 = a12;
  v321 = a13;
  v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v19 + 184)
    || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 168)) )
  {
    v20 = 0;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4777;
    v20 = 0;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      4777LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v16 && a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4782;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!(UserMode && OpenShared)", 4782LL, 0LL, 0LL, 0LL, 0LL);
  }
  v21 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v273 = *(_BYTE *)(v21 + 209);
  v281 = v273;
  Current = DXGPROCESS::GetCurrent(v21);
  Flags = a2->Flags;
  if ( (*(_WORD *)&Flags & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2468LL) & 0x10) == 0 )
    {
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 4791;
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&Flags & 2) == 0 )
    {
      WdLogSingleEntry3(3LL, this, -1073741811LL, 1LL);
      WdLogGlobalForLineNumber = 4796;
      return 3221225485LL;
    }
  }
  v285 = 0LL;
  v300 = 0LL;
  v25 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)this + 2);
  Entry = 0LL;
  v325 = v25;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations <= 5 )
  {
    v40 = (char *)ExAllocateFromPagedLookasideList(v25 + 13);
    v41 = (struct _D3DDDI_ALLOCATIONINFO2 *)v40;
    v283 = v40;
    Entry = v40;
    if ( !v40 )
    {
      WdLogSingleEntry1(6LL, this);
      WdLogGlobalForLineNumber = 4913;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Out of memory allocating scratch data",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741801LL;
    }
    v287 = (struct _DXGK_ALLOCATIONINFO *)(v40 + 720);
    v297 = (struct _DXGK_OPENALLOCATIONINFO *)(v40 + 480);
    v34 = (void **)(v40 + 640);
    v286 = (void **)(v40 + 640);
    v38 = (void **)(v40 + 680);
    v285 = (void **)(v40 + 680);
    v294 = v40;
    goto LABEL_56;
  }
  v27 = 0LL;
  v283 = 0LL;
  v294 = 0LL;
  v28 = (unsigned int)NumAllocations;
  v29 = 96 * NumAllocations;
  v30 = 0;
  if ( (unsigned __int64)(96 * NumAllocations) <= 0xFFFFFFFF )
  {
    v31 = 96LL * (unsigned int)NumAllocations;
    if ( !is_mul_ok(v28, 0x60uLL) )
      v31 = -1LL;
    v27 = (char *)operator new[](v31, 0x4B677844u, 256LL, v22);
    v283 = v27;
    v294 = v27;
  }
  else
  {
    v30 = -1073741675;
  }
  v287 = 0LL;
  if ( v29 <= 0xFFFFFFFF )
  {
    v30 = 0;
    if ( 88 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v32 = 88LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 0x58uLL) )
        v32 = -1LL;
      v287 = (struct _DXGK_ALLOCATIONINFO *)operator new[](v32, 0x4B677844u, 258LL, v22);
    }
    else
    {
      v30 = -1073741675;
    }
  }
  v297 = 0LL;
  if ( v30 >= 0 )
  {
    v30 = 0;
    if ( 32 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v33 = 32LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 0x20uLL) )
        v33 = -1LL;
      v297 = (struct _DXGK_OPENALLOCATIONINFO *)operator new[](v33, 0x4B677844u, 256LL, v22);
    }
    else
    {
      v30 = -1073741675;
    }
  }
  v34 = 0LL;
  v286 = 0LL;
  if ( v30 >= 0 )
  {
    v30 = 0;
    if ( 8 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v35 = 8LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
        v35 = -1LL;
      v34 = (void **)operator new[](v35, 0x4B677844u, 256LL, v22);
      v286 = v34;
      v16 = a3;
      if ( a3 )
      {
        v37 = 8LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
          v37 = -1LL;
        v38 = (void **)operator new[](v37, 0x4B677844u, 256LL, v36);
        v285 = v38;
        v34 = v286;
      }
      else
      {
        v38 = 0LL;
      }
      goto LABEL_42;
    }
    v30 = -1073741675;
  }
  v16 = a3;
  v38 = 0LL;
LABEL_42:
  if ( v30 < 0 || !v27 || !v287 || !v297 || !v34 || !v38 && v16 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v27);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v287);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v297);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v286);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v285);
    v39 = a2->NumAllocations;
    if ( v30 >= 0 )
    {
      WdLogSingleEntry3(3LL, this, v39, -1073741801LL);
      WdLogGlobalForLineNumber = 4901;
      return 3221225495LL;
    }
    else
    {
      WdLogSingleEntry3(3LL, this, v39, v30);
      WdLogGlobalForLineNumber = 4894;
      return (unsigned int)v30;
    }
  }
  v41 = (struct _D3DDDI_ALLOCATIONINFO2 *)v283;
LABEL_56:
  for ( i = 0; i < a2->NumAllocations; ++i )
  {
    v34[i] = 0LL;
    if ( v16 )
      v38[i] = 0LL;
  }
  v288 = 0LL;
  v277 = 0LL;
  LODWORD(v43) = 0;
  v271 = 0;
  v272 = 0;
  v44 = 0LL;
  v279 = 0LL;
  v275 = 0;
  v296 = 0LL;
  DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v316);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v318, 0LL, 0);
  if ( a3 )
  {
    v45 = 96LL * a2->NumAllocations;
    pAllocationInfo = a2->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v45) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v45 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v41, pAllocationInfo, v45);
  }
  else
  {
    memmove(v41, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  }
  v295 = -1;
  if ( (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
  {
    v41->pPrivateDriverData = a14;
    v41->PrivateDriverDataSize = a15;
  }
  v48 = 0;
  v266 = 0;
  if ( !a2->NumAllocations )
    goto LABEL_103;
  do
  {
    if ( (*(_DWORD *)&a2->Flags & 0x800) != 0 )
    {
      v49 = v48;
      Value = v41[v49].Flags.Value;
      if ( (Value & 1) != 0 )
      {
        VidPnSourceId = v41[v49].VidPnSourceId;
        v295 = v41[v49].VidPnSourceId;
        if ( !*((_QWORD *)this + 235) )
        {
          Value &= ~1u;
          v41[v49].Flags.Value = Value;
        }
      }
      if ( (Value & 2) != 0 )
      {
        WdLogSingleEntry2(3LL, this, -1073741811LL);
        WdLogGlobalForLineNumber = 5015;
        LODWORD(v43) = -1073741811;
        v271 = -1073741811;
        v52 = v277;
        goto LABEL_437;
      }
    }
    if ( (v41[v48].Flags.Value & 1) == 0 || v273 )
      goto LABEL_91;
    v51 = *((_QWORD *)this + 235);
    v291 = (_QWORD *)v51;
    if ( !v51 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)this + 5) + 408LL) & 0x100) == 0 )
      {
        WdLogSingleEntry3(3LL, this, v41[v48].VidPnSourceId, -1073741811LL);
        WdLogGlobalForLineNumber = 5034;
        LODWORD(v43) = -1073741811;
        v271 = -1073741811;
        v52 = v277;
        goto LABEL_437;
      }
      goto LABEL_91;
    }
    v53 = *(_QWORD *)(v51 + 3120);
    if ( v53 )
    {
      v54 = *(_QWORD *)(v53 + 16);
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v54 + 184)
        || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v54 + 168)) )
      {
        v48 = v266;
        goto LABEL_84;
      }
      v48 = v266;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5042;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsDisplayAdapter() && pDisplayAdapter->GetDisplayCore()->IsCoreResourceSharedOwner()",
      5042LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_84:
    v55 = (__int64)v291;
    if ( *(_DWORD *)(v291[390] + 96LL) != *((_DWORD *)this + 472) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5048;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pDisplayAdapter->GetDisplayCore()->GetNumVidPnSources() == this->GetNumVidPnSources()",
        5048LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v55 = (__int64)v291;
    }
    p_VidPnSourceId = &v41[v48].VidPnSourceId;
    v56 = *(unsigned int *)p_VidPnSourceId;
    if ( (unsigned int)v56 >= *((_DWORD *)this + 472) )
    {
      WdLogSingleEntry3(3LL, this, v56, -1073741811LL);
      WdLogGlobalForLineNumber = 5055;
      LODWORD(v43) = -1073741811;
      v271 = -1073741811;
      v52 = v277;
      goto LABEL_437;
    }
    if ( !*((_DWORD *)this + 116)
      && !a4
      && (*((_DWORD *)Current + 102) & 0x100) == 0
      && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v55 + 3120), this, v56) )
    {
      LODWORD(v43) = -1071775744;
      v271 = -1071775744;
      WdLogSingleEntry4(3LL, -1071775744LL, this, *(unsigned int *)p_VidPnSourceId, v48);
      WdLogGlobalForLineNumber = 5070;
      v52 = v277;
      goto LABEL_437;
    }
LABEL_91:
    v57 = v41[v48].Flags.Value;
    if ( (v57 & 2) != 0 && (v57 & 1) == 0 )
    {
      WdLogSingleEntry2(3LL, -1073741811LL, this);
      WdLogGlobalForLineNumber = 5088;
      LODWORD(v43) = -1073741811;
      v271 = -1073741811;
      v52 = v277;
      goto LABEL_437;
    }
    v58 = a2->Flags;
    if ( (*(_DWORD *)&v58 & 0x10000) != 0 )
    {
      v59 = *(_DWORD *)&a2->Flags & 0x20;
      if ( (*(_BYTE *)&v58 & 0x20) != 0 && !v41[v48].hSection || (*(_DWORD *)&v58 & 0x20000) != 0 && !v41[v48].hSection )
      {
        WdLogSingleEntry2(2LL, this, -1073741811LL);
        WdLogGlobalForLineNumber = 5102;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Device 0x%I64x: ExistingSysMem pointer or Section Handle not specified, returning 0x%I64x",
          (__int64)this,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
LABEL_114:
        LODWORD(v43) = -1073741811;
        v271 = -1073741811;
        v52 = v277;
        goto LABEL_437;
      }
      hSection = (__int64)v41[v48].hSection;
      v289 = hSection;
      v61 = a2->pStandardAllocation->ExistingHeapData.Size;
      p_VidPnSourceId = (_QWORD *)v61;
      if ( v59 && hSection != (hSection & 0xFFFFFFFFFFFFF000uLL) || v61 != (v61 & 0xFFFFFFFFFFFFF000uLL) )
      {
        WdLogSingleEntry2(2LL, hSection, v61);
        WdLogGlobalForLineNumber = 5115;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Existing sysmem must be paged aligned and a multiple of page in size.                    pSysMem:0x%I64x, Size:0x%I64x",
          v289,
          (__int64)p_VidPnSourceId,
          0LL,
          0LL,
          0LL);
        goto LABEL_114;
      }
    }
    v266 = ++v48;
  }
  while ( v48 < a2->NumAllocations );
  v288 = v277;
LABEL_103:
  for ( j = 0; j < a2->NumAllocations; ++j )
  {
    v63 = j;
    PrivateDriverDataSize = v41[v63].PrivateDriverDataSize;
    if ( (unsigned int)PrivateDriverDataSize > 0x7FFFFFFF )
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5133;
      goto LABEL_107;
    }
    if ( v41[v63].pPrivateDriverData && (_DWORD)PrivateDriverDataSize )
    {
      if ( a3 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
        PrivateDriverDataSize = (unsigned int)(2 * PrivateDriverDataSize);
      v65 = (char *)operator new[](PrivateDriverDataSize, 0x4B677844u, 258LL, VidPnSourceId);
      v286[j] = v65;
      if ( !v65 )
      {
        LODWORD(v43) = -1073741801;
        v271 = -1073741801;
        WdLogSingleEntry3(3LL, this, a2->NumAllocations, -1073741801LL);
        WdLogGlobalForLineNumber = 5175;
        v52 = v288;
        v44 = v279;
        goto LABEL_437;
      }
      if ( a3 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
      {
        v66 = &v65[v41[j].PrivateDriverDataSize];
        v285[j] = v66;
        v67 = v41[j].PrivateDriverDataSize;
        pPrivateDriverData = (char *)v41[j].pPrivateDriverData;
        if ( &pPrivateDriverData[v67] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[v67] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v66, pPrivateDriverData, v67);
      }
    }
    else
    {
      v286[j] = 0LL;
      if ( a3 )
        v285[j] = 0LL;
    }
  }
  if ( a3 )
  {
    if ( a2->pStandardAllocation )
    {
      v69 = a2->PrivateDriverDataSize;
      if ( v69 )
      {
        v70 = (void *)operator new[](v69, 0x4B677844u, 258LL, VidPnSourceId);
        v300 = v70;
        if ( !v70 )
        {
          LODWORD(v43) = -1073741801;
          v271 = -1073741801;
          WdLogSingleEntry3(3LL, this, a2->PrivateDriverDataSize, -1073741801LL);
          WdLogGlobalForLineNumber = 5220;
          v52 = v288;
          v44 = v279;
          goto LABEL_437;
        }
        v71 = a2->PrivateDriverDataSize;
        pStandardAllocation = a2->pStandardAllocation;
        if ( (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v71) < pStandardAllocation
          || (unsigned __int64)pStandardAllocation + v71 > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v70, pStandardAllocation, v71);
      }
    }
  }
  LODWORD(v43) = DXGDEVICE::OpenResourceObject(
                   this,
                   a2,
                   v41,
                   a4,
                   (struct _EPROCESS *)Size,
                   v293,
                   (struct DXGRESOURCEREFERENCE *)&v296,
                   &v272,
                   v292,
                   (struct DXGAUTOMUTEX *)&v316,
                   (struct DXGAUTOPUSHLOCK *)v318);
  v271 = v43;
  if ( (v43 & 0x80000000) != 0LL )
  {
LABEL_107:
    v52 = v288;
    v44 = v279;
    goto LABEL_437;
  }
  v44 = v296;
  v279 = v296;
  if ( v296 && (*((_DWORD *)v296 + 1) & 1) == 0 && (*(_DWORD *)&a2->Flags & 2) != 0 )
  {
    WdLogSingleEntry3(2LL, this, v296, -1073741811LL);
    WdLogGlobalForLineNumber = 5273;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Driver asked to create a shared resource, but resource 0x%p already exists, and is non-shared, returning 0x%I64x",
      (__int64)this,
      (__int64)v44,
      -1073741811LL,
      0LL,
      0LL);
    LODWORD(v43) = -1073741811;
    v271 = -1073741811;
    v52 = v288;
    goto LABEL_437;
  }
  v74 = v272;
  v274 = v272;
  v43 = a2->NumAllocations;
  v75 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v75 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v75 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4697;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"GetRenderCore()->IsCoreResourceSharedOwner()",
        4697LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v74 = v274;
  }
  if ( v44 )
  {
    if ( !v74 )
    {
      for ( k = *((_QWORD *)v44 + 3); k; v43 = (unsigned int)(v43 + 1) )
        k = *(_QWORD *)(k + 64);
    }
    if ( (unsigned int)v43 > 0x10 )
    {
      v77 = 8 * v43;
      if ( !is_mul_ok(v43, 8uLL) )
        v77 = -1LL;
      v78 = operator new[](v77, 0x4B677844u, 256LL, v73);
      if ( !v78 )
      {
        WdLogSingleEntry3(3LL, this, v43, -1073741801LL);
        WdLogGlobalForLineNumber = 4734;
        LODWORD(v43) = -1073741801;
        v271 = -1073741801;
        v52 = v277;
        goto LABEL_437;
      }
      if ( !v274 )
      {
        v79 = (void *)*((_QWORD *)v44 + 8);
        if ( v79 )
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v79);
      }
      *((_QWORD *)v44 + 8) = v78;
    }
  }
  v312 = 0LL;
  LODWORD(v43) = DXGDEVICE::CreateAllocationObjects(this, a2->NumAllocations, &v277, v44, &v312);
  v271 = v43;
  v52 = v277;
  if ( (v43 & 0x80000000) != 0LL )
    goto LABEL_437;
  v80 = v312;
  v288 = v277;
  if ( v312 )
  {
    DXGDEVICE::AppendAllocationListToResourceOrDevice(this, v44, v277, v312);
    v275 = 1;
  }
  v81 = a2->Flags;
  if ( (*(_WORD *)&v81 & 0x800) != 0 )
  {
    if ( v295 != -1 )
    {
      *(_DWORD *)(*((_QWORD *)v44 + 7) + 12LL) |= 0x40u;
      *((_DWORD *)v44 + 1) |= 8u;
      *(_DWORD *)(*((_QWORD *)v44 + 7) + 12LL) ^= ((unsigned __int8)*(_DWORD *)(*((_QWORD *)v44 + 7) + 12LL) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 0x80;
    }
    goto LABEL_179;
  }
  if ( (*(_WORD *)&v81 & 0x1000) == 0 )
  {
    if ( !v44 )
      goto LABEL_179;
    v82 = *((_QWORD *)v44 + 7);
    if ( !v82 || (*(_BYTE *)(v82 + 12) & 0x60) != 0x60 )
      goto LABEL_179;
LABEL_178:
    *((_DWORD *)v44 + 1) |= 8u;
    goto LABEL_179;
  }
  if ( v292 )
  {
    if ( (*(_DWORD *)v292 & 0x80u) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5339;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pCreateStandardAllocation->Flags.Primary == 0",
        5339LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)v292 & 0x100) != 0 )
      goto LABEL_178;
  }
LABEL_179:
  if ( !v273 )
  {
    memset(v287, 0, 88LL * a2->NumAllocations);
    v83 = a4;
    if ( !a4 )
    {
      LODWORD(v43) = DXGDEVICE::CreateDriverAllocations(
                       this,
                       a2,
                       v41,
                       v287,
                       (struct DXGALLOCATION *)v52,
                       v44,
                       v286,
                       v285,
                       v300,
                       v292,
                       a3,
                       v321);
      v271 = v43;
      v83 = 0;
    }
    if ( (v43 & 0x80000000) != 0LL )
      goto LABEL_437;
    LODWORD(v43) = DXGDEVICE::OpenAllocations(
                     this,
                     a2,
                     v41,
                     (struct DXGALLOCATION *)v52,
                     v297,
                     v286,
                     v285,
                     v300,
                     a3,
                     v83,
                     a8,
                     p_hAllocation,
                     v322);
    v271 = v43;
    if ( (v43 & 0x80000000) != 0LL )
      goto LABEL_437;
    v84 = v287;
    if ( (*(_DWORD *)&a2->Flags & 8) != 0 )
      v287->Flags.Value |= 0x4000008u;
    v85 = a2->Flags;
    if ( (*(_WORD *)&v85 & 0x100) != 0 )
    {
      v84->Flags.Value = v84->Flags.Value & 0xFEFFFFFB | 0x1000000;
    }
    else if ( (*(_WORD *)&v85 & 0x200) != 0 )
    {
      v84->Flags.Value |= 0x800004u;
    }
    v86 = v84->Flags.Value | 0x800;
    if ( (*(_DWORD *)&a2->Flags & 0x8000) == 0 )
      v86 = v84->Flags.Value & 0xFFFFF7FF;
    v84->Flags.Value = v86;
    if ( (*(_DWORD *)&a2->Flags & 0x80000) != 0 )
      v84->Flags.Value = v86 | 0x1000;
    LODWORD(v43) = DXGDEVICE::CreateVidMmAllocations(
                     this,
                     a2,
                     v41,
                     v84,
                     (struct DXGALLOCATION *)v52,
                     v292,
                     a4,
                     p_hSection);
    v271 = v43;
    if ( (v43 & 0x80000000) != 0LL )
      goto LABEL_437;
    if ( v290 )
    {
      p_hSection = (struct COREDEVICEACCESS *)v52;
      LODWORD(Size) = 0;
      if ( a2->NumAllocations )
      {
        v87 = 0;
        v88 = p_hSection;
        v89 = v290;
        do
        {
          v90 = *(_DWORD *)&a2->Flags >> 5;
          LOBYTE(v90) = (*(_DWORD *)&a2->Flags & 0x20) != 0;
          v89[v87] = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                            + 8LL)
                                                                + 584LL))(
                       *((_QWORD *)v88 + 3),
                       v90);
          v88 = (struct COREDEVICEACCESS *)*((_QWORD *)v88 + 8);
          ++v87;
        }
        while ( v87 < a2->NumAllocations );
        LODWORD(v43) = v271;
        v52 = v288;
        v44 = v279;
      }
    }
  }
  if ( v272 )
  {
    if ( v44 )
    {
      if ( (*((_DWORD *)v44 + 1) & 1) != 0 )
      {
        v91 = *((_QWORD *)v44 + 7);
        if ( !*(_DWORD *)(v91 + 24) && (*(_DWORD *)(v91 + 12) & 8) == 0 )
        {
          DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v326);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v326);
          if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5477;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"0 != (pCreateAllocation->Flags.CreateShared)",
              5477LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (*((_DWORD *)Current + 102) & 0x100) != 0 )
          {
            *(_DWORD *)(*((_QWORD *)v44 + 7) + 24LL) = DXGPROCESS::AllocHandleSafe(
                                                         *((_QWORD *)Current + 74),
                                                         *((_QWORD *)v44 + 7),
                                                         2u);
            *(_DWORD *)(*((_QWORD *)v44 + 7) + 12LL) |= 0x2000u;
          }
          else
          {
            Global = DXGGLOBAL::GetGlobal();
            *(_DWORD *)(*((_QWORD *)v44 + 7) + 24LL) = DXGGLOBAL::AllocHandle((__int64)Global, *((_QWORD *)v44 + 7), 2u);
          }
          if ( !*(_DWORD *)(*((_QWORD *)v44 + 7) + 24LL) )
          {
            WdLogSingleEntry2(3LL, this, -1073741801LL);
            WdLogGlobalForLineNumber = 5501;
            LODWORD(v43) = -1073741801;
            v271 = -1073741801;
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v326);
            goto LABEL_437;
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v326);
        }
      }
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v328, (struct _KTHREAD **)this + 30);
    v93 = *((_QWORD *)this + 7);
    if ( v93 )
      *(_QWORD *)(v93 + 32) = v44;
    *((_QWORD *)v44 + 5) = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = v44;
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v328);
  }
  v94 = 0;
  if ( v44 )
    v94 = *((_DWORD *)v44 + 4);
  a2->hResource = v94;
  v95 = a2->Flags;
  if ( ((*(_BYTE *)&v95 & 2) != 0 || a4) && (*(_BYTE *)&v95 & 0x40) == 0 )
    v96 = *(_DWORD *)(*((_QWORD *)v44 + 7) + 24LL);
  else
    v96 = 0;
  a2->hGlobalShare = v96;
  if ( a3 )
  {
    v97 = 0LL;
    v267 = 0;
    v98 = (__int64)v52;
    m = v52;
    while ( (unsigned int)v97 < a2->NumAllocations )
    {
      v99 = (char *)a2->pAllocationInfo + 96 * v97;
      if ( (unsigned __int64)v99 >= MmUserProbeAddress )
        v99 = (char *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v99, (const void *)(v98 + 16), 4uLL);
      v97 = (unsigned int)++v267;
      v98 = m[8];
      m = (_QWORD *)v98;
    }
    if ( (v43 & 0x80000000) != 0LL )
      goto LABEL_437;
  }
  else
  {
    v98 = 0LL;
    v80 = (struct DXGALLOCATION *)v52;
    m = v52;
    if ( a2->NumAllocations )
    {
      do
      {
        *(&a2->pAllocationInfo->hAllocation + 24 * (unsigned int)v98) = *((_DWORD *)v80 + 4);
        v98 = (unsigned int)(v98 + 1);
        v80 = (struct DXGALLOCATION *)*((_QWORD *)v80 + 8);
      }
      while ( (unsigned int)v98 < a2->NumAllocations );
      m = v80;
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 5) + 408LL) & 0x100) == 0 || *((_DWORD *)this + 472) )
  {
    v268 = 0;
    v43 = (unsigned __int64)v52;
    for ( m = v52; v268 < a2->NumAllocations; m = (_QWORD *)v43 )
    {
      v100 = *(_DWORD *)(*(_QWORD *)(v43 + 48) + 4LL);
      if ( (v100 & 1) != 0 )
      {
        LODWORD(v43) = DXGDEVICE::AddPrimaryAllocation(this, (const struct DXGALLOCATION *)v43);
        v271 = v43;
        if ( (v43 & 0x80000000) != 0LL )
          goto LABEL_437;
        v43 = (unsigned __int64)m;
      }
      else if ( (v100 & 2) != 0 )
      {
        DXGDEVICE::SetDisplayedPrimary(this, (v100 >> 6) & 0xF, (const struct DXGALLOCATION *)v43, 0, 1u);
      }
      ++v268;
      v43 = *(_QWORD *)(v43 + 64);
    }
  }
  if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
  {
    if ( !a2->pPrivateRuntimeData )
      goto LABEL_259;
    v101 = *((_QWORD *)v44 + 7);
    if ( *(_QWORD *)(v101 + 104) )
    {
      v105 = *(_DWORD *)(v101 + 112);
      v103 = v303;
      PrivateRuntimeDataSize = v303->PrivateRuntimeDataSize;
      if ( v105 != PrivateRuntimeDataSize )
      {
        LODWORD(v43) = -1073741811;
        v271 = -1073741811;
        WdLogSingleEntry3(3LL, this, PrivateRuntimeDataSize, v105);
        WdLogGlobalForLineNumber = 5663;
        goto LABEL_437;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v44 + 7) + 104LL) = operator new[](
                                                    v303->PrivateRuntimeDataSize,
                                                    0x4B677844u,
                                                    258LL,
                                                    (__int64)v80);
      v102 = *((_QWORD *)v44 + 7);
      v103 = v303;
      v104 = v303->PrivateRuntimeDataSize;
      if ( !*(_QWORD *)(v102 + 104) )
      {
        LODWORD(v43) = -1073741801;
        v271 = -1073741801;
        WdLogSingleEntry3(3LL, this, v104, -1073741801LL);
        WdLogGlobalForLineNumber = 5650;
        goto LABEL_437;
      }
      *(_DWORD *)(v102 + 112) = v104;
    }
    v107 = a3;
    if ( a3 )
    {
      v108 = v103->PrivateRuntimeDataSize;
      pPrivateRuntimeData = (char *)a2->pPrivateRuntimeData;
      v110 = *(void **)(*((_QWORD *)v44 + 7) + 104LL);
      if ( &pPrivateRuntimeData[v108] < pPrivateRuntimeData
        || (unsigned __int64)&pPrivateRuntimeData[v108] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v110, pPrivateRuntimeData, v108);
    }
    else
    {
      memmove(*(void **)(*((_QWORD *)v44 + 7) + 104LL), a2->pPrivateRuntimeData, v103->PrivateRuntimeDataSize);
    }
    if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
    {
      LODWORD(v43) = CheckNoKmdAccessPrivateData(
                       a2->PrivateRuntimeDataSize,
                       *(_DWORD **)(*((_QWORD *)v44 + 7) + 104LL),
                       0xFF000004);
      v271 = v43;
      if ( (v43 & 0x80000000) != 0LL )
        goto LABEL_437;
LABEL_259:
      v107 = a3;
    }
    if ( a2->pStandardAllocation )
    {
      v111 = a2->PrivateDriverDataSize;
      if ( (_DWORD)v111 )
      {
        v112 = *((_QWORD *)v44 + 7);
        if ( *(_QWORD *)(v112 + 120) )
        {
          v123 = *(_DWORD *)(v112 + 128);
          if ( v123 != (_DWORD)v111 )
          {
            LODWORD(v43) = -1073741811;
            v271 = -1073741811;
            WdLogSingleEntry3(3LL, this, v111, v123);
            WdLogGlobalForLineNumber = 5729;
            goto LABEL_437;
          }
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)v44 + 7) + 120LL) = operator new[](
                                                        (unsigned int)v111,
                                                        0x4B677844u,
                                                        258LL,
                                                        (__int64)v80);
          v113 = *((_QWORD *)v44 + 7);
          v114 = a2->PrivateDriverDataSize;
          if ( !*(_QWORD *)(v113 + 120) )
          {
            LODWORD(v43) = -1073741801;
            v271 = -1073741801;
            WdLogSingleEntry3(3LL, this, v114, -1073741801LL);
            WdLogGlobalForLineNumber = 5716;
            goto LABEL_437;
          }
          *(_DWORD *)(v113 + 128) = v114;
        }
        v115 = v300;
        if ( !v107 )
          v115 = a2->pStandardAllocation;
        memmove(*(void **)(*((_QWORD *)v44 + 7) + 120LL), v115, a2->PrivateDriverDataSize);
        if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
        {
          LODWORD(v43) = CheckNoKmdAccessPrivateData(
                           a2->PrivateDriverDataSize,
                           *(_DWORD **)(*((_QWORD *)v44 + 7) + 120LL),
                           0xFF000001);
          v271 = v43;
          if ( (v43 & 0x80000000) != 0LL )
            goto LABEL_437;
        }
      }
    }
    v116 = 0LL;
    v269 = 0;
    v117 = v52;
    for ( m = v52; (unsigned int)v116 < a2->NumAllocations; m = v117 )
    {
      p_hSection = v116;
      v118 = &v41[(_QWORD)v116];
      p_hAllocation = &v118->hAllocation;
      if ( v118->pPrivateDriverData )
      {
        v119 = operator new[](v118->PrivateDriverDataSize, 0x4B677844u, 258LL, (__int64)v80);
        v120 = m;
        *(_QWORD *)(m[6] + 32LL) = v119;
        v121 = *(void **)(v120[6] + 32LL);
        if ( !v121 )
        {
          LODWORD(v43) = -1073741801;
          v271 = -1073741801;
          WdLogSingleEntry4(3LL, this, (unsigned int)(v269 + 1), p_hAllocation[6], -1073741801LL);
          WdLogGlobalForLineNumber = 5773;
          goto LABEL_437;
        }
        if ( !a3 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
          v122 = v118->pPrivateDriverData;
        else
          v122 = v285[(_QWORD)p_hSection];
        memmove(v121, v122, v118->PrivateDriverDataSize);
        *(_DWORD *)(m[6] + 40LL) = v118->PrivateDriverDataSize;
        v117 = m;
      }
      v116 = (struct COREDEVICEACCESS *)(unsigned int)(v269 + 1);
      v269 = (int)v116;
      v117 = (_QWORD *)v117[8];
    }
  }
  v124 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v291 = (_QWORD *)v124;
  p_hAllocation = (unsigned int *)v124;
  if ( !*(_BYTE *)(v124 + 209) )
    goto LABEL_410;
  if ( a4 )
    goto LABEL_394;
  HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
  if ( !HostProcess )
  {
    WdLogSingleEntry1(2LL, -1073741823LL);
    WdLogGlobalForLineNumber = 5808;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get host adapter process, returning 0x%I64x",
      -1073741823LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v43) = -1073741823;
    v271 = -1073741823;
    goto LABEL_437;
  }
  v306 = 0LL;
  v126 = (*((_BYTE *)this + 1903)
       || *((_DWORD *)this + 116) == 2 && *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3004LL) >= 2000)
      && v292
      && (unsigned int)(*((_DWORD *)v292 + 4) - 1) <= 2;
  v127 = a2->Flags;
  if ( (*(_BYTE *)&v127 & 2) != 0 )
    v128 = *(void **)(*((_QWORD *)v44 + 7) + 104LL);
  else
    v128 = 0LL;
  v129 = v300;
  if ( !a3 )
  {
    v129 = a2->pStandardAllocation;
    goto LABEL_299;
  }
  v130 = v285;
  if ( (*(_DWORD *)&v127 & 0x10000) != 0 )
LABEL_299:
    v130 = v286;
  if ( (*(_BYTE *)&v127 & 2) != 0 )
    v131 = *((_DWORD *)v44 + 5);
  else
    v131 = 0;
  v132 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
           (DXG_GUEST_VIRTUALGPU_VMBUS *)(v291 + 583),
           HostProcess,
           *((_DWORD *)this + 118),
           v131,
           a2,
           v41,
           v130,
           v129,
           v128,
           a3,
           v126,
           &v306);
  v43 = v132;
  LODWORD(Size) = v132;
  if ( !v306 )
  {
    WdLogSingleEntry1(2LL, v132);
    WdLogGlobalForLineNumber = 5838;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"VmBusSendCreateAllocation failed: 0x%I64x",
      v43,
      0LL,
      0LL,
      0LL,
      0LL);
    v271 = v43;
    goto LABEL_437;
  }
  v133 = v306;
  v293 = (struct _DXGSHAREDALLOCOBJECT *)v306;
  if ( v44 )
  {
    *((_DWORD *)v44 + 5) = *((_DWORD *)v306 + 1);
    v134 = a2->Flags;
    if ( (*(_BYTE *)&v134 & 2) != 0 )
    {
      v135 = v133[2];
      if ( (*(_BYTE *)&v134 & 0x40) != 0 )
      {
        if ( v135 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5853;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"NULL == pOutput->hGlobalSharedResource",
            5853LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_312;
        }
      }
      else if ( !v135 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5857;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pOutput->hGlobalSharedResource",
          5857LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_312:
        v133 = v293;
      }
      *(_DWORD *)(*((_QWORD *)v44 + 7) + 28LL) = v133[2];
    }
  }
  v290 = 0LL;
  v311 = 0LL;
  if ( (*(_DWORD *)&a2->Flags & 2) != 0 && v44 )
  {
    v290 = *(unsigned __int64 **)(*((_QWORD *)v44 + 7) + 136LL);
    v311 = v290;
  }
  v136 = (__int64)v52;
  v289 = (__int64)v52;
  v137 = 0;
  v274 = 0;
  if ( a2->NumAllocations )
  {
    do
    {
      v138 = v133[3];
      *(_DWORD *)(v136 + 128) = v138;
      v139 = v137;
      v140 = &v133[18 * v137];
      *(_DWORD *)(v136 + 20) = v140[4];
      *(_BYTE *)(v136 + 128) = v138 | 4;
      v141 = a2->Flags;
      if ( (*(_BYTE *)&v141 & 2) != 0 && (*(_DWORD *)&v141 & 0x20020) != 0 )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v136 + 40) + 56LL) + 200LL) = v140[7];
      else
        *(_DWORD *)(v136 + 124) = v140[7];
      if ( v133[3] & 1 | ((v133[3] & 2) != 0) )
      {
        *(_QWORD *)(v136 + 104) = v41[v139].hSection;
        *(_BYTE *)(v136 + 128) ^= (*(_BYTE *)(v136 + 128) ^ (8 * (v140[6] >> 21))) & 8;
      }
      *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL) ^= (v140[6] ^ *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL)) & 1;
      *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL) ^= (v140[6] ^ *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL)) & 2;
      *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL) ^= (v140[6] ^ *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL)) & 4;
      *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL) ^= (v140[6] ^ *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL)) & 8;
      *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL) ^= (v140[6] ^ *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL)) & 0x20;
      *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL) ^= (v140[6] ^ *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL)) & 0x800;
      *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL) ^= (v140[6] ^ *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL)) & 0x1000;
      *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL) ^= (v140[6] ^ *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL)) & 0x2000;
      *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL) ^= (v140[6] ^ *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL)) & 0x4000;
      *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL) ^= (v140[6] ^ *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL)) & 0x40000;
      *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL) ^= (v140[6] ^ *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL)) & 0x80000;
      *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL) ^= (v140[6] ^ *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL)) & 0x100000;
      *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL) |= 0x20000u;
      if ( (v41[v139].Flags.Value & 1) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL) ^= ((unsigned __int16)*(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL) ^ (unsigned __int16)((unsigned __int16)v41[v139].VidPnSourceId << 6)) & 0x3C0;
        if ( *((_QWORD *)this + 235) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
          *(_DWORD *)(*(_QWORD *)(v136 + 48) + 4LL) |= 4u;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
      {
        v142 = (*(_DWORD *)(v136 + 72) >> 12) & 0x3F;
        v143 = *(_QWORD *)(v136 + 48);
        v144 = *(_DWORD *)(v136 + 120);
        v145 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        CurrentProcessId = PsGetCurrentProcessId();
        McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
          v147,
          &EventCreateAdapterAllocation,
          v148,
          (__int64)CurrentProcessId,
          (char)this,
          v145,
          0,
          v144,
          Src,
          v244,
          v245,
          v246,
          v247,
          v248,
          v249,
          v250,
          v143,
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
          v142,
          0);
        v136 = v289;
        v41 = (struct _D3DDDI_ALLOCATIONINFO2 *)v283;
      }
      v137 = v274 + 1;
      v274 = v137;
      v136 = *(_QWORD *)(v136 + 64);
      v289 = v136;
      v133 = v293;
    }
    while ( v137 < a2->NumAllocations );
    v52 = v288;
    v44 = v279;
    LODWORD(v43) = Size;
  }
  if ( (v43 & 0x80000000) != 0LL )
  {
    v271 = v43;
    goto LABEL_437;
  }
  v149 = v52;
  p_VidPnSourceId = v52;
  v150 = 0;
  while ( 2 )
  {
    v274 = v150;
    if ( v150 >= a2->NumAllocations )
    {
      LODWORD(v43) = v271;
      goto LABEL_391;
    }
    v151 = v150;
    v289 = v150;
    v152 = v133[18 * v150 + 8];
    v153 = a2->Flags;
    if ( (*(_DWORD *)&v153 & 0x10000) != 0 )
    {
      if ( (*(_BYTE *)&v153 & 0x20) != 0 )
      {
        v154 = (struct COREDEVICEACCESS *)v41[v150].hSection;
        p_hSection = v154;
        if ( (*((_BYTE *)this + 1901) & 1) == 0 )
        {
          LODWORD(v43) = ProcessSysMemAttributes(v154, v152, &v287[v150]);
          v271 = v43;
          if ( (v43 & 0x80000000) != 0LL )
            goto LABEL_392;
          v150 = v274;
          v151 = v289;
          v154 = p_hSection;
        }
        if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
        {
          v155 = *(_QWORD *)(v149[5] + 56LL);
          v156 = *(_DWORD *)(v155 + 12) | 0x200;
          *(_DWORD *)(v155 + 12) = v156;
          *(_QWORD *)(v155 + 192) = v154;
          v157 = &v287[v151];
          *(_DWORD *)(v155 + 204) = v157->Alignment;
          *(_DWORD *)(v155 + 12) = v156 ^ ((unsigned __int16)v156 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v157->Flags.0 << 9)) & 0x800;
        }
      }
      else if ( (*(_DWORD *)&v153 & 0x20000) != 0 )
      {
        p_hSection = (struct COREDEVICEACCESS *)&v41[v150].hSection;
        v158 = *(void **)p_hSection;
        v313 = 0LL;
        v159 = ObReferenceObjectByHandle(v158, 0x20000u, MmSectionObjectType, a3, &v313, 0LL);
        v288 = v313;
        LODWORD(v43) = v159;
        v271 = v159;
        if ( v159 < 0 )
        {
          v160 = v159;
          v161 = (__int64 *)p_hSection;
          WdLogSingleEntry2(2LL, *(_QWORD *)p_hSection, v159);
          WdLogGlobalForLineNumber = 6022;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x",
            *v161,
            v160,
            0LL,
            0LL,
            0LL);
          v44 = v279;
          goto LABEL_437;
        }
        p_hSection = (struct COREDEVICEACCESS *)&v287[v289];
        v162 = ProcessSectionAttributes(v313, (struct _DXGK_ALLOCATIONINFO *)p_hSection);
        v43 = v162;
        v271 = v162;
        if ( v162 < 0 )
        {
          WdLogSingleEntry2(2LL, this, v162);
          WdLogGlobalForLineNumber = 6032;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to query section attributes. Device=0x%I64x, Status=%I64X",
            (__int64)this,
            v43,
            0LL,
            0LL,
            0LL);
          ObfDereferenceObject(v288);
          v44 = v279;
          goto LABEL_437;
        }
        v163 = *(_QWORD *)(v149[5] + 56LL);
        v164 = *(_DWORD *)(v163 + 12) | 0x400;
        *(_DWORD *)(v163 + 12) = v164;
        *(_QWORD *)(v163 + 192) = v288;
        v165 = p_hSection;
        *(_DWORD *)(v163 + 204) = *((_DWORD *)p_hSection + 3);
        *(_DWORD *)(v163 + 12) = v164 ^ ((unsigned __int16)v164 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v165 + 16) << 9)) & 0x800;
        v150 = v274;
      }
      else if ( (*(_BYTE *)&v153 & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v149[5] + 56LL) + 12LL) ^= ((unsigned __int16)*(_DWORD *)(*(_QWORD *)(v149[5] + 56LL)
                                                                                        + 12LL) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v287[v150].Flags.0 << 9)) & 0x800;
      }
    }
    if ( (v41[v150].Flags.Value & 1) == 0 )
    {
LABEL_377:
      *(_QWORD *)(v149[6] + 16LL) = v149[6];
      v170 = v149[6];
      v171 = v293;
      *((_DWORD *)v149 + 30) = *((_DWORD *)v293 + 18 * v150 + 8);
      *(_QWORD *)(v170 + 112) = *((unsigned int *)v171 + 18 * v150 + 8);
      *(_OWORD *)(v170 + 64) = *(_OWORD *)((char *)v171 + 72 * v150 + 40);
      *(_OWORD *)(v170 + 80) = *(_OWORD *)((char *)v171 + 72 * v150 + 56);
      *(_OWORD *)(v170 + 96) = *(_OWORD *)((char *)v171 + 72 * v150 + 72);
      v172 = v41[v150].PrivateDriverDataSize;
      LODWORD(Size) = v41[v150].PrivateDriverDataSize;
      if ( !a3 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
      {
        v289 = 8LL * v150;
        v173 = v172;
        v174 = *(void **)((char *)v286 + v289);
        v175 = (char *)v41[v150].pPrivateDriverData;
      }
      else
      {
        v173 = (unsigned int)v172;
        v289 = 8LL * v150;
        v174 = *(void **)((char *)v285 + v289);
        v175 = (char *)v41[v150].pPrivateDriverData;
        if ( (unsigned __int64)&v175[v173] > MmUserProbeAddress || &v175[v173] <= v175 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v175, v174, v173);
      if ( v290 )
      {
        if ( !a3 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
          v176 = *(void **)((char *)v286 + v289);
        else
          v176 = v285[v150];
        memmove((void *)*(v290 - 2), v176, (unsigned int)Size);
        v290 = (unsigned __int64 *)*v290;
        v311 = v290;
      }
      v133 = v293;
      ++v150;
      v149 = (_QWORD *)v149[8];
      p_VidPnSourceId = v149;
      continue;
    }
    break;
  }
  if ( v149 )
    DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v149);
  v323 = v149;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 332) )
  {
    v308 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v308) >= 0 )
    {
      DxgThread = v308;
      if ( v308 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v308 = DxgThread) != 0LL) )
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
               (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4664LL),
               *((_DWORD *)Current + 122),
               *((_DWORD *)this + 118),
               0,
               (struct D3DDDI_MAKERESIDENT_FLAGS)3,
               1u,
               (const struct DXGALLOCATIONREFERENCE *)&v323,
               0LL,
               0LL);
  v43 = Resident;
  v271 = Resident;
  if ( Resident >= 0 )
  {
    if ( v149 )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)v149 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 332) )
    {
      v310 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v310) >= 0 )
      {
        v169 = v310;
        if ( v310 || (v169 = DxgkThreadObjectCreateDxgThread(1), (v310 = v169) != 0LL) )
        {
          if ( *((_DWORD *)v169 + 12) )
          {
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v169 + 12), 0LL, 0LL);
            WdLogGlobalForLineNumber = 73;
          }
        }
      }
    }
    v150 = v274;
    goto LABEL_377;
  }
  WdLogSingleEntry1(2LL, Resident);
  WdLogGlobalForLineNumber = 6075;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"VmBusSendMakeResident failed: 0x%I64x",
    v43,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( v149 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v149 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 332) )
  {
    v309 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v309) >= 0 )
    {
      v168 = v309;
      if ( v309 || (v168 = DxgkThreadObjectCreateDxgThread(1), (v309 = v168) != 0LL) )
      {
        if ( *((_DWORD *)v168 + 12) )
        {
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v168 + 12), 0LL, 0LL);
          WdLogGlobalForLineNumber = 73;
        }
      }
    }
  }
LABEL_391:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v306);
  if ( (v43 & 0x80000000) != 0LL )
  {
LABEL_392:
    v44 = v279;
    goto LABEL_437;
  }
  v44 = v279;
  v124 = (__int64)v291;
LABEL_394:
  if ( *(_BYTE *)(v124 + 209) )
  {
    if ( !a4 )
    {
      if ( bTracingEnabled )
      {
        v177 = (__int64)v52;
        v291 = v52;
        v178 = 0;
        for ( LODWORD(Size) = 0; v178 < a2->NumAllocations; v291 = (_QWORD *)v177 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
          {
            v274 = *(_DWORD *)(v177 + 20);
            v179 = *(_QWORD *)(v177 + 40);
            if ( v179 )
              p_VidPnSourceId = *(_QWORD **)(v179 + 48);
            else
              p_VidPnSourceId = 0LL;
            if ( v179 )
              v289 = *(unsigned int *)(v179 + 16);
            else
              v289 = 0LL;
            p_hSection = (struct COREDEVICEACCESS *)*(unsigned int *)(v177 + 16);
            if ( v179 )
              v290 = *(unsigned __int64 **)(v179 + 56);
            else
              v290 = 0LL;
            v180 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            v181 = PsGetCurrentProcessId();
            McTemplateK0ppppppppppppq_EtwWriteTransfer(
              (__int64)v291,
              &EventCreateDeviceAllocation,
              v182,
              v181,
              this,
              v180,
              v291);
            v177 = (__int64)v291;
            v178 = Size;
          }
          LODWORD(Size) = ++v178;
          v177 = *(_QWORD *)(v177 + 64);
        }
      }
    }
  }
LABEL_410:
  v183 = a2->Flags;
  if ( (*(_WORD *)&v183 & 0x800) == 0 )
  {
    if ( (*(_WORD *)&v183 & 0x1000) != 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                     + 712LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
        v52[3],
        *((_QWORD *)v292 + 43));
    goto LABEL_430;
  }
  memset(&v327.Width, 0, 40);
  v327.hAllocation = *(HANDLE *)(v52[6] + 16LL);
  v184 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)this + 2), &v327, v98);
  LODWORD(v43) = v184;
  v271 = v184;
  if ( v184 < 0 )
  {
    WdLogSingleEntry4(3LL, v184, this, *((unsigned int *)v52 + 4), v52);
    WdLogGlobalForLineNumber = 6180;
    goto LABEL_437;
  }
  if ( v327.Format == D3DDDIFMT_UNKNOWN && v327.Height != 1 )
  {
    WdLogSingleEntry3(3LL, -1073741811LL, this, v327.Height);
    WdLogGlobalForLineNumber = 6188;
    LODWORD(v43) = -1073741811;
    v271 = -1073741811;
    goto LABEL_437;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v52[5] + 56LL) + 12LL) & 0x20) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6195;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pAllocationObjectList->m_pOwningResource->m_pSharedResource->m_CrossAdapter",
      6195LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v43 = *(_QWORD *)(v52[5] + 56LL);
  p_hSection = (struct COREDEVICEACCESS *)v43;
  *(_DWORD *)(v43 + 208) = v327.Width;
  *(_DWORD *)(v43 + 212) = v327.Height;
  *(_DWORD *)(v43 + 216) = v327.Format;
  v185 = v303->Flags;
  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
  {
    if ( (*(_DWORD *)&v185 & 0x20000) == 0 )
      goto LABEL_426;
    v186 = (void *)*((_QWORD *)v283 + 1);
    v314 = 0LL;
    v187 = ObReferenceObjectByHandle(v186, 0x20000u, MmSectionObjectType, a3, &v314, 0LL);
    *(_QWORD *)(v43 + 192) = v314;
    LODWORD(v43) = v187;
    v271 = v187;
    if ( v187 >= 0 )
    {
      v43 = (unsigned __int64)p_hSection;
      *((_DWORD *)p_hSection + 3) |= 0x400u;
      goto LABEL_426;
    }
    v188 = v187;
    WdLogSingleEntry2(2LL, *((_QWORD *)v283 + 1), v187);
    WdLogGlobalForLineNumber = 6232;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x",
      *((_QWORD *)v283 + 1),
      v188,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    if ( (*(_BYTE *)&v185 & 0x20) == 0 )
    {
      *(_QWORD *)(v43 + 192) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                             + 8LL)
                                                                 + 632LL))(v52[3]);
      *(_DWORD *)(v43 + 12) |= 0x400u;
    }
    *(_QWORD *)(v43 + 224) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 760LL)
                                                                                   + 8LL)
                                                                       + 704LL))(
                               *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                               v52[3]);
LABEL_426:
    v189 = v295;
    *(_DWORD *)(v43 + 232) = v295;
    if ( v189 != -1 )
    {
      v190 = *(_DWORD *)(v43 + 12) | 0x40;
      *(_DWORD *)(v43 + 12) = v190;
      *(_DWORD *)(v43 + 12) = v190 ^ ((unsigned __int8)v190 ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 0x80;
    }
LABEL_430:
    v191 = (struct COREDEVICEACCESS *)*((_QWORD *)this + 2);
    p_hSection = v191;
    v192 = *((_QWORD *)v191 + 2);
    if ( (*(_DWORD *)(v192 + 2468) & 0x40) == 0 )
    {
      v301 = 0;
      v193 = *(const struct SYSMM_ADAPTER **)(v192 + 224);
      SysMmQueryIommuState(v193, (union SYSMM_IOMMU_STATE *)&v301);
      if ( (v301 & 4) == 0 )
      {
        v302 = 0;
        SysMmQueryIommuState(v193, (union SYSMM_IOMMU_STATE *)&v302);
        if ( (v302 & 8) == 0 )
          goto LABEL_436;
      }
    }
    v194 = v292;
    if ( v292
      && (*(_DWORD *)v292 & 0x200) == 0
      && (memset(&v330, 0, 56),
          memset(&v330.DriverProtection, 0, 40),
          v330.Protection.Value = 1LL,
          v270 = 0,
          v195 = v52,
          m = v52,
          a2->NumAllocations) )
    {
      while ( 1 )
      {
        v197 = (*((_DWORD *)v195 + 18) >> 12) & 0x3F;
        if ( *((_DWORD *)v194 + 4) == 4 )
        {
          v198 = *(_DWORD *)(*((_QWORD *)v194 + 3) + 12LL);
          if ( ((v198 - 1) & 0xFFFFFFFC) != 0 || v198 == 2 )
          {
            v199 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            if ( *(_BYTE *)(v199 + 3022) )
            {
              if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v199) + 102) & 0x180) == 0 )
                v197 = -1;
              v195 = m;
            }
          }
        }
        if ( v273 )
        {
          v200 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4664LL),
                   *((_DWORD *)Current + 122),
                   this,
                   0,
                   *((_DWORD *)v195 + 5),
                   &v330);
        }
        else
        {
          LOBYTE(Object) = 0;
          v200 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(*((_QWORD *)v191 + 95) + 8LL) + 744LL))(
                   *((_QWORD *)v191 + 96),
                   0LL,
                   v195[3],
                   &v330,
                   Object,
                   v197);
        }
        LODWORD(v43) = v200;
        v271 = v200;
        if ( v200 < 0 )
          break;
        v201 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        if ( *(_BYTE *)(v201 + 3022) )
        {
          v202 = (*((_DWORD *)DXGPROCESS::GetCurrent(v201) + 102) & 0x180) == 0;
          BaseAddress = v330.BaseAddress;
          if ( v202 )
            BaseAddress = v330.VirtualAddress;
          v330.BaseAddress = BaseAddress;
        }
        v330.VirtualAddress = 0LL;
        ++v270;
        v195 = (_QWORD *)m[8];
        m = v195;
        v194 = v292;
        if ( v270 >= a2->NumAllocations )
          goto LABEL_437;
        v191 = p_hSection;
      }
      WdLogSingleEntry1(3LL, v200);
      WdLogGlobalForLineNumber = 6333;
    }
    else
    {
LABEL_436:
      LODWORD(v43) = v271;
    }
  }
LABEL_437:
  if ( v317 )
  {
    v317 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v316);
  }
  if ( v320 == 1 )
  {
    v320 = 0;
    v196 = v319;
    _InterlockedDecrement((volatile signed __int32 *)(v319 + 16));
    ExReleasePushLockSharedEx(v196, 0LL);
    KeLeaveCriticalRegion();
    v52 = v277;
  }
  else if ( v320 == 2 )
  {
    v320 = 0;
    v204 = v319;
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v204 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v204, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (v43 & 0x80000000) != 0LL )
  {
    if ( v52 )
    {
      v217 = 0;
      LODWORD(Size) = 0;
      v218 = v52;
      m = v52;
      if ( a2->NumAllocations )
      {
        do
        {
          v219 = v218[6];
          if ( *(_QWORD *)(v219 + 8) && !a4 )
          {
            if ( (v220 = *(_DWORD *)(v219 + 4), (v220 & 1) != 0) && !*((_DWORD *)this + 116) || (v220 & 2) != 0 )
            {
              if ( (v220 & 0x10) != 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 6399;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"!pAllocation->m_pAllocation->m_Invalidated",
                  6399LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                     + 168LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                *(_QWORD *)(v218[6] + 8LL));
              *(_DWORD *)(v218[6] + 4LL) |= 0x10u;
              v217 = Size;
            }
          }
          LODWORD(Size) = ++v217;
          v218 = (_QWORD *)v218[8];
          m = v218;
        }
        while ( v217 < a2->NumAllocations );
        LODWORD(v43) = v271;
        v44 = v279;
      }
    }
    if ( v272 )
    {
      if ( v296 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v296 + 9);
      v296 = 0LL;
      v307 = 0LL;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v307);
      DXGDEVICE::RemoveResourceFromDeviceList(this, v44);
      DXGDEVICE::DestroyResource(
        (ADAPTER_RENDER **)this,
        (struct DXGALLOCATION **)v44,
        0LL,
        (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
    }
    else if ( v52 )
    {
      if ( v275 )
        DXGDEVICE::RemoveAllocationsWithoutDestroy(
          (struct _KTHREAD **)this,
          v44,
          (struct DXGALLOCATION *)v52,
          a2->NumAllocations);
      if ( !v44 || *((_QWORD *)v44 + 7) )
      {
        do
        {
          v221 = (struct DXGALLOCATION *)v52;
          p_VidPnSourceId = v52;
          v222 = v52 + 8;
          v52 = (_QWORD *)v52[8];
          m = v52;
          p_VidPnSourceId[7] = 0LL;
          *v222 = 0LL;
          if ( v44 )
          {
            v223 = *((_QWORD *)v44 + 7);
            if ( v223 )
            {
              if ( *(_QWORD *)(*((_QWORD *)v221 + 6) + 48LL) )
              {
                KeEnterCriticalRegion();
                if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v223 + 32, 0LL) )
                {
                  if ( bTracingEnabled )
                  {
                    v226 = *(_DWORD *)(v223 + 56);
                    if ( v226 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                      McTemplateK0q_EtwWriteTransfer(v224, (__int64)&EventBlockThread, v225, v226);
                  }
                  ExAcquirePushLockExclusiveEx(v223 + 32, 0LL);
                }
                Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
                *(_QWORD *)(v223 + 40) = KeGetCurrentThread();
                --*(_DWORD *)(*((_QWORD *)v44 + 7) + 132LL);
                v227 = p_VidPnSourceId;
                v228 = p_VidPnSourceId[6] + 48LL;
                v229 = *(_QWORD *)v228;
                v230 = *(_QWORD **)(p_VidPnSourceId[6] + 56LL);
                if ( *(_QWORD *)(*(_QWORD *)v228 + 8LL) != v228 || *v230 != v228 )
                  __fastfail(3u);
                *v230 = v229;
                *(_QWORD *)(v229 + 8) = v230;
                *(_QWORD *)(v227[6] + 48LL) = 0LL;
                v231 = *((_QWORD *)v44 + 7);
                Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
                *(_QWORD *)(v231 + 40) = 0LL;
                ExReleasePushLockExclusiveEx(v231 + 32, 0LL);
                KeLeaveCriticalRegion();
                v52 = m;
                v221 = (struct DXGALLOCATION *)p_VidPnSourceId;
              }
            }
          }
          DXGDEVICE::DestroyAllocations(this, 0LL, 0, v221, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
        }
        while ( v52 );
        v52 = v277;
      }
      if ( v44 )
      {
        v232 = *((_QWORD *)v44 + 7);
        if ( v232 )
        {
          v233 = 0;
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v232 + 32));
          v234 = *((_DWORD *)v44 + 1);
          if ( (v234 & 0x10) == 0 )
          {
            *((_DWORD *)v44 + 1) = v234 | 0x10;
            v233 = 1;
          }
          v235 = *((_QWORD *)v44 + 7);
          Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
          *(_QWORD *)(v235 + 40) = 0LL;
          ExReleasePushLockExclusiveEx(v235 + 32, 0LL);
          KeLeaveCriticalRegion();
          if ( v233 )
          {
            DXGDEVICE::RemoveResourceFromDeviceList(this, v44);
            v236 = Current;
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v329, Current);
            DXGPROCESS::GetResourceUnsafe((__int64)v236, (DXGRESOURCEREFERENCE *)&v307, *((_DWORD *)v44 + 4));
            if ( v307 )
            {
              Count = v307[2].Count;
              v238 = (Count >> 6) & 0xFFFFFF;
              if ( (unsigned int)v238 < *((_DWORD *)v236 + 74) )
              {
                v239 = *((_QWORD *)v236 + 35);
                v240 = *(_DWORD *)(v239 + 16 * v238 + 8);
                if ( ((Count >> 25) & 0x60) == (*(_BYTE *)(v239 + 16 * v238 + 8) & 0x60)
                  && (v240 & 0x2000) == 0
                  && (v240 & 0x1F) != 0 )
                {
                  *(_DWORD *)(v239 + 16LL * ((Count >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                }
              }
              if ( v296 )
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)v296 + 9);
              v296 = 0LL;
              v324 = 0LL;
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v324);
            }
            else
            {
              v233 = 0;
            }
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v307);
            DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v329);
            if ( v233 )
              DXGDEVICE::DestroyResource(
                (ADAPTER_RENDER **)this,
                (struct DXGALLOCATION **)v44,
                0LL,
                (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
          }
        }
        else
        {
          DXGDEVICE::DestroyAllocations(
            this,
            v44,
            0,
            (struct DXGALLOCATION *)v52,
            0LL,
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
        }
      }
    }
  }
  else
  {
    if ( (unsigned int)Feature_1276945721__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v52 )
      {
        LODWORD(Size) = 0;
        m = v52;
        if ( a2->NumAllocations )
        {
          v205 = 0;
          do
          {
            v206 = (_QWORD *)*((_QWORD *)this + 5);
            p_VidPnSourceId = v206;
            LODWORD(Size) = *((_DWORD *)v52 + 4);
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v206 + 31));
            v207 = Size;
            v208 = ((unsigned int)Size >> 6) & 0xFFFFFF;
            LODWORD(Size) = v208;
            if ( v208 < *((_DWORD *)v206 + 74) )
            {
              v209 = v206[35];
              if ( ((v207 >> 25) & 0x60) == (*(_BYTE *)(v209 + 16LL * v208 + 8) & 0x60)
                && (*(_DWORD *)(v209 + 16LL * v208 + 8) & 0x1F) != 0 )
              {
                v210 = 2LL * ((v207 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v209 + 16LL * ((v207 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 224;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                    224LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v208 = Size;
                }
                *(_DWORD *)(p_VidPnSourceId[35] + 8 * v210 + 8) &= ~0x2000u;
                v206 = p_VidPnSourceId;
              }
              if ( v208 < *((_DWORD *)v206 + 74) )
                *(_DWORD *)(v206[35] + 16LL * v208 + 8) &= ~0x4000u;
            }
            Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
            v206[32] = 0LL;
            ExReleasePushLockExclusiveEx(v206 + 31, 0LL);
            KeLeaveCriticalRegion();
            ++v205;
            v52 = (_QWORD *)v52[8];
            m = v52;
          }
          while ( v205 < a2->NumAllocations );
          LODWORD(v43) = v271;
          v44 = v279;
        }
      }
    }
    if ( v272 )
    {
      v211 = *((_QWORD *)this + 5);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v211 + 248));
      v212 = *((unsigned int *)v44 + 4);
      v213 = (*((_DWORD *)v44 + 4) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v213 < *(_DWORD *)(v211 + 296) )
      {
        v214 = *(_QWORD *)(v211 + 280);
        if ( (((unsigned int)v212 >> 25) & 0x60) == (*(_BYTE *)(v214 + 16 * v213 + 8) & 0x60)
          && (*(_DWORD *)(v214 + 16 * v213 + 8) & 0x1F) != 0 )
        {
          v215 = 2 * ((v212 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v214 + 8 * v215 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 224;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              224LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*(_QWORD *)(v211 + 280) + 8 * v215 + 8) &= ~0x2000u;
        }
      }
      if ( (unsigned int)Feature_1276945721__private_IsEnabledDeviceUsageNoInline() )
      {
        v216 = (*((_DWORD *)v44 + 4) >> 6) & 0xFFFFFF;
        if ( v216 < *(_DWORD *)(v211 + 296) )
          *(_DWORD *)(*(_QWORD *)(v211 + 280) + 16LL * v216 + 8) &= ~0x4000u;
      }
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v211 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v211 + 248, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v241 = v286;
  if ( a2->NumAllocations )
  {
    do
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v241[v20++]);
    while ( v20 < a2->NumAllocations );
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v300);
  if ( a2->NumAllocations > 5 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v283);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v287);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v297);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v241);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v285);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v318);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v316);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v296);
  if ( Entry )
    ExFreeToPagedLookasideList(v325 + 13, Entry);
  return (unsigned int)v43;
}
