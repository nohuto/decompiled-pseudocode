/*
 * XREFs of HalpIommuExtMarkHiberMemory @ 0x14054FB04
 * Callers:
 *     IvtMarkHiberMemoryScalableModePasidTables @ 0x140B54710 (IvtMarkHiberMemoryScalableModePasidTables.c)
 *     IvtMarkHiberRegions @ 0x140B547B0 (IvtMarkHiberRegions.c)
 *     HsaMarkHiberRegions @ 0x140B552C0 (HsaMarkHiberRegions.c)
 * Callees:
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 */

void __fastcall HalpIommuExtMarkHiberMemory(void *a1, void *a2, unsigned int a3)
{
  PoSetHiberRange(a1, a1 != 0LL ? 2 : 0x10000, a2, a3, 0x496C6148u);
}
