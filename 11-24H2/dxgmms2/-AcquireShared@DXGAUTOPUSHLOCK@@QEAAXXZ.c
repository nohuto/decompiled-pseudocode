/*
 * XREFs of ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140007710
 * Callers:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140035540 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140035C74 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@G@Z @ 0x1400DF8A4 (-SetupBudgetState@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@G@Z.c)
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1400F6C50 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 *     ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1400F9EB8 (-QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA.c)
 *     ?IsAllocationPinned@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400FD1FC (-IsAllocationPinned@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_MULTI_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall DXGAUTOPUSHLOCK::AcquireShared(DXGAUTOPUSHLOCK *this)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = *((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v1, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v5 = *(unsigned int *)(v1 + 24);
      if ( (_DWORD)v5 != -1 && (byte_140081241 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v3, "g", v4, v5);
    }
    ExAcquirePushLockSharedEx(v1, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 16));
  *((_DWORD *)this + 4) = 1;
}
