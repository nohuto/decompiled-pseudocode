/*
 * XREFs of KiFlushSoftwareInterruptBatch @ 0x140288530
 * Callers:
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14026C404 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140270C08 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402762CC (KiDeferGroupSchedulingPreemption.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KiSetSystemAffinityThread @ 0x140278684 (KiSetSystemAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14027A3C0 (HalpTimerStallExecutionProcessor.c)
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiProcessThreadWaitList @ 0x1402874A0 (KiProcessThreadWaitList.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14029BB60 (KiAbThreadRemoveBoostsSlow.c)
 *     KiAbDeferredProcessingWorker @ 0x1402E4D00 (KiAbDeferredProcessingWorker.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402F06E0 (KiReadyOutSwappedThreads.c)
 *     KiInswapAndReadyThread @ 0x1402F1104 (KiInswapAndReadyThread.c)
 *     KiDeferredReadyThread @ 0x1402F13A0 (KiDeferredReadyThread.c)
 *     KiHandleDeferredPreemption @ 0x1402F2F88 (KiHandleDeferredPreemption.c)
 *     KiExitThreadWaitReschedule @ 0x1402F39F4 (KiExitThreadWaitReschedule.c)
 *     KiSoftParkElectionDpcRoutine @ 0x1403137E0 (KiSoftParkElectionDpcRoutine.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiEnterLongDpcProcessing @ 0x140314FA4 (KiEnterLongDpcProcessing.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     KiAbProcessPreContextSwitch @ 0x140316AB0 (KiAbProcessPreContextSwitch.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     KeSetPriorityBoost @ 0x140326970 (KeSetPriorityBoost.c)
 *     KiAttemptToStealStandbyThread @ 0x14032E858 (KiAttemptToStealStandbyThread.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140330CFC (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403509D0 (KiGroupSchedulingQuantumEnd.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 *     KiParkCurrentProcessor @ 0x1403E0254 (KiParkCurrentProcessor.c)
 *     KiApplyForegroundBoostThread @ 0x1404F46AC (KiApplyForegroundBoostThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B2DCC (KiFinalizeCoreControlBlockAssignment.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405BE298 (KiAdjustCoreIsolationReasonThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C4100 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
