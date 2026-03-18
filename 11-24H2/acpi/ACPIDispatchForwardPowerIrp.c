/*
 * XREFs of ACPIDispatchForwardPowerIrp @ 0x14001B990
 * Callers:
 *     ACPIFilterIrpSetPower @ 0x14001BD40 (ACPIFilterIrpSetPower.c)
 *     ACPIDeviceIrpForwardRequest @ 0x14001C090 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIRootIrpQueryPower @ 0x140029A30 (ACPIRootIrpQueryPower.c)
 *     ACPIFilterIrpQueryPower @ 0x140045EA0 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpSetPower @ 0x140047C90 (ACPIRootIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIDispatchForwardPowerIrp(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax

  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( !*(_QWORD *)(DeviceExtension + 776) || (*(_BYTE *)(DeviceExtension + 8) & 0x20) != 0 )
  {
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    PoCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
  }
  return 259LL;
}
