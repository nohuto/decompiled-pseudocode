/*
 * XREFs of ?Release@InputStateManager@@WBA@EAAKXZ @ 0x1800CB0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::Release(__int64 a1)
{
  return HeatProcessor::Release((HeatProcessor *)(a1 - 16));
}
