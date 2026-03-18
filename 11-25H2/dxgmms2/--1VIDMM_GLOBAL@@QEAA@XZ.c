/*
 * XREFs of ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092750
 * Callers:
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x14004C410 (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x140027510 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140036650 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x140036ED8 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x140037A0C (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x140037FD4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x140039718 (-VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x14003AD6C (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x14003B240 (-GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z.c)
 *     ??1DXGK_LOG@@QEAA@XZ @ 0x14004BB8C (--1DXGK_LOG@@QEAA@XZ.c)
 *     ?Clear@?$NonPagedPoolZeroedArray@UVIDMM_SEGMENT_GROUP_STATE@@$00$0GCDBGJFG@@@QEAAXXZ @ 0x14004DD34 (-Clear@-$NonPagedPoolZeroedArray@UVIDMM_SEGMENT_GROUP_STATE@@$00$0GCDBGJFG@@@QEAAXXZ.c)
 *     ?VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140052150 (-VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x140091130 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1400914EC (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 *     ?LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400916B4 (-LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidMmTerminateWorkerThread @ 0x140098E90 (VidMmTerminateWorkerThread.c)
 *     ?VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x14009B230 (-VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ??1VIDMM_PHYSICAL_ADAPTER@@QEAA@XZ @ 0x14009B2C8 (--1VIDMM_PHYSICAL_ADAPTER@@QEAA@XZ.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1400B348C (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1400B7EF4 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400E561C (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::~VIDMM_GLOBAL(VIDMM_GLOBAL *this)
{
  char *v2; // rbx
  __int64 v3; // rcx
  char **v4; // rax
  __int64 v5; // rsi
  unsigned int i; // ebx
  struct _VIDSCH_NODE **v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // rdx
  struct _VIDSCH_NODE **v10; // rax
  unsigned int j; // ebx
  struct VIDMM_DMA_BUFFER *v12; // rcx
  VIDMM_DMA_POOL *v13; // rcx
  struct DXGADAPTER *v14; // rbx
  struct _RTL_BALANCED_NODE *v15; // rax
  VIDMM_PARTITION *k; // rbx
  struct VIDMM_PARTITION_ADAPTER_INFO *AdapterInfo; // rax
  struct VIDMM_PARTITION_ADAPTER_INFO *v18; // rsi
  VIDMM_PARTITION **v19; // rax
  VIDMM_PARTITION *v20; // rcx
  VIDMM_PARTITION *v21; // rcx
  unsigned int m; // ebx
  __int64 v23; // rcx
  struct _PCW_INSTANCE *v24; // rcx
  void *v25; // rcx
  char *v26; // rcx
  char *v27; // rbx
  unsigned int v28; // eax
  unsigned int n; // ebx
  struct _PCW_INSTANCE *v30; // rcx
  unsigned int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // rbp
  void *v34; // rsi
  CVirtualAddressAllocator *v35; // rcx
  _BYTE v36[40]; // [rsp+20h] [rbp-28h] BYREF

  VIDMM_GLOBAL::LogTeardownTelemetry((struct DXGADAPTER **)this);
  v2 = (char *)this + 44792;
  if ( *((_QWORD *)this + 5599) )
  {
    DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
      (DXGAUTOEXPUSHLOCKEXCLUSIVE *)v36,
      (struct _EX_PUSH_LOCK *const)&VIDMM_GLOBAL::_AdapterListLock);
    v3 = *(_QWORD *)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = (char **)*((_QWORD *)this + 5600), *v4 != v2) )
      __fastfail(3u);
    *v4 = (char *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v36);
  }
  *((_BYTE *)this + 7016) = 1;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = this;
    WdLogGlobalForLineNumber = 561;
  }
  VIDMM_GLOBAL::DoDeferredUnlock(this);
  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
  if ( *(int *)(*(_QWORD *)(v5 + 16) + 3004LL) >= 2500 )
  {
    for ( i = 0; i < *(_DWORD *)(v5 + 80); ++i )
    {
      v7 = *(struct _VIDSCH_NODE ***)(v5 + 688);
      v8 = *(_DWORD *)(v5 + 760);
      v9 = i;
      v10 = &v7[v9];
      if ( i >= v8 )
        v10 = *(struct _VIDSCH_NODE ***)(v5 + 688);
      if ( (*((_DWORD *)*v10 + 3) & 2) != 0 )
      {
        if ( i < v8 )
          v7 = (struct _VIDSCH_NODE **)((char *)v7 + v9 * 8);
        VidSchiDestroyNodeSchedulingLog(*v7);
      }
    }
  }
  VIDMM_GLOBAL::DestroyPagingFenceObjects((struct VIDMM_PROCESS **)this);
  for ( j = 0; j < *((_DWORD *)this + 1736); ++j )
  {
    v12 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + j + 143);
    if ( v12 )
    {
      VidMmReleaseDmaBuffer(v12, 1);
      *((_QWORD *)this + j + 143) = 0LL;
    }
    v13 = (VIDMM_DMA_POOL *)*((_QWORD *)this + j + 79);
    if ( v13 )
      VIDMM_DMA_POOL::`scalar deleting destructor'(v13);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40384));
  if ( *((_BYTE *)this + 40939) )
    VIDMM_PROCESS::CloseAdapter(g_pVidMmSystemProcess, this);
  v14 = *(struct DXGADAPTER **)this;
  *((_QWORD *)this + 5555) = 0LL;
  if ( v14 )
  {
    VidMmTerminateWorkerThread(v14);
    operator delete(v14);
    *(_QWORD *)this = 0LL;
  }
  DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
    (DXGAUTOEXPUSHLOCKSHARED *)v36,
    (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
  v15 = VIDMM_PARTITION::_PartitionTree;
  k = 0LL;
  while ( v15 )
  {
    k = (VIDMM_PARTITION *)v15;
    v15 = v15->Children[0];
  }
  while ( k )
  {
    AdapterInfo = VIDMM_PARTITION::GetAdapterInfo(k, this);
    v18 = AdapterInfo;
    if ( *((_QWORD *)AdapterInfo + 1) )
    {
      VidMmiClosePerfCounters(AdapterInfo);
      NonPagedPoolZeroedArray<VIDMM_SEGMENT_GROUP_STATE,1,1647405398>::Clear((__int64)v18 + 24);
      *((_QWORD *)v18 + 1) = 0LL;
      *(_QWORD *)v18 = 0LL;
    }
    v19 = (VIDMM_PARTITION **)*((_QWORD *)k + 1);
    v20 = k;
    if ( v19 )
    {
      v21 = *v19;
      for ( k = (VIDMM_PARTITION *)*((_QWORD *)k + 1); v21; v21 = *(VIDMM_PARTITION **)v21 )
        k = v21;
    }
    else
    {
      while ( 1 )
      {
        k = (VIDMM_PARTITION *)(*((_QWORD *)k + 2) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !k || *(VIDMM_PARTITION **)k == v20 )
          break;
        v20 = k;
      }
    }
  }
  DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v36);
  for ( m = 0; m < *((_DWORD *)this + 1736); ++m )
  {
    v23 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * m);
    if ( (*(_BYTE *)(v23 + 552) & 1) == 0 )
    {
      v24 = *(struct _PCW_INSTANCE **)(v23 + 920);
      if ( v24 )
        PcwCloseInstance(v24);
    }
  }
  operator delete(*((void **)this + 869));
  v25 = (void *)*((_QWORD *)this + 976);
  if ( v25 )
  {
    operator delete(v25);
    *(_OWORD *)((char *)this + 7800) = 0LL;
    *((_QWORD *)this + 977) = 0LL;
  }
  if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
  {
    v26 = (char *)*((_QWORD *)this + 5124);
    if ( v26 )
    {
      v27 = v26 - 8;
      `vector destructor iterator'(
        v26,
        24LL,
        *((_QWORD *)v26 - 1),
        (void (__fastcall *)(char *))VIDMM_PAGING_HISTORY_ENTRY::~VIDMM_PAGING_HISTORY_ENTRY);
      operator delete(v27);
    }
  }
  operator delete(*((void **)this + 5133));
  v28 = *((_DWORD *)this + 1736);
  for ( n = 0; n < v28; ++n )
  {
    v30 = *(struct _PCW_INSTANCE **)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * n) + 1640LL);
    if ( v30 )
      PcwCloseInstance(v30);
    v28 = *((_DWORD *)this + 1736);
  }
  if ( *((_QWORD *)this + 5029) )
  {
    v31 = 0;
    if ( v28 )
    {
      do
      {
        v32 = *((_QWORD *)this + 5029);
        v33 = v31;
        v34 = *(void **)(v32 + 8LL * v31);
        if ( v34 )
        {
          VIDMM_PHYSICAL_ADAPTER::~VIDMM_PHYSICAL_ADAPTER(*(VIDMM_PHYSICAL_ADAPTER **)(v32 + 8LL * v31));
          operator delete(v34);
        }
        ++v31;
        *(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v33) = 0LL;
      }
      while ( v31 < *((_DWORD *)this + 1736) );
    }
    operator delete(*((void **)this + 5029));
    *((_QWORD *)this + 5029) = 0LL;
  }
  v35 = (CVirtualAddressAllocator *)*((_QWORD *)this + 5563);
  if ( v35 )
    CVirtualAddressAllocator::DestroyVaAllocator(v35);
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 40256));
  DXGK_LOG::~DXGK_LOG((void **)this + 5129);
}
