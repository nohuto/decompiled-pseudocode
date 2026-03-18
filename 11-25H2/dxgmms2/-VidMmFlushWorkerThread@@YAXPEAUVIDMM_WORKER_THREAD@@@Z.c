/*
 * XREFs of ?VidMmFlushWorkerThread@@YAXPEAUVIDMM_WORKER_THREAD@@@Z @ 0x140098C54
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z @ 0x140093434 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     VidMmTransitionToState @ 0x1400FFD48 (VidMmTransitionToState.c)
 */

void __fastcall VidMmFlushWorkerThread(struct VIDMM_WORKER_THREAD *a1)
{
  char *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = (char *)a1 + 136;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  if ( *((_BYTE *)a1 + 212) == 1 )
  {
    LOBYTE(v3) = 6;
    VidMmTransitionToState(a1, v3);
    LOBYTE(v4) = 1;
    VidMmTransitionToState(a1, v4);
  }
  else
  {
    WdLogSingleEntry1(1LL, *((unsigned __int8 *)a1 + 212));
    WdLogGlobalForLineNumber = 3175;
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
