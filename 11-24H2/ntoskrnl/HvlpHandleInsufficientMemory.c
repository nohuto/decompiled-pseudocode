/*
 * XREFs of HvlpHandleInsufficientMemory @ 0x1405831D4
 * Callers:
 *     HvlDmaMapDeviceLogicalRange @ 0x1403ADFF0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x14046E870 (HvlDmaMapDeviceSparsePages.c)
 *     HvlpSetPowerProperty @ 0x1404BD770 (HvlpSetPowerProperty.c)
 *     HvlAttachPasidSpace @ 0x140585E00 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x140585EB0 (HvlAttachPrQueue.c)
 *     HvlCreatePasidSpace @ 0x140585FC0 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140586080 (HvlCreatePrQueue.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1405862F0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1405863C0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x140586950 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x140586A60 (HvlEnablePasid.c)
 *     HvlMapDeviceInterrupt @ 0x140587750 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x140587E70 (HvlRegisterDeviceId.c)
 *     HvlSetDeviceCapabilities @ 0x140588160 (HvlSetDeviceCapabilities.c)
 *     HvlSetHpetConfig @ 0x1405882D0 (HvlSetHpetConfig.c)
 *     HvlSetPasidAddressSpace @ 0x140588500 (HvlSetPasidAddressSpace.c)
 *     HvlMapDmaRanges @ 0x140588E80 (HvlMapDmaRanges.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14070F368 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     HvlpDepositPages @ 0x140584134 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpHandleInsufficientMemory(__int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOWORD(a3) = 1;
  if ( a1 != 117 && a1 != 130 )
    LOBYTE(a3) = 0;
  LOBYTE(a4) = (unsigned __int16)(a1 - 129) <= 1u;
  return HvlpDepositPages(0LL, 128LL, a3, a4);
}
