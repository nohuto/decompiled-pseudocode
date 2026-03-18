/*
 * XREFs of ?VidMmRewindPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1401062A4
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400F23A0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall VidMmRewindPagingQueuePacket(
        struct VIDMM_WORKER_THREAD *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_PAGING_QUEUE_PACKET *a3)
{
  char *v3; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  char *v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v3 = (char *)a1 + 184;
  v8 = (char *)a1 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v6 = (_QWORD *)((char *)a2 + 32);
  v7 = *((_QWORD *)a2 + 4);
  v9 = 1;
  if ( *(struct VIDMM_PAGING_QUEUE **)(v7 + 8) != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 32) )
    __fastfail(3u);
  *(_QWORD *)a3 = v7;
  *((_QWORD *)a3 + 1) = v6;
  *(_QWORD *)(v7 + 8) = a3;
  *v6 = a3;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v8);
}
