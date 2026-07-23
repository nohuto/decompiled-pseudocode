/*
 * XREFs of ZwOpenDirectoryObject @ 0x1406A7EB0
 * Callers:
 *     DifZwOpenDirectoryObjectWrapper @ 0x14063F980 (DifZwOpenDirectoryObjectWrapper.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140734BD8 (PiDrvDbEnumDriverStoreNodes.c)
 *     PiDrvDbRegisterNode @ 0x140736338 (PiDrvDbRegisterNode.c)
 *     PiDrvDbUnregisterNode @ 0x140737BD8 (PiDrvDbUnregisterNode.c)
 *     ObpInitializeRootNamespace @ 0x140741BD8 (ObpInitializeRootNamespace.c)
 *     ExpFindArcName @ 0x1407BC01C (ExpFindArcName.c)
 *     BiGetNtPartitionPath @ 0x1408142E8 (BiGetNtPartitionPath.c)
 *     SiGetEfiSystemDevice @ 0x140816A88 (SiGetEfiSystemDevice.c)
 *     ObCreateSiloRootDirectory @ 0x14082B404 (ObCreateSiloRootDirectory.c)
 *     IopGetLegacyVetoListDrivers @ 0x14099FC84 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7CBF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BcdEnumerateDisks @ 0x140A955F0 (BcdEnumerateDisks.c)
 *     CmGetSystemDriverList @ 0x140C64DD4 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
