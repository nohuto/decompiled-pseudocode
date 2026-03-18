/*
 * XREFs of ?CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F4090
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x140036B84 (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400DA7B0 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400DA900 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F18FC (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::CleanupAllocationCommitment(VIDMM_DEVICE *this, __int64 ***a2)
{
  __int64 v4; // rdi
  bool v5; // zf
  struct _KTHREAD **v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  _BYTE v10[8]; // [rsp+50h] [rbp-28h] BYREF
  struct _KTHREAD **v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]

  if ( a2 == *((__int64 ****)this + 31) )
    *((_QWORD *)this + 31) = 0LL;
  v4 = *((_QWORD *)this + 2);
  v5 = v4 == -48;
  v6 = (struct _KTHREAD **)(v4 + 48);
  v11 = v6;
  if ( !v5 && v6[1] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(v7, 262146LL);
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v6);
  v12 = 2;
  if ( VIDMM_ALLOC::HasAnyResidencyReferences((VIDMM_ALLOC *)a2) )
  {
    VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
    VIDMM_DEVICE::NotifyAllocationEvicted(this, a2);
    VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2), v8, v9);
  }
  *((_DWORD *)a2 + 42) = 0;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
}
