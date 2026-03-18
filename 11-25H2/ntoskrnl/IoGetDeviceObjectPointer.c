/*
 * XREFs of IoGetDeviceObjectPointer @ 0x140822F90
 * Callers:
 *     DifIoGetDeviceObjectPointerWrapper @ 0x14061CA50 (DifIoGetDeviceObjectPointerWrapper.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x1406F2EA0 (HalpDynamicDeviceInterfaceNotification.c)
 *     PopRegisterTargetDeviceProtection @ 0x14073FB74 (PopRegisterTargetDeviceProtection.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140740404 (PopRegisterCoolingExtensionProtection.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x14074E1A4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopEtDeferredInitDxgContext @ 0x140750E90 (PopEtDeferredInitDxgContext.c)
 *     ExpAcquirePrmInterface @ 0x1407AFAD8 (ExpAcquirePrmInterface.c)
 *     VhdiMountVhdFile @ 0x14081A2D0 (VhdiMountVhdFile.c)
 *     IopOpenSystemVariableDevice @ 0x140822688 (IopOpenSystemVariableDevice.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140822A30 (IoVolumeDeviceNameToGuidPath.c)
 *     NtApphelpCacheControl @ 0x140822DC0 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x1408BF350 (IoVolumeDeviceToDosName.c)
 *     IopCreateArcNamesCd @ 0x140C0AC5C (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x140C0B190 (IopCreateArcNamesDisk.c)
 *     IopStoreBootDriveLetter @ 0x140C0C1CC (IopStoreBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140C0C6AC (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140C4D6B4 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140C4D8A0 (SbpStartLanman.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenFile @ 0x14069B7A0 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall IoGetDeviceObjectPointer(
        PUNICODE_STRING ObjectName,
        ACCESS_MASK DesiredAccess,
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject)
{
  ULONG v5; // eax
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ebx
  struct _FILE_OBJECT *v9; // rcx
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK v12; // [rsp+38h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES v13; // [rsp+48h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+8h] BYREF

  *(_QWORD *)&v13.Length = 48LL;
  *(&v13.Attributes + 1) = 0;
  v13.RootDirectory = 0LL;
  v5 = 512;
  Handle = 0LL;
  if ( IopCaseInsensitive )
    v5 = 576;
  v13.Attributes = v5;
  v13.ObjectName = ObjectName;
  *(_OWORD *)&v13.SecurityDescriptor = 0LL;
  v12 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ZwOpenFile(&Handle, DesiredAccess, &v13, &v12, 3u, 0x40u);
  if ( v8 >= 0 )
  {
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v8 >= 0 )
    {
      v9 = (struct _FILE_OBJECT *)Object;
      *FileObject = (PFILE_OBJECT)Object;
      *DeviceObject = IoGetRelatedDeviceObject(v9);
    }
    ZwClose(Handle);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}
