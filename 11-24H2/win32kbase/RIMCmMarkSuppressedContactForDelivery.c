/*
 * XREFs of RIMCmMarkSuppressedContactForDelivery @ 0x1401F1C68
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x140181B78 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     RIMCmIsContactSuppressed @ 0x1400D975C (RIMCmIsContactSuppressed.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMCmMarkSuppressedContactForDelivery(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 611);
  if ( !(unsigned int)RIMCmIsContactSuppressed(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 612);
  *(_DWORD *)(a1 + 2444) |= 0x2000000u;
}
