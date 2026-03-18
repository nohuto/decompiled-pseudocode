/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x140441F70
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406F82B8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x1406F83C0 (PiCMCreateObject.c)
 *     PiCMDeleteDevice @ 0x1406F8578 (PiCMDeleteDevice.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1408B58C0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1408B5AD4 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiControlGetDeviceDepth @ 0x1408BB720 (PiControlGetDeviceDepth.c)
 *     PiCMGetDeviceStatus @ 0x1408BD37C (PiCMGetDeviceStatus.c)
 *     PiControlGetPropertyData @ 0x1408BD4B0 (PiControlGetPropertyData.c)
 *     PiCMCaptureObjectInputData @ 0x1408BEB90 (PiCMCaptureObjectInputData.c)
 *     PiCMHandleIoctl @ 0x1408C3A00 (PiCMHandleIoctl.c)
 *     PiCMCapturePropertyInputData @ 0x1408C5220 (PiCMCapturePropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1408C5760 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMOpenClassKey @ 0x140963498 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14096372C (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMCaptureRegistryInputData @ 0x140963DF8 (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x14099B528 (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x1409FE7EC (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1409FE9F0 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMGetDeviceIdList @ 0x140A19E98 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x140A1A15C (PiCMCaptureDeviceListInputData.c)
 *     PiControlQueryDeviceRelations @ 0x140A3E880 (PiControlQueryDeviceRelations.c)
 *     PiCMGetObjectPropertyKeys @ 0x140A65294 (PiCMGetObjectPropertyKeys.c)
 *     PiCMRegisterDeviceInterface @ 0x140A6E630 (PiCMRegisterDeviceInterface.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140A6E830 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMGetDeviceDepth @ 0x140A7FAEC (PiCMGetDeviceDepth.c)
 *     PiCMDeviceAction @ 0x140A85618 (PiCMDeviceAction.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140AB50F4 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMQueryRemove @ 0x140ABB70C (PiCMQueryRemove.c)
 *     PiCMDeleteDeviceKey @ 0x140ABCF28 (PiCMDeleteDeviceKey.c)
 *     PiCMUnregisterDeviceInterface @ 0x140AC00A8 (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140AC0780 (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x140AC08B0 (PiCMDeleteObject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
