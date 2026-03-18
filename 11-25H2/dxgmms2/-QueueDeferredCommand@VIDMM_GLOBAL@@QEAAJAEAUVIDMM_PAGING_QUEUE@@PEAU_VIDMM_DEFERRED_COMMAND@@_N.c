/*
 * XREFs of ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E6F70
 * Callers:
 *     ?DelayExecution@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@IPEAUVIDMM_PAGING_QUEUE@@KPEA_K@Z @ 0x140092F40 (-DelayExecution@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@IPEAUVIDMM_PAGING_QUEUE@@KPEA_K@Z.c)
 *     ?EvictionTest@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x140093A74 (-EvictionTest@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140093BC8 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140093C84 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmiUpdateGpuVirtualAddress@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1400E64C0 (-VidMmiUpdateGpuVirtualAddress@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ?SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z @ 0x1400E65A4 (-SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1400E6CCC (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@K_KPEA_K@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400E736C (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400E7C48 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 *     ?LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAX@Z @ 0x1400F35B8 (-LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAX@Z.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1400F39C8 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400F58C4 (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBUVIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x14010EF94 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBU.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400ABC80 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 *     ?VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1400EDEF0 (-VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QU.c)
 *     ?VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F22B4 (-VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVID.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueueDeferredCommand(
        struct VIDMM_WORKER_THREAD **this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_DEFERRED_COMMAND *a3,
        char a4,
        unsigned __int64 *a5)
{
  struct _VIDSCH_SYNC_OBJECT *v5; // r12
  struct VIDMM_WORKER_THREAD *v7; // rbp
  struct VIDMM_PAGING_QUEUE **v10; // r15
  struct VIDMM_PAGING_QUEUE *v11; // r13
  struct VIDMM_PAGING_QUEUE **NewPagingQueuePacket; // rdi
  struct VIDMM_PAGING_QUEUE *v13; // rax
  char v14; // bp
  __int64 v15; // rbx
  struct VIDMM_WORKER_THREAD *v16; // rcx
  struct _VIDSCH_SYNC_OBJECT *v18[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp+10h] BYREF
  char v21; // [rsp+98h] [rbp+20h]

  v21 = a4;
  v5 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)a2 + 11);
  v7 = *this;
  v19 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v7 + 184, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  v10 = (struct VIDMM_PAGING_QUEUE **)((char *)a2 + 16);
  *((_QWORD *)v7 + 24) = KeGetCurrentThread();
  v11 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2 + 9);
  *((_QWORD *)a2 + 9) = (char *)v11 + 1;
  NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 2);
  if ( NewPagingQueuePacket[1] != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 16)
    || (v13 = *NewPagingQueuePacket, *((struct VIDMM_PAGING_QUEUE ***)*NewPagingQueuePacket + 1) != NewPagingQueuePacket) )
  {
    __fastfail(3u);
  }
  *v10 = v13;
  *((_QWORD *)v13 + 1) = v10;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v7 + 24) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v7 + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( NewPagingQueuePacket == v10 )
  {
    NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE **)operator new(160LL, 0x38346956u, 256LL);
    if ( !NewPagingQueuePacket )
    {
      NewPagingQueuePacket = 0LL;
      goto LABEL_8;
    }
  }
  else
  {
    memset(NewPagingQueuePacket, 0, 0xA0uLL);
  }
  NewPagingQueuePacket[5] = v11;
LABEL_8:
  if ( !*((_QWORD *)a3 + 1) )
    *((_QWORD *)a3 + 1) = *(_QWORD *)(*((_QWORD *)a3 + 2) + 8LL);
  for ( ;
        !NewPagingQueuePacket;
        NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE **)VidMmGetNewPagingQueuePacket(*this, a2) )
  {
    v20 = *((_QWORD *)a2 + 8);
    v18[0] = v5;
    VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, v18, &v20, 1u, 0LL, 0LL);
  }
  v14 = v21;
  *((_WORD *)NewPagingQueuePacket + 12) = 257;
  *((_OWORD *)NewPagingQueuePacket + 3) = *(_OWORD *)a3;
  *((_OWORD *)NewPagingQueuePacket + 4) = *((_OWORD *)a3 + 1);
  *((_OWORD *)NewPagingQueuePacket + 5) = *((_OWORD *)a3 + 2);
  *((_OWORD *)NewPagingQueuePacket + 6) = *((_OWORD *)a3 + 3);
  *((_OWORD *)NewPagingQueuePacket + 7) = *((_OWORD *)a3 + 4);
  NewPagingQueuePacket[16] = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a3 + 10);
  if ( v14 )
    NewPagingQueuePacket[9] = (struct VIDMM_PAGING_QUEUE *)&v19;
  if ( *(_DWORD *)a3 == 206 )
  {
    v15 = MEMORY[0xFFFFF78000000320];
    NewPagingQueuePacket[17] = (struct VIDMM_PAGING_QUEUE *)(v15 * KeQueryTimeIncrement());
  }
  v16 = *this;
  v20 = 0LL;
  VidMmAppendReadyPacket(v16, a2, (struct VIDMM_PAGING_QUEUE_PACKET *)NewPagingQueuePacket, &v20);
  if ( v14 )
  {
    v18[0] = v5;
    VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, v18, &v20, 1u, 0LL, 0LL);
    return v19;
  }
  if ( !a5 )
    return v19;
  *a5 = v20;
  return 259LL;
}
