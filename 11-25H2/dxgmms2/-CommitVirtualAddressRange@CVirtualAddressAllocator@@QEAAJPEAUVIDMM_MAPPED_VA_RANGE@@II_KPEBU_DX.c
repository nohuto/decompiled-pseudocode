/*
 * XREFs of ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400BE2C0
 * Callers:
 *     ?RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z @ 0x14003BF94 (-RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z.c)
 *     ?RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@I@Z @ 0x140097F98 (-RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDM.c)
 *     ?MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z @ 0x140099C54 (-MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14009DBE4 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400BD424 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1400BD984 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_.c)
 *     CommitAllocationVirtualAddressCb @ 0x1400BE100 (CommitAllocationVirtualAddressCb.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400BF1DC (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D6730 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F515C (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400FA518 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140104104 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x140112398 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400188F8 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x14002D9CC (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14002D9EC (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140037174 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x14003BABC (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x140045EA4 (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 *     ?SysMmMapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@PEAU_IOMMU_DMA_DOMAIN@@_K22PEBU_DXGK_ADL@@_N@Z @ 0x14004B99C (-SysMmMapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@PEAU_IOMMU_DMA_DOMAIN@@_K22PEBU_DXGK_ADL@@_N.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400AB930 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1400B7DB4 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400B84A0 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z @ 0x1400BEDDC (-MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D03C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D6730 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1400E68BC (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CVirtualAddressAllocator::CommitVirtualAddressRange(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        unsigned __int64 a5,
        struct _DXGK_ADL *a6,
        int a7,
        struct VIDMM_ALLOC **a8,
        _BYTE *a9,
        int a10,
        unsigned __int64 a11)
{
  unsigned int v12; // ecx
  int v13; // r11d
  struct VIDMM_ALLOC **v14; // rbx
  __int64 v15; // r10
  __int64 v16; // r14
  _BYTE *v18; // r8
  __int64 v19; // rax
  __int64 v20; // r9
  char v21; // al
  __int64 v22; // r14
  __int64 v23; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // r12d
  __int64 v28; // rcx
  int v30; // eax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // r12
  __int64 v35; // rcx
  unsigned __int64 v36; // r8
  __int64 v37; // rcx
  int v38; // eax
  _DWORD *v39; // r10
  __int64 v40; // r12
  VIDMM_PAGE_DIRECTORY *v41; // rdx
  UINT v42; // ebx
  unsigned int v43; // ecx
  __int64 v44; // rcx
  UINT NumberOfPte; // eax
  unsigned int v46; // edx
  __int64 v47; // rax
  unsigned int RootPageTableSize; // eax
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v50; // rcx
  int v51; // ebx
  VIDMM_PAGE_DIRECTORY *v52; // rcx
  struct VIDMM_ALLOC **v53; // r8
  __int64 v54; // rbx
  void (*v55)(void *); // r8
  __int64 v56; // rcx
  struct _KTHREAD *v57; // rcx
  __int64 v58; // r8
  bool v59; // zf
  __int64 v60; // rcx
  __int64 v61; // r9
  __int64 *v62; // rcx
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // ecx
  _DWORD *v67; // r10
  struct _DXGK_ADL *v68; // r14
  _QWORD **v69; // r8
  int v70; // eax
  int v71; // eax
  int v72; // eax
  char v73; // al
  int v74; // ecx
  unsigned __int64 v75; // rdx
  int v76; // r14d
  void (*v77)(void *); // r8
  unsigned int v78; // r10d
  __int64 v79; // rcx
  unsigned __int64 v80; // [rsp+20h] [rbp-E0h]
  char v81; // [rsp+50h] [rbp-B0h]
  UINT v82; // [rsp+54h] [rbp-ACh]
  unsigned int v84; // [rsp+58h] [rbp-A8h]
  _DWORD *v85; // [rsp+68h] [rbp-98h]
  UINT v86; // [rsp+70h] [rbp-90h]
  int v87; // [rsp+74h] [rbp-8Ch]
  unsigned __int64 v88; // [rsp+78h] [rbp-88h]
  _DXGKARG_GETROOTPAGETABLESIZE v90; // [rsp+88h] [rbp-78h] BYREF
  __int64 v91; // [rsp+90h] [rbp-70h]
  VIDMM_PAGE_DIRECTORY *v92; // [rsp+98h] [rbp-68h]
  struct VIDMM_ALLOC **v93; // [rsp+A0h] [rbp-60h]
  _QWORD **v94; // [rsp+A8h] [rbp-58h]
  _BYTE *v95; // [rsp+B0h] [rbp-50h]
  __int64 v96; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v97; // [rsp+C0h] [rbp-40h]
  __int128 v98; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v99; // [rsp+E0h] [rbp-20h]
  __int128 v100; // [rsp+F0h] [rbp-10h]
  __int128 v101; // [rsp+100h] [rbp+0h]
  __int128 v102; // [rsp+110h] [rbp+10h]
  __int128 v103; // [rsp+120h] [rbp+20h]

  v12 = *(_DWORD *)(a2 + 72);
  v13 = a4;
  v14 = a8;
  v15 = *(_QWORD *)(a1 + 88);
  v16 = (v12 >> 4) & 0x3F;
  v18 = a9;
  v19 = *(_QWORD *)(v15 + 40232);
  v93 = a8;
  v95 = a9;
  v20 = *(_QWORD *)(v19 + 8 * v16);
  v91 = v20;
  v82 = (v12 >> 4) & 0x3F;
  if ( (v12 & 0x800) != 0 )
    goto LABEL_11;
  v21 = *(_BYTE *)(v20 + 476);
  if ( (v21 & 4) != 0 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL);
    v23 = *(unsigned int *)(*(_QWORD *)(v15 + 24) + 240LL);
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)v23 >= (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
    {
      v25 = 0LL;
    }
    else
    {
      _mm_lfence();
      v25 = *(_QWORD *)(*(_QWORD *)(v22 + 48) + 8 * v23);
    }
    HIDWORD(v80) = HIDWORD(a5);
    v26 = SysMmMapLogicalAddressRange(
            *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*(_QWORD *)(v25 + 80) + 16LL) + 224LL),
            *(struct _IOMMU_DMA_DOMAIN **)(v25 + 40));
    v27 = v26;
    if ( v26 < 0 )
    {
      WdLogSingleEntry1(1LL, v26);
      WdLogGlobalForLineNumber = 2924;
LABEL_8:
      DxgkLogInternalTriageEvent(v28, 0x40000LL);
      return v27;
    }
    LODWORD(v16) = v82;
    v14 = v93;
  }
  else
  {
    if ( (v21 & 8) == 0 )
      goto LABEL_11;
    HIDWORD(v80) = HIDWORD(a5);
    v30 = SysMmMapLogicalAddressRange(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(v15 + 24) + 224LL), 0LL);
    v27 = v30;
    if ( v30 < 0 )
    {
      WdLogSingleEntry1(1LL, v30);
      WdLogGlobalForLineNumber = 2942;
      goto LABEL_8;
    }
  }
  v18 = v95;
  v13 = a4;
  v20 = v91;
  *(_DWORD *)(a2 + 72) |= 0x800u;
LABEL_11:
  if ( (*(_BYTE *)(v20 + 476) & 1) == 0 )
    return 0LL;
  if ( a7 == 2 )
    *v18 = 0;
  *v14 = 0LL;
  v31 = *(_QWORD *)(a2 + 104);
  v32 = a11;
  v33 = (*(_QWORD *)(a2 + 112) - v31) >> 12;
  v34 = v31 >> 12;
  v88 = v31;
  if ( !a11 )
    v32 = v34 + v33;
  v87 = *(_DWORD *)(a2 + 72) & 0xF;
  v94 = *(_QWORD ***)(a2 + 64);
  v97 = *(_QWORD *)(a2 + 80);
  if ( v32 <= v34 )
  {
    WdLogSingleEntry2(1LL, v32, v34);
    WdLogGlobalForLineNumber = 2982;
    DxgkLogInternalTriageEvent(v35, 0x40000LL);
    return 3221225485LL;
  }
  v36 = *(_QWORD *)(a1 + 16) >> 12;
  if ( v32 > v36 )
  {
    WdLogSingleEntry2(1LL, v32, v36);
    WdLogGlobalForLineNumber = 2987;
    DxgkLogInternalTriageEvent(v37, 0x40000LL);
    return 3221225485LL;
  }
  v38 = -2;
  v39 = *(_DWORD **)(v20 + 480);
  if ( (*(_BYTE *)(a2 + 96) & 4) == 0 )
    v38 = v13;
  v40 = *(_QWORD *)(a1 + 120) + 32LL * (unsigned int)v16;
  LODWORD(v96) = v38;
  v85 = v39;
  v41 = *(VIDMM_PAGE_DIRECTORY **)v40;
  v92 = v41;
  if ( !v41 || (*(_DWORD *)v41 & 8) != 0 )
  {
    v86 = *(_DWORD *)(v40 + 16);
    v42 = (((v32 - 1) & *(_QWORD *)(v20 + 48LL * *(unsigned int *)(v20 + 468) + 144)) >> *(_QWORD *)(v20 + 48LL * *(unsigned int *)(v20 + 468) + 152))
        + 1;
    if ( v42 > v86 || !v41 )
    {
      v43 = *(_DWORD *)(v40 + 20);
      v84 = v43;
      if ( v41 && (*(_DWORD *)(a1 + 144) & 4) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3020;
        DxgkLogInternalTriageEvent(v44, 0x40000LL);
        return 3221225473LL;
      }
      NumberOfPte = *(_DWORD *)(v40 + 16);
      v46 = *(_DWORD *)(v40 + 20);
      if ( v39[4] == 2 )
      {
        *(_DWORD *)(v40 + 16) = v42;
        v47 = *(_QWORD *)(a1 + 88);
        v90.NumberOfPte = v42;
        v90.PhysicalAdapterIndex = v82;
        RootPageTableSize = ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v47 + 16), &v90);
        v20 = v91;
        v46 = RootPageTableSize;
        v43 = v84;
        *(_DWORD *)(v40 + 20) = RootPageTableSize;
        NumberOfPte = v90.NumberOfPte;
        *(_DWORD *)(v40 + 16) = v90.NumberOfPte;
      }
      if ( NumberOfPte < v42 || v46 < v43 )
      {
        WdLogSingleEntry1(1LL, NumberOfPte);
        WdLogGlobalForLineNumber = 3037;
        DxgkLogInternalTriageEvent(v79, 0x40000LL);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 72LL, a1, v40, v42);
        WdLogGlobalForLineNumber = 195;
        JUMPOUT(0x1400BEDD6LL);
      }
      PageDirectory = CreatePageDirectory((struct CVirtualAddressAllocator *)a1, v82, *(_DWORD *)(v20 + 468));
      *(_QWORD *)v40 = PageDirectory;
      if ( !PageDirectory )
      {
        _InterlockedIncrement(&dword_1400817C8);
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 3044;
        DxgkLogInternalTriageEvent(v50, 262145LL);
        *(_QWORD *)v40 = v92;
        *(_DWORD *)(v40 + 16) = v86;
        *(_DWORD *)(v40 + 20) = v84;
        return 3221225495LL;
      }
      if ( (*(_DWORD *)(a1 + 144) & 4) != 0 )
        *(_DWORD *)PageDirectory |= 0x80000u;
      if ( v92 )
      {
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *(VIDMM_PROCESS **)(a1 + 96),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 240LL),
          1u);
        v51 = *(_DWORD *)(v40 + 16);
        v52 = v92;
        *(_DWORD *)(v40 + 16) = v86;
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v52, (PRKPROCESS **)a1, 0LL);
        v53 = v93;
        *(_DWORD *)(v40 + 16) = v51;
        v54 = (int)CVirtualAddressAllocator::RecommitVirtualAddressRanges(
                     (CVirtualAddressAllocator *)a1,
                     1LL << v82,
                     v53);
        CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)a1, v82, 0LL, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 88), v82, v55);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *(VIDMM_PROCESS **)(a1 + 96),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 240LL),
          0);
        if ( (int)v54 < 0 )
        {
          WdLogSingleEntry1(1LL, v54);
          WdLogGlobalForLineNumber = 3094;
          DxgkLogInternalTriageEvent(v56, 0x40000LL);
          return (unsigned int)v54;
        }
      }
    }
  }
  v81 = 0;
  if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    v57 = *(struct _KTHREAD **)(a1 + 64);
    v59 = v57 == KeGetCurrentThread();
  }
  else
  {
    v59 = *(_QWORD *)(a1 + 64) == (_QWORD)KeGetCurrentThread();
  }
  if ( !v59 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a1 + 56));
    v81 = 1;
  }
  if ( (byte_140081242 & 0x40) != 0 )
  {
    LODWORD(v80) = v87;
    McTemplateK0pqxx_EtwWriteTransfer((__int64)v57, &CommitVirtualAddressStart, v58, v94, v80, v88, v33);
  }
  v60 = *(_QWORD *)(a2 + 128);
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  if ( v60 )
  {
    *((_QWORD *)&v99 + 1) = *(_QWORD *)(a2 + 120) >> 12;
    *((_QWORD *)&v103 + 1) = v60;
  }
  v61 = v98 | 1;
  *(_QWORD *)&v99 = *(_QWORD *)(a2 + 88);
  *(_QWORD *)&v98 = v98 | 1;
  if ( (_DWORD)v96 != -2 )
  {
    if ( (_DWORD)v96 == -3 )
    {
      BYTE12(v102) = 1;
      goto LABEL_70;
    }
    if ( (_DWORD)v96 == -1 )
      goto LABEL_70;
    v69 = *(_QWORD ***)(a2 + 64);
    v70 = *(_DWORD *)(a2 + 72) & 0xF;
    if ( v70 == 3 )
    {
LABEL_85:
      if ( a10 == 2 )
      {
        BYTE12(v102) = 1;
      }
      else
      {
        if ( a10 != 1 )
        {
          if ( (_WORD)v88 || !v85[3] || (*(_BYTE *)(a2 + 128) & 0xF) != 0 || *(_WORD *)(a2 + 120) )
            goto LABEL_107;
          if ( !(_DWORD)v96 )
          {
            if ( !(_WORD)a5 && (*(_DWORD *)(a1 + 144) & 4) == 0 && v69 && (*((_DWORD *)v69 + 7) & 0x100) != 0 )
              BYTE12(v102) = 1;
            goto LABEL_107;
          }
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 40232LL) + 8LL * v82)
                                                 + 1648LL)
                                     + 8LL * (unsigned int)(v96 - 1))
                         + 416LL) == 0x10000
            && !(_WORD)a5 )
          {
            v73 = BYTE12(v102);
            if ( (v33 & 0xF) == 0 )
              v73 = 1;
            BYTE12(v102) = v73;
          }
          if ( !v69 )
            goto LABEL_107;
          v74 = *((_DWORD *)*v69 + 8);
          if ( v74 )
          {
            if ( !(_WORD)v74 )
              goto LABEL_107;
          }
        }
        BYTE12(v102) = 0;
      }
LABEL_107:
      v67 = v85;
      v75 = v61 & 0xFFFFFFFFFFFE041FuLL | (32 * (v96 & 0x1F | ((unsigned __int64)(a3 & 0x3F) << 6)));
      *(_QWORD *)&v98 = v75;
      if ( (*v85 & 0x40) == 0 || v69 && (*(_DWORD *)v69[47] & 0x80u) != 0 )
      {
        v68 = a6;
      }
      else
      {
        v68 = a6;
        if ( (*(_DWORD *)(a1 + 144) & 4) == 0
          && (*((_DWORD *)a6 + 1) & 1) != 0
          && ((_DWORD)v96 || (*v85 & 0x800) != 0 && *(_BYTE *)(*(_QWORD *)(a1 + 88) + 40108LL)) )
        {
          HIBYTE(v102) = 1;
        }
      }
      if ( (*v85 & 0x10) != 0 && (v87 == 2 || v87 == 7 || v69 && (*(_DWORD *)v69[47] & 4) != 0) )
      {
        v75 |= 4uLL;
        *(_QWORD *)&v98 = v75;
      }
      if ( (*v85 & 1) != 0 && (*(_BYTE *)(a2 + 96) & 1) == 0 )
      {
        v75 |= 8uLL;
        *(_QWORD *)&v98 = v75;
      }
      if ( (*v85 & 2) != 0 && (*(_BYTE *)(a2 + 96) & 2) == 0 )
        *(_QWORD *)&v98 = v75 | 0x10;
      goto LABEL_71;
    }
    v71 = v70 - 1;
    if ( v71 )
    {
      v72 = v71 - 3;
      if ( v72 )
      {
        if ( v72 != 1 )
        {
LABEL_84:
          v69 = 0LL;
          goto LABEL_85;
        }
        v69 = (_QWORD **)v69[3];
      }
      else
      {
        v69 = (_QWORD **)v69[7];
      }
    }
    if ( v69 )
    {
      v69 = (_QWORD **)**v69;
      goto LABEL_85;
    }
    goto LABEL_84;
  }
  *(_QWORD *)&v98 = v61 | 2;
  if ( (_WORD)v88 || (v33 & 0xF) != 0 || (v59 = v85[3] == 0, BYTE12(v102) = 1, v59) )
    BYTE12(v102) = 0;
  v62 = *(__int64 **)(a2 + 64);
  v63 = *(_DWORD *)(a2 + 72) & 0xF;
  if ( v63 == 3 )
    goto LABEL_66;
  v64 = v63 - 1;
  if ( v64 )
  {
    v65 = v64 - 3;
    if ( v65 )
    {
      if ( v65 != 1 )
        goto LABEL_70;
      v62 = (__int64 *)v62[3];
    }
    else
    {
      v62 = (__int64 *)v62[7];
    }
  }
  if ( v62 )
  {
    v62 = *(__int64 **)*v62;
LABEL_66:
    if ( v62 )
    {
      v66 = *(_DWORD *)(*v62 + 32);
      if ( !v66 || (_WORD)v66 )
        BYTE12(v102) = 0;
    }
  }
LABEL_70:
  v67 = v85;
  v68 = a6;
LABEL_71:
  DWORD2(v102) = v96;
  *(_QWORD *)&v101 = v94;
  DWORD2(v101) = v87;
  v100 = *(_OWORD *)v68;
  if ( v87 == 3 )
  {
    *(_QWORD *)&v102 = v94;
  }
  else if ( v87 == 1 )
  {
    *(_QWORD *)&v102 = **v94;
  }
  if ( (*v67 & 0x80u) != 0 )
    *(_WORD *)((char *)&v102 + 13) = 257;
  v76 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
          *(VIDMM_PAGE_DIRECTORY **)v40,
          (struct CVirtualAddressAllocator *)a1,
          (const struct COMMIT_VA_STATE *)&v98,
          v97,
          v88,
          v33,
          a5,
          0,
          v93);
  if ( (byte_140081242 & 0x40) != 0 )
    McTemplateK0p_EtwWriteTransfer();
  if ( VIDMM_GLOBAL::MustFlushTlbOnValidTransition(*(VIDMM_GLOBAL **)(a1 + 88), v82) || BYTE1(v103) )
  {
    if ( a7 == 1 )
    {
      CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)a1, v78, v88, v88 + (v33 << 12));
      v78 = v82;
    }
    else if ( a7 == 2 )
    {
      *v95 = 1;
    }
  }
  if ( (_BYTE)v103 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 88), v78, v77);
    VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
      *(VIDMM_PROCESS **)(a1 + 96),
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 240LL),
      0);
  }
  *(_DWORD *)(a2 + 72) |= ((v76 >> 31) & 0xC00) + 1024;
  if ( v81 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(a1 + 64) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 56, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v76;
}
