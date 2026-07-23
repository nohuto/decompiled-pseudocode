/*
 * XREFs of IoGetAttachedDevice @ 0x1403B3B80
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1403B38E4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAdjustStackSizeForRedirection @ 0x1404AB9F0 (IoAdjustStackSizeForRedirection.c)
 *     PipSendGuestAssignedNotification @ 0x140734194 (PipSendGuestAssignedNotification.c)
 *     IopDeleteFile @ 0x14083E070 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x14095AC90 (NtUnlockFile.c)
 *     FsRtlQueryOpen @ 0x1409C4FF4 (FsRtlQueryOpen.c)
 *     IopShutdownBaseFileSystems @ 0x140B55A20 (IopShutdownBaseFileSystems.c)
 *     VfFilterAttach @ 0x140B9ED90 (VfFilterAttach.c)
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
