/*
 * XREFs of HalpUpdateIrtDestinationId @ 0x1405535AC
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140B400C0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpIommuUpdateRemappingDestination @ 0x140B3D9A0 (HalpIommuUpdateRemappingDestination.c)
 */

__int64 HalpUpdateIrtDestinationId()
{
  return HalpIommuUpdateRemappingDestination();
}
