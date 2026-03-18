/*
 * XREFs of SwitchFromTask @ 0x1400916F0
 * Callers:
 *     ?VidMmCancelTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400915C8 (-VidMmCancelTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall SwitchFromTask(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi

  if ( *(_QWORD *)(a1 + 5968) == a2 )
  {
    v3 = a1 + 5392;
    *(_BYTE *)(a1 + 5976) = 1;
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v3 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a1 + 160, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(a1 + 168) = KeGetCurrentThread();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v3, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v3 + 8) = KeGetCurrentThread();
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(a1 + 168) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 160, 0LL);
    KeLeaveCriticalRegion();
  }
}
