/*
 * XREFs of HalpAcpiPopulateTableCacheWork @ 0x14054D140
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpAcpiGetAllTables @ 0x14053D290 (HalpAcpiGetAllTables.c)
 */

__int64 __fastcall HalpAcpiPopulateTableCacheWork(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
  return HalpAcpiGetAllTables();
}
