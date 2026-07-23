/*
 * XREFs of HalAcpiGetTableDispatch @ 0x14045F9A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     HalpAcpiGetTableWork @ 0x14045F9FC (HalpAcpiGetTableWork.c)
 */

__int64 __fastcall HalAcpiGetTableDispatch(int a1, int a2, int a3)
{
  __int64 TableWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  TableWork = HalpAcpiGetTableWork(0, a1, a2, a3);
  KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return TableWork;
}
