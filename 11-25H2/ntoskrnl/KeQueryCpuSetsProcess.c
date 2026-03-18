/*
 * XREFs of KeQueryCpuSetsProcess @ 0x1404D4504
 * Callers:
 *     KiCpuPartitionCheckAffinitization @ 0x1405BC120 (KiCpuPartitionCheckAffinitization.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     KiAcquireProcessLockShared @ 0x140271084 (KiAcquireProcessLockShared.c)
 *     KiReleaseProcessLockShared @ 0x140271110 (KiReleaseProcessLockShared.c)
 *     KiQueryCpuSetsProcessWithLock @ 0x1404F29B0 (KiQueryCpuSetsProcessWithLock.c)
 */

__int64 __fastcall KeQueryCpuSetsProcess(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int CpuSetsProcessWithLock; // eax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // r8
  unsigned __int8 v13[24]; // [rsp+20h] [rbp-18h] BYREF

  v13[0] = 0;
  KiAcquireProcessLockShared(a1, v13);
  CpuSetsProcessWithLock = KiQueryCpuSetsProcessWithLock(a1, a2, a3, a4);
  LOBYTE(v9) = v13[0];
  v10 = CpuSetsProcessWithLock;
  KiReleaseProcessLockShared(a1, v9, v11);
  return v10;
}
