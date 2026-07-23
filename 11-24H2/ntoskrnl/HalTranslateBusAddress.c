/*
 * XREFs of HalTranslateBusAddress @ 0x14044E090
 * Callers:
 *     IopTranslateBusAddress @ 0x140723CC8 (IopTranslateBusAddress.c)
 *     HeadlessTerminalAddResources @ 0x1407B7E64 (HeadlessTerminalAddResources.c)
 *     HalpReportResourceUsage @ 0x140C10954 (HalpReportResourceUsage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall HalTranslateBusAddress(
        INTERFACE_TYPE InterfaceType,
        ULONG BusNumber,
        PHYSICAL_ADDRESS BusAddress,
        PULONG AddressSpace,
        PPHYSICAL_ADDRESS TranslatedAddress)
{
  if ( InterfaceType == PCIBus )
    return guard_dispatch_icall_no_overrides(5LL, *(_QWORD *)&BusNumber);
  *TranslatedAddress = BusAddress;
  return 1;
}
