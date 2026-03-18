/*
 * XREFs of HalpUsbLegacyWritePCIConfig @ 0x140562294
 * Callers:
 *     HalpUsbLegacyStopUhciInterrupt @ 0x1405625A4 (HalpUsbLegacyStopUhciInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpUsbLegacyWritePCIConfig(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  return guard_dispatch_icall_no_overrides(a2, a3, a4, 192LL);
}
