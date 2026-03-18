/*
 * XREFs of ?VidMmResumePagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1401002C4
 * Callers:
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1400D6050 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     EnqueuePagingQueueTask @ 0x140099720 (EnqueuePagingQueueTask.c)
 *     ?VidMmSetPagingQueueStatus@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@W4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1400EB430 (-VidMmSetPagingQueueStatus@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@W4VIDMM_PAGING_Q.c)
 */

void __fastcall VidMmResumePagingQueue(struct VIDMM_WORKER_THREAD *a1, struct VIDMM_PAGING_QUEUE *a2)
{
  char *v2; // rbx
  bool v5; // zf
  char *v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v2 = (char *)a1 + 184;
  v6 = (char *)a1 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v5 = *((_DWORD *)a2 + 26) == 0;
  v7 = 1;
  if ( !v5 )
  {
    if ( *((struct VIDMM_PAGING_QUEUE **)a2 + 4) == (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 32) )
    {
      VidMmSetPagingQueueStatus((__int64 *)a1, (__int64 *)a2, 0);
    }
    else
    {
      VidMmSetPagingQueueStatus((__int64 *)a1, (__int64 *)a2, 1);
      if ( (*(_BYTE *)(*(_QWORD *)a1 + 40937LL) & 0x10) != 0 )
        EnqueuePagingQueueTask(a1, (__int64)a2);
    }
  }
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v6);
}
