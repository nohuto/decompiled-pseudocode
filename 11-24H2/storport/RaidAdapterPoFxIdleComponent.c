/*
 * XREFs of RaidAdapterPoFxIdleComponent @ 0x14001D890
 * Callers:
 *     StorPortUnitPoFxD0Completion @ 0x140008588 (StorPortUnitPoFxD0Completion.c)
 *     RaidUnitCompleteIrpRequest @ 0x14000B1C0 (RaidUnitCompleteIrpRequest.c)
 *     RaUnitDecrementOutstandingIrpRequests @ 0x14000C170 (RaUnitDecrementOutstandingIrpRequests.c)
 *     RaidUnitFreeResources @ 0x14000ED44 (RaidUnitFreeResources.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPnPPassToMiniPort @ 0x140010ED8 (RaidPnPPassToMiniPort.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x14001BDD0 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x14001C05C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     StorPortUnitIdleState @ 0x14001CBA0 (StorPortUnitIdleState.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001DF90 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidCheckPerProcessorCompletions @ 0x14001F090 (RaidCheckPerProcessorCompletions.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x14002E8AC (StorPortUnitPowerRequiredStep2.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x14002EA68 (StorPortUnitPowerNotRequiredStep2.c)
 *     RaUnitScsiMiniportIoctl @ 0x140035FB8 (RaUnitScsiMiniportIoctl.c)
 *     RaidUnitPoFxIdleComponentFromIoctl @ 0x140037038 (RaidUnitPoFxIdleComponentFromIoctl.c)
 *     StorPortAdapterPoFxD0Completion @ 0x140038A30 (StorPortAdapterPoFxD0Completion.c)
 *     RaidUnitPendingIrpDpcRoutine @ 0x14003C390 (RaidUnitPendingIrpDpcRoutine.c)
 *     RaidUnitCompleteResetRequest @ 0x14003C670 (RaidUnitCompleteResetRequest.c)
 *     StorPortUnitPoFxD3Completion @ 0x1400414E0 (StorPortUnitPoFxD3Completion.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140060440 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140060974 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x14007705C (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitEndMaintenanceTime @ 0x140078AF0 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1400790A0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     StorPortAdapterDirectedPowerUpCompletion @ 0x140079D00 (StorPortAdapterDirectedPowerUpCompletion.c)
 *     StorPortUnitDirectedPowerUpRequestD0 @ 0x14007A718 (StorPortUnitDirectedPowerUpRequestD0.c)
 *     TcglibEalExecuteCommandSync @ 0x1400853BC (TcglibEalExecuteCommandSync.c)
 *     StorGetNVMePollingInformation @ 0x14008F3D4 (StorGetNVMePollingInformation.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400B99D8 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1400BE310 (StorUnitExecuteNvmeSrbComplete.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018169C (RaidAdapterDiagnosticIoctl.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 *     RaWmiPassToMiniPort @ 0x1401B73F4 (RaWmiPassToMiniPort.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1401B7B2C (RaUnitQueryCapabilitiesIrp.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B8EB4 (StorGetNVMeIdentifyInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterPoFxIdleComponent(__int64 a1, __int64 a2, __int64 a3)
{
  PoFxIdleComponent(**(_QWORD **)(a1 + 4960), a2, a3);
  return (*(_DWORD *)(*(_QWORD *)(a1 + 4960) + 20LL) & 1) == 0;
}
