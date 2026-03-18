/*
 * XREFs of HalpInterruptIsRemappingRequired @ 0x1404AD420
 * Callers:
 *     HalpInterruptQueryControllerInfo @ 0x1406FD930 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptUnmap @ 0x1406FDA28 (HalpInterruptUnmap.c)
 *     HalpIommuInitSystem @ 0x140B4D550 (HalpIommuInitSystem.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140B500C0 (HalpInterruptSwapProcessorIdentifiers.c)
 *     HalpIommuInitializeAll @ 0x140B6B2A0 (HalpIommuInitializeAll.c)
 * Callees:
 *     <none>
 */

char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 244)) & 1;
}
