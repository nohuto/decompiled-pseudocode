/*
 * XREFs of EtwpCovSampCaptureBufferIsEmpty @ 0x140469910
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x14090C4D0 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpCovSampCaptureBufferIsEmpty(__int64 a1)
{
  return *(_WORD *)(a1 + 62) == 0;
}
