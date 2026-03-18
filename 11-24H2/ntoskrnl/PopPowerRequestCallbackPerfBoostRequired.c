/*
 * XREFs of PopPowerRequestCallbackPerfBoostRequired @ 0x140A951D0
 * Callers:
 *     <none>
 * Callees:
 *     PoLatencySensitivityHint @ 0x1403B7A90 (PoLatencySensitivityHint.c)
 *     PpmPerfClearBootOverrides @ 0x1404EB758 (PpmPerfClearBootOverrides.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     PpmPerfRemoveMaximumOverride @ 0x14074FBC8 (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x14074FCE0 (PpmPerfSetMaximumOverride.c)
 */

__int64 __fastcall PopPowerRequestCallbackPerfBoostRequired(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // r8d
  unsigned __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    PpmPerfSetMaximumOverride(a1, a2, a3);
    PoLatencySensitivityHint(3u);
  }
  else
  {
    PpmPerfClearBootOverrides(a1, a2, 0);
    PpmPerfRemoveMaximumOverride(v5, v4, v6);
  }
  v8 = 0xFFFFFFFF00000001uLL;
  if ( a3 )
    LODWORD(v8) = 3;
  return ZwUpdateWnfStateData((__int64)&WNF_SEB_LOW_LATENCY_POWER_REQUEST, (__int64)&v8);
}
