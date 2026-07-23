/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x1404A79E0
 * Callers:
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140B9FB70 (VfMiscIoInitializeWorkItem_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140BA16A8 (ViMiscValidateSynchronizationObject.c)
 *     VfPnpVerifyNewRequest @ 0x140BA7AF0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140BA7BD0 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  return (unsigned int)MiGetSystemRegionType((unsigned __int64)VirtualAddress) != 5;
}
