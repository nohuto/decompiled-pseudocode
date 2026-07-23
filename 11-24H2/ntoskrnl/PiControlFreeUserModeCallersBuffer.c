/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x140438B40
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406F62B8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x1406F63C0 (PiCMCreateObject.c)
 *     PiCMDeleteDevice @ 0x1406F6578 (PiCMDeleteDevice.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1408B31B0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1408B33C4 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiControlGetDeviceDepth @ 0x1408B90D0 (PiControlGetDeviceDepth.c)
 *     PiCMGetDeviceStatus @ 0x1408BACCC (PiCMGetDeviceStatus.c)
 *     PiControlGetPropertyData @ 0x1408BAE00 (PiControlGetPropertyData.c)
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 *     PiCMOpenClassKey @ 0x14094AF58 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14094B1EC (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMCaptureRegistryInputData @ 0x14094B8B8 (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1409CDC98 (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x1409FF400 (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1409FF604 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMGetDeviceIdList @ 0x140A15D5C (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x140A16020 (PiCMCaptureDeviceListInputData.c)
 *     PiControlQueryDeviceRelations @ 0x140A341F0 (PiControlQueryDeviceRelations.c)
 *     PiCMGetObjectPropertyKeys @ 0x140A5DA64 (PiCMGetObjectPropertyKeys.c)
 *     PiCMRegisterDeviceInterface @ 0x140A79094 (PiCMRegisterDeviceInterface.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140A79294 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMGetDeviceDepth @ 0x140A7A54C (PiCMGetDeviceDepth.c)
 *     PiCMDeviceAction @ 0x140A80158 (PiCMDeviceAction.c)
 *     PiCMCreateDevice @ 0x140AB39A4 (PiCMCreateDevice.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140AB4128 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMQueryRemove @ 0x140AB672C (PiCMQueryRemove.c)
 *     PiCMDeleteDeviceKey @ 0x140AB7F94 (PiCMDeleteDeviceKey.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABB188 (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140ABB8E4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x140ABBA14 (PiCMDeleteObject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
