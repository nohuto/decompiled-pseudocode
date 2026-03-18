/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x1404566C0
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407208D4 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1407736B8 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14078F794 (SepCopyClientTokenAndSetSilo.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140852140 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     PiCMValidateDeviceInstance @ 0x1408BE2FC (PiCMValidateDeviceInstance.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408D1170 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408D19E0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408D1BF0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiCMMandatoryFilterCallback @ 0x1408D21F0 (PiCMMandatoryFilterCallback.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408D25A0 (PiUEventApplyAdditionalFilters.c)
 *     DbgkpSendErrorMessage @ 0x14093A900 (DbgkpSendErrorMessage.c)
 *     SeGetTokenDeviceMap @ 0x14098519C (SeGetTokenDeviceMap.c)
 *     PsIsServiceSession @ 0x1409BA9F4 (PsIsServiceSession.c)
 *     SeQuerySessionIdTokenEx @ 0x1409DF650 (SeQuerySessionIdTokenEx.c)
 *     IoRegisterPlugPlayNotification @ 0x1409ED860 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EE72C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EEAA0 (PnpNotifyTargetDeviceChange.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A2F9D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A82014 (SepCleanupLUIDDeviceMapDirectory.c)
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
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
