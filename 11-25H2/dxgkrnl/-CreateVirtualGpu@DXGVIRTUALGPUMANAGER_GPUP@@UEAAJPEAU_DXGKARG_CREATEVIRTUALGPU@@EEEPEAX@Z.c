/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1402110B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140015280 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?VidMmQuerySegmentStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GIPEAU_D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION@@@Z @ 0x14004E4CC (-VidMmQuerySegmentStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GIPEAU_D3DKMT_QUERYSTATISTICS_.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004F5A4 (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004FA7C (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1401E7260 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z @ 0x140205FE0 (--0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x140207288 (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 *     ?ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ @ 0x140208300 (-ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ.c)
 *     ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x14020B288 (-DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z.c)
 *     ?DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z @ 0x14020E70C (-DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z.c)
 *     ?EnableDirtyBitTrackingForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z @ 0x140212810 (-EnableDirtyBitTrackingForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z.c)
 *     ?InitializeDirtyBitplaneForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z @ 0x14021296C (-InitializeDirtyBitplaneForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z.c)
 *     DpiKsrGetSavedAdapterState @ 0x14024A074 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrIsSoftBoot @ 0x14024A150 (DpiKsrIsSoftBoot.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403600FC (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        void *a6)
{
  DXGVIRTUALGPUMANAGER_GPUP *v7; // r12
  struct DXGADAPTER *v8; // r13
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // esi
  struct DXGDEVICE *v13; // rsi
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // r8
  _DWORD *v19; // rsi
  ULONG PartitionId; // eax
  ULONG v21; // ecx
  __int64 StandardAllocation; // rdi
  char v23; // bl
  DXGK_VIRTUAL_GPU *v24; // r15
  ULONG v25; // edx
  __int64 v26; // r9
  __int64 v27; // rsi
  DXGK_VIRTUAL_GPU *v28; // rax
  __int64 v29; // r9
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rcx
  int VirtualGpu; // eax
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 NumMemorySegments; // rax
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  bool v43; // cf
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  int SavedAdapterState; // eax
  _DWORD *v49; // rcx
  unsigned int v50; // edx
  unsigned int v51; // ebx
  __int64 v52; // rdi
  __int64 v53; // rdi
  unsigned int v54; // ebx
  unsigned int v55; // eax
  __int64 v56; // rdi
  int v57; // ecx
  __int64 v58; // rdi
  ULONG v59; // r9d
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rbx
  int v63; // eax
  unsigned __int64 v64; // rsi
  __int64 v65; // r8
  int v66; // ebx
  __int64 v67; // rsi
  __int64 v68; // r8
  __int64 v69; // rdx
  ULONG v70; // ecx
  int SegmentStatistics; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  __int64 v75; // r12
  __int64 *p_MemorySegmentOffset; // rbx
  NTSTATUS v77; // eax
  PVOID v78; // rbx
  PVOID v79; // rcx
  __int64 Object; // [rsp+20h] [rbp-E0h]
  __int64 Objecta; // [rsp+20h] [rbp-E0h]
  __int64 HandleInformation; // [rsp+28h] [rbp-D8h]
  unsigned int v83; // [rsp+50h] [rbp-B0h]
  unsigned int v84; // [rsp+50h] [rbp-B0h]
  unsigned int v85; // [rsp+54h] [rbp-ACh] BYREF
  DXGDEVICE *VirtualGpuDevice; // [rsp+58h] [rbp-A8h]
  unsigned int v87; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGADAPTER *v88; // [rsp+68h] [rbp-98h]
  void *v89; // [rsp+70h] [rbp-90h]
  PVOID Current; // [rsp+78h] [rbp-88h] BYREF
  int v91; // [rsp+80h] [rbp-80h] BYREF
  __int64 v92; // [rsp+88h] [rbp-78h]
  unsigned __int64 v93; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v94; // [rsp+98h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-60h]
  _BYTE v96[16]; // [rsp+A8h] [rbp-58h] BYREF
  union _LARGE_INTEGER v97; // [rsp+B8h] [rbp-48h] BYREF
  DXGVIRTUALGPUMANAGER_GPUP *v98; // [rsp+C0h] [rbp-40h]
  _BYTE v99[24]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v100[24]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v101[24]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v102[54]; // [rsp+110h] [rbp+10h] BYREF
  UINT64 Size; // [rsp+2C0h] [rbp+1C0h] BYREF
  UINT Alignment; // [rsp+2C8h] [rbp+1C8h]
  ULONG DriverSegmentId; // [rsp+2CCh] [rbp+1CCh]
  UINT PrivateDriverData; // [rsp+2D0h] [rbp+1D0h]
  int v107; // [rsp+2D4h] [rbp+1D4h]
  struct _KAPC_STATE ApcState; // [rsp+2D8h] [rbp+1D8h] BYREF
  _BYTE v109[160]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v110[144]; // [rsp+3B0h] [rbp+2B0h] BYREF
  _DWORD v111[40]; // [rsp+440h] [rbp+340h] BYREF
  _DXGKARG_SETVIRTUALGPURESOURCES v112; // [rsp+4E0h] [rbp+3E0h] BYREF
  _BYTE v113[992]; // [rsp+508h] [rbp+408h] BYREF

  Handle = a6;
  v89 = 0LL;
  v7 = this;
  v98 = this;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1338;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pProcess != nullptr", 1338LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_DWORD *)Current + 102) |= 0x40u;
  v88 = *(struct DXGADAPTER **)(*((_QWORD *)v7 + 4) + 16LL);
  v8 = v88;
  v9 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 167);
  v92 = v9;
  memset(&ApcState, 0, sizeof(ApcState));
  v10 = v9 + 216;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 216, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v9 + 224) = KeGetCurrentThread();
  v11 = *((_QWORD *)v7 + 4) + 24LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v11, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v100, v8, 1);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v110, v8, 0LL);
  v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v110, 0LL);
  if ( v12 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v100);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v11 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v9 + 224) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 216, 0LL);
