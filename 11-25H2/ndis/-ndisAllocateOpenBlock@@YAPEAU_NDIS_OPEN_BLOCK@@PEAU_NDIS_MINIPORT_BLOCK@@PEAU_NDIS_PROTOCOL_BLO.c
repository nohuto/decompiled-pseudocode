/*
 * XREFs of ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x14006E230
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400768C0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x14018CF00 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x140017280 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     NdisNblTrackerRegisterComponent @ 0x14006E120 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x14006E4B0 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     NdisAllocateRefCount @ 0x14006E5D0 (NdisAllocateRefCount.c)
 */

struct PNDIS_PER_PROCESSOR_SLOT__ *__fastcall ndisAllocateOpenBlock(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        char a3)
{
  struct PNDIS_PER_PROCESSOR_SLOT__ *result; // rax
  struct _NDIS_OPEN_BLOCK *v7; // rdi
  unsigned int v8; // r14d
  __int64 Pool2; // rax
  struct _NDIS_OPEN_BLOCK *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx

  result = ndisAllocatePerProcessorSlot(0x6F6D444Eu);
  v7 = (struct _NDIS_OPEN_BLOCK *)result;
  if ( result )
  {
    v8 = 1168;
    if ( (a1->Flags & 0x20000) == 0 )
      v8 = 1024;
    Pool2 = ExAllocatePool2(64LL, v8, 1869431886);
    v10 = (struct _NDIS_OPEN_BLOCK *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 720) = v7;
      if ( a3 )
      {
        *(_WORD *)Pool2 = 274;
        *(_WORD *)(Pool2 + 2) = v8;
      }
      v11 = (_QWORD *)(Pool2 + 736);
      v11[1] = v11;
      *v11 = v11;
      v10->SharedMemoryBlockList.Blink = &v10->SharedMemoryBlockList;
      v10->SharedMemoryBlockList.Flink = &v10->SharedMemoryBlockList;
      v10->VFList.Blink = &v10->VFList;
      v10->VFList.Flink = &v10->VFList;
      v10->VPortList.Blink = &v10->VPortList;
      v10->VPortList.Flink = &v10->VPortList;
      KeInitializeSpinLock(&v10->RefCountLock);
      v10->NblTracker = (NDIS_NBL_TRACKER_HANDLE__ *)NdisNblTrackerRegisterComponent(
                                                       2,
                                                       (__int64)v10,
                                                       (__int64)&a2->Name);
      LOBYTE(v12) = 20;
      v10->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)NdisAllocateRefCount(v12, 0LL);
      v10->UnsolicitedUnbindComplete.WorkerRoutine = ndisCompleteUnsolicitedUnbind;
      result = (struct PNDIS_PER_PROCESSOR_SLOT__ *)v10;
      v10->UnsolicitedUnbindComplete.Parameter = v10;
      v10->UnsolicitedUnbindComplete.List.Flink = 0LL;
    }
    else
    {
      ndisFreePerProcessorSlot((ULONG_PTR)v7, 0x6F6D444EuLL);
      return 0LL;
    }
  }
  return result;
}
