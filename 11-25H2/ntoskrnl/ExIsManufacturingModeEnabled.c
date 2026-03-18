/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x140AA8D90
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140C51698 (IopInitializeSystemDrivers.c)
 * Callees:
 *     <none>
 */

char ExIsManufacturingModeEnabled()
{
  return ExpManufacturingInformation & 1;
}
