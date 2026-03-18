/*
 * XREFs of HalAcpiGetTableDispatch @ 0x140478510
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     HalpAcpiGetTableWork @ 0x14047856C (HalpAcpiGetTableWork.c)
 */

__int64 __fastcall HalAcpiGetTableDispatch(int a1, char *a2, char *a3)
{
  __int64 TableWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  TableWork = HalpAcpiGetTableWork(0, a1, a2, a3);
  KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return TableWork;
}
