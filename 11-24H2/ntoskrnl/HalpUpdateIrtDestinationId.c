/*
 * XREFs of HalpUpdateIrtDestinationId @ 0x1405537EC
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140B52110 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpIommuUpdateRemappingDestination @ 0x140B4F9F0 (HalpIommuUpdateRemappingDestination.c)
 */

__int64 HalpUpdateIrtDestinationId()
{
  return HalpIommuUpdateRemappingDestination();
}
