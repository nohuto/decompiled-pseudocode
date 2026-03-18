/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x1404AC070
 * Callers:
 *     PnpBootDeviceWait @ 0x1405A05F8 (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     IoInitSystem @ 0x140C098E8 (IoInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C52208 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBuiltinDriver @ 0x140C54388 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x140B9DD70 (HdlspKernelAddLogEntry.c)
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
