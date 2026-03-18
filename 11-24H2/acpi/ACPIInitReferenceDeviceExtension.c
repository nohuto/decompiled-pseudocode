/*
 * XREFs of ACPIInitReferenceDeviceExtension @ 0x140017C58
 * Callers:
 *     OSNotifyCreateOperationRegion @ 0x14001648C (OSNotifyCreateOperationRegion.c)
 *     ACPIDetectFilterDevices @ 0x140016708 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x140016B58 (ACPIDetectPdoDevices.c)
 *     ACPIExtListTestElement @ 0x140017BF0 (ACPIExtListTestElement.c)
 *     NotifyHandler @ 0x140017F80 (NotifyHandler.c)
 *     ACPIFilterIrpSetPower @ 0x14001BD40 (ACPIFilterIrpSetPower.c)
 *     ACPIDetectDuplicateHID @ 0x14003B994 (ACPIDetectDuplicateHID.c)
 *     ACPIFilterIrpRemoveDevice @ 0x14003C610 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x14003C8BC (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIInitDeleteChildDeviceList @ 0x14003C9AC (ACPIInitDeleteChildDeviceList.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x14003CA6C (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDetectEjectDevices @ 0x14003CD1C (ACPIDetectEjectDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x14003D09C (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIDockFindCorrespondingDock @ 0x14003D958 (ACPIDockFindCorrespondingDock.c)
 *     AcpiDeviceResetInterface @ 0x14004ABF0 (AcpiDeviceResetInterface.c)
 *     ACPIGpeBuildWakeMasks @ 0x140051C08 (ACPIGpeBuildWakeMasks.c)
 *     OSNotifyCreateThermalZone @ 0x140052368 (OSNotifyCreateThermalZone.c)
 *     ACPIGetCmosInterface @ 0x140055160 (ACPIGetCmosInterface.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x140055534 (ACPIFixedFeatureButtonInitialize.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1400557B8 (ACPIInitDeleteDeviceExtension.c)
 *     OSNotifyCreateProcessor @ 0x140063D1C (OSNotifyCreateProcessor.c)
 *     ACPIDockIntfReference @ 0x140098F60 (ACPIDockIntfReference.c)
 *     ACPIBusReenumerateSelfInterface @ 0x14009BE60 (ACPIBusReenumerateSelfInterface.c)
 *     ACPIInterfaceReferenceDeviceExtension @ 0x14009BFD0 (ACPIInterfaceReferenceDeviceExtension.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1400A1578 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIInitReferenceDeviceExtension(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 732) )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 732));
  return 1;
}
