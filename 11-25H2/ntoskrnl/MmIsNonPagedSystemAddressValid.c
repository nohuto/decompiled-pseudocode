/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x1404ABE70
 * Callers:
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140B8DB90 (VfMiscIoInitializeWorkItem_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140B8F6C8 (ViMiscValidateSynchronizationObject.c)
 *     VfPnpVerifyNewRequest @ 0x140B95B10 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140B95BF0 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  return (unsigned int)MiGetSystemRegionType((unsigned __int64)VirtualAddress) != 5;
}
