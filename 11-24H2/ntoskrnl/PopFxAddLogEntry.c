/*
 * XREFs of PopFxAddLogEntry @ 0x1402E69B4
 * Callers:
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1402E6324 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceIrpFinish @ 0x1402E64EC (PopDiagTraceIrpFinish.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1402E680C (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowered @ 0x1402E6904 (PopDiagTraceFxDevicePowered.c)
 *     PopFxAllocatePowerIrp @ 0x1402E6A5C (PopFxAllocatePowerIrp.c)
 *     PoFxCompleteIdleState @ 0x1403A5B20 (PoFxCompleteIdleState.c)
 *     PopPluginComponentIdleState @ 0x1403A71EC (PopPluginComponentIdleState.c)
 *     PopPluginNotifyIdleState @ 0x1403A73DC (PopPluginNotifyIdleState.c)
 *     PopFxIdleWorker @ 0x1403A9020 (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x14044E360 (PoFxCompleteIdleCondition.c)
 *     PopDiagTraceIrpStart @ 0x14046B350 (PopDiagTraceIrpStart.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140481CE0 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopDiagTraceFxDevicePowerState @ 0x140483350 (PopDiagTraceFxDevicePowerState.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x140493330 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140495294 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxCompleteComponentPerfState @ 0x1404B149C (PopFxCompleteComponentPerfState.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404B168C (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1404B3CDC (PopFxHandleDirectedPowerTransition.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1404B3DB0 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1404CF918 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1404F756C (PopFxCompleteDirectedPowerTransition.c)
 *     PopDiagTraceFxComponentResidency @ 0x1405D2638 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1405D271C (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x1407547C0 (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x14075485C (PopDiagTraceFxDeviceUnregistration.c)
 *     PopFxTraceDeviceRegistration @ 0x140A505AC (PopFxTraceDeviceRegistration.c)
 *     PopFxTracePerfRegistration @ 0x140AB99D0 (PopFxTracePerfRegistration.c)
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
