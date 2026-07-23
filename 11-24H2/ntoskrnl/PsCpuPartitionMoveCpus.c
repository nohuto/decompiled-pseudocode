/*
 * XREFs of PsCpuPartitionMoveCpus @ 0x14077663C
 * Callers:
 *     PsInitializeBootCpuPartitions @ 0x140C369DC (PsInitializeBootCpuPartitions.c)
 * Callees:
 *     KeCpuPartitionMoveCpus @ 0x1405BCCE0 (KeCpuPartitionMoveCpus.c)
 */

__int64 __fastcall PsCpuPartitionMoveCpus(__int64 *a1, __int64 *a2, struct _KAFFINITY_EX *a3)
{
  return KeCpuPartitionMoveCpus(*a1, *a2, a3, 0);
}
