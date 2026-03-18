/*
 * XREFs of VfPtIsAptEnabledOnKernel @ 0x1404128C0
 * Callers:
 *     MiAllocateContiguousMemory @ 0x14041182C (MiAllocateContiguousMemory.c)
 *     MiAllocatePagesForMdl @ 0x14041225C (MiAllocatePagesForMdl.c)
 *     MmAllocateMappingAddressEx @ 0x140A5B620 (MmAllocateMappingAddressEx.c)
 * Callees:
 *     <none>
 */

bool VfPtIsAptEnabledOnKernel()
{
  return ViAptInitialized && KernelVerifier == 1;
}
