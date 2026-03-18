/*
 * XREFs of RtlIsMultiSessionSku @ 0x1409113D0
 * Callers:
 *     GetGlobalizationUserModelType @ 0x14065ABAC (GetGlobalizationUserModelType.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407617F8 (PopAdaptiveStandbyInitialize.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140780B90 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1407B6BF0 (NtSetSystemTime.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140810790 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeTokenCanImpersonate @ 0x140910A30 (SeTokenCanImpersonate.c)
 *     RtlCapabilityCheck @ 0x140A62840 (RtlCapabilityCheck.c)
 *     NtSetDefaultLocale @ 0x140A968F0 (NtSetDefaultLocale.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 */

char RtlIsMultiSessionSku()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return BYTE4(PsGetCurrentServerSiloGlobals()[80].Blink[1].Blink);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
