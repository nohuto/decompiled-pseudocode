/*
 * XREFs of PopFxBugCheck @ 0x1403A9948
 * Callers:
 *     PoFxActivateComponent @ 0x1402AE460 (PoFxActivateComponent.c)
 *     PopFxDispatchPluginWorkOnce @ 0x1402BE9E4 (PopFxDispatchPluginWorkOnce.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1402BEC64 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 *     PopPluginComponentActive @ 0x1402C0850 (PopPluginComponentActive.c)
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     PopPepTriggerActivity @ 0x1402C1E00 (PopPepTriggerActivity.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1402E680C (PopFxCompleteDevicePowerRequired.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403A6EB0 (PopPepUpdateIdleStateRefCount.c)
 *     PopPluginComponentIdleState @ 0x1403A71EC (PopPluginComponentIdleState.c)
 *     PopFxIdleComponent @ 0x1403A8D58 (PopFxIdleComponent.c)
 *     PopFxActivateComponentDependents @ 0x1403A91E0 (PopFxActivateComponentDependents.c)
 *     PopFxReferenceDevice @ 0x1403AA248 (PopFxReferenceDevice.c)
 *     PoFxCompleteIdleCondition @ 0x14044E360 (PoFxCompleteIdleCondition.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140481CE0 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopTranslateDependencyArray @ 0x1404885C8 (PopTranslateDependencyArray.c)
 *     PopPluginPrepareDevice @ 0x140488A18 (PopPluginPrepareDevice.c)
 *     PopFxActivateDevice @ 0x140490A10 (PopFxActivateDevice.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x140493330 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x140497CE0 (PopFxHandleReportDevicePoweredOn.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404B168C (PopFxIssueComponentPerfStateChanges.c)
 *     PopPluginRequestComponentPerfState @ 0x1404B19A4 (PopPluginRequestComponentPerfState.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1404B770C (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopPepInitializeVetoMasks @ 0x1404B8B0C (PopPepInitializeVetoMasks.c)
 *     PopPluginRegisterDevice @ 0x1404BED60 (PopPluginRegisterDevice.c)
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1404CD190 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 *     PopPluginAbandonDevice @ 0x1404D3334 (PopPluginAbandonDevice.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1404F318C (PopFxAcpiForwardPepWorkRequest.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1404F756C (PopFxCompleteDirectedPowerTransition.c)
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x1405CD980 (PoFxIssueComponentPerfStateChangeMultiple.c)
 *     PoFxRegisterDripsWatchdogCallback @ 0x1405CDAF0 (PoFxRegisterDripsWatchdogCallback.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1405CEDAC (PopFxIssueDirectedPowerTransition.c)
 *     PopFxQueryCurrentComponentPerfState @ 0x1405CF08C (PopFxQueryCurrentComponentPerfState.c)
 *     PopFxTransitionCriticalResource @ 0x1405CF6C0 (PopFxTransitionCriticalResource.c)
 *     PopFxWorkOrderWatchdog @ 0x1405CFA10 (PopFxWorkOrderWatchdog.c)
 *     PopPluginQueryComponentPerfSet @ 0x1405CFA88 (PopPluginQueryComponentPerfSet.c)
 *     PopPluginQueryComponentPerfSetName @ 0x1405CFB34 (PopPluginQueryComponentPerfSetName.c)
 *     PopPluginQueryComponentPerfStates @ 0x1405CFBC0 (PopPluginQueryComponentPerfStates.c)
 *     PopPluginUnregisterDevice @ 0x1405CFD10 (PopPluginUnregisterDevice.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1405D61D0 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 *     PopPepInitializeDebuggerMasks @ 0x1405D89C4 (PopPepInitializeDebuggerMasks.c)
 *     PopPluginAcpiNotificationStrict @ 0x1405E19E0 (PopPluginAcpiNotificationStrict.c)
 *     PoFxRegisterComponentPerfStates @ 0x14074B880 (PoFxRegisterComponentPerfStates.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14074BFC8 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxPepPerfInfoQuery @ 0x14074C664 (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterDevice @ 0x14074CC80 (PopFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x14074CF20 (PopFxRegisterDeviceWorker.c)
 *     PopFxResetSocSubsystemAccounting @ 0x14074D7A0 (PopFxResetSocSubsystemAccounting.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14074DA8C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14074DBBC (PopPluginQuerySocSubsystemMetadata.c)
 *     PopDripsWatchdogTakeAction @ 0x140765E80 (PopDripsWatchdogTakeAction.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14096E27C (PopFxLogSocSubsystemMetadata.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x14096E9D4 (PopPluginQuerySocSubsystemBlockingTime.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopFxBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
