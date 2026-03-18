/*
 * XREFs of DifIsPluginRunningWithoutReboot @ 0x1406188DC
 * Callers:
 *     IopLoadUnloadDriver @ 0x1409C7700 (IopLoadUnloadDriver.c)
 *     VfMiscPluginEntry @ 0x140B9E670 (VfMiscPluginEntry.c)
 * Callees:
 *     <none>
 */

char DifIsPluginRunningWithoutReboot()
{
  return DifIsVolatileMode;
}
