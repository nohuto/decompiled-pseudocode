/*
 * XREFs of PfTAccessTracingCheck @ 0x1405C9E40
 * Callers:
 *     PfpLogScenarioEventCallback @ 0x140743E00 (PfpLogScenarioEventCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfTAccessTracingCheck(__int64 a1)
{
  return *(_DWORD *)(a1 + 76) & 1;
}
