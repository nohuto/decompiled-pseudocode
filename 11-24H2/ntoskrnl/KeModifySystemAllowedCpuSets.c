/*
 * XREFs of KeModifySystemAllowedCpuSets @ 0x1403C6548
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 *     KiInitializeReservedCpuSets @ 0x140C29BDC (KiInitializeReservedCpuSets.c)
 * Callees:
 *     KiAcquireCpuPartitionLock @ 0x1403C65B4 (KiAcquireCpuPartitionLock.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x1403C82C8 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     KiReleaseCpuPartitionLock @ 0x1404F4DAC (KiReleaseCpuPartitionLock.c)
 */

__int64 __fastcall KeModifySystemAllowedCpuSets(int a1, int a2, __int64 a3, int a4, char a5)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // ebx

  a5 = 0;
  KiAcquireCpuPartitionLock(KiSystemCpuPartition, &a5);
  v8 = KiModifySystemAllowedCpuSetsWithLock(a1, a2, 0, a4, 0);
  LOBYTE(v9) = a5;
  v10 = v8;
  KiReleaseCpuPartitionLock(KiSystemCpuPartition, v9);
  return v10;
}
