/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x140441F70
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406ECB2C (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x1406ECC34 (PiCMCreateObject.c)
 *     PiControlGetPropertyData @ 0x140834060 (PiControlGetPropertyData.c)
 *     PiCMHandleIoctl @ 0x1408C5B30 (PiCMHandleIoctl.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1408C7380 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1408C7770 (PiCMCapturePropertyInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140934730 (PiCMCaptureObjectInputData.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1409543C4 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1409545D8 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x140956D90 (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140956F94 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14095B57C (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMCaptureRegistryInputData @ 0x14095BC40 (PiCMCaptureRegistryInputData.c)
 *     PiCMOpenClassKey @ 0x14095CAF8 (PiCMOpenClassKey.c)
 *     PiCMRegisterDeviceInterface @ 0x14095DC04 (PiCMRegisterDeviceInterface.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x14095DE04 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x14095E5B8 (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMDeviceAction @ 0x14095EA0C (PiCMDeviceAction.c)
 *     PiCMGetDeviceIdList @ 0x14095ED28 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x14095EFEC (PiCMCaptureDeviceListInputData.c)
 *     PiCMGetDeviceStatus @ 0x1409A8E24 (PiCMGetDeviceStatus.c)
 *     PiControlQueryDeviceRelations @ 0x140A3A4D0 (PiControlQueryDeviceRelations.c)
 *     PiControlGetDeviceDepth @ 0x140A46480 (PiControlGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x140A62ED8 (PiCMGetObjectPropertyKeys.c)
 *     PiCMGetDeviceDepth @ 0x140A7C4B4 (PiCMGetDeviceDepth.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140AB0104 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMQueryRemove @ 0x140AB73CC (PiCMQueryRemove.c)
 *     PiCMDeleteDeviceKey @ 0x140AB8E44 (PiCMDeleteDeviceKey.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABBD2C (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140ABC48C (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x140ABC5BC (PiCMDeleteObject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
