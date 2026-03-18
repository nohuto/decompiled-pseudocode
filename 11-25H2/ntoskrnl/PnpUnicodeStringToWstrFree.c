/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x140956510
 * Callers:
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407169C0 (PipApplyFunctionToServiceInstances.c)
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140954E84 (PnpGetDeviceInterfacePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x140955E48 (PnpSetDeviceInterfacePropertyData.c)
 *     IoGetDeviceInterfaceAlias @ 0x140956090 (IoGetDeviceInterfaceAlias.c)
 *     IoRegisterDeviceInterface @ 0x14095CE40 (IoRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1409690E0 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpDeleteDeviceInterfaces @ 0x140981CA4 (PnpDeleteDeviceInterfaces.c)
 *     PnpDisableDeviceInterfaces @ 0x1409A18E0 (PnpDisableDeviceInterfaces.c)
 *     PiDeviceRegistration @ 0x140A46BD8 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140A46EA4 (PpForEachDeviceInstanceDriver.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140A5BF4C (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140A5C26C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpGetDeviceDependencyList @ 0x140A7A000 (PnpGetDeviceDependencyList.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140AA8710 (IoOpenDeviceInterfaceRegistryKey.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140AB8AB0 (IopDeviceObjectFromSymbolicName.c)
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     PipInitComputerIds @ 0x140C52860 (PipInitComputerIds.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpUnicodeStringToWstrFree(void *a1, __int64 a2)
{
  void *v2; // rax

  if ( a1 )
  {
    if ( a2 )
    {
      if ( *(_WORD *)(a2 + 2) )
      {
        v2 = *(void **)(a2 + 8);
        if ( v2 )
        {
          if ( v2 != a1 )
            ExFreePoolWithTag(a1, 0);
        }
      }
    }
  }
}
