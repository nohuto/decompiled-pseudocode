/*
 * XREFs of IoGetDeviceObjectPointer @ 0x1409504C0
 * Callers:
 *     DifIoGetDeviceObjectPointerWrapper @ 0x140626FD0 (DifIoGetDeviceObjectPointerWrapper.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x1406FC8D0 (HalpDynamicDeviceInterfaceNotification.c)
 *     PopRegisterTargetDeviceProtection @ 0x140749F74 (PopRegisterTargetDeviceProtection.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14074A804 (PopRegisterCoolingExtensionProtection.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x140758E64 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopEtDeferredInitDxgContext @ 0x14075C860 (PopEtDeferredInitDxgContext.c)
 *     ExpAcquirePrmInterface @ 0x1407BF6F8 (ExpAcquirePrmInterface.c)
 *     VhdiMountVhdFile @ 0x14082A898 (VhdiMountVhdFile.c)
 *     IopOpenSystemVariableDevice @ 0x14094FBB0 (IopOpenSystemVariableDevice.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14094FF60 (IoVolumeDeviceNameToGuidPath.c)
 *     NtApphelpCacheControl @ 0x1409502F0 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x140950A40 (IoVolumeDeviceToDosName.c)
 *     IopCreateArcNamesCd @ 0x140C1DE70 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x140C1E3A4 (IopCreateArcNamesDisk.c)
 *     IopStoreBootDriveLetter @ 0x140C1F3DC (IopStoreBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140C1F8BC (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140C60B84 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140C60D70 (SbpStartLanman.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
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
