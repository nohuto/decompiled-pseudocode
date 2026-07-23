/*
 * XREFs of EtwpCovSampCaptureBufferIsEmpty @ 0x140460890
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140922D10 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpCovSampCaptureBufferIsEmpty(__int64 a1)
{
  return *(_WORD *)(a1 + 62) == 0;
}
