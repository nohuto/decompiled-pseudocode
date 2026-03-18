/*
 * XREFs of HvlpHvStatusIsInsufficientMemory @ 0x14026E3F0
 * Callers:
 *     HvlDmaMapDeviceLogicalRange @ 0x14026E010 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x14046FDA0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlpSetPowerProperty @ 0x1404BEF1C (HvlpSetPowerProperty.c)
 *     HvlAttachPasidSpace @ 0x140582650 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x140582700 (HvlAttachPrQueue.c)
 *     HvlCreatePasidSpace @ 0x140582810 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x1405828D0 (HvlCreatePrQueue.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140582B40 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140582C10 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x1405831A0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x1405832B0 (HvlEnablePasid.c)
 *     HvlMapDeviceInterrupt @ 0x140583FD0 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x1405846F0 (HvlRegisterDeviceId.c)
 *     HvlSetDeviceCapabilities @ 0x1405849E0 (HvlSetDeviceCapabilities.c)
 *     HvlSetHpetConfig @ 0x140584B50 (HvlSetHpetConfig.c)
 *     HvlSetPasidAddressSpace @ 0x140584D80 (HvlSetPasidAddressSpace.c)
 *     HvlMapDmaRanges @ 0x140585810 (HvlMapDmaRanges.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140703488 (HvlpDynamicUpdateMicrocode.c)
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
