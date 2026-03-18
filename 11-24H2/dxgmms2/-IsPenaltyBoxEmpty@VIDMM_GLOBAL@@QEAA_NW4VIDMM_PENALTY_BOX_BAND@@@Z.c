/*
 * XREFs of ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140035C74
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x140114F00 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140007710 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 */

bool __fastcall VIDMM_GLOBAL::IsPenaltyBoxEmpty(__int64 a1)
{
  __int64 v2; // rcx
  bool v3; // bl
  _BYTE v5[8]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]

  v7 = 0;
  v6 = a1 + 44552;
  if ( a1 != -44552 && *(struct _KTHREAD **)(a1 + 44560) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(v2, 262146LL);
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v5);
  v3 = *(_QWORD *)(a1 + 44584) == a1 + 44584;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5);
  return v3;
}
