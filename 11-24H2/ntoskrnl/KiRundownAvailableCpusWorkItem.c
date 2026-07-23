/*
 * XREFs of KiRundownAvailableCpusWorkItem @ 0x1402B9C1C
 * Callers:
 *     KeUnregisterAvailableCpusChangeNotification @ 0x140739C98 (KeUnregisterAvailableCpusChangeNotification.c)
 *     KeDeleteCpuPartition @ 0x14073A7A8 (KeDeleteCpuPartition.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 */

__int64 __fastcall KiRundownAvailableCpusWorkItem(struct _EX_RUNDOWN_REF *a1)
{
  volatile __int64 *v1; // rbx

  v1 = (volatile __int64 *)&a1[4];
  ExWaitForRundownProtectionRelease(a1 + 4);
  return _InterlockedExchange64(v1, 1LL);
}
