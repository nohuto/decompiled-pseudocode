/*
 * XREFs of KeGetThreadWorkloadClassCount @ 0x1404F78B4
 * Callers:
 *     KiAllocateHeteroConfigBuffer @ 0x140B5599C (KiAllocateHeteroConfigBuffer.c)
 *     KiInitializeThreadCycleTable @ 0x140B566D0 (KiInitializeThreadCycleTable.c)
 * Callees:
 *     <none>
 */

__int64 KeGetThreadWorkloadClassCount()
{
  return (unsigned int)KiHgsPlusConfiguration;
}
