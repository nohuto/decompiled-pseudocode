/*
 * XREFs of IoGetDeviceObjectPointer @ 0x140967A30
 * Callers:
 *     DifIoGetDeviceObjectPointerWrapper @ 0x140628A10 (DifIoGetDeviceObjectPointerWrapper.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x1406FEC90 (HalpDynamicDeviceInterfaceNotification.c)
 *     PopRegisterTargetDeviceProtection @ 0x14074BC44 (PopRegisterTargetDeviceProtection.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14074C4D4 (PopRegisterCoolingExtensionProtection.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x14075A774 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopEtDeferredInitDxgContext @ 0x14075D8C0 (PopEtDeferredInitDxgContext.c)
 *     ExpAcquirePrmInterface @ 0x1407BF2A8 (ExpAcquirePrmInterface.c)
 *     VhdiMountVhdFile @ 0x14082A068 (VhdiMountVhdFile.c)
 *     IopOpenSystemVariableDevice @ 0x140967120 (IopOpenSystemVariableDevice.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1409674D0 (IoVolumeDeviceNameToGuidPath.c)
 *     NtApphelpCacheControl @ 0x140967860 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x140967FB0 (IoVolumeDeviceToDosName.c)
 *     IopCreateArcNamesCd @ 0x140C1BE30 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x140C1C364 (IopCreateArcNamesDisk.c)
 *     IopStoreBootDriveLetter @ 0x140C1D39C (IopStoreBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140C1D87C (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140C5EA34 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140C5EC20 (SbpStartLanman.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A6A70 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
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
  KeLeaveCriticalRegionThread();
  return v8;
}
