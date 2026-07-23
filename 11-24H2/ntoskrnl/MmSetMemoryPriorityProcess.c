/*
 * XREFs of MmSetMemoryPriorityProcess @ 0x140483E60
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PspComputeQuantumAndPriority @ 0x140A262E0 (PspComputeQuantumAndPriority.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MmSetMemoryPriorityProcess(__int64 a1, char a2)
{
  KIRQL v4; // al

  v4 = ExAcquireSpinLockExclusive(&SpinLock);
  *(_BYTE *)(a1 + 1210) = a2;
  return MiReleaseSpinLockExclusive(&SpinLock, v4);
}
