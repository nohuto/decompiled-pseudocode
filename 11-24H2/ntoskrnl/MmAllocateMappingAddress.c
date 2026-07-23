/*
 * XREFs of MmAllocateMappingAddress @ 0x140A531D0
 * Callers:
 *     SmFpPreAllocate @ 0x1404BE790 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x140587D1C (HvlpInitializeHvCrashdump.c)
 *     DifMmAllocateMappingAddressWrapper @ 0x1406309A0 (DifMmAllocateMappingAddressWrapper.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140C1207C (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140C12338 (HalpDmaAllocateReservedMapping.c)
 *     PspIumInitialize @ 0x140C37F94 (PspIumInitialize.c)
 * Callees:
 *     MmAllocateMappingAddressEx @ 0x140A531F0 (MmAllocateMappingAddressEx.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  return (PVOID)MmAllocateMappingAddressEx(NumberOfBytes, PoolTag, 0LL);
}
