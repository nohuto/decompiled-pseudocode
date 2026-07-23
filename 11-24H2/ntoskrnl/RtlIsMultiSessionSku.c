/*
 * XREFs of RtlIsMultiSessionSku @ 0x1408E8B20
 * Callers:
 *     GetGlobalizationUserModelType @ 0x1406592CC (GetGlobalizationUserModelType.c)
 *     PopAdaptiveStandbyInitialize @ 0x140760B64 (PopAdaptiveStandbyInitialize.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140780AC0 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1407B7040 (NtSetSystemTime.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140810ED0 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeTokenCanImpersonate @ 0x1408E8180 (SeTokenCanImpersonate.c)
 *     RtlCapabilityCheck @ 0x140A5B140 (RtlCapabilityCheck.c)
 *     NtSetDefaultLocale @ 0x140A93120 (NtSetDefaultLocale.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return BYTE4(PsGetCurrentServerSiloGlobals()[80].Blink[1].Blink);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
