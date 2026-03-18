/*
 * XREFs of MmAllocateMappingAddress @ 0x140A5B600
 * Callers:
 *     SmFpPreAllocate @ 0x1404C3258 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x14058AA2C (HvlpInitializeHvCrashdump.c)
 *     DifMmAllocateMappingAddressWrapper @ 0x1406323E0 (DifMmAllocateMappingAddressWrapper.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140C1007C (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140C10338 (HalpDmaAllocateReservedMapping.c)
 *     PspIumInitialize @ 0x140C35E54 (PspIumInitialize.c)
 * Callees:
 *     MmAllocateMappingAddressEx @ 0x140A5B620 (MmAllocateMappingAddressEx.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  return (PVOID)MmAllocateMappingAddressEx(NumberOfBytes, PoolTag, 0LL);
}
