/*
 * XREFs of HalpUsbLegacyReadPCIConfig @ 0x14055F958
 * Callers:
 *     HalpUsbLegacyScanBusForHandoff @ 0x14055FA2C (HalpUsbLegacyScanBusForHandoff.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x14055FB70 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x14055FCA4 (HalpUsbLegacyStopUhciInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpUsbLegacyReadPCIConfig(__int64 a1, unsigned int a2)
{
  return guard_dispatch_icall_no_overrides(a2);
}
