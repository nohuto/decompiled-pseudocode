/*
 * XREFs of DifIsPluginRunningWithoutReboot @ 0x140616E9C
 * Callers:
 *     IopLoadUnloadDriver @ 0x140A66EE0 (IopLoadUnloadDriver.c)
 *     VfMiscPluginEntry @ 0x140BA0670 (VfMiscPluginEntry.c)
 * Callees:
 *     <none>
 */

char DifIsPluginRunningWithoutReboot()
{
  return DifIsVolatileMode;
}
