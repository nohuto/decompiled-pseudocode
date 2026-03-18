/*
 * XREFs of HalAcpiGetAllTablesDispatch @ 0x14053CD90
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetAllTables @ 0x14053D290 (HalpAcpiGetAllTables.c)
 */

__int64 HalAcpiGetAllTablesDispatch()
{
  return HalpAcpiGetAllTables();
}
