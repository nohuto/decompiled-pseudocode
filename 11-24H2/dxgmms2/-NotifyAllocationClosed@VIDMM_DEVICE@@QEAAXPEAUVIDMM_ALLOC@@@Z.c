/*
 * XREFs of ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F590C
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400A9EF4 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DE.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400DBD28 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationClosed(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2)
{
  __int64 v2; // rbx
  bool v4; // zf
  struct _KTHREAD **v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _BYTE v10[8]; // [rsp+50h] [rbp-28h] BYREF
  struct _KTHREAD **v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    v4 = v2 == -48;
    v5 = (struct _KTHREAD **)(v2 + 48);
    v11 = v5;
    if ( !v4 && v5[1] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1512;
      DxgkLogInternalTriageEvent(v6, 262146LL);
    }
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v5);
    v7 = (_QWORD *)((char *)a2 + 112);
    v12 = 2;
    v8 = *((_QWORD *)a2 + 14);
    if ( *(struct VIDMM_ALLOC **)(v8 + 8) != (struct VIDMM_ALLOC *)((char *)a2 + 112)
      || (v9 = (_QWORD *)*((_QWORD *)a2 + 15), (_QWORD *)*v9 != v7) )
    {
      __fastfail(3u);
    }
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *((_QWORD *)a2 + 15) = 0LL;
    *v7 = 0LL;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
  }
}
