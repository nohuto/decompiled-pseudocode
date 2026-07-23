/*
 * XREFs of HalpUsbLegacyReadPCIConfig @ 0x14055FE88
 * Callers:
 *     HalpUsbLegacyScanBusForHandoff @ 0x14055FF5C (HalpUsbLegacyScanBusForHandoff.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x1405600A0 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x1405601D4 (HalpUsbLegacyStopUhciInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpUsbLegacyReadPCIConfig(__int64 a1, unsigned int a2, unsigned int a3)
{
  return guard_dispatch_icall_no_overrides(a2, a3);
}
