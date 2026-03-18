/*
 * XREFs of PcisuppInitGlobalState @ 0x140097684
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1400C43B4 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 PcisuppInitGlobalState()
{
  ExInitializeResourceLite(&PciRouteInterfaceLock);
  return 0LL;
}
