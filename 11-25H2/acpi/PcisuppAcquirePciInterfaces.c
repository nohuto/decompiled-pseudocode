/*
 * XREFs of PcisuppAcquirePciInterfaces @ 0x1400A9094
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x14009B960 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetFlags @ 0x14003FF48 (ACPIInternalSetFlags.c)
 *     ACPIWakeInitializePmeRouting @ 0x140069B18 (ACPIWakeInitializePmeRouting.c)
 *     PcisuppInitializePciRouting @ 0x1400A9148 (PcisuppInitializePciRouting.c)
 *     PcisuppReleasePciRouting @ 0x1400A934C (PcisuppReleasePciRouting.c)
 */

__int64 __fastcall PcisuppAcquirePciInterfaces(PDEVICE_OBJECT DeviceObject)
{
  __int64 DeviceExtension; // rsi
  int v3; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&PciRouteInterfaceLock, 1u);
  v3 = PcisuppInitializePciRouting(DeviceObject);
  if ( v3 >= 0 )
  {
    v3 = ACPIWakeInitializePmeRouting(DeviceObject);
    if ( v3 >= 0 )
    {
      if ( (*(_BYTE *)(DeviceExtension + 1120) & 2) != 0 )
      {
        PcisuppReleasePciRouting();
      }
      else
      {
        ACPIInternalSetFlags((void *)(DeviceExtension + 1120), 2uLL);
        _InterlockedIncrement(&PciRoutingInterfaceCount);
      }
    }
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v3;
}
