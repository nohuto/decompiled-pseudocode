/*
 * XREFs of IsPciBus @ 0x1400B46A8
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x14003D09C (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpQueryInterface @ 0x140043A60 (ACPIBusIrpQueryInterface.c)
 *     ACPIBusIrpRemoveDevice @ 0x140050130 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x140050500 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x14009BC90 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x14009E910 (ACPIFilterIrpStopDevice.c)
 *     ACPIInternalIsPci @ 0x1400C0C40 (ACPIInternalIsPci.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     IsNsobjPciBus @ 0x1400B47D0 (IsNsobjPciBus.c)
 */

__int64 __fastcall IsPciBus(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  return IsNsobjPciBus(*(_QWORD *)(DeviceExtension + 760));
}
