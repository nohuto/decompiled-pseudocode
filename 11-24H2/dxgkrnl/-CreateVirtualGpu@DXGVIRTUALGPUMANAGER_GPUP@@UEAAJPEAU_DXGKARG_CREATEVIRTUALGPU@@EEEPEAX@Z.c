/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x140217710
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140012080 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033510 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?VidMmQuerySegmentStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GIPEAU_D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION@@@Z @ 0x14004DDCC (-VidMmQuerySegmentStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GIPEAU_D3DKMT_QUERYSTATISTICS_.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004EF94 (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004F4FC (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1401ECC5C (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z @ 0x14020C6B0 (--0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x14020D950 (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 *     ?ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ @ 0x14020E9C4 (-ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ.c)
 *     ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x14021194C (-DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z.c)
 *     ?DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z @ 0x140214DD0 (-DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z.c)
 *     ?EnableDirtyBitTrackingForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z @ 0x140218E30 (-EnableDirtyBitTrackingForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z.c)
 *     ?InitializeDirtyBitplaneForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z @ 0x140218F8C (-InitializeDirtyBitplaneForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z.c)
 *     DpiKsrGetSavedAdapterState @ 0x140250EA4 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrIsSoftBoot @ 0x140250F80 (DpiKsrIsSoftBoot.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140354F2C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
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
  ULONG PartitionId; // eax
  ULONG v20; // ecx
  __int64 StandardAllocation; // rdi
  _DWORD *v22; // rsi
  char v23; // bl
  DXGK_VIRTUAL_GPU *v24; // r15
  ULONG v25; // edx
  __int64 v26; // rbx
  DXGK_VIRTUAL_GPU *v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  int VirtualGpu; // eax
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 NumMemorySegments; // rax
  unsigned __int64 v38; // rdi
  __int64 v39; // rax
  bool v40; // cf
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  int SavedAdapterState; // eax
  _DWORD *v46; // rcx
  unsigned int v47; // edx
  unsigned int v48; // ebx
  __int64 v49; // rdi
  DXGDEVICE *v50; // rbx
  __int64 v51; // rdi
  unsigned int v52; // ebx
  unsigned int v53; // eax
  __int64 v54; // rdi
  int v55; // ecx
  __int64 v56; // rdi
  ULONG v57; // r9d
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rbx
  int v61; // eax
  unsigned __int64 v62; // rsi
  __int64 v63; // r8
  int v64; // ebx
  __int64 v65; // rsi
  __int64 v66; // r8
  __int64 v67; // rdx
  ULONG v68; // ecx
  int SegmentStatistics; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  __int64 v73; // r12
  __int64 *p_MemorySegmentOffset; // rbx
  NTSTATUS v75; // eax
  PVOID v76; // rbx
  PVOID v77; // rcx
  __int64 Object; // [rsp+20h] [rbp-E0h]
  __int64 Objecta; // [rsp+20h] [rbp-E0h]
  __int64 HandleInformation; // [rsp+28h] [rbp-D8h]
  unsigned int v81; // [rsp+54h] [rbp-ACh]
  unsigned int v82; // [rsp+54h] [rbp-ACh]
  unsigned int v83; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v84; // [rsp+5Ch] [rbp-A4h] BYREF
  DXGDEVICE *VirtualGpuDevice; // [rsp+60h] [rbp-A0h]
  struct DXGADAPTER *v86; // [rsp+68h] [rbp-98h]
  void *v87; // [rsp+70h] [rbp-90h]
  PVOID Current; // [rsp+78h] [rbp-88h] BYREF
  int v89; // [rsp+80h] [rbp-80h] BYREF
  __int64 v90; // [rsp+88h] [rbp-78h]
  unsigned __int64 v91; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v92; // [rsp+98h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-60h]
  _BYTE v94[16]; // [rsp+A8h] [rbp-58h] BYREF
  union _LARGE_INTEGER v95; // [rsp+B8h] [rbp-48h] BYREF
  DXGVIRTUALGPUMANAGER_GPUP *v96; // [rsp+C0h] [rbp-40h]
  _BYTE v97[24]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v98[24]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v99[24]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v100[54]; // [rsp+110h] [rbp+10h] BYREF
  UINT64 Size; // [rsp+2C0h] [rbp+1C0h] BYREF
  UINT Alignment; // [rsp+2C8h] [rbp+1C8h]
  ULONG DriverSegmentId; // [rsp+2CCh] [rbp+1CCh]
  UINT PrivateDriverData; // [rsp+2D0h] [rbp+1D0h]
  int v105; // [rsp+2D4h] [rbp+1D4h]
  struct _KAPC_STATE ApcState; // [rsp+2D8h] [rbp+1D8h] BYREF
  _BYTE v107[160]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v108[144]; // [rsp+3B0h] [rbp+2B0h] BYREF
  _DWORD v109[40]; // [rsp+440h] [rbp+340h] BYREF
  _DXGKARG_SETVIRTUALGPURESOURCES v110; // [rsp+4E0h] [rbp+3E0h] BYREF
  _BYTE v111[992]; // [rsp+508h] [rbp+408h] BYREF

  Handle = a6;
  v87 = 0LL;
  v7 = this;
  v96 = this;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1338;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pProcess != nullptr", 1338LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_DWORD *)Current + 102) |= 0x40u;
  v86 = *(struct DXGADAPTER **)(*((_QWORD *)v7 + 4) + 16LL);
  v8 = v86;
  v9 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 171);
  v90 = v9;
  memset(&ApcState, 0, sizeof(ApcState));
  v10 = v9 + 216;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 216, 0LL);
  *(_QWORD *)(v9 + 224) = KeGetCurrentThread();
  v11 = *((_QWORD *)v7 + 4) + 24LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v11, 0LL);
  *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v98, v8, 1);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v108, v8, 0LL);
  v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v108, 0LL);
  if ( v12 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v98);
    *(_QWORD *)(v11 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
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
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to create partitioned GPU device 0x%I64x",
      1378LL,
      0LL,
      0LL,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v98);
    *(_QWORD *)(v11 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)(v9 + 224) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    v12 = -1073741801;
    goto LABEL_7;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v98);
  *(_QWORD *)(v11 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v11, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v9 + 224) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v94,
    v13);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v97, v8, 1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v107, (__int64)v13, 2, v15, 0);
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v107, 0LL);
  v17 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(3LL, v13, v16);
    WdLogGlobalForLineNumber = 1393;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v94);
    return v17;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v99, (struct _KTHREAD **)v7 + 5);
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 305621) )
  {
    PartitionId = a2->PartitionId;
    if ( a2->PartitionId == 0xFFFF )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1481;
      LODWORD(StandardAllocation) = -1073741637;
      goto LABEL_111;
    }
    v20 = *((_DWORD *)v7 + 3);
    if ( PartitionId >= v20 )
    {
      WdLogSingleEntry2(2LL, PartitionId, v20);
      HandleInformation = *((unsigned int *)v7 + 3);
      Object = a2->PartitionId;
      WdLogGlobalForLineNumber = 1461;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"The PartitionId supplied is greater that the number of available GPU partitions: 0x%I64x 0x%I64x",
        Object,
        HandleInformation,
        0LL,
        0LL,
        0LL);
