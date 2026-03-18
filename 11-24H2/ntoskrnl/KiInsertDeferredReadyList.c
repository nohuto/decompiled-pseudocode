/*
 * XREFs of KiInsertDeferredReadyList @ 0x1403CBE30
 * Callers:
 *     KiNormalPriorityReadyScan @ 0x140251B60 (KiNormalPriorityReadyScan.c)
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x140256790 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140298F10 (KiScheduleThreadToRescheduleContext.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140299510 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14030B428 (KiGroupSchedulingGenerationEnd.c)
 *     ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14030F768 (-KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14030F980 (KiDeferGroupSchedulingPreemption.c)
 *     KiFlushReadyLists @ 0x1403CBD00 (KiFlushReadyLists.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403DD970 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403E1850 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiScanSharedReadyThreads @ 0x1404657E0 (KiScanSharedReadyThreads.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405C7B74 (KiAdjustRescheduleContextForIsolationWidthChange.c)
 *     KiAdjustRescheduleContextForProcessorAddition @ 0x1405C7DC8 (KiAdjustRescheduleContextForProcessorAddition.c)
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
