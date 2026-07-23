/*
 * XREFs of HalpInterruptIsRemappingRequired @ 0x1404A7B00
 * Callers:
 *     HalpInterruptQueryControllerInfo @ 0x1406FB570 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptUnmap @ 0x1406FB668 (HalpInterruptUnmap.c)
 *     HalpIommuInitSystem @ 0x140B4F5A0 (HalpIommuInitSystem.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140B52110 (HalpInterruptSwapProcessorIdentifiers.c)
 *     HalpIommuInitializeAll @ 0x140B70010 (HalpIommuInitializeAll.c)
 * Callees:
 *     <none>
 */

char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 244)) & 1;
}
