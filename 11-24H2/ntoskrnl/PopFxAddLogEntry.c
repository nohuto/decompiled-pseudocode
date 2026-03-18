/*
 * XREFs of PopFxAddLogEntry @ 0x1403782D8
 * Callers:
 *     PopPluginNotifyIdleState @ 0x1403150C4 (PopPluginNotifyIdleState.c)
 *     PopPluginComponentIdleState @ 0x1403159F0 (PopPluginComponentIdleState.c)
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140375CF0 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1403768BC (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpStart @ 0x14037712C (PopDiagTraceIrpStart.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140377C48 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceIrpFinish @ 0x140377E10 (PopDiagTraceIrpFinish.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140378130 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowered @ 0x140378228 (PopDiagTraceFxDevicePowered.c)
 *     PopFxAllocatePowerIrp @ 0x140378380 (PopFxAllocatePowerIrp.c)
 *     PopFxIdleWorker @ 0x1403B4B50 (PopFxIdleWorker.c)
 *     PoFxCompleteIdleState @ 0x14044C090 (PoFxCompleteIdleState.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1404515CC (PopFxHandleDirectedPowerTransition.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1404517B0 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PoFxCompleteIdleCondition @ 0x1404592B0 (PoFxCompleteIdleCondition.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1404989D0 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14049A8A4 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxCompleteComponentPerfState @ 0x1404B6CBC (PopFxCompleteComponentPerfState.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404B6EAC (PopFxIssueComponentPerfStateChanges.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1404D64C8 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1404F9C8C (PopFxCompleteDirectedPowerTransition.c)
 *     PopDiagTraceFxComponentResidency @ 0x1405D4E78 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1405D4F5C (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140756340 (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x1407563DC (PopDiagTraceFxDeviceUnregistration.c)
 *     PopFxTraceDeviceRegistration @ 0x140A58DFC (PopFxTraceDeviceRegistration.c)
 *     PopFxTracePerfRegistration @ 0x140ABE960 (PopFxTracePerfRegistration.c)
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
