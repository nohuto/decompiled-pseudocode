/*
 * XREFs of PopFxAddLogEntry @ 0x140359640
 * Callers:
 *     PopFxIdleWorker @ 0x14034964C (PopFxIdleWorker.c)
 *     PopFxProcessWork @ 0x14034B940 (PopFxProcessWork.c)
 *     PopPluginComponentIdleState @ 0x140357BF0 (PopPluginComponentIdleState.c)
 *     PopPluginNotifyIdleState @ 0x140357DE0 (PopPluginNotifyIdleState.c)
 *     PopDiagTraceFxDevicePowerState @ 0x140358A38 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpStart @ 0x140358B14 (PopDiagTraceIrpStart.c)
 *     PopFxAllocatePowerIrp @ 0x140358D10 (PopFxAllocatePowerIrp.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140358F8C (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceIrpFinish @ 0x140359154 (PopDiagTraceIrpFinish.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140359474 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowered @ 0x14035956C (PopDiagTraceFxDevicePowered.c)
 *     PoFxCompleteIdleState @ 0x14044CB70 (PoFxCompleteIdleState.c)
 *     PopFxHandleDirectedPowerTransition @ 0x14044FCFC (PopFxHandleDirectedPowerTransition.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x14044FEE0 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PoFxCompleteIdleCondition @ 0x140458A80 (PoFxCompleteIdleCondition.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140496320 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x140498E30 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14049A5F4 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxCompleteComponentPerfState @ 0x1404B73E8 (PopFxCompleteComponentPerfState.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404B75D8 (PopFxIssueComponentPerfStateChanges.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1404D6DD8 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1404F73C4 (PopFxCompleteDirectedPowerTransition.c)
 *     PopDiagTraceFxComponentResidency @ 0x1405D0518 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1405D05FC (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x14074A28C (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x14074A328 (PopDiagTraceFxDeviceUnregistration.c)
 *     PopFxTraceDeviceRegistration @ 0x140A55454 (PopFxTraceDeviceRegistration.c)
 *     PopFxTracePerfRegistration @ 0x140ABA9A8 (PopFxTracePerfRegistration.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PopFxAddLogEntry(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rdx
  struct _KTHREAD *result; // rax

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 80);
    if ( v6 )
    {
      v7 = 3LL
         * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 896), 1u) % *(_DWORD *)(v6 + 880));
      v8 = *(_QWORD *)(v6 + 888);
      *(_QWORD *)(v8 + 8 * v7) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v8 + 8 * v7 + 8) = a3;
      *(_BYTE *)(v8 + 8 * v7 + 9) = a2;
      *(_WORD *)(v8 + 8 * v7 + 10) = KeGetCurrentPrcb()->Number;
      *(_WORD *)(v8 + 8 * v7 + 12) = KeGetCurrentThread()[1].CycleTime;
      result = KeGetCurrentThread();
      *(_WORD *)(v8 + 8 * v7 + 14) = result[1].CurrentRunTime;
      *(_QWORD *)(v8 + 8 * v7 + 16) = a4;
    }
  }
  return result;
}
