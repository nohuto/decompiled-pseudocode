/*
 * XREFs of HalpIommuExtMarkHiberMemory @ 0x1405521C4
 * Callers:
 *     IvtMarkHiberMemoryScalableModePasidTables @ 0x140B526C0 (IvtMarkHiberMemoryScalableModePasidTables.c)
 *     IvtMarkHiberRegions @ 0x140B52760 (IvtMarkHiberRegions.c)
 *     HsaMarkHiberRegions @ 0x140B53270 (HsaMarkHiberRegions.c)
 * Callees:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 */

void __fastcall HalpIommuExtMarkHiberMemory(void *a1, void *a2, unsigned int a3)
{
  PoSetHiberRange(a1, a1 != 0LL ? 2 : 0x10000, a2, a3, 0x496C6148u);
}
