/*
 * XREFs of PopPowerRequestCallbackPerfBoostRequired @ 0x140A910B0
 * Callers:
 *     <none>
 * Callees:
 *     PoLatencySensitivityHint @ 0x140201F50 (PoLatencySensitivityHint.c)
 *     PpmPerfClearBootOverrides @ 0x1404E9D08 (PpmPerfClearBootOverrides.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     PpmPerfRemoveMaximumOverride @ 0x140743AF8 (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x140743C10 (PpmPerfSetMaximumOverride.c)
 */

NTSTATUS __fastcall PopPowerRequestCallbackPerfBoostRequired(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // r8d
  unsigned __int64 Buffer; // [rsp+68h] [rbp+20h] BYREF

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
  Buffer = 0xFFFFFFFF00000001uLL;
  if ( a3 )
    LODWORD(Buffer) = 3;
  return ZwUpdateWnfStateData(&WNF_SEB_LOW_LATENCY_POWER_REQUEST, &Buffer, 8u, 0LL, 0LL, 0, 0);
}
