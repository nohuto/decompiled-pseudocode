/*
 * XREFs of ?AddRef@GazeProcessor@@W7EAAKXZ @ 0x180197980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::AddRef(__int64 a1)
{
  return MouseProcessor::AddRef((MouseProcessor *)(a1 - 8));
}
