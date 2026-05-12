/*
 * XREFs of RaidAdapterPoFxActivateComponent @ 0x14001DA40
 * Callers:
 *     RaidUnitSetDevicePowerIrp @ 0x1400079E8 (RaidUnitSetDevicePowerIrp.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPnPPassToMiniPort @ 0x140010ED8 (RaidPnPPassToMiniPort.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x14001BEEC (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x14001C0A0 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     StorPortUnitIdleState @ 0x14001CBA0 (StorPortUnitIdleState.c)
 *     RaidUnitPoFxActivateComponent @ 0x14001D8D0 (RaidUnitPoFxActivateComponent.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001DF90 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidCreateUnit @ 0x140026194 (RaidCreateUnit.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x14002E8AC (StorPortUnitPowerRequiredStep2.c)
 *     RaUnitScsiMiniportIoctl @ 0x140035FB8 (RaUnitScsiMiniportIoctl.c)
 *     StorUnitExecuteNvmeSrb @ 0x140053630 (StorUnitExecuteNvmeSrb.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140060440 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140060974 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortAdapterPoFxWaitWakeCompletion @ 0x140079EE0 (StorPortAdapterPoFxWaitWakeCompletion.c)
 *     TcglibEalExecuteCommandSync @ 0x1400853BC (TcglibEalExecuteCommandSync.c)
 *     StorGetNVMePollingInformation @ 0x14008F3D4 (StorGetNVMePollingInformation.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400B99D8 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018169C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterStopDeviceIrp @ 0x140183020 (RaidAdapterStopDeviceIrp.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 *     RaWmiPassToMiniPort @ 0x1401B73F4 (RaWmiPassToMiniPort.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1401B7B2C (RaUnitQueryCapabilitiesIrp.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B8EB4 (StorGetNVMeIdentifyInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidAdapterPoFxActivateComponent(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (*(_BYTE *)(a1 + 108) & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5280));
    if ( (*(_BYTE *)(a1 + 108) & 2) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5288));
  }
  if ( *(_DWORD *)(a1 + 92) && (a3 & 1) != 0 )
    a3 = (unsigned int)a3 | 4;
  PoFxActivateComponent(**(_QWORD **)(a1 + 4960), a2, a3);
  return *(_DWORD *)(*(_QWORD *)(a1 + 4960) + 20LL) & 1;
}
