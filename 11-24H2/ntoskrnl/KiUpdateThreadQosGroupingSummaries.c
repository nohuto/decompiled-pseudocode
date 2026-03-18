/*
 * XREFs of KiUpdateThreadQosGroupingSummaries @ 0x1404E9670
 * Callers:
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140299510 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KeApplyWobBamQos @ 0x1402A2218 (KeApplyWobBamQos.c)
 *     KzRefreshWorkloadProperties @ 0x1403B260C (KzRefreshWorkloadProperties.c)
 *     KiUpdateThreadPriority @ 0x140429720 (KiUpdateThreadPriority.c)
 *     KeUpdateThreadTag @ 0x140472120 (KeUpdateThreadTag.c)
 *     KeSetProcessPpmPolicy @ 0x140479E80 (KeSetProcessPpmPolicy.c)
 *     KiUpdateThreadSchedulingProperties @ 0x14047C4A8 (KiUpdateThreadSchedulingProperties.c)
 *     KeSetThreadSchedulerAssist @ 0x140487FC8 (KeSetThreadSchedulerAssist.c)
 *     KeSetThreadPpmPolicy @ 0x14048BA94 (KeSetThreadPpmPolicy.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14049E5FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1404E6D30 (KiUpdateVPBackingThreadPriority.c)
 *     KiCompleteKernelInit @ 0x140B55C50 (KiCompleteKernelInit.c)
 * Callees:
 *     KiInterlockedDecrementRankListMembersNoFence @ 0x14041CFF0 (KiInterlockedDecrementRankListMembersNoFence.c)
 *     KiInterlockedIncrementRankListMembersNoFence @ 0x14041EF00 (KiInterlockedIncrementRankListMembersNoFence.c)
 */

void __fastcall KiUpdateThreadQosGroupingSummaries(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v3; // r8
  bool v4; // al
  __int64 v5; // rdi
  __int64 v6; // rcx

  v1 = *(_QWORD *)(a1 + 192);
  v3 = *(_QWORD *)(a1 + 200);
  v4 = (*(_BYTE *)(a1 + 35) & 1) != 0 && (((*(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) & 7) - 1) & 0xFFFFFFFA) == 0;
  if ( ((*(_QWORD *)(v1 + 32) & v3) != 0) != v4 )
  {
    v5 = v1 + 704;
    v6 = v1 + 640;
    if ( v4 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 32), v3);
      KiInterlockedIncrementRankListMembersNoFence(v6, *(_QWORD *)(a1 + 36448));
      KiInterlockedIncrementRankListMembersNoFence(v5, *(_QWORD *)(a1 + 36472));
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 32), ~v3);
      KiInterlockedDecrementRankListMembersNoFence(v6, *(_QWORD *)(a1 + 36448));
      KiInterlockedDecrementRankListMembersNoFence(v5, *(_QWORD *)(a1 + 36472));
    }
  }
}
