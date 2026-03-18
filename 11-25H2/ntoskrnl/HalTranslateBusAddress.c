/*
 * XREFs of HalTranslateBusAddress @ 0x140458360
 * Callers:
 *     IopTranslateBusAddress @ 0x14071A1B8 (IopTranslateBusAddress.c)
 *     HeadlessTerminalAddResources @ 0x1407A8564 (HeadlessTerminalAddResources.c)
 *     HalpReportResourceUsage @ 0x140BFD954 (HalpReportResourceUsage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __stdcall HalTranslateBusAddress(
        INTERFACE_TYPE InterfaceType,
        ULONG BusNumber,
        PHYSICAL_ADDRESS BusAddress,
        PULONG AddressSpace,
        PPHYSICAL_ADDRESS TranslatedAddress)
{
  if ( InterfaceType == PCIBus )
    return guard_dispatch_icall_no_overrides(5LL, BusNumber);
  *TranslatedAddress = BusAddress;
  return 1;
}
