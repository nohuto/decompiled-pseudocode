/*
 * XREFs of PopOpenPowerKey @ 0x1404A48FC
 * Callers:
 *     PoGetLightestSystemStateForEject @ 0x140747470 (PoGetLightestSystemStateForEject.c)
 *     PopBatteryTestExemptPolicyRegKeyAccess @ 0x1407597C4 (PopBatteryTestExemptPolicyRegKeyAccess.c)
 *     PopApplyPolicy @ 0x14099EC20 (PopApplyPolicy.c)
 *     PopDiagTraceHiberStats @ 0x140A533BC (PopDiagTraceHiberStats.c)
 *     PopResetCurrentPolicies @ 0x140A61C7C (PopResetCurrentPolicies.c)
 *     PopReadHiberbootPolicy @ 0x140A77D90 (PopReadHiberbootPolicy.c)
 *     PopReadSystemAwayModePolicy @ 0x140A84638 (PopReadSystemAwayModePolicy.c)
 *     PopEnableHiberFile @ 0x140AAE8C0 (PopEnableHiberFile.c)
 * Callees:
 *     PopOpenKey @ 0x1404A4918 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power");
}
