/*
 * XREFs of UsbhFdoChainIrp @ 0x14003A7EC
 * Callers:
 *     UsbhFdoDeviceControl @ 0x140009180 (UsbhFdoDeviceControl.c)
 *     UsbhFdoInternalDeviceControl @ 0x140033FE0 (UsbhFdoInternalDeviceControl.c)
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x140039CF0 (UsbhFdoPnp_QueryDeviceRelations.c)
 *     UsbhFdoSystemControl @ 0x14003AD80 (UsbhFdoSystemControl.c)
 *     UsbhFdoReturnHubCount @ 0x140040390 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1400404D8 (UsbhFdoReturnRootHubPdo.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoChainIrp(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v3; // rax

  v3 = (PDEVICE_OBJECT *)FdoExt(a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v3[151], a2);
}
