/*
 * XREFs of KeGetThreadWorkloadClassCount @ 0x1404F6168
 * Callers:
 *     KiAllocateHeteroConfigBuffer @ 0x140B4599C (KiAllocateHeteroConfigBuffer.c)
 *     KiInitializeThreadCycleTable @ 0x140B4672C (KiInitializeThreadCycleTable.c)
 * Callees:
 *     <none>
 */

__int64 KeGetThreadWorkloadClassCount()
{
  return (unsigned int)KiHgsPlusConfiguration;
}
