/*
 * XREFs of IoGetAttachedDevice @ 0x1402A1E80
 * Callers:
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402A1BDC (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAdjustStackSizeForRedirection @ 0x1404B0160 (IoAdjustStackSizeForRedirection.c)
 *     PipSendGuestAssignedNotification @ 0x140729FD4 (PipSendGuestAssignedNotification.c)
 *     IopDeleteFile @ 0x140844B30 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     FsRtlQueryOpen @ 0x140861E30 (FsRtlQueryOpen.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x140989F40 (NtUnlockFile.c)
 *     IopShutdownBaseFileSystems @ 0x140B439D0 (IopShutdownBaseFileSystems.c)
 *     VfFilterAttach @ 0x140B8CDB0 (VfFilterAttach.c)
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
