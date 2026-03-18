/*
 * XREFs of PopOpenPowerKey @ 0x1404A9304
 * Callers:
 *     PoGetLightestSystemStateForEject @ 0x14073D134 (PoGetLightestSystemStateForEject.c)
 *     PopApplyPolicy @ 0x140A0FFD0 (PopApplyPolicy.c)
 *     PopDiagTraceHiberStats @ 0x140A594AC (PopDiagTraceHiberStats.c)
 *     PopResetCurrentPolicies @ 0x140A65B7C (PopResetCurrentPolicies.c)
 *     PopReadHiberbootPolicy @ 0x140A7A7B8 (PopReadHiberbootPolicy.c)
 *     PopReadSystemAwayModePolicy @ 0x140A83618 (PopReadSystemAwayModePolicy.c)
 *     PopEnableHiberFile @ 0x140AAE964 (PopEnableHiberFile.c)
 * Callees:
 *     PopOpenKey @ 0x1404A9320 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power");
}
