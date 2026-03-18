/*
 * XREFs of ?IsAllocationPinned@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400FCAD8
 * Callers:
 *     VidMmIsAllocationPinned @ 0x14003F6A0 (VidMmIsAllocationPinned.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140007710 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?IsLogicallyPinned@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003EC6C (-IsLogicallyPinned@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall VIDMM_GLOBAL::IsAllocationPinned(VIDMM_GLOBAL *this, struct VIDMM_MULTI_ALLOC *a2)
{
  struct _KTHREAD **v2; // rbx
  __int64 v4; // rcx
  char IsLogicallyPinned; // bl
  _BYTE v7[8]; // [rsp+50h] [rbp-28h] BYREF
  char *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]

  v9 = 0;
  v2 = (struct _KTHREAD **)((char *)this + 44712);
  v8 = (char *)this + 44712;
  if ( this != (VIDMM_GLOBAL *)-44712LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( v2[1] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(v4, 262146LL);
    }
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v7);
  IsLogicallyPinned = VIDMM_ALLOC::IsLogicallyPinned(a2);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7);
  return IsLogicallyPinned;
}
