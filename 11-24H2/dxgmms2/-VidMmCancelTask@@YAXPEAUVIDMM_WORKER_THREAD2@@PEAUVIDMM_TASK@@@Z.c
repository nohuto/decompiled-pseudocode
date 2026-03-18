/*
 * XREFs of ?VidMmCancelTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400915FC
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1400BABD8 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     SwitchFromTask @ 0x1400916E0 (SwitchFromTask.c)
 *     ?VidMmDequeueTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400A0CBC (-VidMmDequeueTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidMmCancelTask(struct VIDMM_TASK **a1, struct VIDMM_TASK *a2)
{
  char *v2; // rbx
  char *v5; // [rsp+30h] [rbp-18h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v2 = (char *)(a1 + 674);
  v5 = (char *)(a1 + 674);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v6 = 1;
  if ( KeGetCurrentThread() == a1[1] )
  {
    if ( a1[746] == a2 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 79LL, a1, a2, 0LL);
      WdLogGlobalForLineNumber = 195;
      JUMPOUT(0x1400916D8LL);
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
