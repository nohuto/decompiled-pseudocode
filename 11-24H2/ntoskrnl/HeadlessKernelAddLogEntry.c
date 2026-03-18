/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x1404AD660
 * Callers:
 *     PnpBootDeviceWait @ 0x1405A3D68 (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     IoInitSystem @ 0x140C1A988 (IoInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C6351C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBuiltinDriver @ 0x140C66284 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x140BADD70 (HdlspKernelAddLogEntry.c)
 */

PKSPIN_LOCK HeadlessKernelAddLogEntry()
{
  PKSPIN_LOCK result; // rax

  result = HeadlessGlobals;
  if ( HeadlessGlobals )
  {
    if ( HeadlessGlobals[1] )
      return (PKSPIN_LOCK)HdlspKernelAddLogEntry();
  }
  return result;
}
