/*
 * XREFs of PsIsHostSilo @ 0x14043DF70
 * Callers:
 *     ObInitServerSilo @ 0x140736FFC (ObInitServerSilo.c)
 *     ObpCreateDosDevicesDirectory @ 0x14073773C (ObpCreateDosDevicesDirectory.c)
 *     ObpInitializeRootNamespace @ 0x140737C88 (ObpInitializeRootNamespace.c)
 *     PspCatchCriticalBreak @ 0x140769208 (PspCatchCriticalBreak.c)
 *     PsRegisterSiloMonitor @ 0x1407694A0 (PsRegisterSiloMonitor.c)
 *     SeInitServerSilo @ 0x14077FA8C (SeInitServerSilo.c)
 *     EtwpInitializeSiloState @ 0x140798D8C (EtwpInitializeSiloState.c)
 *     ExpTimeZoneWork @ 0x1407A7650 (ExpTimeZoneWork.c)
 *     SLUpdateLicenseDataInternal @ 0x1407AAD54 (SLUpdateLicenseDataInternal.c)
 *     PspMapSiloSharedDataView @ 0x14083B6C0 (PspMapSiloSharedDataView.c)
 *     IopAllocRealFileObject @ 0x14085A290 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     SeCreateClientSecurityEx @ 0x1408A64C0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1408A6770 (AlpcpGetEffectiveTokenMessage.c)
 *     SepCreateClientSecurityEx @ 0x1408A6AF0 (SepCreateClientSecurityEx.c)
 *     AlpcpExposeTokenAttribute @ 0x1408A82D0 (AlpcpExposeTokenAttribute.c)
 *     MmMapApiSetView @ 0x1408FA238 (MmMapApiSetView.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140920364 (EtwpWriteAppStateChangeSummary.c)
 *     PopGetSettingNotificationName @ 0x1409663C4 (PopGetSettingNotificationName.c)
 *     sub_140978BA4 @ 0x140978BA4 (sub_140978BA4.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409B977C (SepUpdateSiloInClientSecurity.c)
 *     PspEstimateNewProcessServerSilo @ 0x1409BD31C (PspEstimateNewProcessServerSilo.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     NtQueryInformationJobObject @ 0x1409ECC70 (NtQueryInformationJobObject.c)
 *     PopTransitionCheckpoint @ 0x140A1C604 (PopTransitionCheckpoint.c)
 *     SepRmCommandServerThread @ 0x140A4F080 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140A4F304 (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x140A80BEC (DbgkRegisterErrorPort.c)
 *     NtSetSystemPowerState @ 0x140B4F250 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
