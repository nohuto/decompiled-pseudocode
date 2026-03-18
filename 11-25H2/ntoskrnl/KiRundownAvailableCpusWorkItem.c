/*
 * XREFs of KiRundownAvailableCpusWorkItem @ 0x14036D3EC
 * Callers:
 *     KeUnregisterAvailableCpusChangeNotification @ 0x14072FAD8 (KeUnregisterAvailableCpusChangeNotification.c)
 *     KeDeleteCpuPartition @ 0x1407305E8 (KeDeleteCpuPartition.c)
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 */

__int64 __fastcall KiRundownAvailableCpusWorkItem(struct _EX_RUNDOWN_REF *a1)
{
  volatile __int64 *v1; // rbx

  v1 = (volatile __int64 *)&a1[4];
  ExWaitForRundownProtectionRelease(a1 + 4);
  return _InterlockedExchange64(v1, 1LL);
}