LABEL_14:
      LODWORD(StandardAllocation) = -1073741811;
LABEL_111:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v99);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v94);
      return (unsigned int)StandardAllocation;
    }
    v22 = 0LL;
    v23 = 1;
    v24 = *(DXGK_VIRTUAL_GPU **)(*((_QWORD *)v7 + 3) + 8LL * PartitionId);
    if ( !v24 )
    {
      WdLogSingleEntry1(2LL, PartitionId);
      Objecta = a2->PartitionId;
      WdLogGlobalForLineNumber = 1470;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"The PartitionId refers to a vGPU that has not yet been created: 0x%I64x",
        Objecta,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_14;
    }
LABEL_25:
    VirtualGpu = ADAPTER_RENDER::DdiCreateVirtualGpu(*((ADAPTER_RENDER **)v7 + 4), a2, v18);
    LODWORD(StandardAllocation) = VirtualGpu;
    if ( VirtualGpu < 0 )
    {
      WdLogSingleEntry1(3LL, VirtualGpu);
      WdLogGlobalForLineNumber = 1489;
LABEL_105:
      if ( v87 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v87);
      if ( v24 )
        (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER_GPUP *, DXGK_VIRTUAL_GPU *))(*(_QWORD *)v7 + 24LL))(v7, v24);
      goto LABEL_111;
    }
    if ( v23 )
    {
      v35 = *(_QWORD *)(*((_QWORD *)v7 + 3) + 8LL * a2->PartitionId);
      if ( *(_QWORD *)&a2->UserModeVirtualDeviceProvider.Data1 != *(_QWORD *)(v35 + 36)
        || *(_QWORD *)a2->UserModeVirtualDeviceProvider.Data4 != *(_QWORD *)(v35 + 44) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1496;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pArgs->UserModeVirtualDeviceProvider == m_pVirtualGpu[pArgs->PartitionId]->UserModeDllId",
          1496LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v36 = *(_QWORD *)(*((_QWORD *)v7 + 3) + 8LL * a2->PartitionId);
      if ( a2->VirtualGpuLuid.LowPart != *(_DWORD *)(v36 + 28) || a2->VirtualGpuLuid.HighPart != *(_DWORD *)(v36 + 32) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1497;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
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
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"vGPUHandle == nullptr", 1498LL, 0LL, 0LL, 0LL, 0LL);
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
        goto LABEL_105;
      }
      if ( (_DWORD)NumMemorySegments )
      {
        v38 = a2->NumMemorySegments;
        v39 = 112 * NumMemorySegments;
        if ( !is_mul_ok(v38, 0x70uLL) )
          v39 = -1LL;
        v40 = __CFADD__(v39, 8LL);
        v41 = v39 + 8;
        if ( v40 )
          v41 = -1LL;
        v42 = operator new[](v41, 0x4B677844u, 256LL);
        if ( v42 )
        {
          v43 = v42 + 8;
          *(_QWORD *)v42 = v38;
          `vector constructor iterator'(
            (char *)(v42 + 8),
            112LL,
            v38,
            (void (__fastcall *)(char *))DXGK_GPUP_ALLOCATION_INFO::DXGK_GPUP_ALLOCATION_INFO);
        }
        else
        {
          v43 = 0LL;
        }
        *((_QWORD *)v24 + 23) = v43;
        if ( !v43 )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1516;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Failed to allocate allocations array",
            1516LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(StandardAllocation) = -1073741801;
          goto LABEL_105;
        }
        *((_DWORD *)v24 + 42) = a2->NumMemorySegments;
      }
      if ( (unsigned __int8)DpiKsrIsSoftBoot() )
      {
        v44 = *((_QWORD *)v7 + 4);
        v89 = 0;
        v92 = 0LL;
        SavedAdapterState = DpiKsrGetSavedAdapterState(*(_QWORD *)(*(_QWORD *)(v44 + 16) + 216LL), &v89, &v92);
        StandardAllocation = SavedAdapterState;
        if ( SavedAdapterState < 0 )
        {
          WdLogSingleEntry1(2LL, SavedAdapterState);
          WdLogGlobalForLineNumber = 1539;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to find saved GPU-P state. Status: 0x%I64x",
            StandardAllocation,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_105;
        }
        if ( v92 )
        {
          v46 = v92 + 1;
          v47 = 0;
          if ( *v92 )
          {
            while ( *v46 != a2->PartitionId )
            {
              ++v47;
              v46 = (_DWORD *)((char *)v46 + (unsigned int)v46[3]);
              if ( v47 >= *v92 )
                goto LABEL_56;
            }
            v57 = a2->NumMemorySegments;
            if ( v46[2] != v57 )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 1552;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"NumMemorySegments in saved virtual function and new vGPU is different",
                1552LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_105;
            }
            v58 = 0LL;
            v22 = v46 + 4;
            if ( v57 )
            {
              while ( v22[6 * v58] == a2->SegmentInfo[v58].DriverSegmentId
                   && *(_QWORD *)&v22[6 * v58 + 4] == a2->SegmentInfo[v58].Size
                   && v22[6 * v58 + 1] == a2->SegmentInfo[v58].Alignment )
              {
                v58 = (unsigned int)(v58 + 1);
                if ( (unsigned int)v58 >= v57 )
                  goto LABEL_56;
              }
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 1562;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Segment parameters in the saved data do not match",
                1562LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_105;
            }
          }
        }
      }
LABEL_56:
      v48 = a2->NumMemorySegments;
      v49 = 0LL;
      v81 = 0;
      if ( v48 )
      {
        while ( 1 )
        {
          v105 = 0;
          memset(v100, 0, 0x1A8uLL);
          v50 = VirtualGpuDevice;
          LODWORD(v100[0]) |= 0x200u;
          LODWORD(v100[2]) = 5;
          HIDWORD(v100[0]) = *((_DWORD *)VirtualGpuDevice + 117);
          v100[3] = &Size;
          Size = a2->SegmentInfo[v49].Size;
          Alignment = a2->SegmentInfo[v49].Alignment;
          DriverSegmentId = a2->SegmentInfo[v49].DriverSegmentId;
          PrivateDriverData = a2->SegmentInfo[v49].PrivateDriverData;
          KeStackAttachProcess(*(PRKPROCESS *)(v90 + 56), &ApcState);
          StandardAllocation = (int)DXGDEVICE::CreateStandardAllocation(
                                      v50,
                                      (struct _D3DKM_CREATESTANDARDALLOCATION *)v100,
                                      0LL);
          KeUnstackDetachProcess(&ApcState);
          if ( (int)StandardAllocation < 0 )
            break;
          v51 = v90;
          v52 = HIDWORD(v100[6]);
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v90 + 248));
          v53 = (v52 >> 6) & 0xFFFFFF;
          if ( v53 < *(_DWORD *)(v51 + 296)
            && (v54 = *(_QWORD *)(v51 + 280), ((v52 >> 25) & 0x60) == (*(_BYTE *)(v54 + 16LL * v53 + 8) & 0x60))
            && (*(_DWORD *)(v54 + 16LL * v53 + 8) & 0x2000) == 0
            && (v55 = *(_DWORD *)(v54 + 16LL * v53 + 8) & 0x1F) != 0 )
          {
            if ( v55 == 5 )
            {
              v56 = *(_QWORD *)(v54 + 16LL * v53);
            }
            else
            {
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
              v56 = 0LL;
            }
          }
          else
          {
            v56 = 0LL;
          }
          v59 = v90;
          _InterlockedDecrement((volatile signed __int32 *)(v90 + 264));
          ExReleasePushLockSharedEx(v59 + 248, 0LL);
          KeLeaveCriticalRegion();
          v60 = 112LL * v81;
          *(_QWORD *)(v60 + *((_QWORD *)v24 + 23)) = v56;
          if ( v22 )
            v61 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VirtualGpuDevice + 2) + 760LL)
                                                                                        + 8LL)
                                                                            + 1176LL))(
                    *(_QWORD *)(*((_QWORD *)v7 + 4) + 768LL),
                    *(_QWORD *)(*(_QWORD *)(v60 + *((_QWORD *)v24 + 23)) + 24LL),
                    (unsigned int)v22[6 * v81],
                    *(_QWORD *)&v22[6 * v81 + 2]);
          else
            v61 = VIDMM_EXPORT::VidMmPinAllocation(
                    *(VIDMM_EXPORT **)(*((_QWORD *)VirtualGpuDevice + 2) + 760LL),
                    *(struct VIDMM_GLOBAL **)(*((_QWORD *)v7 + 4) + 768LL),
                    *(struct VIDMM_MULTI_ALLOC **)(*(_QWORD *)(v60 + *((_QWORD *)v24 + 23)) + 24LL),
                    0LL,
                    0LL,
                    0LL,
                    0LL);
          LODWORD(StandardAllocation) = v61;
          if ( v61 < 0 )
          {
            WdLogSingleEntry1(2LL, v61);
            WdLogGlobalForLineNumber = 1654;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to pin virtual GPU allocation. Status = 0x%I64x",
              (int)StandardAllocation,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_105;
          }
          v49 = v81 + 1;
          *(_QWORD *)(v60 + *((_QWORD *)v24 + 23) + 16) = Size;
          v81 = v49;
          *(_DWORD *)(v60 + *((_QWORD *)v24 + 23) + 24) = Alignment;
          v48 = a2->NumMemorySegments;
          if ( (unsigned int)v49 >= v48 )
            goto LABEL_80;
        }
        WdLogSingleEntry1(3LL, StandardAllocation);
        WdLogGlobalForLineNumber = 1602;
        goto LABEL_105;
      }
LABEL_80:
      v62 = 0LL;
      memset(v110.MemoryInfo, 0, sizeof(v110.MemoryInfo));
      memset(v111, 0, sizeof(v111));
      StandardAllocation = 0LL;
      v110.PartitionId = a2->PartitionId;
      v82 = 0;
      v110.NumMemoryAllocations = v48;
      if ( v48 )
      {
        while ( 1 )
        {
          v83 = 0;
          v95.QuadPart = 0LL;
          v91 = 0LL;
          v64 = *((_DWORD *)v86 + 1272);
          memset(v109, 0, 0x98uLL);
          v65 = 112 * StandardAllocation;
          VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
            *(VIDMM_EXPORT **)(*((_QWORD *)VirtualGpuDevice + 2) + 760LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)v7 + 4) + 768LL),
            *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(*(_QWORD *)(112 * StandardAllocation
                                                                        + *((_QWORD *)v24 + 23))
                                                            + 48LL)
                                                + 8LL),
            &v83,
            &v95,
            &v91);
          v66 = *((_QWORD *)v24 + 23);
          v67 = StandardAllocation;
          v68 = v83;
          v110.MemoryInfo[v67].DriverAllocationHandle = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(112 * StandardAllocation
                                                                                          + v66)
                                                                              + 48LL)
                                                                  + 16LL);
          v110.MemoryInfo[v67].AllocationAddress.MemorySegmentOffset = v91;
          v110.MemoryInfo[v67].AllocationAddress.MemorySegmentId = v68;
          v110.MemoryInfo[v67].AllocationSize = a2->SegmentInfo[StandardAllocation].Size;
          *(_DWORD *)(v65 + v66 + 28) = v68;
          *(_QWORD *)(v65 + *((_QWORD *)v24 + 23) + 8) = v91;
          SegmentStatistics = VIDMM_EXPORT::VidMmQuerySegmentStatistics(
                                *(VIDMM_EXPORT **)(*((_QWORD *)VirtualGpuDevice + 2) + 760LL),
                                *(struct VIDMM_GLOBAL **)(*((_QWORD *)v7 + 4) + 768LL),
                                0,
                                v83 - 1,
                                (struct _D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION *)v109);
          v62 = 0LL;
          LODWORD(StandardAllocation) = SegmentStatistics;
          if ( SegmentStatistics < 0 )
            break;
          if ( (v64 & 1) != 0 && !v109[10] )
          {
            v70 = DXGK_VIRTUAL_GPU_GPUP::InitializeDirtyBitplaneForAllocation(v24, v82);
            LODWORD(StandardAllocation) = v70;
            if ( v70 < 0 )
            {
              WdLogSingleEntry1(3LL, v70);
              WdLogGlobalForLineNumber = 1708;
              goto LABEL_105;
            }
            if ( (v64 & 2) != 0 )
            {
              v71 = DXGK_VIRTUAL_GPU_GPUP::EnableDirtyBitTrackingForAllocation(v24, v82);
              v62 = 0LL;
              LODWORD(StandardAllocation) = v71;
              if ( v71 < 0 )
              {
                WdLogSingleEntry1(3LL, v71);
                WdLogGlobalForLineNumber = 1717;
                goto LABEL_105;
              }
            }
            else
            {
              v62 = 0LL;
            }
          }
          StandardAllocation = v82 + 1;
          v82 = StandardAllocation;
          if ( (unsigned int)StandardAllocation >= a2->NumMemorySegments )
            goto LABEL_92;
        }
        WdLogSingleEntry1(3LL, SegmentStatistics);
        WdLogGlobalForLineNumber = 1699;
        goto LABEL_105;
      }
LABEL_92:
      v72 = ADAPTER_RENDER::DdiSetVirtualGpuResources(*((ADAPTER_RENDER **)v7 + 4), &v110, v63);
      StandardAllocation = v72;
      if ( bTracingEnabled )
      {
        DxgkLogInternalTriageEvent(
          (__int64)v86,
          196610LL,
          a2->PartitionId,
          L"Setting vGPU resources with %1 segments returns %2",
          a2->NumMemorySegments,
          v72,
          0LL,
          0LL,
          0LL);
        if ( a2->NumMemorySegments )
        {
          v73 = (__int64)v86;
          p_MemorySegmentOffset = (__int64 *)&v110.MemoryInfo[0].AllocationAddress.MemorySegmentOffset;
          do
          {
            DxgkLogInternalTriageEvent(
              v73,
              196610LL,
              a2->PartitionId,
              L"vGPU has a resource set on segment %1 at offset %2 with a size of %3",
              *((unsigned int *)p_MemorySegmentOffset - 2),
              *p_MemorySegmentOffset,
              p_MemorySegmentOffset[1],
              0LL,
              0LL);
            p_MemorySegmentOffset += 4;
            ++v62;
          }
          while ( v62 < a2->NumMemorySegments );
          v7 = v96;
        }
      }
      if ( (int)StandardAllocation < 0 )
      {
        WdLogSingleEntry1(3LL, StandardAllocation);
        WdLogGlobalForLineNumber = 1750;
        goto LABEL_105;
      }
      Current = 0LL;
      v75 = ObReferenceObjectByHandle(Handle, 0x20000u, (POBJECT_TYPE)IoFileObjectType, 0, &Current, 0LL);
      v76 = Current;
      LODWORD(StandardAllocation) = v75;
      if ( v75 < 0 )
      {
        WdLogSingleEntry1(3LL, v75);
        WdLogGlobalForLineNumber = 1760;
        goto LABEL_105;
      }
      if ( *((_QWORD *)Current + 4) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1768;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"The device file handle to bind to the new vGPU has already been bound to some other object.",
          1768LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(StandardAllocation) = -1073741816;
        ObfDereferenceObject(v76);
        goto LABEL_105;
      }
      v77 = Current;
      *((_QWORD *)Current + 4) = v87;
      *((_QWORD *)v24 + 20) = v76;
      ObfDereferenceObject(v77);
    }
    DXGK_VIRTUAL_GPU::ReportState(v24, v36, v34);
    LODWORD(StandardAllocation) = 0;
    goto LABEL_111;
  }
  v25 = a2->PartitionId;
  v84 = 0xFFFF;
  LODWORD(StandardAllocation) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(v7, v25, &v84);
  if ( (int)StandardAllocation < 0 )
    goto LABEL_111;
  v26 = v84;
  a2->PartitionId = v84;
  v27 = (DXGK_VIRTUAL_GPU *)operator new(0x168uLL, 0x4B677844u, 256LL);
  v24 = v27;
  if ( v27 )
  {
    DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(v27, *((struct ADAPTER_RENDER **)v7 + 4), 0);
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
    v87 = (void *)operator new(0x10uLL, 0x4B677844u, 256LL);
    if ( !v87 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1435;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Not enough memory to allocate the DXGSHAREDVGPUOBJECT for handle tracking.",
        1435LL,
        0LL,
        0LL,
        0LL,
        0LL);
      (**(void (__fastcall ***)(DXGK_VIRTUAL_GPU *, __int64))v24)(v24, 1LL);
      LODWORD(StandardAllocation) = -1073741801;
      goto LABEL_111;
    }
    *((_QWORD *)v24 + 11) = Current;
    *((_DWORD *)v24 + 6) = v26;
    *((_QWORD *)v24 + 22) = v13;
    *(_QWORD *)(*((_QWORD *)v7 + 3) + 8 * v26) = v24;
    ++*((_DWORD *)v7 + 4);
    DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALGPUMANAGER_GPUP *)((char *)v7 + 72));
    v28 = (_QWORD *)((char *)v7 + 104);
    v29 = *((_QWORD *)v7 + 13);
    v30 = (_QWORD *)((char *)v24 + 120);
    if ( *(DXGVIRTUALGPUMANAGER_GPUP **)(v29 + 8) != (DXGVIRTUALGPUMANAGER_GPUP *)((char *)v7 + 104) )
      __fastfail(3u);
    *v30 = v29;
    v22 = 0LL;
    *((_QWORD *)v24 + 16) = v28;
    *(_QWORD *)(v29 + 8) = v30;
    *v28 = v30;
    *((_QWORD *)v7 + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v7 + 72, 0LL);
    KeLeaveCriticalRegion();
    v31 = v87;
    v32 = (__int64)v86;
    *((_DWORD *)v87 + 2) = v26;
    v23 = 0;
    *v31 = v32;
    goto LABEL_25;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v99);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v94);
  return 3221225495LL;
}