LABEL_7:
    KeLeaveCriticalRegion();
    return (unsigned int)v12;
  }
  KeStackAttachProcess(*(PRKPROCESS *)(v9 + 56), &ApcState);
  VirtualGpuDevice = DXGPROCESS::GetVirtualGpuDevice((DXGPROCESS *)v9, *((struct ADAPTER_RENDER **)v7 + 4));
  v13 = VirtualGpuDevice;
  KeUnstackDetachProcess(&ApcState);
  if ( !VirtualGpuDevice )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1378;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to create partitioned GPU device 0x%I64x",
      1378LL,
      0LL,
      0LL,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v100);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v11 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v9 + 224) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    v12 = -1073741801;
    goto LABEL_7;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v100);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v11 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v11, 0LL);
  KeLeaveCriticalRegion();
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v9 + 224) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v96,
    v13);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v99, v8, 1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v109, (__int64)v13, 2, v15, 0);
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v109, 0LL);
  v17 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(3LL, v13, v16);
    WdLogGlobalForLineNumber = 1393;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v109);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v99);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v96);
    return v17;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v101, (struct _KTHREAD **)v7 + 5);
  v19 = 0LL;
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 305541) )
  {
    PartitionId = a2->PartitionId;
    if ( a2->PartitionId == 0xFFFF )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1481;
      LODWORD(StandardAllocation) = -1073741637;
      goto LABEL_114;
    }
    v21 = *((_DWORD *)v7 + 3);
    if ( PartitionId >= v21 )
    {
      WdLogSingleEntry2(2LL, PartitionId, v21);
      HandleInformation = *((unsigned int *)v7 + 3);
      Object = a2->PartitionId;
      WdLogGlobalForLineNumber = 1461;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"The PartitionId supplied is greater that the number of available GPU partitions: 0x%I64x 0x%I64x",
        Object,
        HandleInformation,
        0LL,
        0LL,
        0LL);
