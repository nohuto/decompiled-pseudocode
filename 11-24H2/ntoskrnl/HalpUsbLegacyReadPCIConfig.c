/*
 * XREFs of HalpUsbLegacyReadPCIConfig @ 0x140562258
 * Callers:
 *     HalpUsbLegacyScanBusForHandoff @ 0x14056232C (HalpUsbLegacyScanBusForHandoff.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x140562470 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x1405625A4 (HalpUsbLegacyStopUhciInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpUsbLegacyReadPCIConfig(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  return guard_dispatch_icall_no_overrides(a2, a3, a4, a5);
}
