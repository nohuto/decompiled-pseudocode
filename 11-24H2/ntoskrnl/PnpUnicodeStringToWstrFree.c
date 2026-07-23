/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x1408B4E80
 * Callers:
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     PipApplyFunctionToServiceInstances @ 0x140720650 (PipApplyFunctionToServiceInstances.c)
 *     PiInitializeDevice @ 0x14073293C (PiInitializeDevice.c)
 *     IoRegisterDeviceInterface @ 0x1408B0410 (IoRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x1408B1BC4 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1408B2F30 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408B3704 (PnpGetDeviceInterfacePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1408B47B8 (PnpSetDeviceInterfacePropertyData.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B4A00 (IoGetDeviceInterfaceAlias.c)
 *     PiDeviceRegistration @ 0x1409BAFC8 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1409BB294 (PpForEachDeviceInstanceDriver.c)
 *     PnpGetDeviceDependencyList @ 0x1409BBE9C (PnpGetDeviceDependencyList.c)
 *     PnpDisableDeviceInterfaces @ 0x1409BF2E8 (PnpDisableDeviceInterfaces.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140A55FE0 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140A56300 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpDeleteDeviceInterfaces @ 0x140AA2768 (PnpDeleteDeviceInterfaces.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140AA8C70 (IoOpenDeviceInterfaceRegistryKey.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140AB7C00 (IopDeviceObjectFromSymbolicName.c)
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 *     PipInitComputerIds @ 0x140C65CF0 (PipInitComputerIds.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
