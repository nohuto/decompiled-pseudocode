/*
 * XREFs of HvlpHandleInsufficientMemory @ 0x140580554
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
 *     HvlpDepositPages @ 0x1405814B4 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpHandleInsufficientMemory(__int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOWORD(a3) = 1;
  if ( a1 != 117 && a1 != 130 )
    LOBYTE(a3) = 0;
  LOBYTE(a4) = (unsigned __int16)(a1 - 129) <= 1u;
  return HvlpDepositPages(0LL, 128LL, a3, a4);
}
