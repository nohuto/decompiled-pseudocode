/*
 * XREFs of RemoveDmaBufferFromPool @ 0x1400B7C44
 * Callers:
 *     ?VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z @ 0x140097798 (-VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z.c)
 *     VidMmResizeBuffersInPool @ 0x140097C80 (VidMmResizeBuffersInPool.c)
 *     VidMmAcquireDmaBuffer @ 0x1400B7930 (VidMmAcquireDmaBuffer.c)
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1400B86C8 (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ?AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x140038248 (-AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x140038544 (-ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     McTemplateK0pppxxxp_EtwWriteTransfer @ 0x140043CA8 (McTemplateK0pppxxxp_EtwWriteTransfer.c)
 *     ?FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140093EE0 (-FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400A9EF4 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DE.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400AA4F4 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     WaitDmaBufferNotBusy @ 0x1400B7760 (WaitDmaBufferNotBusy.c)
 */

void __fastcall RemoveDmaBufferFromPool(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // rax
  struct _ERESOURCE *v5; // rcx
  _QWORD *v6; // rcx
  void **v7; // rax
  _DWORD *v8; // r14
  _DWORD *v9; // rbp
  _QWORD *v10; // r8
  __int64 v11; // rbx

  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = WdLogNewEntry5_WdTrace(a1);
    *(_QWORD *)(v4 + 24) = a2;
    *(_QWORD *)(v4 + 32) = a1;
    WdLogGlobalForLineNumber = 921;
  }
  if ( (byte_140081241 & 1) != 0 )
    McTemplateK0pppxxxp_EtwWriteTransfer(
      a2[11],
      (const EVENT_DESCRIPTOR *)"M",
      a2[9],
      a1[2],
      *(_QWORD *)(*a1 + 24LL),
      a2,
      a2[9],
      a2[10],
      a2[11],
      *((_QWORD *)a2 + 6));
  if ( *((_BYTE *)a2 + 24) )
    WaitDmaBufferNotBusy(a1, (__int64)a2, 0, 0LL);
  v5 = Resource;
  --*((_DWORD *)a1 + 19);
  ExAcquireResourceSharedLite(v5, 1u);
  v6 = *(_QWORD **)a2;
  if ( *(unsigned int **)(*(_QWORD *)a2 + 8LL) != a2 || (v7 = (void **)*((_QWORD *)a2 + 1), *v7 != a2) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = v7;
  ExReleaseResourceLite(Resource);
  operator delete(*((void **)a2 + 15));
  operator delete(*((void **)a2 + 14));
  operator delete(*((void **)a2 + 13));
  operator delete(*((void **)a2 + 12));
  if ( *((_DWORD *)a1 + 8) )
  {
    if ( (*((_BYTE *)a1 + 28) & 1) != 0 )
      VIDMM_GLOBAL::FreePagingBufferResources((VIDMM_GLOBAL *)*a1, *((struct VIDMM_ALLOC **)a2 + 7));
    VIDMM_GLOBAL::CloseOneAllocation(
      (VIDMM_GLOBAL *)*a1,
      *((struct VIDMM_ALLOC **)a2 + 7),
      0LL,
      0,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
      0LL);
    VIDMM_GLOBAL::DestroyOneAllocation(
      (VIDMM_GLOBAL *)*a1,
      (struct VIDMM_DEVICE *)a1[1],
      *((struct VIDMM_GLOBAL_ALLOC **)a2 + 6),
      0);
    v8 = a2 + 9;
  }
  else
  {
    v8 = a2 + 9;
    MmFreeContiguousMemorySpecifyCache(*((PVOID *)a2 + 8), a2[9], (MEMORY_CACHING_TYPE)a2[18]);
  }
  v9 = v8;
  if ( *((_DWORD *)a1 + 19) == 2
    && *((_DWORD *)a1 + 9) == *((_DWORD *)a1 + 10)
    && *((_DWORD *)a1 + 12) == *((_DWORD *)a1 + 13)
    && *((_DWORD *)a1 + 15) == *((_DWORD *)a1 + 16) )
  {
    *((_DWORD *)a1 + 7) |= 8u;
    v9 = a2 + 9;
  }
  *((_DWORD *)a1 + 28) -= *v8;
  v10 = (_QWORD *)a1[1];
  *((_DWORD *)a1 + 29) += -24 * a2[10];
  *((_DWORD *)a1 + 30) += -24 * a2[11];
  if ( v10 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(v10[1] + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(*v10 + 24LL) + 240LL));
    VIDMM_PROCESS_ADAPTER_INFO::AcquireProcessAdapterInfoLock((VIDMM_PROCESS_ADAPTER_INFO *)v11);
    *(_QWORD *)(v11 + 136) -= (unsigned int)*v8;
    --*(_DWORD *)(v11 + 128);
    *(_DWORD *)(v11 + 144) += -24 * a2[10];
    *(_DWORD *)(v11 + 148) += -24 * a2[11];
    VIDMM_PROCESS_ADAPTER_INFO::ReleaseProcessAdapterInfoLock((VIDMM_PROCESS_ADAPTER_INFO *)v11);
    v8 = v9;
  }
  _InterlockedAdd64(&qword_140081A00, -(__int64)(unsigned int)*v8);
  _InterlockedAdd64(&qword_1400819D0, -24LL * a2[10]);
  _InterlockedAdd64(&qword_1400819A0, -24LL * a2[11]);
  operator delete(a2);
}
