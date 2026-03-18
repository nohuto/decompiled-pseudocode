/*
 * XREFs of KiRundownAvailableCpusWorkItem @ 0x14043A3D8
 * Callers:
 *     KeUnregisterAvailableCpusChangeNotification @ 0x14073BD68 (KeUnregisterAvailableCpusChangeNotification.c)
 *     KeDeleteCpuPartition @ 0x14073C878 (KeDeleteCpuPartition.c)
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 */

__int64 __fastcall KiRundownAvailableCpusWorkItem(struct _EX_RUNDOWN_REF *a1)
{
  volatile __int64 *v1; // rbx

  v1 = (volatile __int64 *)&a1[4];
  ExWaitForRundownProtectionRelease(a1 + 4);
  return _InterlockedExchange64(v1, 1LL);
}
