/*
 * XREFs of HalAcpiGetTableDispatch @ 0x140413180
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     HalpAcpiGetTableWork @ 0x1404131DC (HalpAcpiGetTableWork.c)
 */

__int64 __fastcall HalAcpiGetTableDispatch(int a1, int a2, int a3)
{
  __int64 TableWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  TableWork = HalpAcpiGetTableWork(0, a1, a2, a3);
  KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return TableWork;
}
