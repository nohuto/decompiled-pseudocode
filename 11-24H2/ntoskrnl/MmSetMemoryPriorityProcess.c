/*
 * XREFs of MmSetMemoryPriorityProcess @ 0x140488D70
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     PspComputeQuantumAndPriority @ 0x140A32370 (PspComputeQuantumAndPriority.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MmSetMemoryPriorityProcess(__int64 a1, char a2)
{
  KIRQL v4; // al

  v4 = ExAcquireSpinLockExclusive(&dword_140E373C0);
  *(_BYTE *)(a1 + 1210) = a2;
  return MiReleaseSpinLockExclusive(&dword_140E373C0, v4);
}
