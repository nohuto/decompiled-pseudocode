/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x14044B690
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x14071E464 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1407738D8 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14078F764 (SepCopyClientTokenAndSetSilo.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14084E400 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     PiCMValidateDeviceInstance @ 0x1408BBC4C (PiCMValidateDeviceInstance.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408CEB60 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3D0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5E0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiCMMandatoryFilterCallback @ 0x1408CFBE0 (PiCMMandatoryFilterCallback.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408CFF90 (PiUEventApplyAdditionalFilters.c)
 *     SeGetTokenDeviceMap @ 0x14096D9AC (SeGetTokenDeviceMap.c)
 *     PsIsServiceSession @ 0x1409A1044 (PsIsServiceSession.c)
 *     SeQuerySessionIdTokenEx @ 0x1409D9400 (SeQuerySessionIdTokenEx.c)
 *     DbgkpSendErrorMessage @ 0x1409E93F0 (DbgkpSendErrorMessage.c)
 *     IoRegisterPlugPlayNotification @ 0x1409EB2A0 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EC16C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EC4E0 (PnpNotifyTargetDeviceChange.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A24410 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7CBF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     NtQueryInformationJobObject @ 0x140ACACA0 (NtQueryInformationJobObject.c)
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
