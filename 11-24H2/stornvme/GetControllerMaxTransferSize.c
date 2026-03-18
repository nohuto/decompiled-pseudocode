/*
 * XREFs of GetControllerMaxTransferSize @ 0x1400065A0
 * Callers:
 *     FormInquiryBlockLimitsData @ 0x140001040 (FormInquiryBlockLimitsData.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x140002140 (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1400062C0 (ProtocolCommandToNVMe.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x14000CC80 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeHwFindAdapter @ 0x140017CA0 (NVMeHwFindAdapter.c)
 *     FirmwareDownload @ 0x14001FABC (FirmwareDownload.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1400284D8 (NVMeGetControllerInitiatedTelemetryLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetControllerMaxTransferSize(_DWORD *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // edx

  result = (unsigned int)a1[52];
  if ( (unsigned int)result > 0x200000 )
    result = 0x200000LL;
  v2 = a1[8];
  if ( v2 && (unsigned int)result >= v2 )
    result = v2;
  v3 = a1[13];
  if ( v3 )
  {
    if ( v3 < (unsigned int)result )
      return v3;
  }
  return result;
}
