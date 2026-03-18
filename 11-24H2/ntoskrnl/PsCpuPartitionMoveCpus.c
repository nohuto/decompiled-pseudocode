/*
 * XREFs of PsCpuPartitionMoveCpus @ 0x14077641C
 * Callers:
 *     PsInitializeBootCpuPartitions @ 0x140C3489C (PsInitializeBootCpuPartitions.c)
 * Callees:
 *     KeCpuPartitionMoveCpus @ 0x1405BF6B0 (KeCpuPartitionMoveCpus.c)
 */

__int64 __fastcall PsCpuPartitionMoveCpus(__int64 *a1, __int64 *a2, struct _KAFFINITY_EX *a3)
{
  return KeCpuPartitionMoveCpus(*a1, *a2, a3, 0);
}
