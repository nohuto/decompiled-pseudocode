/*
 * XREFs of HalTranslateBusAddress @ 0x140458FE0
 * Callers:
 *     IopTranslateBusAddress @ 0x140726138 (IopTranslateBusAddress.c)
 *     HeadlessTerminalAddResources @ 0x1407B7A14 (HeadlessTerminalAddResources.c)
 *     HalpReportResourceUsage @ 0x140C0E954 (HalpReportResourceUsage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
    return guard_dispatch_icall_no_overrides(
             5LL,
             *(_QWORD *)&BusNumber,
             (PHYSICAL_ADDRESS)BusAddress.QuadPart,
             AddressSpace);
  *TranslatedAddress = BusAddress;
  return 1;
}
