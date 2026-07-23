/*
 * XREFs of ZwQueryDirectoryObject @ 0x1406A9D70
 * Callers:
 *     DifZwQueryDirectoryObjectWrapper @ 0x140642D60 (DifZwQueryDirectoryObjectWrapper.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140734BD8 (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x1407BC01C (ExpFindArcName.c)
 *     BiGetNtPartitionPath @ 0x1408142E8 (BiGetNtPartitionPath.c)
 *     SiGetEfiSystemDevice @ 0x140816A88 (SiGetEfiSystemDevice.c)
 *     IopGetLegacyVetoListDrivers @ 0x14099FC84 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7CBF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BcdEnumerateDisks @ 0x140A955F0 (BcdEnumerateDisks.c)
 *     CmGetSystemDriverList @ 0x140C64DD4 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
