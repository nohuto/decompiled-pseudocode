/*
 * XREFs of KiFlushSoftwareInterruptBatch @ 0x1402C8860
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14022CFA0 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiAbDeferredProcessingWorker @ 0x140283660 (KiAbDeferredProcessingWorker.c)
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiAbProcessPreContextSwitch @ 0x1402A5600 (KiAbProcessPreContextSwitch.c)
 *     KiSearchForNewThread @ 0x1402A59F0 (KiSearchForNewThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402A5F4C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiAttemptToStealStandbyThread @ 0x1402A6884 (KiAttemptToStealStandbyThread.c)
 *     KiEnterLongDpcProcessing @ 0x1402A7594 (KiEnterLongDpcProcessing.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiProcessThreadWaitList @ 0x1402C75B0 (KiProcessThreadWaitList.c)
 *     KiRemoveBoostThread @ 0x1402CBC34 (KiRemoveBoostThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402D7384 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402D9F5C (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402DA488 (KiGroupSchedulingGenerationEnd.c)
 *     KiInswapAndReadyThread @ 0x1402DE624 (KiInswapAndReadyThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402DF08C (KiReadyOutSwappedThreads.c)
 *     KiDeferredReadyThread @ 0x1402DFBE0 (KiDeferredReadyThread.c)
 *     KeSetPriorityBoost @ 0x1402DFC90 (KeSetPriorityBoost.c)
 *     KiHandleDeferredPreemption @ 0x1402E03DC (KiHandleDeferredPreemption.c)
 *     KiExitThreadWaitReschedule @ 0x1402E1088 (KiExitThreadWaitReschedule.c)
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KiSetSystemAffinityThread @ 0x140318DD4 (KiSetSystemAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14031AB50 (HalpTimerStallExecutionProcessor.c)
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14031FE60 (KiAbThreadRemoveBoostsSlow.c)
 *     KiSoftParkElectionDpcRoutine @ 0x1403298E0 (KiSoftParkElectionDpcRoutine.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1403A09F0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403A3DA8 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 *     KiParkCurrentProcessor @ 0x1403D7544 (KiParkCurrentProcessor.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 *     KiApplyForegroundBoostThread @ 0x1404F4630 (KiApplyForegroundBoostThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B3F5C (KiFinalizeCoreControlBlockAssignment.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405BF948 (KiAdjustCoreIsolationReasonThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C5A50 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiFlushSoftwareInterruptBatch(char *a1)
{
  __int64 result; // rax
  bool v3; // zf
  _QWORD *v4; // r14
  unsigned int v5; // edi
  char v6; // r8
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v10[12]; // [rsp+28h] [rbp-20h]

  result = (unsigned __int8)a1[1];
  if ( (_BYTE)result )
  {
    v3 = (_BYTE)result == 1;
    result = (__int64)KeGetCurrentPrcb();
    if ( v3 )
    {
      v6 = *a1;
      v7 = *((_DWORD *)a1 + 1);
      v8 = 31LL;
      ++*(_DWORD *)(result + 36564);
      *(_DWORD *)v10 = v7;
      v9 = 6LL;
      if ( v6 != 1 )
        v8 = 47LL;
      *(_QWORD *)&v10[4] = 0LL;
      result = HalpInterruptSendIpi(&v9, v8);
      v4 = a1 + 8;
    }
    else
    {
      v4 = a1 + 8;
      v5 = 31;
      if ( *a1 != 1 )
        v5 = 47;
      ++*(_DWORD *)(result + 36564);
      HIDWORD(v9) = 0;
      *(_DWORD *)&v10[8] = 0;
      if ( a1 != (char *)-8LL )
      {
        result = KeIsEmptyAffinityEx(v4);
        if ( !(_DWORD)result )
        {
          LODWORD(v9) = 2;
          *(_QWORD *)v10 = v4;
          result = HalpInterruptSendIpi(&v9, v5);
        }
      }
    }
    if ( a1[1] == 2 )
    {
      *v4 = 2097153LL;
      result = (__int64)memset_0(v4 + 1, 0, 0x100uLL);
    }
    a1[1] = 0;
    *((_DWORD *)a1 + 1) = 0xFFFF;
  }
  return result;
}
