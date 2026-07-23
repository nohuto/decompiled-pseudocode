/*
 * XREFs of HalAcpiGetAllTablesDispatch @ 0x14053A690
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetAllTables @ 0x14053AB90 (HalpAcpiGetAllTables.c)
 */

__int64 HalAcpiGetAllTablesDispatch()
{
  return HalpAcpiGetAllTables();
}
