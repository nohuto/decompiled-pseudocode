/*
 * XREFs of HvlpHvStatusIsInsufficientMemory @ 0x14039CBE0
 * Callers:
 *     HvlDmaMapDeviceLogicalRange @ 0x14039C800 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140468D00 (HvlDmaMapDeviceSparsePages.c)
 *     HvlpSetPowerProperty @ 0x1404B88E0 (HvlpSetPowerProperty.c)
 *     HvlAttachPasidSpace @ 0x140583180 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x140583230 (HvlAttachPrQueue.c)
 *     HvlCreatePasidSpace @ 0x140583340 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140583400 (HvlCreatePrQueue.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140583670 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140583740 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x140583CD0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x140583DE0 (HvlEnablePasid.c)
 *     HvlMapDeviceInterrupt @ 0x140584AD0 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x140585190 (HvlRegisterDeviceId.c)
 *     HvlSetDeviceCapabilities @ 0x140585440 (HvlSetDeviceCapabilities.c)
 *     HvlSetHpetConfig @ 0x1405855B0 (HvlSetHpetConfig.c)
 *     HvlSetPasidAddressSpace @ 0x1405857E0 (HvlSetPasidAddressSpace.c)
 *     HvlMapDmaRanges @ 0x140586160 (HvlMapDmaRanges.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14070CEF8 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvlpHvStatusIsInsufficientMemory(__int16 a1)
{
  bool result; // al

  result = 1;
  if ( a1 != 11 && a1 != 117 )
    return (unsigned __int16)(a1 - 129) <= 1u;
  return result;
}
