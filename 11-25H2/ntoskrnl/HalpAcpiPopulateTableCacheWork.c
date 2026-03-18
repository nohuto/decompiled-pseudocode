/*
 * XREFs of HalpAcpiPopulateTableCacheWork @ 0x14054A850
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     HalpAcpiGetAllTables @ 0x14053AA60 (HalpAcpiGetAllTables.c)
 */

__int64 __fastcall HalpAcpiPopulateTableCacheWork(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
  return HalpAcpiGetAllTables();
}
