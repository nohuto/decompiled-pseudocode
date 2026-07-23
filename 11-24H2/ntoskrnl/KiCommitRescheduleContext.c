/*
 * XREFs of KiCommitRescheduleContext @ 0x1402A7F40
 * Callers:
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiSearchForNewThread @ 0x1402A59F0 (KiSearchForNewThread.c)
 *     KiRemoveBoostThread @ 0x1402CBC34 (KiRemoveBoostThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402D7384 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402D9F5C (KiGroupSchedulingQuantumEnd.c)
 *     KiHandleDeferredPreemption @ 0x1402E03DC (KiHandleDeferredPreemption.c)
 *     KiExitThreadWaitReschedule @ 0x1402E1088 (KiExitThreadWaitReschedule.c)
 *     KiSetSystemAffinityThread @ 0x140318DD4 (KiSetSystemAffinityThread.c)
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140329B04 (KiSoftParkElectionUnparkProcessor.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403A3DA8 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiParkCurrentProcessor @ 0x1403D7544 (KiParkCurrentProcessor.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 *     KiApplyForegroundBoostThread @ 0x1404F4630 (KiApplyForegroundBoostThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B3F5C (KiFinalizeCoreControlBlockAssignment.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405BF948 (KiAdjustCoreIsolationReasonThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C5A50 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402A8000 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 */

__int64 __fastcall KiCommitRescheduleContext(
        unsigned __int8 *a1,
        struct _KPRCB *a2,
        unsigned int a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  unsigned __int8 v4; // si
  unsigned int v8; // edi
  __int64 i; // rbp
  __int64 result; // rax
  unsigned __int8 *v11; // rcx
  unsigned __int8 v12; // dl

  v4 = 0;
  v8 = a3 | 2;
  if ( (WORD2(xmmword_140FC6B50) & 0x400) == 0 )
    v8 = a3;
  for ( i = 0LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
    v4 |= KiCommitRescheduleContextEntry(
            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)&a1[32 * i + 16 + 8 * (unsigned int)i],
            a2,
            v8,
            a4);
  result = v4;
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    v11 = *(unsigned __int8 **)(*((_QWORD *)a1 + 2) + 36440LL);
    v12 = v11[1] + 1;
    v11[1] = v12;
    if ( v12 >= *v11 )
      v11[1] = 0;
  }
  return result;
}
