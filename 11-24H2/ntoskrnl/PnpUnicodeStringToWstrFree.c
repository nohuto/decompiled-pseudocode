/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x1408B7510
 * Callers:
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     PipApplyFunctionToServiceInstances @ 0x140722AC0 (PipApplyFunctionToServiceInstances.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     IoRegisterDeviceInterface @ 0x1408B2B20 (IoRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x1408B42D4 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1408B5640 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408B5D94 (PnpGetDeviceInterfacePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1408B6E48 (PnpSetDeviceInterfacePropertyData.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B7090 (IoGetDeviceInterfaceAlias.c)
 *     PiDeviceRegistration @ 0x140A0CBC4 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140A0CE90 (PpForEachDeviceInstanceDriver.c)
 *     PnpGetDeviceDependencyList @ 0x140A0DA98 (PnpGetDeviceDependencyList.c)
 *     PnpDisableDeviceInterfaces @ 0x140A10ED8 (PnpDisableDeviceInterfaces.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140A5DBC0 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140A5DEE0 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpDeleteDeviceInterfaces @ 0x140AA7668 (PnpDeleteDeviceInterfaces.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140AADBF0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140ABCB94 (IopDeviceObjectFromSymbolicName.c)
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     PipInitComputerIds @ 0x140C63B74 (PipInitComputerIds.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
