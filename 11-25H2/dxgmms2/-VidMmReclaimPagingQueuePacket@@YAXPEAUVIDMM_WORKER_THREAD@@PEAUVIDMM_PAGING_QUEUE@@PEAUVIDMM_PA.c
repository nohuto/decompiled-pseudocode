/*
 * XREFs of ?VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400DC894
 * Callers:
 *     ExecutePagingCommand @ 0x14009F260 (ExecutePagingCommand.c)
 *     VidMmFlushEvictQueue @ 0x1400DC9C0 (VidMmFlushEvictQueue.c)
 *     VidMmWorkerThreadProc @ 0x1400F23A0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmSetPagingQueueStatus@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@W4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1400F00C0 (-VidMmSetPagingQueueStatus@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@W4VIDMM_PAGING_Q.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidMmReclaimPagingQueuePacket(
        struct VIDMM_WORKER_THREAD *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_PAGING_QUEUE_PACKET *a3)
{
  char *v3; // rsi
  struct VIDMM_PAGING_QUEUE **v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  char *v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]

  v3 = (char *)a1 + 184;
  v10 = (char *)a1 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v7 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 3);
  v11 = 1;
  if ( *v7 != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 16) )
    __fastfail(3u);
  *(_QWORD *)a3 = (char *)a2 + 16;
  *((_QWORD *)a3 + 1) = v7;
  *v7 = a3;
  *((_QWORD *)a2 + 3) = a3;
  if ( *((struct VIDMM_PAGING_QUEUE **)a2 + 4) == (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 32) )
  {
    v8 = *((int *)a2 + 26);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 != 1 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 58LL, a2, v8, 0LL);
        WdLogGlobalForLineNumber = 195;
      }
      VidMmSetPagingQueueStatus(a1, a2, 0LL);
    }
  }
  --*(_DWORD *)(*((_QWORD *)a2 + 12) + 64LL);
  v9 = *(_QWORD *)a1;
  --*((_DWORD *)a1 + 52);
  if ( (*(_BYTE *)(v9 + 40937) & 0x10) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)a2 + 48);
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v10);
}
