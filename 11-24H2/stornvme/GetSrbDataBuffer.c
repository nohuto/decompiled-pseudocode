/*
 * XREFs of GetSrbDataBuffer @ 0x14000B970
 * Callers:
 *     ScsiInquiryRequest @ 0x140001810 (ScsiInquiryRequest.c)
 *     NVMeHwBuildIo @ 0x140002520 (NVMeHwBuildIo.c)
 *     FirmwareActivate @ 0x14001F854 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x14001FABC (FirmwareDownload.c)
 *     FormInquiryBlockProvisioningData @ 0x14001FEA0 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryDeviceCharacteristicsData @ 0x14001FF88 (FormInquiryDeviceCharacteristicsData.c)
 *     FormInquirySerialNumberData @ 0x14001FFFC (FormInquirySerialNumberData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x1400201FC (FormInquiryVpdSupportedPagesData.c)
 *     IoctlCreateReservedQueuePair @ 0x1400203C4 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x1400208C0 (IoctlDeleteReservedQueuePair.c)
 *     IoctlQueryEnduranceInformation @ 0x140020DA0 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryReservedQueueEntries @ 0x140020F94 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1400211FC (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetProtocolInfoProcess @ 0x140021394 (IoctlSetProtocolInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x140021450 (IoctlSetTemperatureThresholdProcess.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x14002158C (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x140021758 (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x140021B28 (IoctlStorageStreamsReleaseId.c)
 *     LogSenseInformationalExceptions @ 0x140021C84 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x140021E18 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x140022908 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x140022BBC (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x140022E50 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x140022F00 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x140023260 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeReservationAcquireCommand @ 0x1400239AC (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x140023B5C (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x140023CF8 (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x140023ED0 (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportCapabilitiesCompletion @ 0x140024040 (NVMeReservationReportCapabilitiesCompletion.c)
 *     NVMeReservationReportStatusCompletion @ 0x140024370 (NVMeReservationReportStatusCompletion.c)
 *     NVMeSplitIoCommandCompletion @ 0x140024E70 (NVMeSplitIoCommandCompletion.c)
 *     QueryEnduranceInfoLogCompletion @ 0x140025650 (QueryEnduranceInfoLogCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x140025744 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x140025B90 (QueryProtocolInfoIdentifyData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x140025E90 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x140026060 (QueryTemperatureThresholdCompletion.c)
 *     ScsiModeSelectRequest @ 0x1400261F4 (ScsiModeSelectRequest.c)
 *     ScsiPersistentReserveOut @ 0x140026370 (ScsiPersistentReserveOut.c)
 *     SetProtocolInfoFeatureData @ 0x14002672C (SetProtocolInfoFeatureData.c)
 *     ProcessCommandNvmePacket @ 0x14002C8E8 (ProcessCommandNvmePacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSrbDataBuffer(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( *(_BYTE *)(a1 + 2) == 40 )
  {
    result = *(_QWORD *)(a1 + 64);
    if ( !a2 )
      return result;
    v3 = a1 + 60;
    goto LABEL_4;
  }
  result = *(_QWORD *)(a1 + 24);
  if ( a2 )
  {
    v3 = a1 + 16;
LABEL_4:
    *a2 = v3;
  }
  return result;
}
