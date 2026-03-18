/*
 * XREFs of DifIsPluginRunningWithoutReboot @ 0x14060C91C
 * Callers:
 *     IopLoadUnloadDriver @ 0x140ABFF10 (IopLoadUnloadDriver.c)
 *     VfMiscPluginEntry @ 0x140B8E690 (VfMiscPluginEntry.c)
 * Callees:
 *     <none>
 */

char DifIsPluginRunningWithoutReboot()
{
  return DifIsVolatileMode;
}
