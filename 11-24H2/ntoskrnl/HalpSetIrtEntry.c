/*
 * XREFs of HalpSetIrtEntry @ 0x1403747B8
 * Callers:
 *     HalpInterruptUnmap @ 0x1406FB668 (HalpInterruptUnmap.c)
 * Callees:
 *     HalpIommuUpdateRemappingTableEntry @ 0x1403746F4 (HalpIommuUpdateRemappingTableEntry.c)
 */

void __fastcall HalpSetIrtEntry(char a1, _DWORD *a2)
{
  HalpIommuUpdateRemappingTableEntry(a1, *a2 & 0x3FFFFFFF);
}
