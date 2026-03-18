/*
 * XREFs of ZwOpenDirectoryObject @ 0x1406A6F10
 * Callers:
 *     DifZwOpenDirectoryObjectWrapper @ 0x1406413C0 (DifZwOpenDirectoryObjectWrapper.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140736CA8 (PiDrvDbEnumDriverStoreNodes.c)
 *     PiDrvDbRegisterNode @ 0x140738408 (PiDrvDbRegisterNode.c)
 *     PiDrvDbUnregisterNode @ 0x140739CA8 (PiDrvDbUnregisterNode.c)
 *     ObpInitializeRootNamespace @ 0x140743CA8 (ObpInitializeRootNamespace.c)
 *     ExpFindArcName @ 0x1407BBBCC (ExpFindArcName.c)
 *     BiGetNtPartitionPath @ 0x140813BA8 (BiGetNtPartitionPath.c)
 *     SiGetEfiSystemDevice @ 0x140816348 (SiGetEfiSystemDevice.c)
 *     ObCreateSiloRootDirectory @ 0x14082ABD4 (ObCreateSiloRootDirectory.c)
 *     IopGetLegacyVetoListDrivers @ 0x1409B9634 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A82014 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BcdEnumerateDisks @ 0x140A9A084 (BcdEnumerateDisks.c)
 *     CmGetSystemDriverList @ 0x140C62C58 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle, *(_QWORD *)&DesiredAccess);
}
