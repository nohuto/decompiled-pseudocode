/*
 * XREFs of NvmeNamespaceFirmwareGetInfoIoctl @ 0x140101D0C
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     NvmeControllerFabricFirmwareGetInfoIoctl @ 0x1400ED1D8 (NvmeControllerFabricFirmwareGetInfoIoctl.c)
 *     NvmeNamespaceStorMQFirmwareGetInfoIoctl @ 0x1401128C0 (NvmeNamespaceStorMQFirmwareGetInfoIoctl.c)
 */

NTSTATUS __fastcall NvmeNamespaceFirmwareGetInfoIoctl(__int64 a1, IRP *a2, _BYTE *a3)
{
  __int64 v4; // rcx

  a2->IoStatus.Information = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  *a3 = 1;
  if ( (*(_BYTE *)(v4 + 136) & 2) != 0 )
    return NvmeControllerFabricFirmwareGetInfoIoctl(v4, (__int64)a2);
  if ( *(_BYTE *)(v4 + 1728) == 1 )
    return NvmeNamespaceStorMQFirmwareGetInfoIoctl(a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 8LL), a2);
}
