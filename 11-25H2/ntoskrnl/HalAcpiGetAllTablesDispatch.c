/*
 * XREFs of HalAcpiGetAllTablesDispatch @ 0x14053A560
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetAllTables @ 0x14053AA60 (HalpAcpiGetAllTables.c)
 */

__int64 HalAcpiGetAllTablesDispatch()
{
  return HalpAcpiGetAllTables();
}
