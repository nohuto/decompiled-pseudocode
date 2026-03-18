/*
 * XREFs of HalpIommuExtMarkHiberMemory @ 0x14054F8C4
 * Callers:
 *     IvtMarkHiberMemoryScalableModePasidTables @ 0x140B426C0 (IvtMarkHiberMemoryScalableModePasidTables.c)
 *     IvtMarkHiberRegions @ 0x140B42760 (IvtMarkHiberRegions.c)
 *     HsaMarkHiberRegions @ 0x140B43270 (HsaMarkHiberRegions.c)
 * Callees:
 *     PoSetHiberRange @ 0x140472260 (PoSetHiberRange.c)
 */

void __fastcall HalpIommuExtMarkHiberMemory(void *a1, void *a2, unsigned int a3)
{
  PoSetHiberRange(a1, a1 != 0LL ? 2 : 0x10000, a2, a3, 0x496C6148u);
}