LABEL_14:
      LODWORD(StandardAllocation) = -1073741811;
LABEL_114:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v101);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v109);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v99);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v96);
      return (unsigned int)StandardAllocation;
    }
    v23 = 1;
    v24 = *(DXGK_VIRTUAL_GPU **)(*((_QWORD *)v7 + 3) + 8LL * PartitionId);
    if ( !v24 )
    {
      WdLogSingleEntry1(2LL, PartitionId);
      Objecta = a2->PartitionId;
      WdLogGlobalForLineNumber = 1470;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"The PartitionId refers to a vGPU that has not yet been created: 0x%I64x",
        Objecta,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_14;
    }
LABEL_28:
    VirtualGpu = ADAPTER_RENDER::DdiCreateVirtualGpu(*((ADAPTER_RENDER **)v7 + 4), a2, v18);
    LODWORD(StandardAllocation) = VirtualGpu;
    if ( VirtualGpu < 0 )
    {
      WdLogSingleEntry1(3LL, VirtualGpu);
      WdLogGlobalForLineNumber = 1489;
LABEL_108:
      if ( v89 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v89);
      if ( v24 )
        (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER_GPUP *, DXGK_VIRTUAL_GPU *))(*(_QWORD *)v7 + 24LL))(v7, v24);
      goto LABEL_114;
    }
    if ( v23 )
    {
      v37 = *(_QWORD *)(*((_QWORD *)v7 + 3) + 8LL * a2->PartitionId);
      if ( *(_QWORD *)&a2->UserModeVirtualDeviceProvider.Data1 != *(_QWORD *)(v37 + 36)
        || *(_QWORD *)a2->UserModeVirtualDeviceProvider.Data4 != *(_QWORD *)(v37 + 44) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1496;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pArgs->UserModeVirtualDeviceProvider == m_pVirtualGpu[pArgs->PartitionId]->UserModeDllId",
          1496LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v38 = *(_QWORD *)(*((_QWORD *)v7 + 3) + 8LL * a2->PartitionId);
      if ( a2->VirtualGpuLuid.LowPart != *(_DWORD *)(v38 + 28) || a2->VirtualGpuLuid.HighPart != *(_DWORD *)(v38 + 32) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1497;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"RtlEqualLuid(&pArgs->VirtualGpuLuid, &m_pVirtualGpu[pArgs->PartitionId]->VirtualGpuLuid)",
          1497LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( Handle )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1498;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"vGPUHandle == nullptr", 1498LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      *((_BYTE *)v24 + 192) = 1;
      *(CLSID *)((char *)v24 + 36) = a2->UserModeVirtualDeviceProvider;
      RtlCopyLuid((PLUID)((char *)v24 + 28), &a2->VirtualGpuLuid);
      NumMemorySegments = a2->NumMemorySegments;
      if ( (unsigned int)NumMemorySegments > 0x20 )
      {
        WdLogSingleEntry1(3LL, (unsigned int)NumMemorySegments);
        WdLogGlobalForLineNumber = 1507;
        LODWORD(StandardAllocation) = -1073741811;
        goto LABEL_108;
      }
      if ( (_DWORD)NumMemorySegments )
      {
        v41 = a2->NumMemorySegments;
        v42 = 112 * NumMemorySegments;
        if ( !is_mul_ok(v41, 0x70uLL) )
          v42 = -1LL;
        v43 = __CFADD__(v42, 8LL);
        v44 = v42 + 8;
        if ( v43 )
          v44 = -1LL;
        v45 = operator new[](v44, 0x4B677844u, 256LL, v39);
        if ( v45 )
        {
          v46 = v45 + 8;
          *(_QWORD *)v45 = v41;
          `vector constructor iterator'(
            (char *)(v45 + 8),
            112LL,
            v41,
            (void (__fastcall *)(char *))DXGK_GPUP_ALLOCATION_INFO::DXGK_GPUP_ALLOCATION_INFO);
        }
        else
        {
          v46 = 0LL;
        }
        *((_QWORD *)v24 + 23) = v46;
        if ( !v46 )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1516;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            0xFFFFFFFFLL,
            L"Failed to allocate allocations array",
            1516LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(StandardAllocation) = -1073741801;
          goto LABEL_108;
        }
        *((_DWORD *)v24 + 42) = a2->NumMemorySegments;
      }
      if ( (unsigned __int8)DpiKsrIsSoftBoot() )
      {
        v47 = *((_QWORD *)v7 + 4);
        v91 = 0;
        v94 = 0LL;
        SavedAdapterState = DpiKsrGetSavedAdapterState(*(_QWORD *)(*(_QWORD *)(v47 + 16) + 216LL), &v91, &v94);
        StandardAllocation = SavedAdapterState;
        if ( SavedAdapterState < 0 )
        {
          WdLogSingleEntry1(2LL, SavedAdapterState);
          WdLogGlobalForLineNumber = 1539;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to find saved GPU-P state. Status: 0x%I64x",
            StandardAllocation,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_108;
        }
        if ( v94 )
        {
          v49 = v94 + 1;
          v50 = 0;
          if ( *v94 )
          {
            while ( *v49 != a2->PartitionId )
            {
              ++v50;
              v49 = (_DWORD *)((char *)v49 + (unsigned int)v49[3]);
              if ( v50 >= *v94 )
                goto LABEL_59;
            }
            v59 = a2->NumMemorySegments;
            if ( v49[2] != v59 )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 1552;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"NumMemorySegments in saved virtual function and new vGPU is different",
                1552LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_108;
            }
            v60 = 0LL;
            v19 = v49 + 4;
            if ( v59 )
            {
              while ( v19[6 * v60] == a2->SegmentInfo[v60].DriverSegmentId
                   && *(_QWORD *)&v19[6 * v60 + 4] == a2->SegmentInfo[v60].Size
                   && v19[6 * v60 + 1] == a2->SegmentInfo[v60].Alignment )
              {
                v60 = (unsigned int)(v60 + 1);
                if ( (unsigned int)v60 >= v59 )
                  goto LABEL_59;
              }
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 1562;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Segment parameters in the saved data do not match",
                1562LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_108;
            }
          }
        }
      }
LABEL_59:
      v51 = a2->NumMemorySegments;
      v52 = 0LL;
      v83 = 0;
      if ( v51 )
      {
        while ( 1 )
        {
          v107 = 0;
          memset(v102, 0, 0x1A8uLL);
          LODWORD(v102[0]) |= 0x200u;
          LODWORD(v102[2]) = 5;
          HIDWORD(v102[0]) = *((_DWORD *)VirtualGpuDevice + 117);
          v102[3] = &Size;
          Size = a2->SegmentInfo[v52].Size;
          Alignment = a2->SegmentInfo[v52].Alignment;
          DriverSegmentId = a2->SegmentInfo[v52].DriverSegmentId;
          PrivateDriverData = a2->SegmentInfo[v52].PrivateDriverData;
          KeStackAttachProcess(*(PRKPROCESS *)(v92 + 56), &ApcState);
          StandardAllocation = (int)DXGDEVICE::CreateStandardAllocation(
                                      VirtualGpuDevice,
                                      (struct _D3DKM_CREATESTANDARDALLOCATION *)v102,
                                      0LL);
          KeUnstackDetachProcess(&ApcState);
          if ( (int)StandardAllocation < 0 )
            break;
          v53 = v92;
          v54 = HIDWORD(v102[6]);
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v92 + 248));
          v55 = (v54 >> 6) & 0xFFFFFF;
          if ( v55 < *(_DWORD *)(v53 + 296)
            && (v56 = *(_QWORD *)(v53 + 280), ((v54 >> 25) & 0x60) == (*(_BYTE *)(v56 + 16LL * v55 + 8) & 0x60))
            && (*(_DWORD *)(v56 + 16LL * v55 + 8) & 0x2000) == 0
            && (v57 = *(_DWORD *)(v56 + 16LL * v55 + 8) & 0x1F) != 0 )
          {
            if ( v57 == 5 )
            {
              v58 = *(_QWORD *)(v56 + 16LL * v55);
            }
            else
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 318;
              DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
              v58 = 0LL;
            }
          }
          else
          {
            v58 = 0LL;
          }
          v61 = v92;
          _InterlockedDecrement((volatile signed __int32 *)(v92 + 264));
          ExReleasePushLockSharedEx(v61 + 248, 0LL);
          KeLeaveCriticalRegion();
          v62 = 112LL * v83;
          *(_QWORD *)(v62 + *((_QWORD *)v24 + 23)) = v58;
          if ( v19 )
            v63 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VirtualGpuDevice + 2) + 760LL)
                                                                                        + 8LL)
                                                                            + 1176LL))(
                    *(_QWORD *)(*((_QWORD *)v7 + 4) + 768LL),
                    *(_QWORD *)(*(_QWORD *)(v62 + *((_QWORD *)v24 + 23)) + 24LL),
                    (unsigned int)v19[6 * v83],
                    *(_QWORD *)&v19[6 * v83 + 2]);
          else
            v63 = VIDMM_EXPORT::VidMmPinAllocation(
                    *(VIDMM_EXPORT **)(*((_QWORD *)VirtualGpuDevice + 2) + 760LL),
                    *(struct VIDMM_GLOBAL **)(*((_QWORD *)v7 + 4) + 768LL),
                    *(struct VIDMM_MULTI_ALLOC **)(*(_QWORD *)(v62 + *((_QWORD *)v24 + 23)) + 24LL),
                    0LL,
                    0LL,
                    0LL,
                    0LL);
          LODWORD(StandardAllocation) = v63;
          if ( v63 < 0 )
          {
            WdLogSingleEntry1(2LL, v63);
            WdLogGlobalForLineNumber = 1654;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Failed to pin virtual GPU allocation. Status = 0x%I64x",
              (int)StandardAllocation,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_108;
          }
          v52 = v83 + 1;
          *(_QWORD *)(v62 + *((_QWORD *)v24 + 23) + 16) = Size;
          v83 = v52;
          *(_DWORD *)(v62 + *((_QWORD *)v24 + 23) + 24) = Alignment;
          v51 = a2->NumMemorySegments;
          if ( (unsigned int)v52 >= v51 )
            goto LABEL_83;
        }
        WdLogSingleEntry1(3LL, StandardAllocation);
        WdLogGlobalForLineNumber = 1602;
        goto LABEL_108;
      }
LABEL_83:
      v64 = 0LL;
      memset(v112.MemoryInfo, 0, sizeof(v112.MemoryInfo));
      memset(v113, 0, sizeof(v113));
      StandardAllocation = 0LL;
      v112.PartitionId = a2->PartitionId;
      v84 = 0;
      v112.NumMemoryAllocations = v51;
      if ( v51 )
      {
        while ( 1 )
        {
          v85 = 0;
          v97.QuadPart = 0LL;
          v93 = 0LL;
          v66 = *((_DWORD *)v88 + 1272);
          memset(v111, 0, 0x98uLL);
          v67 = 112 * StandardAllocation;
          VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
            *(VIDMM_EXPORT **)(*((_QWORD *)VirtualGpuDevice + 2) + 760LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)v7 + 4) + 768LL),
            *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 23)
                                                                        + 112 * StandardAllocation)
                                                            + 48LL)
                                                + 8LL),
            &v85,
            &v97,
            &v93);
          v68 = *((_QWORD *)v24 + 23);
          v69 = StandardAllocation;
          v70 = v85;
          v112.MemoryInfo[v69].DriverAllocationHandle = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(112 * StandardAllocation
                                                                                          + v68)
                                                                              + 48LL)
                                                                  + 16LL);
          v112.MemoryInfo[v69].AllocationAddress.MemorySegmentOffset = v93;
          v112.MemoryInfo[v69].AllocationAddress.MemorySegmentId = v70;
          v112.MemoryInfo[v69].AllocationSize = a2->SegmentInfo[StandardAllocation].Size;
          *(_DWORD *)(v67 + v68 + 28) = v70;
          *(_QWORD *)(v67 + *((_QWORD *)v24 + 23) + 8) = v93;
          SegmentStatistics = VIDMM_EXPORT::VidMmQuerySegmentStatistics(
                                *(VIDMM_EXPORT **)(*((_QWORD *)VirtualGpuDevice + 2) + 760LL),
                                *(struct VIDMM_GLOBAL **)(*((_QWORD *)v7 + 4) + 768LL),
                                0,
                                v85 - 1,
                                (struct _D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION *)v111);
          v64 = 0LL;
          LODWORD(StandardAllocation) = SegmentStatistics;
          if ( SegmentStatistics < 0 )
            break;
          if ( (v66 & 1) != 0 && !v111[10] )
          {
            v72 = DXGK_VIRTUAL_GPU_GPUP::InitializeDirtyBitplaneForAllocation(v24, v84);
            LODWORD(StandardAllocation) = v72;
            if ( v72 < 0 )
            {
              WdLogSingleEntry1(3LL, v72);
              WdLogGlobalForLineNumber = 1708;
              goto LABEL_108;
            }
            if ( (v66 & 2) != 0 )
            {
              v73 = DXGK_VIRTUAL_GPU_GPUP::EnableDirtyBitTrackingForAllocation(v24, v84);
              v64 = 0LL;
              LODWORD(StandardAllocation) = v73;
              if ( v73 < 0 )
              {
                WdLogSingleEntry1(3LL, v73);
                WdLogGlobalForLineNumber = 1717;
                goto LABEL_108;
              }
            }
            else
            {
              v64 = 0LL;
            }
          }
          StandardAllocation = v84 + 1;
          v84 = StandardAllocation;
          if ( (unsigned int)StandardAllocation >= a2->NumMemorySegments )
            goto LABEL_95;
        }
        WdLogSingleEntry1(3LL, SegmentStatistics);
        WdLogGlobalForLineNumber = 1699;
        goto LABEL_108;
      }
LABEL_95:
      v74 = ADAPTER_RENDER::DdiSetVirtualGpuResources(*((ADAPTER_RENDER **)v7 + 4), &v112, v65);
      StandardAllocation = v74;
      if ( bTracingEnabled )
      {
        DxgkLogInternalTriageEvent(
          (__int64)v88,
          196610,
          a2->PartitionId,
          L"Setting vGPU resources with %1 segments returns %2",
          a2->NumMemorySegments,
          v74,
          0LL,
          0LL,
          0LL);
        if ( a2->NumMemorySegments )
        {
          v75 = (__int64)v88;
          p_MemorySegmentOffset = (__int64 *)&v112.MemoryInfo[0].AllocationAddress.MemorySegmentOffset;
          do
          {
            DxgkLogInternalTriageEvent(
              v75,
              196610,
              a2->PartitionId,
              L"vGPU has a resource set on segment %1 at offset %2 with a size of %3",
              *((unsigned int *)p_MemorySegmentOffset - 2),
              *p_MemorySegmentOffset,
              p_MemorySegmentOffset[1],
              0LL,
              0LL);
            p_MemorySegmentOffset += 4;
            ++v64;
          }
          while ( v64 < a2->NumMemorySegments );
          v7 = v98;
        }
      }
      if ( (int)StandardAllocation < 0 )
      {
        WdLogSingleEntry1(3LL, StandardAllocation);
        WdLogGlobalForLineNumber = 1750;
        goto LABEL_108;
      }
      Current = 0LL;
      v77 = ObReferenceObjectByHandle(Handle, 0x20000u, (POBJECT_TYPE)IoFileObjectType, 0, &Current, 0LL);
      v78 = Current;
      LODWORD(StandardAllocation) = v77;
      if ( v77 < 0 )
      {
        WdLogSingleEntry1(3LL, v77);
        WdLogGlobalForLineNumber = 1760;
        goto LABEL_108;
      }
      if ( *((_QWORD *)Current + 4) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1768;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"The device file handle to bind to the new vGPU has already been bound to some other object.",
          1768LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(StandardAllocation) = -1073741816;
        ObfDereferenceObject(v78);
        goto LABEL_108;
      }
      v79 = Current;
      *((_QWORD *)Current + 4) = v89;
      *((_QWORD *)v24 + 20) = v78;
      ObfDereferenceObject(v79);
    }
    DXGK_VIRTUAL_GPU::ReportState(v24, v38, v36);
    LODWORD(StandardAllocation) = 0;
    goto LABEL_114;
  }
  v25 = a2->PartitionId;
  v87 = 0xFFFF;
  v23 = 0;
  LODWORD(StandardAllocation) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(v7, v25, &v87);
  if ( (int)StandardAllocation < 0 )
    goto LABEL_114;
  v27 = v87;
  a2->PartitionId = v87;
  v28 = (DXGK_VIRTUAL_GPU *)operator new(0x168uLL, 0x4B677844u, 256LL, v26);
  v24 = v28;
  if ( v28 )
  {
    DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(v28, *((struct ADAPTER_RENDER **)v7 + 4), 0);
    *(_QWORD *)v24 = &DXGK_VIRTUAL_GPU_GPUP::`vftable';
    *((_DWORD *)v24 + 56) = -1;
    *((_QWORD *)v24 + 25) = 0LL;
    *((_QWORD *)v24 + 26) = 0LL;
    *((_DWORD *)v24 + 54) = 0;
    *((_DWORD *)v24 + 55) = 30;
    `vector constructor iterator'(
      (char *)v24 + 232,
      48LL,
      2LL,
      (void (__fastcall *)(char *))DXGK_TRANSPORT_BUFFER::DXGK_TRANSPORT_BUFFER);
    v89 = (void *)operator new(0x10uLL, 0x4B677844u, 256LL, v29);
    if ( !v89 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1435;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Not enough memory to allocate the DXGSHAREDVGPUOBJECT for handle tracking.",
        1435LL,
        0LL,
        0LL,
        0LL,
        0LL);
      (**(void (__fastcall ***)(DXGK_VIRTUAL_GPU *, __int64))v24)(v24, 1LL);
      LODWORD(StandardAllocation) = -1073741801;
      goto LABEL_114;
    }
    *((_QWORD *)v24 + 11) = Current;
    *((_QWORD *)v24 + 22) = VirtualGpuDevice;
    *((_DWORD *)v24 + 6) = v27;
    *(_QWORD *)(*((_QWORD *)v7 + 3) + 8 * v27) = v24;
    ++*((_DWORD *)v7 + 4);
    DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALGPUMANAGER_GPUP *)((char *)v7 + 72));
    v30 = (_QWORD *)((char *)v7 + 104);
    v31 = *((_QWORD *)v7 + 13);
    v32 = (_QWORD *)((char *)v24 + 120);
    if ( *(DXGVIRTUALGPUMANAGER_GPUP **)(v31 + 8) != (DXGVIRTUALGPUMANAGER_GPUP *)((char *)v7 + 104) )
      __fastfail(3u);
    *v32 = v31;
    *((_QWORD *)v24 + 16) = v30;
    *(_QWORD *)(v31 + 8) = v32;
    *v30 = v32;
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
      *((_QWORD *)v7 + 10) = 0LL;
    else
      *((_QWORD *)v7 + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v7 + 72, 0LL);
    KeLeaveCriticalRegion();
    v33 = v89;
    v34 = (__int64)v88;
    *((_DWORD *)v89 + 2) = v27;
    v19 = 0LL;
    *v33 = v34;
    goto LABEL_28;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v101);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v109);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v99);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v96);
  return 3221225495LL;
}
