/*
 * XREFs of ?VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z @ 0x14008FBAC
 * Callers:
 *     VidMmSuspendDevice @ 0x140090BA8 (VidMmSuspendDevice.c)
 *     ?Execute@VIDMM_TASK_PENALTY_BOX@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x14009EFB0 (-Execute@VIDMM_TASK_PENALTY_BOX@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z.c)
 *     QueryPendingTerminations @ 0x14009F938 (QueryPendingTerminations.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400B3910 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1400EDEF0 (-VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QU.c)
 *     VidMmTransitionToState @ 0x1400FFD48 (VidMmTransitionToState.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmEnqueueTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@@Z @ 0x14008F99C (-VidMmEnqueueTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@@Z.c)
 */

char __fastcall VidMmNotifyTaskWork(
        struct VIDMM_WORKER_THREAD2 *a1,
        struct VIDMM_SCHCLASS *a2,
        struct VIDMM_TASK *a3,
        unsigned int a4)
{
  char *v7; // rbx
  char *v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  if ( a4 + _InterlockedExchangeAdd((volatile signed __int32 *)a3 + 18, a4) != a4 )
    return 0;
  v7 = (char *)a1 + 5392;
  v9 = (char *)a1 + 5392;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v7 + 1) = KeGetCurrentThread();
  v10 = 1;
  VidMmEnqueueTask(a1, a2, a3);
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v9);
  return 1;
}
