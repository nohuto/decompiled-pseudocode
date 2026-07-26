/*
 * XREFs of NdisFreeSharedMemory @ 0x140049470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ??0NdisFreeSharedMemoryTelemetry@@QEAA@PEBU_NDIS_SHARED_MEMORY_BLOCK@@@Z @ 0x140049770 (--0NdisFreeSharedMemoryTelemetry@@QEAA@PEBU_NDIS_SHARED_MEMORY_BLOCK@@@Z.c)
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x1400498B0 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140049E20 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x14004A120 (-Stop@NdisStatisticalStopwatch@@QEAA_KXZ.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __stdcall NdisFreeSharedMemory(NDIS_HANDLE NdisHandle, NDIS_HANDLE AllocationHandle)
{
  struct _NDIS_SHARED_MEMORY_BLOCK *v2; // rbx
  NDIS_HANDLE v4; // rbp
  LARGE_INTEGER PerformanceCounter; // rdi
  int v6; // edx
  char v7; // al
  unsigned int Flags; // ecx
  KIRQL v9; // r9
  _LIST_ENTRY *Flink; // rdx
  NDIS_HANDLE *p_Flink; // rcx
  _LIST_ENTRY *v12; // r8
  NDIS_HANDLE *v13; // rdx
  struct _NDIS_SG_DMA_BLOCK *v14; // r14
  _DMA_ADAPTER *DmaAdapterObject; // rcx
  struct _NDIS_SHARED_MEMORY_BLOCK **v16; // rdx
  NDIS_HANDLE *v17; // rcx
  int v18; // [rsp+20h] [rbp-128h]
  char v19; // [rsp+28h] [rbp-120h]
  int v20; // [rsp+30h] [rbp-118h] BYREF
  LARGE_INTEGER v21; // [rsp+38h] [rbp-110h]
  _BYTE v22[208]; // [rsp+40h] [rbp-108h] BYREF

  v2 = (struct _NDIS_SHARED_MEMORY_BLOCK *)AllocationHandle;
  v4 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = (char)AllocationHandle;
    LOBYTE(AllocationHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)AllocationHandle,
      21,
      71,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
      v19);
  }
  _InterlockedIncrement64(&qword_14011CF88);
  v20 = 6;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v21 = PerformanceCounter;
  NdisFreeSharedMemoryTelemetry::NdisFreeSharedMemoryTelemetry((NdisFreeSharedMemoryTelemetry *)v22, v2);
  if ( NdisHandle )
  {
    v7 = *(_BYTE *)NdisHandle;
    if ( *(_BYTE *)NdisHandle == 18 )
    {
      v4 = NdisHandle;
      NdisHandle = (NDIS_HANDLE)*((_QWORD *)NdisHandle + 2);
    }
    else if ( v7 != 17 )
    {
      if ( v7 != 1 )
        goto LABEL_4;
      NdisHandle = 0LL;
    }
    if ( v2 && NdisHandle )
    {
      Flags = v2->Flags;
      if ( (Flags & 0x3F) == 1 )
      {
        v14 = (struct _NDIS_SG_DMA_BLOCK *)*((_QWORD *)NdisHandle + 63);
        if ( v14 )
        {
          DmaAdapterObject = v14->DmaAdapterObject;
          if ( DmaAdapterObject )
          {
            LOBYTE(v18) = 1;
            ((void (__fastcall *)(_DMA_ADAPTER *, _QWORD, _QWORD, _QWORD, _DWORD))DmaAdapterObject->DmaOperations->FreeCommonBuffer)(
              DmaAdapterObject,
              v2->SharedMemoryParameters.Length,
              (_LARGE_INTEGER)v2->PhysicalAddress.QuadPart,
              v2->SharedMemoryParameters.VirtualAddress,
              v18);
            ndisDereferenceDmaAdapter(v14);
            goto LABEL_16;
          }
        }
      }
      else
      {
        if ( (Flags & 0x3F) == 2 )
        {
          MmFreeContiguousMemorySpecifyCache(
            v2->SharedMemoryParameters.VirtualAddress,
            v2->SharedMemoryParameters.Length,
            MmCached);
LABEL_16:
          _InterlockedAdd64(&qword_14011CF98, v2->SharedMemoryParameters.Length);
          v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisHandle + 12);
          *((_QWORD *)NdisHandle + 65) = KeGetCurrentThread();
          Flink = v2->MiniportLink.Flink;
          if ( (struct _NDIS_SHARED_MEMORY_BLOCK *)v2->MiniportLink.Flink->Blink == v2 )
          {
            p_Flink = (NDIS_HANDLE *)&v2->MiniportLink.Blink->Flink;
            if ( *p_Flink == v2 )
            {
              *p_Flink = Flink;
              Flink->Blink = (_LIST_ENTRY *)p_Flink;
              if ( v4 )
              {
                v16 = (struct _NDIS_SHARED_MEMORY_BLOCK **)v2->OpenLink.Flink;
                if ( v16[1] != (struct _NDIS_SHARED_MEMORY_BLOCK *)&v2->OpenLink )
                  goto LABEL_22;
                v17 = (NDIS_HANDLE *)&v2->OpenLink.Blink->Flink;
                if ( *v17 != &v2->OpenLink )
                  goto LABEL_22;
                *v17 = v16;
                v16[1] = (struct _NDIS_SHARED_MEMORY_BLOCK *)v17;
              }
              v12 = v2->QueueLink.Flink;
              if ( v12->Blink == &v2->QueueLink )
              {
                v13 = (NDIS_HANDLE *)&v2->QueueLink.Blink->Flink;
                if ( *v13 == &v2->QueueLink )
                {
                  *v13 = v12;
                  v12->Blink = (_LIST_ENTRY *)v13;
                  *((_QWORD *)NdisHandle + 65) = 0LL;
                  KeReleaseSpinLock((PKSPIN_LOCK)NdisHandle + 12, v9);
                  ExFreePoolWithTag(v2, 0);
                  PerformanceCounter = v21;
                  goto LABEL_4;
                }
              }
            }
          }
LABEL_22:
          __fastfail(3u);
        }
        if ( (Flags & 4) != 0 )
        {
          if ( v4 )
            goto LABEL_16;
LABEL_36:
          v2->FreeSharedMemoryHandler(v2->SharedMemoryHandlerContext, v2->ProviderAllocationContext);
          goto LABEL_16;
        }
        if ( (Flags & 8) != 0 )
          goto LABEL_36;
      }
    }
  }
LABEL_4:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      21,
      72,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids);
  }
  NdisFreeSharedMemoryTelemetry::~NdisFreeSharedMemoryTelemetry((NdisFreeSharedMemoryTelemetry *)v22);
  if ( PerformanceCounter.QuadPart )
    NdisStatisticalStopwatch::Stop((NdisStatisticalStopwatch *)&v20);
}
