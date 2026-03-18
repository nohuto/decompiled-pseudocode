/*
 * XREFs of PsIsHostSilo @ 0x14043E2E0
 * Callers:
 *     ObInitServerSilo @ 0x14074301C (ObInitServerSilo.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074375C (ObpCreateDosDevicesDirectory.c)
 *     ObpInitializeRootNamespace @ 0x140743CA8 (ObpInitializeRootNamespace.c)
 *     PspCatchCriticalBreak @ 0x140778EB8 (PspCatchCriticalBreak.c)
 *     PsRegisterSiloMonitor @ 0x140779150 (PsRegisterSiloMonitor.c)
 *     SeInitServerSilo @ 0x14078ED4C (SeInitServerSilo.c)
 *     EtwpInitializeSiloState @ 0x1407A815C (EtwpInitializeSiloState.c)
 *     ExpTimeZoneWork @ 0x1407B6AF0 (ExpTimeZoneWork.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 *     SeCreateClientSecurityEx @ 0x1408974A0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x140897750 (AlpcpGetEffectiveTokenMessage.c)
 *     SepCreateClientSecurityEx @ 0x140897AC0 (SepCreateClientSecurityEx.c)
 *     AlpcpExposeTokenAttribute @ 0x140898930 (AlpcpExposeTokenAttribute.c)
 *     IopAllocRealFileObject @ 0x14089A9B0 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     PspMapSiloSharedDataView @ 0x140906E34 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140907078 (MmMapApiSetView.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14094C470 (EtwpWriteAppStateChangeSummary.c)
 *     sub_140972980 @ 0x140972980 (sub_140972980.c)
 *     PopGetSettingNotificationName @ 0x1409BAE7C (PopGetSettingNotificationName.c)
 *     PspEstimateNewProcessServerSilo @ 0x140A4A930 (PspEstimateNewProcessServerSilo.c)
 *     SepRmCommandServerThread @ 0x140A52820 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140A52AA4 (SepRmLsaConnectRequest.c)
 *     PopTransitionCheckpoint @ 0x140A77528 (PopTransitionCheckpoint.c)
 *     DbgkRegisterErrorPort @ 0x140A852C4 (DbgkRegisterErrorPort.c)
 *     SepUpdateSiloInClientSecurity @ 0x140ABC0A8 (SepUpdateSiloInClientSecurity.c)
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
 *     NtSetSystemPowerState @ 0x140B5F390 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
