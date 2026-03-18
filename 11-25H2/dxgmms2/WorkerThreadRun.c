/*
 * XREFs of WorkerThreadRun @ 0x14009FC84
 * Callers:
 *     ?VidMmWorkerThreadProc2@@YAXPEAX@Z @ 0x14009FBE0 (-VidMmWorkerThreadProc2@@YAXPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140035820 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x140036410 (McTemplateK0pp_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     DeselectTask @ 0x14009F7C0 (DeselectTask.c)
 *     QueryCurrentTimePrecise @ 0x14009F90C (QueryCurrentTimePrecise.c)
 *     QueryPendingTerminations @ 0x14009F938 (QueryPendingTerminations.c)
 *     SelectTask @ 0x14009FA00 (SelectTask.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall WorkerThreadRun(struct VIDMM_WORKER_THREAD2 *a1)
{
  struct VIDMM_TASK *v2; // rsi
  int v3; // edi
  __int64 v4; // r8
  __int64 v5; // [rsp+30h] [rbp-30h] BYREF
  char v6; // [rsp+38h] [rbp-28h]
  __int128 v7; // [rsp+40h] [rbp-20h] BYREF
  __int64 v8; // [rsp+50h] [rbp-10h]
  struct VIDMM_TASK *v9; // [rsp+70h] [rbp+10h] BYREF

  *((_QWORD *)a1 + 673) = QueryCurrentTimePrecise();
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v5,
    (struct VIDMM_WORKER_THREAD2 *)((char *)a1 + 160),
    1);
  while ( 1 )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v5);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v6 = 1;
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    KeClearEvent(*((PRKEVENT *)a1 + 3));
    QueryPendingTerminations(a1);
    v9 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    SelectTask((__int64)a1, &v7, (volatile signed __int32 **)&v9);
    v2 = v9;
    v3 = (**(__int64 (__fastcall ***)(struct VIDMM_TASK *, struct VIDMM_WORKER_THREAD2 *, __int128 *))v9)(v9, a1, &v7);
    if ( v3 == -1073741267 && (byte_140081243 & 1) != 0 )
      McTemplateK0pp_EtwWriteTransfer(
        *((_QWORD *)v2 + 6),
        &EventPreemptTask,
        v4,
        *(_QWORD *)(*(_QWORD *)a1 + 24LL),
        *((_QWORD *)v2 + 6));
    *((_QWORD *)a1 + 673) = QueryCurrentTimePrecise();
    DeselectTask(a1, v2, &v7);
    if ( v3 == -1073741077 )
      break;
    if ( v3 != -1073741267 && v3 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 195;
      break;
    }
  }
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v5);
}
