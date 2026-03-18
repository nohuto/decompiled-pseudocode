/*
 * XREFs of ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1400AF41C
 * Callers:
 *     ?MapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@HH@Z @ 0x1401156D0 (-MapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@HH@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140036BD8 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140092BE8 (-BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140093488 (-EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400AF840 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400B0394 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400F7E8C (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        UINT a4,
        unsigned __int64 a5,
        SIZE_T a6,
        PMDL MemoryDescriptorList,
        unsigned int a8,
        char a9,
        int a10)
{
  D3DGPU_VIRTUAL_ADDRESS v10; // r12
  UINT v11; // ebx
  __int64 v13; // r13
  PVOID MappedSystemVa; // rax
  struct VIDMM_GLOBAL_ALLOC *v16; // r8
  ADAPTER_RENDER *v17; // r9
  ADAPTER_RENDER *v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  ADAPTER_RENDER *v22; // rcx
  UINT v23; // eax
  char *v24; // r14
  char *v25; // rdx
  SIZE_T v26; // rax
  int v27; // ebx
  bool v28; // zf
  unsigned __int64 LogicalAddress; // rax
  _DWORD *v30; // rcx
  unsigned __int64 v31; // r8
  SIZE_T v32; // rdx
  struct _LIST_ENTRY v33; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v35; // [rsp+60h] [rbp-A0h] BYREF
  UINT64 v36; // [rsp+1E0h] [rbp+E0h]

  v10 = 0LL;
  v11 = a4;
  v13 = a2;
  v36 = 0LL;
  v33 = 0LL;
  if ( !a10 && (**((_DWORD **)a3 + 49) & 0x2000) != 0 )
  {
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    else
LABEL_27:
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    v36 = (UINT64)MappedSystemVa;
  }
  if ( (*((_BYTE *)this + 40937) & 4) != 0 )
  {
    v33.Blink = &v33;
    v33.Flink = &v33;
    VIDMM_GLOBAL::BeginVirtualCopyExclusiveAccess((VIDMM_GLOBAL *)this, &v33);
  }
  memset(&v35, 0, sizeof(v35));
  VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v13, v16, &v35);
  do
  {
    if ( a3 )
    {
      v24 = (char *)a3 + 392;
      if ( (**((_DWORD **)a3 + 49) & 0x10000000) != 0 )
      {
        v35.pDmaBuffer = 0LL;
        v35.pDmaBufferPrivateData = 0LL;
        v35.DmaSize = 0;
        v35.DmaBufferPrivateDataSize = 0;
        this[v13 + 335] = 0LL;
        this[v13 + 399] = 0LL;
LABEL_14:
        v25 = v24;
        if ( *((_QWORD *)a3 + 6) && (**(_DWORD **)v24 & 0x10000000) == 0 && (*((_DWORD *)a3 + 8) & 4) == 0 )
        {
          DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a3 + 136));
          v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 32LL) - 32LL) + 24LL) + 616LL);
          DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 17);
          v11 = a4;
          v25 = (char *)a3 + 392;
        }
        goto LABEL_18;
      }
    }
    v17 = this[v13 + 79];
    if ( (*((_DWORD *)v17 + 7) & 4) == 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 29LL, v17, a3, 0LL);
      WdLogGlobalForLineNumber = 195;
      goto LABEL_27;
    }
    v18 = this[v13 + 143];
    if ( *(_DWORD *)(*((_QWORD *)v18 + 16) + 32LL) )
      v19 = *(_QWORD *)(*((_QWORD *)v18 + 6) + 232LL);
    else
      v19 = *((_QWORD *)v18 + 8);
    v20 = *((unsigned int *)this + v13 + 414);
    this[v13 + 335] = (ADAPTER_RENDER *)(v20 + v19);
    v21 = *((unsigned int *)this + v13 + 542);
    v35.pDmaBuffer = (void *)(v20 + v19);
    v22 = (ADAPTER_RENDER *)(v21 + *((_QWORD *)v18 + 15));
    this[v13 + 399] = v22;
    v23 = *((_DWORD *)this + v13 + 29) - v20;
    v35.pDmaBufferPrivateData = v22;
    v35.DmaSize = v23;
    v35.DmaBufferPrivateDataSize = *((_DWORD *)this + v13 + 93) - v21;
    v35.DmaBufferGpuVirtualAddress = *((_QWORD *)v18 + 11);
    v35.DmaBufferWriteOffset = v20;
    v24 = (char *)a3 + 392;
    v25 = (char *)a3 + 392;
    if ( a3 )
      goto LABEL_14;
LABEL_18:
    if ( (*((_BYTE *)this + 40937) & 8) != 0 )
    {
      LogicalAddress = VidMmiGetLogicalAddress(*((void **)a3 + 46), 0LL);
      v30 = *(_DWORD **)v24;
      v31 = LogicalAddress;
      v35.Operation = DXGK_OPERATION_SIGNAL_MONITORED_FENCE|DXGK_OPERATION_FILL;
      v32 = *((_QWORD *)v30 + 6);
      v35.MapApertureSegment.OffsetInPages = a6;
      v35.Transfer.Source.SegmentAddress.QuadPart = a5;
      v35.Fill.FillSize = v32;
      v35.UpdatePageTable.AllocationOffsetInBytes = v36;
      LODWORD(LogicalAddress) = MemoryDescriptorList->ByteCount >> 12;
      v35.UpdateContextAllocation.ContextAllocation = v10;
      v10 = 0LL;
      v35.Fill.FillPattern = v11;
      v35.TransferVirtual.DestinationPageTable = a9 & 1 | (unsigned __int64)(v35.Transfer.Flags.Value & 0xFFFFFFFE);
      v35.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)LogicalAddress;
      if ( v31 )
      {
        v35.Transfer.Destination.SegmentAddress.QuadPart = v31 >> 12;
        v35.UnmapApertureSegment.DummyPage.HighPart = 1;
      }
      else
      {
        v35.Transfer.Destination.SegmentAddress.QuadPart = (LONGLONG)&MemoryDescriptorList[1];
      }
    }
    else
    {
      v35.Operation = DXGK_OPERATION_MAP_APERTURE_SEGMENT;
      if ( a3 )
        v26 = *(_QWORD *)(*(_QWORD *)v25 + 48LL);
      else
        v26 = 0LL;
      v35.Fill.FillSize = v26;
      v35.MapApertureSegment.OffsetInPages = a6;
      v35.Transfer.Source.SegmentAddress.QuadPart = a5;
      v35.UpdateContextAllocation.ContextAllocation = v10;
      v35.Fill.FillPattern = v11;
      v10 = 0LL;
      v35.UnmapApertureSegment.DummyPage.QuadPart = (LONGLONG)MemoryDescriptorList;
      v35.Transfer.Destination.SegmentAddress.QuadPart = a9 & 1 | (unsigned __int64)(v35.Transfer.Destination.SegmentAddress.LowPart & 0xFFFFFFFE);
    }
    v27 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v35);
    v34 = 0LL;
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v13, a3, &v35, v27, a10, &v34, 0LL);
    v28 = v27 == -1071775743;
    v11 = a4;
  }
  while ( v28 );
  if ( (*((_BYTE *)this + 40937) & 4) != 0 )
    VIDMM_GLOBAL::EndVirtualCopyExclusiveAccess((VIDMM_GLOBAL *)this, &v33);
}
