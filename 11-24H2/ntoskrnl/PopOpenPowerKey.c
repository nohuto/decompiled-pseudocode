/*
 * XREFs of PopOpenPowerKey @ 0x1404AA6FC
 * Callers:
 *     PoGetLightestSystemStateForEject @ 0x140749144 (PoGetLightestSystemStateForEject.c)
 *     PopApplyPolicy @ 0x1409B85D0 (PopApplyPolicy.c)
 *     PopDiagTraceHiberStats @ 0x140A5B7EC (PopDiagTraceHiberStats.c)
 *     PopResetCurrentPolicies @ 0x140A688CC (PopResetCurrentPolicies.c)
 *     PopReadHiberbootPolicy @ 0x140A7DA90 (PopReadHiberbootPolicy.c)
 *     PopReadSystemAwayModePolicy @ 0x140A88148 (PopReadSystemAwayModePolicy.c)
 *     PopEnableHiberFile @ 0x140AB3950 (PopEnableHiberFile.c)
 * Callees:
 *     PopOpenKey @ 0x1404AA718 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power");
}
