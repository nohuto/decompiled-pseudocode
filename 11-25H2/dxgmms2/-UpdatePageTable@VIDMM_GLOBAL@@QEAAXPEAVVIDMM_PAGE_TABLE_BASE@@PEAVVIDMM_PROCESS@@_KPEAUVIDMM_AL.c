/*
 * XREFs of ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEAU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400BA420
 * Callers:
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400B9124 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400B9468 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1400B9620 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400B9F20 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF680 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D03C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x14002D9CC (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14002D9EC (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140034800 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x140037A0C (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140038280 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400AB930 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400BC5E0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400BD134 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1400C2E50 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140112778 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::UpdatePageTable(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGE_TABLE_BASE *a2,
        struct VIDMM_PROCESS *a3,
        D3DGPU_VIRTUAL_ADDRESS a4,
        struct VIDMM_ALLOC *a5,
        struct VIDMM_GLOBAL_ALLOC *a6,
        UINT64 a7,
        UINT a8,
        LONG a9,
        struct _DXGK_PTE *a10,
        struct _DXGK_PTE *a11,
        unsigned int a12,
        UINT a13,
        SIZE_T a14,
        enum _DXGK_PAGETABLEUPDATEMODE a15,
        unsigned __int64 a16,
        LONG a17,
        unsigned __int64 a18)
{
  bool v18; // zf
  struct _DXGK_PTE *v21; // rsi
  unsigned int v22; // r14d
  LONG v23; // ebx
  struct VIDMM_GLOBAL_ALLOC *v24; // r8
  int v25; // eax
  enum _DXGK_PAGETABLEUPDATEMODE v26; // r12d
  __int64 v27; // rdi
  unsigned __int64 v28; // r10
  D3DGPU_VIRTUAL_ADDRESS v29; // r11
  __int64 v30; // r9
  _QWORD *v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  void *v35; // rcx
  UINT v36; // eax
  int v37; // eax
  DXGK_PTE *pPageTableEntries64KB; // rax
  SIZE_T v39; // rcx
  __int64 v40; // rsi
  __int64 v41; // rdi
  DXGGLOBAL *Global; // rax
  void *v43; // rax
  void (*v44)(void *); // r8
  unsigned int NumPageTableEntries; // esi
  __int64 v46; // rdi
  _OWORD *VaPagingHistoryEntry; // rax
  _OWORD *v48; // r10
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  DXGK_PTE *v53; // r8
  unsigned int v54; // edx
  __int64 v55; // r9
  __int128 v56; // xmm0
  __int64 v57; // rcx
  unsigned int v58; // r9d
  unsigned int v59; // edi
  unsigned __int64 v60; // rdx
  int v61; // edi
  UINT v62; // [rsp+44h] [rbp-BCh]
  __int64 v64; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v67; // [rsp+78h] [rbp-88h] BYREF
  __int64 v68; // [rsp+80h] [rbp-80h]
  struct _DXGK_PTE *v69; // [rsp+88h] [rbp-78h]
  struct _DXGKARG_BUILDPAGINGBUFFER v70; // [rsp+90h] [rbp-70h] BYREF
  __int128 v71; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned __int64 v72; // [rsp+2B8h] [rbp+1B8h]

  v18 = *((_BYTE *)this + 7016) == 0;
  v21 = a10;
  v22 = a12;
  v23 = a17;
  v69 = a10;
  if ( v18 )
  {
    memset(&v70, 0, sizeof(v70));
    v25 = *(_DWORD *)a2 & 7;
    v68 = a12;
    v62 = v25;
    v26 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    v27 = a12;
    if ( !*((_BYTE *)this + 40940) )
      v26 = a15;
    v64 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a12);
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, a12, v24, &v70);
    v28 = a18;
    v29 = a16 << 12;
    v72 = a16 << 12;
    do
    {
      v30 = *((_QWORD *)this + v27 + 79);
      if ( (*(_DWORD *)(v30 + 28) & 4) == 0 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 29LL, v30, 0LL, 0LL);
        WdLogGlobalForLineNumber = 195;
      }
      v31 = (_QWORD *)*((_QWORD *)this + v27 + 143);
      if ( *(_DWORD *)(v31[16] + 32LL) )
        v32 = *(_QWORD *)(v31[6] + 216LL);
      else
        v32 = v31[8];
      v33 = *((unsigned int *)this + v27 + 414);
      *((_QWORD *)this + v27 + 335) = v33 + v32;
      v34 = *((unsigned int *)this + v27 + 542);
      v70.pDmaBuffer = (void *)(v33 + v32);
      v35 = (void *)(v34 + v31[15]);
      *((_QWORD *)this + v27 + 399) = v35;
      v36 = *((_DWORD *)this + v27 + 29) - v33;
      v70.pDmaBufferPrivateData = v35;
      v70.DmaSize = v36;
      v70.DmaBufferPrivateDataSize = *((_DWORD *)this + v27 + 93) - v34;
      v70.DmaBufferGpuVirtualAddress = v31[11];
      v37 = v23;
      v70.DmaBufferWriteOffset = v33;
      v70.Operation = DXGK_OPERATION_UPDATE_PAGE_TABLE;
      v70.Transfer.Destination.SegmentAddress.HighPart = v23;
      v70.UnmapApertureSegment.DummyPage.HighPart = a9;
      v71 = 0LL;
      if ( (unsigned int)v26 <= DXGK_PAGETABLEUPDATE_GPU_VIRTUAL )
      {
        v70.Transfer.TransferSize = a14;
      }
      else
      {
        v70.Fill.FillPattern = a13;
        v70.MapApertureSegment.OffsetInPages = a14;
      }
      v70.ReadPhysical.SegmentId = v62;
      v70.Transfer.Destination.SegmentId = a8;
      if ( v21 )
      {
        v70.UpdatePageTable.pPageTableEntries64KB = a11;
        v70.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v21;
      }
      else
      {
        v70.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)&v71;
        pPageTableEntries64KB = (DXGK_PTE *)&v71;
        if ( **(char **)(v64 + 480) >= 0 )
          pPageTableEntries64KB = v70.UpdatePageTable.pPageTableEntries64KB;
        v70.UpdatePageTable.pPageTableEntries64KB = pPageTableEntries64KB;
        v37 = v23 | 1;
        v70.Transfer.Destination.SegmentAddress.HighPart = v23 | 1;
      }
      v70.Reserved.Reserved[20] = v26;
      v70.UpdatePageTable.FirstPteVirtualAddress = v29;
      if ( v62 )
        goto LABEL_25;
      if ( v28 == 16 )
      {
        if ( (v23 & 8) == 0 )
          goto LABEL_25;
      }
      else if ( v28 != 1 || (v23 & 8) != 0 )
      {
        goto LABEL_25;
      }
      v70.Transfer.Destination.SegmentAddress.HighPart = v37 | 1;
LABEL_25:
      v70.TransferVirtual.DestinationPageTable = a4;
      if ( a6 )
      {
        v39 = *(_QWORD *)(*((_QWORD *)a6 + 47) + 48LL);
        v70.UpdatePageTable.AllocationOffsetInBytes = a7;
        v70.Fill.FillSize = v39;
      }
      v40 = *(unsigned int *)(*((_QWORD *)this + 3) + 240LL);
      v41 = *((_QWORD *)a3 + 4);
      Global = DXGGLOBAL::GetGlobal();
      if ( (unsigned int)v40 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global)
        && *(_QWORD *)(8 * v40 + *(_QWORD *)(v41 + 48)) )
      {
        _mm_lfence();
        v43 = *(void **)(*(_QWORD *)(*(_QWORD *)(v41 + 48) + 8 * v40) + 48LL);
      }
      else
      {
        v43 = 0LL;
      }
      v70.UpdatePageTable.hProcess = v43;
      if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this)
        && (VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5124)) )
      {
        NumPageTableEntries = v70.UpdatePageTable.NumPageTableEntries;
        if ( (v70.Reserved.Reserved[13] & 1) != 0 )
          NumPageTableEntries = 1;
        v46 = 16LL * (NumPageTableEntries - 1);
        if ( v70.UpdatePageTable.pPageTableEntries64KB )
          v46 += 16LL * NumPageTableEntries;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)this + 41008, 0LL);
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        v18 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
        *((_QWORD *)this + 5127) = KeGetCurrentThread();
        if ( v18 )
          VaPagingHistoryEntry = (_OWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 4LL, v46 + 168);
        else
          VaPagingHistoryEntry = operator new(168, (VIDMM_GLOBAL *)((char *)this + 41032), 4u, v46);
        v48 = VaPagingHistoryEntry;
        if ( VaPagingHistoryEntry )
        {
          *VaPagingHistoryEntry = *(_OWORD *)&v70.Transfer.hAllocation;
          VaPagingHistoryEntry[1] = *(_OWORD *)&v70.NotifyResidency.PhysicalAddress.SegmentOffset;
          VaPagingHistoryEntry[2] = *(_OWORD *)&v70.Reserved.Reserved[8];
          VaPagingHistoryEntry[3] = *(_OWORD *)&v70.Reserved.Reserved[12];
          VaPagingHistoryEntry[4] = *(_OWORD *)&v70.Reserved.Reserved[16];
          VaPagingHistoryEntry[5] = *(_OWORD *)&v70.Reserved.Reserved[20];
          *((_QWORD *)VaPagingHistoryEntry + 12) = v70.UpdatePageTable.FirstPteVirtualAddress;
          *((_DWORD *)VaPagingHistoryEntry + 36) = a12;
          *((_QWORD *)VaPagingHistoryEntry + 15) = a5;
          *((_QWORD *)VaPagingHistoryEntry + 16) = a6;
          *((_QWORD *)VaPagingHistoryEntry + 13) = *(_QWORD *)a3;
          *((_QWORD *)VaPagingHistoryEntry + 14) = *((_QWORD *)a3 + 4);
          if ( a5 && (v49 = *((_QWORD *)a5 + 2)) != 0 )
          {
            v50 = *(_QWORD *)(v49 + 32);
          }
          else if ( a6 )
          {
            v50 = *(_QWORD *)(*((_QWORD *)a6 + 47) + 48LL);
          }
          else
          {
            v50 = 0LL;
          }
          *((_QWORD *)v48 + 17) = v50;
          if ( NumPageTableEntries )
          {
            v51 = 0LL;
            v52 = NumPageTableEntries;
            do
            {
              ++v51;
              *(_OWORD *)((char *)&v48[v51 + 8] + 8) = *(_OWORD *)(v51 * 16
                                                                 + v70.Transfer.Source.SegmentAddress.QuadPart
                                                                 - 16);
              --v52;
            }
            while ( v52 );
          }
          v53 = v70.UpdatePageTable.pPageTableEntries64KB;
          if ( v70.UpdatePageTable.pPageTableEntries64KB )
          {
            v54 = 0;
            if ( NumPageTableEntries )
            {
              v55 = 0LL;
              while ( 1 )
              {
                v56 = *(_OWORD *)&v53[v55].0;
                v57 = v54 + NumPageTableEntries;
                ++v54;
                ++v55;
                *(_OWORD *)((char *)&v48[v57 + 9] + 8) = v56;
                if ( v54 >= NumPageTableEntries )
                  break;
                v53 = v70.UpdatePageTable.pPageTableEntries64KB;
              }
            }
          }
        }
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *((_QWORD *)this + 5127) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 41008, 0LL);
        KeLeaveCriticalRegion();
        v22 = a12;
      }
      if ( *((_QWORD *)this + 5133) )
      {
        if ( !v70.ReadPhysical.SegmentId && (v70.Reserved.Reserved[13] & 1) == 0 )
        {
          v58 = v70.UpdatePageTable.NumPageTableEntries;
          v59 = 0;
          if ( v70.UnmapApertureSegment.DummyPage.HighPart )
          {
            do
            {
              v44 = (void (*)(void *))(2LL * v59);
              v60 = *(_QWORD *)(v70.Transfer.Source.SegmentAddress.QuadPart + 16LL * v59);
              if ( (v60 & 1) != 0 )
              {
                VIDMM_GLOBAL::RecordPageMappingHistory(this, (v60 >> 5) & 0x1F);
                v58 = v70.UpdatePageTable.NumPageTableEntries;
              }
              ++v59;
            }
            while ( v59 < v58 );
            v23 = a17;
          }
        }
      }
      if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 0x200) != 0
        && v26 == DXGK_PAGETABLEUPDATE_CPU_VIRTUAL
        && *(_QWORD *)(v64 + 1704) != v64 + 1704
        && *((_BYTE *)this + 40943)
        && (v23 & 2) != 0 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v22, v44);
        *((_BYTE *)this + 40943) = 0;
      }
      v61 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v70);
      v67 = 0LL;
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v22, 0LL, &v70, v61, 0, &v67, a2);
      v21 = v69;
      v18 = v61 == -1071775743;
      v27 = v68;
      v28 = a18;
      v29 = v72;
    }
    while ( v18 );
  }
}
