/*
 * XREFs of KeQueryCpuSetsProcess @ 0x1404CD5EC
 * Callers:
 *     KiCpuPartitionCheckAffinitization @ 0x1405BD680 (KiCpuPartitionCheckAffinitization.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     KiAcquireProcessLockShared @ 0x14039FE44 (KiAcquireProcessLockShared.c)
 *     KiReleaseProcessLockShared @ 0x14039FED0 (KiReleaseProcessLockShared.c)
 *     KiQueryCpuSetsProcessWithLock @ 0x1404F2B60 (KiQueryCpuSetsProcessWithLock.c)
 */

__int64 __fastcall KeQueryCpuSetsProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  unsigned int CpuSetsProcessWithLock; // eax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned __int8 v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v12[0] = 0;
  v5 = a4;
  v6 = a3;
  KiAcquireProcessLockShared(a1, v12, a3, a4);
  CpuSetsProcessWithLock = KiQueryCpuSetsProcessWithLock(a1, a2, v6, v5);
  LOBYTE(v9) = v12[0];
  v10 = CpuSetsProcessWithLock;
  KiReleaseProcessLockShared(a1, v9);
  return v10;
}
