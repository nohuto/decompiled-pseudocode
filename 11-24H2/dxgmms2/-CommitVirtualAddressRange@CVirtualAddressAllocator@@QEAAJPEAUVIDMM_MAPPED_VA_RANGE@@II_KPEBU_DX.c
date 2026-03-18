/*
 * XREFs of ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400ADD10
 * Callers:
 *     ?RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z @ 0x1400399F4 (-RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z.c)
 *     ?RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@I@Z @ 0x1400980C8 (-RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDM.c)
 *     ?MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z @ 0x14009AAF8 (-MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14009F494 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1400AD738 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_.c)
 *     CommitAllocationVirtualAddressCb @ 0x1400ADB50 (CommitAllocationVirtualAddressCb.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400AEA70 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D23B0 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400F71BC (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400F95B8 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x140111178 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1401117CC (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140112AB8 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1400249FC (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x1400359E0 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140035A00 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140035D1C (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1400440F4 (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 *     ?SysMmMapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@PEAU_IOMMU_DMA_DOMAIN@@_K22PEBU_DXGK_ADL@@_N@Z @ 0x14004B0AC (-SysMmMapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@PEAU_IOMMU_DMA_DOMAIN@@_K22PEBU_DXGK_ADL@@_N.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1400A96C0 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400A9D98 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z @ 0x1400B03F8 (-MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B3D10 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D23B0 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1400DA9AC (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F28C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
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
  _BYTE *v14; // rbx
  int v15; // r10d
  __int64 v16; // rdx
  __int64 v17; // r11
  struct VIDMM_ALLOC **v18; // r8
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // r13
  char v22; // al
  __int64 v23; // r14
  __int64 v24; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // r12
  __int64 v29; // rcx
  __int64 result; // rax
  int v31; // eax
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // r8
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // r8
  __int64 v41; // r13
  VIDMM_PAGE_DIRECTORY *v42; // r12
  UINT v43; // ebx
  unsigned int v44; // ecx
  __int64 v45; // rcx
  UINT NumberOfPte; // eax
  unsigned int v47; // edx
  __int64 v48; // rax
  unsigned int RootPageTableSize; // eax
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v51; // rcx
  int v52; // ebx
  struct _KTHREAD *v53; // rcx
  unsigned __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // r9
  bool v57; // zf
  __int64 *v58; // rcx
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // ecx
  _DWORD *v63; // r10
  struct _DXGK_ADL *v64; // r14
  _QWORD **v65; // r8
  int v66; // eax
  int v67; // eax
  int v68; // eax
  char v69; // al
  int v70; // ecx
  unsigned __int64 v71; // rdx
  int v72; // r14d
  unsigned int v73; // r10d
  __int64 v74; // rcx
  unsigned __int64 v75; // [rsp+20h] [rbp-E0h]
  char v76; // [rsp+50h] [rbp-B0h]
  unsigned int v77; // [rsp+54h] [rbp-ACh]
  unsigned int v79; // [rsp+58h] [rbp-A8h]
  _DWORD *v80; // [rsp+68h] [rbp-98h]
  UINT v81; // [rsp+70h] [rbp-90h]
  int v82; // [rsp+74h] [rbp-8Ch]
  unsigned __int64 v83; // [rsp+80h] [rbp-80h]
  _DXGKARG_GETROOTPAGETABLESIZE v85; // [rsp+90h] [rbp-70h] BYREF
  __int64 v86; // [rsp+98h] [rbp-68h]
  _QWORD **v87; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v88; // [rsp+A8h] [rbp-58h]
  _BYTE *v89; // [rsp+B0h] [rbp-50h]
  __int64 v90; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v91; // [rsp+C0h] [rbp-40h]
  __int128 v92; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v93; // [rsp+E0h] [rbp-20h]
  __int128 v94; // [rsp+F0h] [rbp-10h]
  __int128 v95; // [rsp+100h] [rbp+0h]
  __int128 v96; // [rsp+110h] [rbp+10h]
  __int128 v97; // [rsp+120h] [rbp+20h]

  v12 = *(_DWORD *)(a2 + 72);
  v14 = a9;
  v15 = a4;
  v16 = *(_QWORD *)(a1 + 88);
  v17 = (v12 >> 4) & 0x3F;
  v18 = a8;
  v19 = *(_QWORD *)(v16 + 40232);
  v89 = a9;
  v20 = *(_QWORD *)(v19 + 8 * v17);
  v86 = v20;
  v77 = (v12 >> 4) & 0x3F;
  v21 = (unsigned int)v17;
  if ( (v12 & 0x800) == 0 )
  {
    v22 = *(_BYTE *)(v20 + 476);
    if ( (v22 & 4) != 0 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL);
      v24 = *(unsigned int *)(*(_QWORD *)(v16 + 24) + 240LL);
      Global = DXGGLOBAL::GetGlobal();
      if ( (unsigned int)v24 >= (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
      {
        v26 = 0LL;
      }
      else
      {
        _mm_lfence();
        v26 = *(_QWORD *)(*(_QWORD *)(v23 + 48) + 8 * v24);
      }
      HIDWORD(v75) = HIDWORD(a5);
      v27 = SysMmMapLogicalAddressRange(
              *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*(_QWORD *)(v26 + 80) + 16LL) + 224LL),
              *(struct _IOMMU_DMA_DOMAIN **)(v26 + 40));
      LODWORD(v28) = v27;
      if ( v27 < 0 )
      {
        WdLogSingleEntry1(1LL, v27);
        WdLogGlobalForLineNumber = 3328;
LABEL_8:
        DxgkLogInternalTriageEvent(v29, 0x40000LL);
        return (unsigned int)v28;
      }
      v14 = v89;
LABEL_10:
      v18 = a8;
      LODWORD(v17) = v77;
      v15 = a4;
      v20 = v86;
      *(_DWORD *)(a2 + 72) |= 0x800u;
      goto LABEL_11;
    }
    if ( (v22 & 8) != 0 )
    {
      HIDWORD(v75) = HIDWORD(a5);
      v31 = SysMmMapLogicalAddressRange(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(v16 + 24) + 224LL), 0LL);
      LODWORD(v28) = v31;
      if ( v31 < 0 )
      {
        WdLogSingleEntry1(1LL, v31);
        WdLogGlobalForLineNumber = 3346;
        goto LABEL_8;
      }
      goto LABEL_10;
    }
  }
LABEL_11:
  if ( (*(_BYTE *)(v20 + 476) & 1) == 0 )
    return 0LL;
  if ( a7 == 2 )
    *v14 = 0;
  v32 = a11;
  *v18 = 0LL;
  v33 = *(_QWORD *)(a2 + 104);
  v34 = v33 >> 12;
  v35 = (*(_QWORD *)(a2 + 112) - v33) >> 12;
  v83 = v33;
  v88 = v35;
  if ( !a11 )
    v32 = v34 + v35;
  v82 = *(_DWORD *)(a2 + 72) & 0xF;
  v87 = *(_QWORD ***)(a2 + 64);
  v91 = *(_QWORD *)(a2 + 80);
  if ( v32 <= v34 )
  {
    WdLogSingleEntry2(1LL, v32, v33 >> 12);
    WdLogGlobalForLineNumber = 3386;
    DxgkLogInternalTriageEvent(v36, 0x40000LL);
    return 3221225485LL;
  }
  v37 = *(_QWORD *)(a1 + 16) >> 12;
  if ( v32 > v37 )
  {
    WdLogSingleEntry2(1LL, v32, v37);
    WdLogGlobalForLineNumber = 3391;
    DxgkLogInternalTriageEvent(v38, 0x40000LL);
    return 3221225485LL;
  }
  v39 = -2;
  v40 = *(_QWORD *)(v20 + 480);
  if ( (*(_BYTE *)(a2 + 96) & 4) == 0 )
    v39 = v15;
  v80 = *(_DWORD **)(v20 + 480);
  v41 = *(_QWORD *)(a1 + 120) + 32 * v21;
  LODWORD(v90) = v39;
  v42 = *(VIDMM_PAGE_DIRECTORY **)v41;
  if ( !*(_QWORD *)v41 || (*(_DWORD *)v42 & 8) != 0 )
  {
    v81 = *(_DWORD *)(v41 + 16);
    v43 = (((v32 - 1) & *(_QWORD *)(v20 + 48LL * *(unsigned int *)(v20 + 468) + 144)) >> *(_QWORD *)(v20 + 48LL * *(unsigned int *)(v20 + 468) + 152))
        + 1;
    if ( v43 > v81 || !v42 )
    {
      v44 = *(_DWORD *)(v41 + 20);
      v79 = v44;
      if ( v42 && (*(_DWORD *)(a1 + 144) & 4) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3424;
        DxgkLogInternalTriageEvent(v45, 0x40000LL);
        return 3221225473LL;
      }
      NumberOfPte = *(_DWORD *)(v41 + 16);
      v47 = *(_DWORD *)(v41 + 20);
      if ( *(_DWORD *)(v40 + 16) == 2 )
      {
        *(_DWORD *)(v41 + 16) = v43;
        v48 = *(_QWORD *)(a1 + 88);
        v85.NumberOfPte = v43;
        v85.PhysicalAdapterIndex = v17;
        RootPageTableSize = ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v48 + 16), &v85);
        v20 = v86;
        v47 = RootPageTableSize;
        v44 = v79;
        *(_DWORD *)(v41 + 20) = RootPageTableSize;
        NumberOfPte = v85.NumberOfPte;
        *(_DWORD *)(v41 + 16) = v85.NumberOfPte;
      }
      if ( NumberOfPte < v43 || v47 < v44 )
      {
        WdLogSingleEntry1(1LL, NumberOfPte);
        WdLogGlobalForLineNumber = 3441;
        DxgkLogInternalTriageEvent(v74, 0x40000LL);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 72LL, a1, v41, v43);
        WdLogGlobalForLineNumber = 195;
        JUMPOUT(0x1400AE7DDLL);
      }
      PageDirectory = CreatePageDirectory((struct CVirtualAddressAllocator *)a1, v77, *(_DWORD *)(v20 + 468));
      *(_QWORD *)v41 = PageDirectory;
      if ( !PageDirectory )
      {
        _InterlockedIncrement(&dword_1400817E8);
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 3448;
        DxgkLogInternalTriageEvent(v51, 262145LL);
        *(_DWORD *)(v41 + 16) = v81;
        *(_DWORD *)(v41 + 20) = v79;
        result = 3221225495LL;
        *(_QWORD *)v41 = v42;
        return result;
      }
      if ( (*(_DWORD *)(a1 + 144) & 4) != 0 )
        *(_DWORD *)PageDirectory |= 0x80000u;
      if ( v42 )
      {
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *(VIDMM_PROCESS **)(a1 + 96),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 240LL),
          1u);
        v52 = *(_DWORD *)(v41 + 16);
        *(_DWORD *)(v41 + 16) = v81;
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v42, (PRKPROCESS **)a1, 0LL);
        *(_DWORD *)(v41 + 16) = v52;
        v28 = (int)CVirtualAddressAllocator::RecommitVirtualAddressRanges(
                     (CVirtualAddressAllocator *)a1,
                     1LL << v77,
                     a8);
        CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)a1, v77, 0LL, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 88), v77);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *(VIDMM_PROCESS **)(a1 + 96),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 240LL),
          0);
        if ( (int)v28 < 0 )
        {
          WdLogSingleEntry1(1LL, v28);
          WdLogGlobalForLineNumber = 3498;
          goto LABEL_8;
        }
      }
    }
  }
  v53 = *(struct _KTHREAD **)(a1 + 64);
  v76 = 0;
  if ( v53 != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a1 + 56));
    v76 = 1;
  }
  v54 = v88;
  if ( (byte_140081242 & 0x40) != 0 )
  {
    LODWORD(v75) = v82;
    McTemplateK0pqxx_EtwWriteTransfer((__int64)v53, &CommitVirtualAddressStart, v40, v87, v75, v83, v88);
  }
  v55 = *(_QWORD *)(a2 + 128);
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  if ( v55 )
  {
    *((_QWORD *)&v93 + 1) = *(_QWORD *)(a2 + 120) >> 12;
    *((_QWORD *)&v97 + 1) = v55;
  }
  v56 = v92 | 1;
  *(_QWORD *)&v93 = *(_QWORD *)(a2 + 88);
  *(_QWORD *)&v92 = v92 | 1;
  if ( (_DWORD)v90 != -2 )
  {
    if ( (_DWORD)v90 == -3 )
    {
      BYTE12(v96) = 1;
      goto LABEL_67;
    }
    if ( (_DWORD)v90 == -1 )
      goto LABEL_67;
    v65 = *(_QWORD ***)(a2 + 64);
    v66 = *(_DWORD *)(a2 + 72) & 0xF;
    if ( v66 == 3 )
    {
LABEL_82:
      if ( a10 == 2 )
      {
        BYTE12(v96) = 1;
      }
      else
      {
        if ( a10 != 1 )
        {
          if ( (_WORD)v83 || !v80[3] || (*(_BYTE *)(a2 + 128) & 0xF) != 0 || *(_WORD *)(a2 + 120) )
            goto LABEL_104;
          if ( !(_DWORD)v90 )
          {
            if ( !(_WORD)a5 && (*(_DWORD *)(a1 + 144) & 4) == 0 && v65 && (*((_DWORD *)v65 + 7) & 0x100) != 0 )
              BYTE12(v96) = 1;
            goto LABEL_104;
          }
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 40232LL) + 8LL * v77)
                                                 + 1648LL)
                                     + 8LL * (unsigned int)(v90 - 1))
                         + 416LL) == 0x10000
            && !(_WORD)a5 )
          {
            v69 = BYTE12(v96);
            if ( (v54 & 0xF) == 0 )
              v69 = 1;
            BYTE12(v96) = v69;
          }
          if ( !v65 )
            goto LABEL_104;
          v70 = *((_DWORD *)*v65 + 8);
          if ( v70 )
          {
            if ( !(_WORD)v70 )
              goto LABEL_104;
          }
        }
        BYTE12(v96) = 0;
      }
LABEL_104:
      v63 = v80;
      v71 = v56 & 0xFFFFFFFFFFFE041FuLL | (32 * (v90 & 0x1F | ((unsigned __int64)(a3 & 0x3F) << 6)));
      *(_QWORD *)&v92 = v71;
      if ( (*v80 & 0x40) == 0 || v65 && (*(_DWORD *)v65[49] & 0x80u) != 0 )
      {
        v64 = a6;
      }
      else
      {
        v64 = a6;
        if ( (*(_DWORD *)(a1 + 144) & 4) == 0
          && (*((_DWORD *)a6 + 1) & 1) != 0
          && ((_DWORD)v90 || (*v80 & 0x800) != 0 && *(_BYTE *)(*(_QWORD *)(a1 + 88) + 40108LL)) )
        {
          HIBYTE(v96) = 1;
        }
      }
      if ( (*v80 & 0x10) != 0 && (v82 == 2 || v82 == 7 || v65 && (*(_DWORD *)v65[49] & 4) != 0) )
      {
        v71 |= 4uLL;
        *(_QWORD *)&v92 = v71;
      }
      if ( (*v80 & 1) != 0 && (*(_BYTE *)(a2 + 96) & 1) == 0 )
      {
        v71 |= 8uLL;
        *(_QWORD *)&v92 = v71;
      }
      if ( (*v80 & 2) != 0 && (*(_BYTE *)(a2 + 96) & 2) == 0 )
        *(_QWORD *)&v92 = v71 | 0x10;
      goto LABEL_68;
    }
    v67 = v66 - 1;
    if ( v67 )
    {
      v68 = v67 - 3;
      if ( v68 )
      {
        if ( v68 != 1 )
        {
LABEL_81:
          v65 = 0LL;
          goto LABEL_82;
        }
        v65 = (_QWORD **)v65[3];
      }
      else
      {
        v65 = (_QWORD **)v65[7];
      }
    }
    if ( v65 )
    {
      v65 = (_QWORD **)**v65;
      goto LABEL_82;
    }
    goto LABEL_81;
  }
  *(_QWORD *)&v92 = v56 | 2;
  if ( (_WORD)v83 || (v54 & 0xF) != 0 || (v57 = v80[3] == 0, BYTE12(v96) = 1, v57) )
    BYTE12(v96) = 0;
  v58 = *(__int64 **)(a2 + 64);
  v59 = *(_DWORD *)(a2 + 72) & 0xF;
  if ( v59 == 3 )
    goto LABEL_63;
  v60 = v59 - 1;
  if ( v60 )
  {
    v61 = v60 - 3;
    if ( v61 )
    {
      if ( v61 != 1 )
        goto LABEL_67;
      v58 = (__int64 *)v58[3];
    }
    else
    {
      v58 = (__int64 *)v58[7];
    }
  }
  if ( v58 )
  {
    v58 = *(__int64 **)*v58;
LABEL_63:
    if ( v58 )
    {
      v62 = *(_DWORD *)(*v58 + 32);
      if ( !v62 || (_WORD)v62 )
        BYTE12(v96) = 0;
    }
  }
LABEL_67:
  v63 = v80;
  v64 = a6;
LABEL_68:
  DWORD2(v96) = v90;
  *(_QWORD *)&v95 = v87;
  DWORD2(v95) = v82;
  v94 = *(_OWORD *)v64;
  if ( v82 == 3 )
  {
    *(_QWORD *)&v96 = v87;
  }
  else if ( v82 == 1 )
  {
    *(_QWORD *)&v96 = **v87;
  }
  if ( (*v63 & 0x80u) != 0 )
    *(_WORD *)((char *)&v96 + 13) = 257;
  v72 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
          *(VIDMM_PAGE_DIRECTORY **)v41,
          (struct CVirtualAddressAllocator *)a1,
          (const struct COMMIT_VA_STATE *)&v92,
          v91,
          v83,
          v54,
          a5,
          0,
          a8);
  if ( (byte_140081242 & 0x40) != 0 )
    McTemplateK0p_EtwWriteTransfer();
  if ( VIDMM_GLOBAL::MustFlushTlbOnValidTransition(*(VIDMM_GLOBAL **)(a1 + 88), v77) || BYTE1(v97) )
  {
    if ( a7 == 1 )
    {
      CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)a1, v73, v83, v83 + (v54 << 12));
      v73 = v77;
    }
    else if ( a7 == 2 )
    {
      *v89 = 1;
    }
  }
  if ( (_BYTE)v97 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 88), v73);
    VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
      *(VIDMM_PROCESS **)(a1 + 96),
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 240LL),
      0);
  }
  *(_DWORD *)(a2 + 72) |= ((v72 >> 31) & 0xC00) + 1024;
  if ( v76 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 56, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v72;
}
