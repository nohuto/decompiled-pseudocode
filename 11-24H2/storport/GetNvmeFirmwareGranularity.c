/*
 * XREFs of GetNvmeFirmwareGranularity @ 0x1400CB700
 * Callers:
 *     NvmeAdapterFirmwareDownloadIoctl @ 0x1400D17BC (NvmeAdapterFirmwareDownloadIoctl.c)
 *     NvmeAdapterFirmwareGetInfoIoctlCompletion @ 0x1400D2AE0 (NvmeAdapterFirmwareGetInfoIoctlCompletion.c)
 *     NvmeNamespaceStorMQFirmwareGetInfoIoctlCompletion @ 0x140112E20 (NvmeNamespaceStorMQFirmwareGetInfoIoctlCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNvmeFirmwareGranularity(__int64 a1)
{
  int v1; // ecx

  v1 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 592) + 319LL);
  if ( (_BYTE)v1 == 0xFF )
    return 4LL;
  else
    return (unsigned int)(v1 << 12);
}
