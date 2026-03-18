/*
 * XREFs of PfTAccessTracingCheck @ 0x1405C8100
 * Callers:
 *     PfpLogScenarioEventCallback @ 0x140739AF0 (PfpLogScenarioEventCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfTAccessTracingCheck(__int64 a1)
{
  return *(_DWORD *)(a1 + 76) & 1;
}
