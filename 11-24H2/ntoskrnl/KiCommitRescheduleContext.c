/*
 * XREFs of KiCommitRescheduleContext @ 0x140299450
 * Callers:
 *     KiSoftParkElectionUnparkProcessor @ 0x140201414 (KiSoftParkElectionUnparkProcessor.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiHandleDeferredPreemption @ 0x14029602C (KiHandleDeferredPreemption.c)
 *     KiSearchForNewThread @ 0x140296D10 (KiSearchForNewThread.c)
 *     KiExitThreadWaitReschedule @ 0x140297854 (KiExitThreadWaitReschedule.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14030AEFC (KiGroupSchedulingQuantumEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14030F980 (KiDeferGroupSchedulingPreemption.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KiSetSystemAffinityThread @ 0x1403398F4 (KiSetSystemAffinityThread.c)
 *     KeYieldExecution @ 0x14033C510 (KeYieldExecution.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403C9208 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403DD970 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403E1850 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiParkCurrentProcessor @ 0x1403E9898 (KiParkCurrentProcessor.c)
 *     KiDirectSwitchThread @ 0x14042B970 (KiDirectSwitchThread.c)
 *     KiApplyForegroundBoostThread @ 0x1404F6D4C (KiApplyForegroundBoostThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B6C9C (KiFinalizeCoreControlBlockAssignment.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405C2378 (KiAdjustCoreIsolationReasonThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C8320 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140299510 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
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
  if ( (WORD2(xmmword_140FC5B10) & 0x400) == 0 )
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
