/*
 * XREFs of ndisFreeSharedMemoryInternal @ 0x140016D00
 * Callers:
 *     NdisMFreeSharedMemory @ 0x140016B50 (NdisMFreeSharedMemory.c)
 *     ?ndisMQueuedFreeSharedHandler@@YAXPEAX@Z @ 0x140017D90 (-ndisMQueuedFreeSharedHandler@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140016F00 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x140017350 (-Stop@NdisStatisticalStopwatch@@QEAA_KXZ.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisFreeSharedMemoryInternal(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        char a3,
        ULONG_PTR a4,
        __int64 a5)
{
  struct _NDIS_SG_DMA_BLOCK *v5; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  _DMA_ADAPTER *DmaAdapterObject; // rbx
  LARGE_INTEGER v12; // rdi
  int v13; // ecx
  void (__fastcall *FreeCommonBuffer)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER, void *, unsigned __int8); // r13
  unsigned int v15; // r12d
  _BOOL8 v17; // rax
  __int64 v18; // rcx
  int v19; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER v20; // [rsp+38h] [rbp-30h]

  v5 = *(struct _NDIS_SG_DMA_BLOCK **)(BugCheckParameter2 + 504);
  _InterlockedIncrement64(&qword_140127088);
  v19 = 16;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  DmaAdapterObject = v5->DmaAdapterObject;
  v12 = PerformanceCounter;
  v20 = PerformanceCounter;
  if ( DmaAdapterObject )
    goto LABEL_2;
  DmaAdapterObject = v5->SavedDmaAdapterObject;
  if ( DmaAdapterObject )
  {
    v5->DmaAdapterObject = DmaAdapterObject;
LABEL_2:
    v13 = 72;
    if ( a2 >= 0x48 )
      v13 = a2;
    FreeCommonBuffer = DmaAdapterObject->DmaOperations->FreeCommonBuffer;
    v15 = ~(ndisDmaAlignment - 1) & (v13 + ndisDmaAlignment - 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(&SharedMemoryResource, 1u);
    if ( (unsigned __int64)v15 + 8 < 0x1000 )
    {
      if ( *(_DWORD *)((a4 & 0xFFFFFFFFFFFFF000uLL) + 0xFF8) != 1752384590 )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          *(_QWORD *)(BugCheckParameter2 + 3856),
          "Freeing shared memory not allocated");
        KeBugCheckEx(0x7Cu, 3uLL, BugCheckParameter2, a4 & 0xFFFFFFFFFFFFF000uLL, a4);
      }
      if ( (*(_DWORD *)((a4 & 0xFFFFFFFFFFFFF000uLL) + 0xFFC))-- == 1 )
      {
        LODWORD(a5) = a5 & 0xFFFFF000;
        ((void (__fastcall *)(_DMA_ADAPTER *, __int64, __int64, ULONG_PTR, char))FreeCommonBuffer)(
          DmaAdapterObject,
          4096LL,
          a5,
          a4 & 0xFFFFFFFFFFFFF000uLL,
          a3);
        v17 = a3 != 0;
        if ( (void *)(a4 & 0xFFFFFFFFFFFFF000uLL) == v5->SharedMemoryPage[v17] )
        {
          v18 = 120LL;
          if ( a3 )
            v18 = 124LL;
          *(_NDIS_OBJECT_HEADER *)((char *)&v5->Header + v18) = 0;
          v5->SharedMemoryPage[v17] = 0LL;
        }
      }
    }
    else
    {
      ((void (__fastcall *)(_DMA_ADAPTER *, _QWORD, __int64, ULONG_PTR, char))FreeCommonBuffer)(
        DmaAdapterObject,
        v15,
        a5,
        a4,
        a3);
    }
    ndisDereferenceDmaAdapter(v5);
    ExReleaseResourceLite(&SharedMemoryResource);
    KeLeaveCriticalRegion();
    if ( v12.QuadPart )
      NdisStatisticalStopwatch::Stop((NdisStatisticalStopwatch *)&v19);
    return;
  }
  if ( PerformanceCounter.QuadPart )
    NdisStatisticalStopwatch::Stop((NdisStatisticalStopwatch *)&v19);
}
