/*
 * XREFs of ?FxLibraryCleanup@@YAXXZ @ 0x140085318
 * Callers:
 *     DriverEntry @ 0x140085A60 (DriverEntry.c)
 *     DriverUnload @ 0x140085CD0 (DriverUnload.c)
 * Callees:
 *     <none>
 */

void FxLibraryCleanup(void)
{
  if ( FxLibraryGlobals.LibraryDeviceObject )
  {
    IoDeleteDevice(FxLibraryGlobals.LibraryDeviceObject);
    FxLibraryGlobals.LibraryDeviceObject = 0LL;
  }
  if ( FxLibraryGlobals.CompanionLibrary )
  {
    ExFreePoolWithTag(FxLibraryGlobals.CompanionLibrary, 0);
    FxLibraryGlobals.CompanionLibrary = 0LL;
  }
}
