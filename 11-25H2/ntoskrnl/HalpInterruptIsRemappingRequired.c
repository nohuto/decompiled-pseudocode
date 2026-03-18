/*
 * XREFs of HalpInterruptIsRemappingRequired @ 0x1404ABF70
 * Callers:
 *     HalpInterruptQueryControllerInfo @ 0x1406F1B40 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptUnmap @ 0x1406F1C38 (HalpInterruptUnmap.c)
 *     HalpIommuInitSystem @ 0x140B3D550 (HalpIommuInitSystem.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140B400C0 (HalpInterruptSwapProcessorIdentifiers.c)
 *     HalpIommuInitializeAll @ 0x140B5B7A0 (HalpIommuInitializeAll.c)
 * Callees:
 *     <none>
 */

char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 244)) & 1;
}
