/*
 * XREFs of HalpUpdateIrtDestinationId @ 0x140555EAC
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140B500C0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpIommuUpdateRemappingDestination @ 0x140B4D9A0 (HalpIommuUpdateRemappingDestination.c)
 */

__int64 HalpUpdateIrtDestinationId()
{
  return HalpIommuUpdateRemappingDestination();
}
