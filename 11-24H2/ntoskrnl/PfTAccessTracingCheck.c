/*
 * XREFs of PfTAccessTracingCheck @ 0x1405CC6D0
 * Callers:
 *     PfpLogScenarioEventCallback @ 0x140745B10 (PfpLogScenarioEventCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfTAccessTracingCheck(__int64 a1)
{
  return *(_DWORD *)(a1 + 76) & 1;
}
