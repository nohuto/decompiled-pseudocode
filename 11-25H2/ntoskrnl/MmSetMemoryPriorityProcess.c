/*
 * XREFs of MmSetMemoryPriorityProcess @ 0x140489910
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     PspComputeQuantumAndPriority @ 0x1409C1138 (PspComputeQuantumAndPriority.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MmSetMemoryPriorityProcess(__int64 a1, char a2)
{
  KIRQL v4; // al

  v4 = ExAcquireSpinLockExclusive(&dword_140E37180);
  *(_BYTE *)(a1 + 1210) = a2;
  return MiReleaseSpinLockExclusive(&dword_140E37180, v4);
}
