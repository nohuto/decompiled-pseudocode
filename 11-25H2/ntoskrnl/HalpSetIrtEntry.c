/*
 * XREFs of HalpSetIrtEntry @ 0x140446E30
 * Callers:
 *     HalpInterruptUnmap @ 0x1406F1C38 (HalpInterruptUnmap.c)
 * Callees:
 *     HalpIommuUpdateRemappingTableEntry @ 0x140446D6C (HalpIommuUpdateRemappingTableEntry.c)
 */

void __fastcall HalpSetIrtEntry(char a1, _DWORD *a2)
{
  HalpIommuUpdateRemappingTableEntry(a1, *a2 & 0x3FFFFFFF);
}
