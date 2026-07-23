/*
 * XREFs of VfPtIsAptEnabledOnKernel @ 0x140394D00
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14039469C (MiAllocatePagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x140395A6C (MiAllocateContiguousMemory.c)
 *     MmAllocateMappingAddressEx @ 0x140A531F0 (MmAllocateMappingAddressEx.c)
 * Callees:
 *     <none>
 */

bool VfPtIsAptEnabledOnKernel()
{
  return ViAptInitialized && KernelVerifier == 1;
}
