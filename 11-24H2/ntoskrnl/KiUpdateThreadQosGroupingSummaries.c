/*
 * XREFs of KiUpdateThreadQosGroupingSummaries @ 0x1404E0370
 * Callers:
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402A8000 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KeApplyWobBamQos @ 0x1402D1948 (KeApplyWobBamQos.c)
 *     KiUpdateThreadSchedulingProperties @ 0x1402D6DAC (KiUpdateThreadSchedulingProperties.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
 *     KzRefreshWorkloadProperties @ 0x1403A0E1C (KzRefreshWorkloadProperties.c)
 *     KeUpdateThreadTag @ 0x14046E3F0 (KeUpdateThreadTag.c)
 *     KeSetProcessPpmPolicy @ 0x140475710 (KeSetProcessPpmPolicy.c)
 *     KeSetThreadSchedulerAssist @ 0x140483038 (KeSetThreadSchedulerAssist.c)
 *     KeSetThreadPpmPolicy @ 0x140486864 (KeSetThreadPpmPolicy.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1404993FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1404DD430 (KiUpdateVPBackingThreadPriority.c)
 *     KiCompleteKernelInit @ 0x140B57CA0 (KiCompleteKernelInit.c)
 * Callees:
 *     KiInterlockedDecrementRankListMembersNoFence @ 0x1404118E0 (KiInterlockedDecrementRankListMembersNoFence.c)
 *     KiInterlockedIncrementRankListMembersNoFence @ 0x140414C40 (KiInterlockedIncrementRankListMembersNoFence.c)
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
