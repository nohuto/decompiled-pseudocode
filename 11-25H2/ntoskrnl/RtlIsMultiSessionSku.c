/*
 * XREFs of RtlIsMultiSessionSku @ 0x140A09E70
 * Callers:
 *     GetGlobalizationUserModelType @ 0x14064EC24 (GetGlobalizationUserModelType.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140771940 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1407A7750 (NtSetSystemTime.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140800C20 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeTokenCanImpersonate @ 0x1408A58F0 (SeTokenCanImpersonate.c)
 *     RtlCapabilityCheck @ 0x140A09AE0 (RtlCapabilityCheck.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     NtSetDefaultLocale @ 0x140A92630 (NtSetDefaultLocale.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return BYTE4(PsGetCurrentServerSiloGlobals()[80].Blink[1].Blink);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
