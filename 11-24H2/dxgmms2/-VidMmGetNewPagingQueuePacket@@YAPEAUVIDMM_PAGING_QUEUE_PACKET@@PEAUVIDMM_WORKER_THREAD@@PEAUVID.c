/*
 * XREFs of ?VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400ED474
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400BA8FC (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUE.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1400BCB54 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGIN.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400DB060 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1400EC038 (-CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     memset @ 0x140056340 (memset.c)
 */

struct VIDMM_PAGING_QUEUE_PACKET *__fastcall VidMmGetNewPagingQueuePacket(
        struct VIDMM_WORKER_THREAD *a1,
        struct VIDMM_PAGING_QUEUE *a2)
{
  char *v2; // rbx
  __int64 v4; // rsi
  struct VIDMM_PAGING_QUEUE_PACKET *v5; // rdi
  struct VIDMM_PAGING_QUEUE_PACKET *v6; // rbx
  __int64 v7; // rax
  struct VIDMM_PAGING_QUEUE_PACKET *result; // rax
  char *v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  v2 = (char *)a1 + 184;
  v9 = (char *)a1 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v4 = *((_QWORD *)a2 + 9);
  v10 = 1;
  *((_QWORD *)a2 + 9) = v4 + 1;
  v5 = (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 16);
  v6 = *(struct VIDMM_PAGING_QUEUE_PACKET **)v5;
  if ( *(struct VIDMM_PAGING_QUEUE_PACKET **)(*(_QWORD *)v5 + 8LL) != v5
    || (v7 = *(_QWORD *)v6, *(struct VIDMM_PAGING_QUEUE_PACKET **)(*(_QWORD *)v6 + 8LL) != v6) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v5 = v7;
  *(_QWORD *)(v7 + 8) = v5;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v9);
  if ( v6 != v5 )
  {
    memset(v6, 0, 0xA0uLL);
    goto LABEL_7;
  }
  result = (struct VIDMM_PAGING_QUEUE_PACKET *)operator new(160LL, 0x38346956u, 256LL);
  v6 = result;
  if ( result )
  {
LABEL_7:
    *((_QWORD *)v6 + 5) = v4;
    return v6;
  }
  return result;
}
