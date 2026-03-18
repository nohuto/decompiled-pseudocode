/*
 * XREFs of ?VidMmCancelTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400915C8
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1400B2C00 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     SwitchFromTask @ 0x1400916F0 (SwitchFromTask.c)
 *     ?VidMmDequeueTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x14009F43C (-VidMmDequeueTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidMmCancelTask(struct VIDMM_TASK **a1, struct VIDMM_TASK *a2)
{
  char *v2; // rsi
  char *v5; // [rsp+30h] [rbp-18h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v2 = (char *)(a1 + 674);
  v5 = (char *)(a1 + 674);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v6 = 1;
  if ( KeGetCurrentThread() == a1[1] )
  {
    if ( a1[746] == a2 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 79LL, a1, a2, 0LL);
      WdLogGlobalForLineNumber = 195;
      JUMPOUT(0x1400916ABLL);
    }
  }
  else
  {
    SwitchFromTask(a1, a2);
  }
  if ( *((_QWORD *)a2 + 4) )
    VidMmDequeueTask((struct VIDMM_WORKER_THREAD2 *)a1, a2);
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v5);
}
