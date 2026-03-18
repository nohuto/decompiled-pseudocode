/*
 * XREFs of HalpAcpiGetAllTables @ 0x14053AA60
 * Callers:
 *     HalAcpiGetAllTablesDispatch @ 0x14053A560 (HalAcpiGetAllTablesDispatch.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x14054A850 (HalpAcpiPopulateTableCacheWork.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     HalpAcpiGetAllTablesWork @ 0x14053AA98 (HalpAcpiGetAllTablesWork.c)
 */

__int64 HalpAcpiGetAllTables()
{
  __int64 AllTablesWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  AllTablesWork = HalpAcpiGetAllTablesWork();
  KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return AllTablesWork;
}
