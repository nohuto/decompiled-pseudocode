/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x1404A7D40
 * Callers:
 *     PnpBootDeviceWait @ 0x1405A0CA8 (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     IoInitSystem @ 0x140C1C9C8 (IoInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C65698 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBuiltinDriver @ 0x140C68400 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x140BAFD70 (HdlspKernelAddLogEntry.c)
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
