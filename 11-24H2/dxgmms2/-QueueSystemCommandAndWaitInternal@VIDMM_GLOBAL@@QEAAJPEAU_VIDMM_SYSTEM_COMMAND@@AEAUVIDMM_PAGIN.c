/*
 * XREFs of ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1400BCB54
 * Callers:
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDRESS@@_N@Z @ 0x1400BC5BC (-VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDR.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400BCAA4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400BCAFC (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?UnlockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N@Z @ 0x1400E9320 (-UnlockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1401060E8 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x140038E5C (-WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1400E8870 (-VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QU.c)
 *     ?VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400ED474 (-VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVID.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct _VIDSCH_SYNC_OBJECT *a4,
        bool a5)
{
  __int64 v5; // rbx
  struct VIDMM_PAGING_QUEUE **v10; // rdi
  struct VIDMM_PAGING_QUEUE *v11; // r12
  struct VIDMM_PAGING_QUEUE **NewPagingQueuePacket; // rbx
  struct VIDMM_PAGING_QUEUE *v13; // rax
  char v14; // di
  bool v15; // si
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  char v18; // [rsp+48h] [rbp-28h]
  struct _KEVENT Event; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v20; // [rsp+B0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+50h] BYREF

  v5 = *(_QWORD *)this;
  v20 = 0;
  v17 = v5 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5 + 184, 0LL);
  v10 = (struct VIDMM_PAGING_QUEUE **)((char *)a3 + 16);
  *(_QWORD *)(v5 + 192) = KeGetCurrentThread();
  v11 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a3 + 9);
  v18 = 1;
  *((_QWORD *)a3 + 9) = (char *)v11 + 1;
  NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a3 + 2);
  if ( NewPagingQueuePacket[1] != (struct VIDMM_PAGING_QUEUE *)((char *)a3 + 16)
    || (v13 = *NewPagingQueuePacket, *((struct VIDMM_PAGING_QUEUE ***)*NewPagingQueuePacket + 1) != NewPagingQueuePacket) )
  {
    __fastfail(3u);
  }
  *v10 = v13;
  *((_QWORD *)v13 + 1) = v10;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v17);
  if ( NewPagingQueuePacket != v10 )
  {
    memset(NewPagingQueuePacket, 0, 0xA0uLL);
    goto LABEL_7;
  }
  NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE **)operator new(160LL, 0x38346956u, 256LL);
  if ( NewPagingQueuePacket )
  {
LABEL_7:
    NewPagingQueuePacket[5] = v11;
    goto LABEL_8;
  }
  NewPagingQueuePacket = 0LL;
LABEL_8:
  if ( !a4 || *(_DWORD *)a2 == 118 )
  {
    v14 = 0;
  }
  else
  {
    v14 = 1;
    if ( !NewPagingQueuePacket )
    {
      VIDMM_GLOBAL::WaitForFence(this, a4, *((_QWORD *)a3 + 8));
      NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE **)VidMmGetNewPagingQueuePacket(
                                                             *(struct VIDMM_WORKER_THREAD **)this,
                                                             a3);
    }
  }
  *((_BYTE *)NewPagingQueuePacket + 24) = 0;
  *((_BYTE *)NewPagingQueuePacket + 25) = v14;
  Object = 0LL;
  *((_OWORD *)NewPagingQueuePacket + 3) = *(_OWORD *)a2;
  *((_OWORD *)NewPagingQueuePacket + 4) = *((_OWORD *)a2 + 1);
  *((_OWORD *)NewPagingQueuePacket + 5) = *((_OWORD *)a2 + 2);
  *((_OWORD *)NewPagingQueuePacket + 6) = *((_OWORD *)a2 + 3);
  *((_OWORD *)NewPagingQueuePacket + 7) = *((_OWORD *)a2 + 4);
  NewPagingQueuePacket[16] = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2 + 10);
  memset(&Event, 0, sizeof(Event));
  if ( !v14 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    NewPagingQueuePacket[7] = (struct VIDMM_PAGING_QUEUE *)&Event;
  }
  v15 = a5;
  if ( a5 )
  {
    v20 = -1073741776;
    NewPagingQueuePacket[10] = (struct VIDMM_PAGING_QUEUE *)&v20;
  }
  VidMmAppendReadyPacket(
    *(struct VIDMM_WORKER_THREAD **)this,
    a3,
    (struct VIDMM_PAGING_QUEUE_PACKET *)NewPagingQueuePacket,
    (unsigned __int64 *)&Object);
  if ( v15 )
  {
    if ( v14 )
    {
      VIDMM_GLOBAL::WaitForFence(this, a4, (unsigned __int64)Object);
    }
    else
    {
      Object = &Event;
      KeWaitForMultipleObjects(1u, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    }
  }
  return v20;
}
