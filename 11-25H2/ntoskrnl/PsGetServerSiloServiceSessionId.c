/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x1404565D0
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407147D4 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140763CE8 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1407804D4 (SepCopyClientTokenAndSetSilo.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140855F70 (CmpCheckOpenAccessOnKeyBody.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     DbgkpSendErrorMessage @ 0x1408B6DA4 (DbgkpSendErrorMessage.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408CEAE0 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3B0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5C0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiCMMandatoryFilterCallback @ 0x1408CFBC0 (PiCMMandatoryFilterCallback.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408CFF70 (PiUEventApplyAdditionalFilters.c)
 *     PiCMValidateDeviceInstance @ 0x140933E98 (PiCMValidateDeviceInstance.c)
 *     IoRegisterPlugPlayNotification @ 0x14096BD60 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14096CC3C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x14096CFB0 (PnpNotifyTargetDeviceChange.c)
 *     SeGetTokenDeviceMap @ 0x14097F108 (SeGetTokenDeviceMap.c)
 *     PsIsServiceSession @ 0x1409BB130 (PsIsServiceSession.c)
 *     SeQuerySessionIdTokenEx @ 0x1409E0750 (SeQuerySessionIdTokenEx.c)
 *     NtQueryInformationJobObject @ 0x1409ECC70 (NtQueryInformationJobObject.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A2A050 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7E994 (SepCleanupLUIDDeviceMapDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(__int64 a1)
{
  unsigned int **v1; // rax

  v1 = (unsigned int **)&PspHostSiloGlobals;
  if ( a1 )
    v1 = *(unsigned int ***)(a1 + 1504);
  return *v1[161];
}
