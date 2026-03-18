/*
 * XREFs of ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1400174E8
 * Callers:
 *     ACPIDetectFilterDevices @ 0x140016708 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x140016B58 (ACPIDetectPdoDevices.c)
 *     ACPIExtListEnumNext @ 0x1400172C4 (ACPIExtListEnumNext.c)
 *     DispatchNotificationWorker @ 0x1400173A0 (DispatchNotificationWorker.c)
 *     ACPIFilterIrpSetPower @ 0x14001BD40 (ACPIFilterIrpSetPower.c)
 *     ACPIFilterIrpRemoveDevice @ 0x14003C610 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBuildMissingEjectionRelations @ 0x14003D6B8 (ACPIBuildMissingEjectionRelations.c)
 *     AcpiDeviceResetDereference @ 0x14004E720 (AcpiDeviceResetDereference.c)
 *     ACPIDockIntfDereference @ 0x1400576B0 (ACPIDockIntfDereference.c)
 *     ACPIDockIrpRemoveDevice @ 0x140057860 (ACPIDockIrpRemoveDevice.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x140063C20 (OSNotifyCreateOperationRegionWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1400676F0 (ACPIRootIrpRemoveDevice.c)
 *     ACPIInterfaceDereferenceDeviceExtension @ 0x140096C80 (ACPIInterfaceDereferenceDeviceExtension.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1400A1050 (ACPIPepCleanupPlatformNotificationSupport.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x140017568 (ACPIInitDereferenceDeviceExtensionLocked.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionUnlocked(ULONG_PTR BugCheckParameter4)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  LOBYTE(BugCheckParameter4) = ACPIInitDereferenceDeviceExtensionLocked(BugCheckParameter4);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  return BugCheckParameter4;
}
