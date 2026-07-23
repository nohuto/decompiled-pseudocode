/*
 * XREFs of PsIsHostSilo @ 0x1404329D0
 * Callers:
 *     ObInitServerSilo @ 0x140740F4C (ObInitServerSilo.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074168C (ObpCreateDosDevicesDirectory.c)
 *     ObpInitializeRootNamespace @ 0x140741BD8 (ObpInitializeRootNamespace.c)
 *     PspCatchCriticalBreak @ 0x140778FB8 (PspCatchCriticalBreak.c)
 *     PsRegisterSiloMonitor @ 0x140779250 (PsRegisterSiloMonitor.c)
 *     SeInitServerSilo @ 0x14078ED1C (SeInitServerSilo.c)
 *     EtwpInitializeSiloState @ 0x1407A829C (EtwpInitializeSiloState.c)
 *     ExpTimeZoneWork @ 0x1407B6F40 (ExpTimeZoneWork.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA654 (SLUpdateLicenseDataInternal.c)
 *     SeCreateClientSecurityEx @ 0x14089FB40 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x14089FDF0 (AlpcpGetEffectiveTokenMessage.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 *     AlpcpExposeTokenAttribute @ 0x1408A0FD0 (AlpcpExposeTokenAttribute.c)
 *     IopAllocRealFileObject @ 0x1408A3050 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     PspMapSiloSharedDataView @ 0x1408DD840 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1408DDA88 (MmMapApiSetView.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1408F09E0 (EtwpWriteAppStateChangeSummary.c)
 *     sub_14095B190 @ 0x14095B190 (sub_14095B190.c)
 *     PopGetSettingNotificationName @ 0x1409A14CC (PopGetSettingNotificationName.c)
 *     PspEstimateNewProcessServerSilo @ 0x140A41590 (PspEstimateNewProcessServerSilo.c)
 *     SepRmCommandServerThread @ 0x140A4A870 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140A4AAF4 (SepRmLsaConnectRequest.c)
 *     PopTransitionCheckpoint @ 0x140A71648 (PopTransitionCheckpoint.c)
 *     DbgkRegisterErrorPort @ 0x140A7FE04 (DbgkRegisterErrorPort.c)
 *     SepUpdateSiloInClientSecurity @ 0x140AB70C8 (SepUpdateSiloInClientSecurity.c)
 *     NtQueryInformationJobObject @ 0x140ACACA0 (NtQueryInformationJobObject.c)
 *     NtSetSystemPowerState @ 0x140B61410 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
