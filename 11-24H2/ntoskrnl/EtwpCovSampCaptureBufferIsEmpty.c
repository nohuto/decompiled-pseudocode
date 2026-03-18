/*
 * XREFs of EtwpCovSampCaptureBufferIsEmpty @ 0x140467EE0
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140900430 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpCovSampCaptureBufferIsEmpty(__int64 a1)
{
  return *(_WORD *)(a1 + 62) == 0;
}
