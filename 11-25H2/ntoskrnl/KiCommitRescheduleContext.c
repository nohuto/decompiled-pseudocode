/*
 * XREFs of KiCommitRescheduleContext @ 0x140317320
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14026C404 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402762CC (KiDeferGroupSchedulingPreemption.c)
 *     KiSetSystemAffinityThread @ 0x140278684 (KiSetSystemAffinityThread.c)
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiHandleDeferredPreemption @ 0x1402F2F88 (KiHandleDeferredPreemption.c)
 *     KiExitThreadWaitReschedule @ 0x1402F39F4 (KiExitThreadWaitReschedule.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 *     KiAttemptToStealStandbyThread @ 0x14032E858 (KiAttemptToStealStandbyThread.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403509D0 (KiGroupSchedulingQuantumEnd.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403DD240 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiParkCurrentProcessor @ 0x1403E0254 (KiParkCurrentProcessor.c)
 *     KiApplyForegroundBoostThread @ 0x1404F46AC (KiApplyForegroundBoostThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B2DCC (KiFinalizeCoreControlBlockAssignment.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405BE298 (KiAdjustCoreIsolationReasonThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C4100 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
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
