/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x140AA91C0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140C64B58 (IopInitializeSystemDrivers.c)
 * Callees:
 *     <none>
 */

char ExIsManufacturingModeEnabled()
{
  return ExpManufacturingInformation & 1;
}
