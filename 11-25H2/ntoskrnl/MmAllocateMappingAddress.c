/*
 * XREFs of MmAllocateMappingAddress @ 0x140A58930
 * Callers:
 *     SmFpPreAllocate @ 0x1404C4BB8 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x1405873BC (HvlpInitializeHvCrashdump.c)
 *     DifMmAllocateMappingAddressWrapper @ 0x140626420 (DifMmAllocateMappingAddressWrapper.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140BFF07C (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140BFF338 (HalpDmaAllocateReservedMapping.c)
 *     PspIumInitialize @ 0x140C24B88 (PspIumInitialize.c)
 * Callees:
 *     MmAllocateMappingAddressEx @ 0x140A58950 (MmAllocateMappingAddressEx.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  return (PVOID)MmAllocateMappingAddressEx(NumberOfBytes, PoolTag, 0LL);
}
