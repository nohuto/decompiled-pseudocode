/*
 * XREFs of ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1400E8D80
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140035D1C (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140033150 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400365BC (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140036BD8 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140036C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1400371E0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1400A96C0 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400AF840 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400B0394 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B3D10 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140111560 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::FlushGpuVaTlb(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct _D3DGPU_PHYSICAL_ADDRESS *a3,
        struct VIDMM_PROCESS *a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  __int64 v9; // r15
  struct VIDMM_GLOBAL_ALLOC *v11; // r8
  LARGE_INTEGER v12; // r13
  ADAPTER_RENDER *v13; // r9
  ADAPTER_RENDER *v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v17; // xmm0
  __int64 v18; // rdx
  ADAPTER_RENDER *v19; // rcx
  UINT v20; // eax
  bool v21; // zf
  _OWORD *VaPagingHistoryEntry; // rax
  int v23; // edi
  void (*v24)(void *); // r8
  _QWORD v25[2]; // [rsp+48h] [rbp-C0h] BYREF
  char v26; // [rsp+58h] [rbp-B0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v27; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v28; // [rsp+1D8h] [rbp+D0h] BYREF

  v9 = a2;
  if ( !*((_BYTE *)this + 7016) && !*((_BYTE *)this + 40940) )
  {
    memset(&v27, 0, sizeof(v27));
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v9, v11, &v27);
    v12.QuadPart = a7;
    do
    {
      v13 = this[v9 + 79];
      if ( (*((_DWORD *)v13 + 7) & 4) == 0 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 29LL, v13, 0LL, 0LL);
        WdLogGlobalForLineNumber = 195;
      }
      v14 = this[v9 + 143];
      if ( *(_DWORD *)(*((_QWORD *)v14 + 16) + 32LL) )
        v15 = *(_QWORD *)(*((_QWORD *)v14 + 6) + 232LL);
      else
        v15 = *((_QWORD *)v14 + 8);
      v16 = *((unsigned int *)this + v9 + 414);
      v17 = (__int128)*a3;
      this[v9 + 335] = (ADAPTER_RENDER *)(v16 + v15);
      v18 = *((unsigned int *)this + v9 + 542);
      v27.pDmaBuffer = (void *)(v16 + v15);
      v19 = (ADAPTER_RENDER *)(v18 + *((_QWORD *)v14 + 15));
      this[v9 + 399] = v19;
      v20 = *((_DWORD *)this + v9 + 29) - v16;
      v27.pDmaBufferPrivateData = v19;
      v27.DmaSize = v20;
      v27.DmaBufferPrivateDataSize = *((_DWORD *)this + v9 + 93) - v18;
      v27.DmaBufferGpuVirtualAddress = *((_QWORD *)v14 + 11);
      *(_OWORD *)&v27.NotifyResidency.PhysicalAddress.SegmentOffset = __PAIR128__(a6, (unsigned __int64)a5);
      v27.DmaBufferWriteOffset = v16;
      v27.Operation = DXGK_OPERATION_FLUSH_TLB;
      *(_OWORD *)&v27.Transfer.hAllocation = v17;
      v27.Transfer.Source.SegmentAddress = v12;
      if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled((VIDMM_GLOBAL *)this)
        && (VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || this[5124]) )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(this + 5126, 0LL);
        v21 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
        this[5127] = KeGetCurrentThread();
        if ( v21 )
          VaPagingHistoryEntry = (_OWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 5LL, 64LL);
        else
          VaPagingHistoryEntry = operator new(64, (struct DXGK_LOG *)(this + 5129), 5u, 0);
        if ( VaPagingHistoryEntry )
        {
          *VaPagingHistoryEntry = *(_OWORD *)&v27.Transfer.hAllocation;
          VaPagingHistoryEntry[1] = *(_OWORD *)&v27.NotifyResidency.PhysicalAddress.SegmentOffset;
          *((_QWORD *)VaPagingHistoryEntry + 4) = v27.Transfer.Source.SegmentAddress.QuadPart;
          *((_DWORD *)VaPagingHistoryEntry + 14) = v9;
          *((_QWORD *)VaPagingHistoryEntry + 5) = *(_QWORD *)a4;
          *((_QWORD *)VaPagingHistoryEntry + 6) = *((_QWORD *)a4 + 4);
        }
        this[5127] = 0LL;
        ExReleasePushLockExclusiveEx(this + 5126, 0LL);
        KeLeaveCriticalRegion();
      }
      v23 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v27);
      v28 = 0LL;
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v9, 0LL, &v27, v23, 0, &v28, 0LL);
    }
    while ( v23 == -1071775743 );
    if ( (**(_DWORD **)(*((_QWORD *)this[5029] + v9) + 480LL) & 0x20) != 0 && (*((_DWORD *)a4 + 24) & 2) == 0 )
    {
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
      LODWORD(v25[0]) = -1;
      v25[1] = 0LL;
      if ( (qword_140081010 & 2) != 0 )
      {
        v26 = 1;
        LODWORD(v25[0]) = 8010;
        if ( (byte_140081242 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer();
      }
      else
      {
        v26 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry();
      VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)this, v9, 0, 0LL, 0LL, 0, 0);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)this, v9, v24);
      if ( (*((_DWORD *)a4 + 24) & 4) == 0 )
      {
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a4, *((_DWORD *)this[3] + 60), 1u);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a4, *((_DWORD *)this[3] + 60), 0);
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v25);
      if ( v26 )
      {
        if ( (byte_140081242 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer();
      }
    }
  }
}
