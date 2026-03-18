/*
 * XREFs of ZwPowerInformation @ 0x1406A6FF0
 * Callers:
 *     HalpSetShutdownResetHandler @ 0x140544D18 (HalpSetShutdownResetHandler.c)
 *     DifZwPowerInformationWrapper @ 0x1406434E0 (DifZwPowerInformationWrapper.c)
 *     HaliAcpiMachineStateInit @ 0x140701FB0 (HaliAcpiMachineStateInit.c)
 *     PoGetLightestSystemStateForEject @ 0x140749144 (PoGetLightestSystemStateForEject.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x140782D40 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x140783080 (RtlRestoreSystemBootStatusDefaults.c)
 *     PdcPortOpenCommon @ 0x14078DF44 (PdcPortOpenCommon.c)
 *     PopArmIdlePhaseWatchdog @ 0x14090292C (PopArmIdlePhaseWatchdog.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140902C54 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1409393D4 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x1409BB330 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PopNotifyConsoleUserPresent @ 0x1409BB660 (PopNotifyConsoleUserPresent.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1409BBE18 (PopDisarmIdlePhaseWatchdog.c)
 *     PopInvokeWin32Callout @ 0x1409BE358 (PopInvokeWin32Callout.c)
 *     RtlpGetSetBootStatusData @ 0x140A3FA14 (RtlpGetSetBootStatusData.c)
 *     RtlSetSystemBootStatus @ 0x140A6C590 (RtlSetSystemBootStatus.c)
 *     RtlpSystemBootStatusRequest @ 0x140A75404 (RtlpSystemBootStatusRequest.c)
 *     RtlpRecordBootStatusData @ 0x140A776A4 (RtlpRecordBootStatusData.c)
 *     PnpPowerStateTransitionWatchdogPushRecord @ 0x140A7F3B4 (PnpPowerStateTransitionWatchdogPushRecord.c)
 *     PnpPowerStateTransitionWatchdogPopRecord @ 0x140AB8880 (PnpPowerStateTransitionWatchdogPopRecord.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140C32868 (PopCreateIdlePhaseWatchdog.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&InformationLevel, InputBuffer);
}
