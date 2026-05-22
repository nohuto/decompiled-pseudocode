/*
 * XREFs of ?Release@MouseProcessor@@WBI@EAAKXZ @ 0x1801983D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::Release(__int64 a1)
{
  return GazeProcessor::Release((GazeProcessor *)(a1 - 24));
}
