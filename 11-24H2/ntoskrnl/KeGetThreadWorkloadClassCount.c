/*
 * XREFs of KeGetThreadWorkloadClassCount @ 0x1404F5194
 * Callers:
 *     KiAllocateHeteroConfigBuffer @ 0x140B579EC (KiAllocateHeteroConfigBuffer.c)
 *     KiInitializeThreadCycleTable @ 0x140B58720 (KiInitializeThreadCycleTable.c)
 * Callees:
 *     <none>
 */

__int64 KeGetThreadWorkloadClassCount()
{
  return (unsigned int)KiHgsPlusConfiguration;
}
