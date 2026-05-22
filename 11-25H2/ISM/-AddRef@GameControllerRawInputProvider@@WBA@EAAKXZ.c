/*
 * XREFs of ?AddRef@GameControllerRawInputProvider@@WBA@EAAKXZ @ 0x1800CB3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GameControllerRawInputProvider::AddRef(__int64 a1)
{
  return MouseProcessor::AddRef((MouseProcessor *)(a1 - 16));
}
