/*
 * XREFs of ?Release@InputStateManager@@WBI@EAAKXZ @ 0x1800CB0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::Release(__int64 a1)
{
  return HeatProcessor::Release((HeatProcessor *)(a1 - 24));
}
