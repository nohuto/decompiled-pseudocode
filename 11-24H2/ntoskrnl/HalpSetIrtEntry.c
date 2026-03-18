/*
 * XREFs of HalpSetIrtEntry @ 0x1403BAFC0
 * Callers:
 *     HalpInterruptUnmap @ 0x1406FDA28 (HalpInterruptUnmap.c)
 * Callees:
 *     HalpIommuUpdateRemappingTableEntry @ 0x1403BAEFC (HalpIommuUpdateRemappingTableEntry.c)
 */

void __fastcall HalpSetIrtEntry(char a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  HalpIommuUpdateRemappingTableEntry(a1, *a2 & 0x3FFFFFFF, a3, a4);
}
