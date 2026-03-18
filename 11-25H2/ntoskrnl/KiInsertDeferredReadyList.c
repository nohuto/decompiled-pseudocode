/*
 * XREFs of KiInsertDeferredReadyList @ 0x140352190
 * Callers:
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x1402557A0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402762CC (KiDeferGroupSchedulingPreemption.c)
 *     ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402F52F0 (-KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140315420 (KiScheduleThreadToRescheduleContext.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiNormalPriorityReadyScan @ 0x14031A434 (KiNormalPriorityReadyScan.c)
 *     KiFlushReadyLists @ 0x140352060 (KiFlushReadyLists.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403DD240 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiScanSharedReadyThreads @ 0x140466DC8 (KiScanSharedReadyThreads.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405C395C (KiAdjustRescheduleContextForIsolationWidthChange.c)
 *     KiAdjustRescheduleContextForProcessorAddition @ 0x1405C3BB0 (KiAdjustRescheduleContextForProcessorAddition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiInsertDeferredReadyList(__int64 *a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // r8
  __int64 *v4; // rdx
  __int64 result; // rax

  v2 = *(_BYTE *)(a2 + 388);
  if ( v2 == 1 )
  {
    *(_DWORD *)(a2 + 116) |= 2u;
  }
  else if ( v2 == 5 )
  {
    v3 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436));
    if ( *(_BYTE *)(a2 + 391) )
      *(_QWORD *)(a2 + 1000) += v3;
    else
      *(_QWORD *)(a2 + 992) += v3;
  }
  *(_BYTE *)(a2 + 388) = 7;
  v4 = (__int64 *)(a2 + 216);
  result = *a1;
  *v4 = *a1;
  *a1 = (__int64)v4;
  return result;
}
