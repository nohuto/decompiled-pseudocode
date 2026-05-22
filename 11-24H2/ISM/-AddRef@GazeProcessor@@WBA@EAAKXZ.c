/*
 * XREFs of ?AddRef@GazeProcessor@@WBA@EAAKXZ @ 0x180197990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::AddRef(__int64 a1)
{
  return MouseProcessor::AddRef((MouseProcessor *)(a1 - 16));
}
