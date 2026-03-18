/*
 * XREFs of ZwQueryDirectoryObject @ 0x1406A8DD0
 * Callers:
 *     DifZwQueryDirectoryObjectWrapper @ 0x1406447A0 (DifZwQueryDirectoryObjectWrapper.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140736CA8 (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x1407BBBCC (ExpFindArcName.c)
 *     BiGetNtPartitionPath @ 0x140813BA8 (BiGetNtPartitionPath.c)
 *     SiGetEfiSystemDevice @ 0x140816348 (SiGetEfiSystemDevice.c)
 *     IopGetLegacyVetoListDrivers @ 0x1409B9634 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A82014 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BcdEnumerateDisks @ 0x140A9A084 (BcdEnumerateDisks.c)
 *     CmGetSystemDriverList @ 0x140C62C58 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDirectoryObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
