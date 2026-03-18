/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x1404AD300
 * Callers:
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140B9DB70 (VfMiscIoInitializeWorkItem_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140B9F6A8 (ViMiscValidateSynchronizationObject.c)
 *     VfPnpVerifyNewRequest @ 0x140BA5AF0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140BA5BD0 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  return (unsigned int)MiGetSystemRegionType((unsigned __int64)VirtualAddress) != 5;
}
