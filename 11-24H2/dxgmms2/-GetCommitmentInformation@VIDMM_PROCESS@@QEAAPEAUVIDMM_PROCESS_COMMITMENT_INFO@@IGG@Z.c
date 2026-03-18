/*
 * XREFs of ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAUVIDMM_PROCESS_COMMITMENT_INFO@@IGG@Z @ 0x1400EA868
 * Callers:
 *     ?QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJGPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x140099098 (-QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJGPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTIC.c)
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AD020 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 *     VidMmDemoteAllocationsToFitGlobalAlloc @ 0x1400E9CB0 (VidMmDemoteAllocationsToFitGlobalAlloc.c)
 * Callees:
 *     <none>
 */

struct VIDMM_PROCESS_COMMITMENT_INFO *__fastcall VIDMM_PROCESS::GetCommitmentInformation(
        VIDMM_PROCESS *this,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned __int16 a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( v4 )
    return (struct VIDMM_PROCESS_COMMITMENT_INFO *)(*(_QWORD *)(304LL * a3 + *(_QWORD *)(v4 + 16)) + 184LL * a4);
  else
    return 0LL;
}
