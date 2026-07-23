/*
 * XREFs of ZwPowerInformation @ 0x1406A7F90
 * Callers:
 *     HalpSetShutdownResetHandler @ 0x1405425D8 (HalpSetShutdownResetHandler.c)
 *     DifZwPowerInformationWrapper @ 0x140641AA0 (DifZwPowerInformationWrapper.c)
 *     HaliAcpiMachineStateInit @ 0x1406FFBF0 (HaliAcpiMachineStateInit.c)
 *     PoGetLightestSystemStateForEject @ 0x140747470 (PoGetLightestSystemStateForEject.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x140782C70 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x140782FB0 (RtlRestoreSystemBootStatusDefaults.c)
 *     PdcPortOpenCommon @ 0x14078DE74 (PdcPortOpenCommon.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1408F3AA4 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x1409A1980 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PopNotifyConsoleUserPresent @ 0x1409A1CB0 (PopNotifyConsoleUserPresent.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1409A2468 (PopDisarmIdlePhaseWatchdog.c)
 *     PopInvokeWin32Callout @ 0x1409A49A8 (PopInvokeWin32Callout.c)
 *     RtlpGetSetBootStatusData @ 0x140A352C4 (RtlpGetSetBootStatusData.c)
 *     RtlSetSystemBootStatus @ 0x140A65AF0 (RtlSetSystemBootStatus.c)
 *     PopArmIdlePhaseWatchdog @ 0x140A6E20C (PopArmIdlePhaseWatchdog.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A6E534 (PopPowerAggregatorNotifyCsStateExited.c)
 *     RtlpSystemBootStatusRequest @ 0x140A6F8A4 (RtlpSystemBootStatusRequest.c)
 *     RtlpRecordBootStatusData @ 0x140A717C4 (RtlpRecordBootStatusData.c)
 *     PnpPowerStateTransitionWatchdogPushRecord @ 0x140A78B64 (PnpPowerStateTransitionWatchdogPushRecord.c)
 *     PnpPowerStateTransitionWatchdogPopRecord @ 0x140AB2D44 (PnpPowerStateTransitionWatchdogPopRecord.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140C349A8 (PopCreateIdlePhaseWatchdog.c)
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
  return KiServiceInternal(*(_QWORD *)&InformationLevel);
}
