/*
 * XREFs of ?Release@TapProcessor@@WBA@EAAKXZ @ 0x1800F1E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TapProcessor::Release(__int64 a1)
{
  return TouchProcessor::Release((TouchProcessor *)(a1 - 16));
}
