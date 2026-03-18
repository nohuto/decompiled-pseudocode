/*
 * XREFs of IoGetAttachedDevice @ 0x1403C4FC0
 * Callers:
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1403C4D24 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAdjustStackSizeForRedirection @ 0x1404B1160 (IoAdjustStackSizeForRedirection.c)
 *     PipSendGuestAssignedNotification @ 0x140736264 (PipSendGuestAssignedNotification.c)
 *     IopDeleteFile @ 0x140841DB0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x14096F610 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x140972480 (NtUnlockFile.c)
 *     FsRtlQueryOpen @ 0x1409D51C4 (FsRtlQueryOpen.c)
 *     IopShutdownBaseFileSystems @ 0x140B539D0 (IopShutdownBaseFileSystems.c)
 *     VfFilterAttach @ 0x140B9CD90 (VfFilterAttach.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDevice(PDEVICE_OBJECT DeviceObject)
{
  struct _DEVICE_OBJECT *AttachedDevice; // rdx
  PDEVICE_OBJECT result; // rax

  AttachedDevice = DeviceObject->AttachedDevice;
  if ( !AttachedDevice )
    return DeviceObject;
  do
  {
    result = AttachedDevice;
    AttachedDevice = AttachedDevice->AttachedDevice;
  }
  while ( AttachedDevice );
  return result;
}
