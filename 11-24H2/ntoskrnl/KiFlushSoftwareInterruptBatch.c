/*
 * XREFs of KiFlushSoftwareInterruptBatch @ 0x14031FCD0
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x1402011F0 (KiSoftParkElectionDpcRoutine.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiAbDeferredProcessingWorker @ 0x140253050 (KiAbDeferredProcessingWorker.c)
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiAbProcessPreContextSwitch @ 0x140295A00 (KiAbProcessPreContextSwitch.c)
 *     KiHandleDeferredPreemption @ 0x14029602C (KiHandleDeferredPreemption.c)
 *     KiSearchForNewThread @ 0x140296D10 (KiSearchForNewThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14029726C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiExitThreadWaitReschedule @ 0x140297854 (KiExitThreadWaitReschedule.c)
 *     KiAttemptToStealStandbyThread @ 0x140297D94 (KiAttemptToStealStandbyThread.c)
 *     KiEnterLongDpcProcessing @ 0x140298AA4 (KiEnterLongDpcProcessing.c)
 *     KiReadyDeferredReadyList @ 0x140299320 (KiReadyDeferredReadyList.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14030AEFC (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14030B428 (KiGroupSchedulingGenerationEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14030F980 (KiDeferGroupSchedulingPreemption.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiProcessThreadWaitList @ 0x14031EA20 (KiProcessThreadWaitList.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KiReadyOutSwappedThreads @ 0x140336F68 (KiReadyOutSwappedThreads.c)
 *     KiInswapAndReadyThread @ 0x140338374 (KiInswapAndReadyThread.c)
 *     KiDeferredReadyThread @ 0x1403386A0 (KiDeferredReadyThread.c)
 *     KeSetPriorityBoost @ 0x140338750 (KeSetPriorityBoost.c)
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KiSetSystemAffinityThread @ 0x1403398F4 (KiSetSystemAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14033B670 (HalpTimerStallExecutionProcessor.c)
 *     KeYieldExecution @ 0x14033C510 (KeYieldExecution.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x140340980 (KiAbThreadRemoveBoostsSlow.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1403B21E0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403C9208 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403DD970 (KiSearchForNewThreadsOnTarget.c)
 *     KiParkCurrentProcessor @ 0x1403E9898 (KiParkCurrentProcessor.c)
 *     KiDirectSwitchThread @ 0x14042B970 (KiDirectSwitchThread.c)
 *     KiApplyForegroundBoostThread @ 0x1404F6D4C (KiApplyForegroundBoostThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B6C9C (KiFinalizeCoreControlBlockAssignment.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405C2378 (KiAdjustCoreIsolationReasonThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C8320 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
