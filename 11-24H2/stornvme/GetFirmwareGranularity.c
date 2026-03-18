/*
 * XREFs of GetFirmwareGranularity @ 0x1400202E4
 * Callers:
 *     NVMeWriteBufferFirmwareDownload @ 0x140002140 (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x14000CC80 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     FirmwareDownload @ 0x14001FABC (FirmwareDownload.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFirmwareGranularity(__int64 a1)
{
  int v1; // ecx

  v1 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1560) + 319LL);
  if ( (_BYTE)v1 == 0xFF )
    return 4LL;
  else
    return (unsigned int)(v1 << 12);
}
