/*
 * XREFs of ?IsAllocationPinned@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400FD1FC
 * Callers:
 *     VidMmIsAllocationPinned @ 0x14003D610 (VidMmIsAllocationPinned.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140007710 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?IsLogicallyPinned@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003C98C (-IsLogicallyPinned@VIDMM_ALLOC@@QEBA_NXZ.c)
 */

char __fastcall VIDMM_GLOBAL::IsAllocationPinned(VIDMM_GLOBAL *this, struct VIDMM_MULTI_ALLOC *a2)
{
  bool v2; // zf
  struct _KTHREAD **v3; // rcx
  __int64 v5; // rcx
  char IsLogicallyPinned; // bl
  char v8[8]; // [rsp+50h] [rbp-28h] BYREF
  struct _KTHREAD **v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]

  v2 = (VIDMM_GLOBAL *)((char *)this + 44712) == 0LL;
  v3 = (struct _KTHREAD **)((char *)this + 44712);
  v10 = 0;
  v9 = v3;
  if ( !v2 && v3[1] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(v5, 262146LL);
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v8);
  IsLogicallyPinned = VIDMM_ALLOC::IsLogicallyPinned(a2);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8);
  return IsLogicallyPinned;
}
