/*
 * XREFs of ?InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F9954
 * Callers:
 *     ?VidMmInitializePagingQueue@@YAJPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F987C (-VidMmInitializePagingQueue@@YAJPEAUVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140035820 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmSetPagingQueueStatus@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@W4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1400F00C0 (-VidMmSetPagingQueueStatus@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@W4VIDMM_PAGING_Q.c)
 */

void __fastcall VIDMM_DEVICE::InsertPagingQueueList(VIDMM_DEVICE *this, struct VIDMM_PAGING_QUEUE *a2)
{
  char *v2; // rbx
  VIDMM_DEVICE *v5; // rax
  VIDMM_DEVICE **v6; // rdx
  char *v7; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+28h] [rbp-20h]
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (char *)this + 112;
  v7 = (char *)this + 112;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v5 = (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 48);
  v6 = (VIDMM_DEVICE **)*((_QWORD *)this + 13);
  v8 = 1;
  if ( *v6 != (VIDMM_DEVICE *)((char *)this + 96) )
    __fastfail(3u);
  *(_QWORD *)v5 = (char *)this + 96;
  *((_QWORD *)a2 + 7) = v6;
  *v6 = v5;
  *((_QWORD *)this + 13) = v5;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v7);
  if ( *((_BYTE *)this + 57) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9,
      (struct DXGPUSHLOCKFAST *)(**(_QWORD **)this + 184LL),
      1);
    VidMmSetPagingQueueStatus(**(__int64 ***)this, (__int64 *)a2, 2);
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9);
  }
}
