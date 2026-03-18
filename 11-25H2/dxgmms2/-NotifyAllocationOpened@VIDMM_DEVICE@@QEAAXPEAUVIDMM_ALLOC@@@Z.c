/*
 * XREFs of ?NotifyAllocationOpened@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F79E0
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400E7C48 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationOpened(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2)
{
  __int64 v2; // rbx
  bool v5; // zf
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rcx
  VIDMM_DEVICE **v8; // rdx
  VIDMM_DEVICE *v9; // rax
  _BYTE v10[8]; // [rsp+50h] [rbp-28h] BYREF
  struct _KTHREAD **v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    v5 = v2 == -48;
    v6 = (struct _KTHREAD **)(v2 + 48);
    v11 = v6;
    if ( !v5 )
    {
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      if ( v6[1] == KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1575;
        DxgkLogInternalTriageEvent(v7, 262146LL);
      }
    }
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v6);
    v12 = 2;
    v8 = (VIDMM_DEVICE **)*((_QWORD *)this + 22);
    v9 = (struct VIDMM_ALLOC *)((char *)a2 + 112);
    if ( *v8 != (VIDMM_DEVICE *)((char *)this + 168) )
      __fastfail(3u);
    *(_QWORD *)v9 = (char *)this + 168;
    *((_QWORD *)a2 + 15) = v8;
    *v8 = v9;
    *((_QWORD *)this + 22) = v9;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
  }
}
