/*
 * XREFs of PopFxBugCheck @ 0x140377108
 * Callers:
 *     PopFxReferenceDevice @ 0x14029F788 (PopFxReferenceDevice.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140315390 (PopPepUpdateIdleStateRefCount.c)
 *     PopPluginComponentIdleState @ 0x1403159F0 (PopPluginComponentIdleState.c)
 *     PopFxDispatchPluginWorkOnce @ 0x140315E30 (PopFxDispatchPluginWorkOnce.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1403160B0 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 *     PopPluginComponentActive @ 0x140317CC0 (PopPluginComponentActive.c)
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 *     PopPepTriggerActivity @ 0x140319270 (PopPepTriggerActivity.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140375CF0 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopFxActivateComponentDependents @ 0x1403769A0 (PopFxActivateComponentDependents.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140378130 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxIdleComponent @ 0x1403B4888 (PopFxIdleComponent.c)
 *     PoFxActivateComponent @ 0x1403B6160 (PoFxActivateComponent.c)
 *     PoFxCompleteIdleCondition @ 0x1404592B0 (PoFxCompleteIdleCondition.c)
 *     PopTranslateDependencyArray @ 0x14048E0F8 (PopTranslateDependencyArray.c)
 *     PopPluginPrepareDevice @ 0x14048E5E0 (PopPluginPrepareDevice.c)
 *     PopFxActivateDevice @ 0x140496080 (PopFxActivateDevice.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1404989D0 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x14049CF90 (PopFxHandleReportDevicePoweredOn.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404B6EAC (PopFxIssueComponentPerfStateChanges.c)
 *     PopPluginRequestComponentPerfState @ 0x1404B71C4 (PopPluginRequestComponentPerfState.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1404BC5A4 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopPepInitializeVetoMasks @ 0x1404BD99C (PopPepInitializeVetoMasks.c)
 *     PopPluginRegisterDevice @ 0x1404C3828 (PopPluginRegisterDevice.c)
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1404D3F80 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 *     PopPluginAbandonDevice @ 0x1404D98B8 (PopPluginAbandonDevice.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1404F588C (PopFxAcpiForwardPepWorkRequest.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1404F9C8C (PopFxCompleteDirectedPowerTransition.c)
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x1405D0260 (PoFxIssueComponentPerfStateChangeMultiple.c)
 *     PoFxRegisterDripsWatchdogCallback @ 0x1405D03D0 (PoFxRegisterDripsWatchdogCallback.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1405D168C (PopFxIssueDirectedPowerTransition.c)
 *     PopFxQueryCurrentComponentPerfState @ 0x1405D196C (PopFxQueryCurrentComponentPerfState.c)
 *     PopFxTransitionCriticalResource @ 0x1405D1FA0 (PopFxTransitionCriticalResource.c)
 *     PopFxWorkOrderWatchdog @ 0x1405D22F0 (PopFxWorkOrderWatchdog.c)
 *     PopPluginQueryComponentPerfSet @ 0x1405D2368 (PopPluginQueryComponentPerfSet.c)
 *     PopPluginQueryComponentPerfSetName @ 0x1405D2414 (PopPluginQueryComponentPerfSetName.c)
 *     PopPluginQueryComponentPerfStates @ 0x1405D24A0 (PopPluginQueryComponentPerfStates.c)
 *     PopPluginUnregisterDevice @ 0x1405D25F0 (PopPluginUnregisterDevice.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1405D8D30 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 *     PopPepInitializeDebuggerMasks @ 0x1405DBAF4 (PopPepInitializeDebuggerMasks.c)
 *     PopPluginAcpiNotificationStrict @ 0x1405E4454 (PopPluginAcpiNotificationStrict.c)
 *     PoFxRegisterComponentPerfStates @ 0x14074D550 (PoFxRegisterComponentPerfStates.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14074DC98 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxPepPerfInfoQuery @ 0x14074E334 (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterDevice @ 0x14074E950 (PopFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x14074EBF0 (PopFxRegisterDeviceWorker.c)
 *     PopFxResetSocSubsystemAccounting @ 0x14074F470 (PopFxResetSocSubsystemAccounting.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14074F75C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14074F88C (PopPluginQuerySocSubsystemMetadata.c)
 *     PopDripsWatchdogTakeAction @ 0x1407664B0 (PopDripsWatchdogTakeAction.c)
 *     PopFxLogSocSubsystemMetadata @ 0x140985A6C (PopFxLogSocSubsystemMetadata.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x1409861C4 (PopPluginQuerySocSubsystemBlockingTime.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopFxBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
